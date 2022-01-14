Some file managers sort filenames taking into account case of the letters, others compare strings as if all of the letters are of the same case. That may lead to different ways of filename ordering.

Call two filenames an unstable pair if their ordering depends on the case.

To compare two filenames a and b, find the first position i at which a[i] ≠ b[i]. If a[i] < b[i], then a < b. Otherwise a > b. If such position doesn't exist, the shorter string goes first.

Given two filenames, check whether they form an unstable pair.

Example

For filename1 = "aa" and filename2 = "AAB", the output should be
solution(filename1, filename2) = true.

Because "AAB" < "aa", but "AAB" > "AA".

For filename1 = "A" and filename2 = "z", the output should be
solution(filename1, filename2) = false.

Both "A" < "z" and "a" < "z".

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] string filename1

A non-empty string of English letters and digits.

Guaranteed constraints:
1 ≤ filename1.length ≤ 10.

[input] string filename2

A non-empty string of English letters and digits. It's guaranteed that there is no ambiguity, i.e. even being considered in the same case strings are never equal.

Guaranteed constraints:
1 ≤ filename2.length ≤ 10.

[output] boolean

true if filename1 and filename2 form an unstable pair, false otherwise.
  --------------------------------------------------------------------------------------------------------------
  void toLower(string& s) {
    for (int i=0;i<s.size();++i) {
        s[i]=tolower(s[i]);
    }
}

int compare(string& s1, string& s2) {
    for (int i=0;i<s1.size()&&i<s2.size();++i) {
        if (s1[i]>s2[i]) {
            return 1;
        } else if (s1[i]<s2[i]) {
            return -1;
        }
    }
    
    if (s1.size()>s2.size()) {
        return 1;
    } else if (s1.size()<s2.size()) {
        return -1;
    } else {
        return 0;
    }
}

bool solution(string filename1, string filename2) {
    int cmp1 = compare(filename1, filename2);
    toLower(filename1);
    toLower(filename2);
    int cmp2 = compare(filename1, filename2);
    return cmp1!=cmp2;
}
