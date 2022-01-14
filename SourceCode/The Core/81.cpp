Define an alphabet reflection as follows: a turns into z, b turns into y, c turns into x, ..., n turns into m, m turns into n, ..., z turns into a.

Define a string reflection as the result of applying the alphabet reflection to each of its characters.

Reflect the given string.

Example

For inputString = "name", the output should be
solution(inputString) = "mznv".

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] string inputString

A string of lowercase characters.

Guaranteed constraints:
3 ≤ inputString.length ≤ 1000.

[output] string
-------------------------------------------------------------
string solution(string inputString) {
    char sum = 'a'+'z';
    for(int i=0;i<inputString.size();i++){
        inputString[i]=(char) (sum-inputString[i]);
    }
    return inputString;
}
