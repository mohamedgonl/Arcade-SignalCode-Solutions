Proper nouns always begin with a capital letter, followed by small letters.

Correct a given proper noun so that it fits this statement.

Example

For noun = "pARiS", the output should be
solution(noun) = "Paris";
For noun = "John", the output should be
solution(noun) = "John".
Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] string noun

A string representing a proper noun with a mix of capital and small English letters.

Guaranteed constraints:
1 ≤ noun.length ≤ 10.

[output] string

Corrected (if needed) noun.
  -------------------------------------------------------------------------------
  string solution(string noun) {
    for(int i=1;i<noun.length();i++){
       noun[i]= tolower(noun[i]);
    }
     noun[0]=toupper(noun[0]);
    return noun;
}
