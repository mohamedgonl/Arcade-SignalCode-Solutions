Given a string consisting of lowercase English letters, find the largest square number which can be obtained by reordering the string's characters and replacing them with any digits you need (leading zeros are not allowed) where same characters always map to the same digits and different characters always map to different digits.

If there is no solution, return -1.

Example

For s = "ab", the output should be
solution(s) = 81.
The largest 2-digit square number with different digits is 81.
For s = "zzz", the output should be
solution(s) = -1.
There are no 3-digit square numbers with identical digits.
For s = "aba", the output should be
solution(s) = 900.
It can be obtained after reordering the initial string into "baa" and replacing "a" with 0 and "b" with 9.
Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] string s

Guaranteed constraints:
1 ≤ s.length < 10.

[output] integer
-----------------------------------------------------------------------------------------
vector<int> getCharVector(string s){
    vector<int> buckets(26, 0);
    for(auto c : s)
        buckets[c-'a']++;
    vector<int> result;
    for(auto b : buckets){
        if(b > 0)
            result.push_back(b);
    }
    sort(result.begin(), result.end());
    return result;
}
vector<int> getIntVector(int n){
    vector<int> buckets(10, 0);
    while(n > 0){
        int temp = n % 10;
        n /= 10;
        buckets[temp]++;
    }
    vector<int> result;
    for(auto b : buckets){
        if(b > 0)
            result.push_back(b);
    }
    sort(result.begin(), result.end());
    return result;
}
int solution(std::string s) {
    vector<int> list1 = getCharVector(s);
    int start = sqrt(pow(10, s.length()-1));
    int end = sqrt(pow(10, s.length()));
    for(int m=end; m>=start; m--){
        vector<int> list2 = getIntVector(m*m);
        if(list1 == list2)
            return m*m;
    }
    return -1;
}
