Given a string, check if it can become a palindrome through a case change of some (possibly, none) letters.

Example

For inputString = "AaBaa", the output should be
solution(inputString) = true.

"aabaa" is a palindrome as well as "AABAA", "aaBaa", etc.

For inputString = "abac", the output should be
solution(inputString) = false.

All the strings which can be obtained via changing case of some group of letters, i.e. "abac", "Abac", "aBAc" and 13 more, are not palindromes.

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] string inputString

Non-empty string consisting of English letters.

Guaranteed constraints:
4 ≤ inputString.length ≤ 10.

[output] boolean
------------------------------------------------------------------
bool solution(string inputString) {
    int begin =0;
    int end = inputString.length()-1;
    while(begin<end){
        if(tolower(inputString[begin])!=tolower(inputString[end])) return false;
        begin ++;
        end--;
    }
    return true;
}
