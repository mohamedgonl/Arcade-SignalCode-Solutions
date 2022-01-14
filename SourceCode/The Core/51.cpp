Given a string, enclose it in round brackets.

Example

For inputString = "abacaba", the output should be
solution(inputString) = "(abacaba)".

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] string inputString

Guaranteed constraints:
0 ≤ inputString.length ≤ 10.

[output] string
------------------------------------------------------
string solution(string inputString) {
    return "("+inputString+")";
}
