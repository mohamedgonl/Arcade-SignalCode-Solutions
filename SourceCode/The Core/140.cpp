Implement the missing code, denoted by ellipses. You may not modify the pre-existing code.
You are given a string consisting of words separated by whitespace characters, where the words consist only of English letters. Your task is to swap pairs of consecutive words and return the result.

Example

For s = "CodeFight On", the output should be
solution(s) = "On CodeFight";
For s = "How are you today guys", the output should be
solution(s) = "are How today you guys".
Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] string s

A string consisting of whitespace characters (' ') and English letters. There is exactly one whitespace character between two consecutive words, and both the first and the last characters of s are not equal to ' '.

Guaranteed constraints:
0 ≤ s.length ≤ 100.

[output] string

String s with pairs of adjacent words swapped.
----------------------------------------------------------------------------------
std::string solution(std::string s) {
  return std::regex_replace(s, std::regex("([a-zA-Z]+) ([a-zA-Z]+)"), "$2 $1");
}
