Check whether the given string is a subsequence of the plaintext alphabet.

Example

For s = "effg", the output should be
solution(s) = false;
For s = "cdce", the output should be
solution(s) = false;
For s = "ace", the output should be
solution(s) = true;
For s = "bxz", the output should be
solution(s) = true.
Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] string s

Guaranteed constraints:
2 ≤ s.length ≤ 15.

[output] boolean

true if the given string is a subsequence of the alphabet, false otherwise.
-------------------------------------------------------------------
bool solution(string s) {
    for(int i=0;i<s.length()-1;i++){
        if(s[i]>=s[i+1]) return false;
    }
    return true;
}
