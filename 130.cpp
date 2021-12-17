Check if the given string is a correct time representation of the 24-hour clock.

Example

For time = "13:58", the output should be
solution(time) = true;
For time = "25:51", the output should be
solution(time) = false;
For time = "02:76", the output should be
solution(time) = false.
Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] string time

A string representing time in HH:MM format. It is guaranteed that the first two characters, as well as the last two characters, are digits.

[output] boolean

true if the given representation is correct, false otherwise.
  ----------------------------------------------------------------------------
  bool solution(string time) {
    int hour = (int)(time[0]-'0')*10 + (int)(time[1]-'0');
    int minute = (int)(time[3]-'0')*10 + (int)(time[4]-'0');
    if(hour<24&&minute<60) return true;
    return false;
}
