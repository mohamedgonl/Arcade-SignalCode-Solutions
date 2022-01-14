Implement a function that replaces each digit in the given string with a '#' character.

Example

For input = "There are 12 points", the output should be
solution(input) = "There are ## points".

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] string input

Guaranteed constraints:
5 ≤ input.length ≤ 20.

[output] string
-----------------------------------------------------------------------------
std::string solution(std::string input) {
  return regex_replace(input,regex("[0-9]"),"#");
}
