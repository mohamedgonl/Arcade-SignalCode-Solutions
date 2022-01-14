Determine whether the given string can be obtained by one concatenation of some string to itself.

Example

For inputString = "tandemtandem", the output should be
solution(inputString) = true;
For inputString = "qqq", the output should be
solution(inputString) = false;
For inputString = "2w2ww", the output should be
solution(inputString) = false.
Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] string inputString

Guaranteed constraints:
2 ≤ inputString.length ≤ 20.

[output] boolean

true if inputString represents a string concatenated to itself, false otherwise.
  -----------------------------------------------------------------------------
  bool solution(string inputString) {
    if(inputString.length()%2==1) return false;
    else{
 string sub1= inputString.substr(0,inputString.length()/2);
 string sub2=inputString.substr(inputString.length()/2,inputString.length()/2); 
 if(sub1==sub2) return true;
 else return false;
}
}
