A media access control address (MAC address) is a unique identifier assigned to network interfaces for communications on the physical network segment.

The standard (IEEE 802) format for printing MAC-48 addresses in human-friendly form is six groups of two hexadecimal digits (0 to 9 or A to F), separated by hyphens (e.g. 01-23-45-67-89-AB).

Your task is to check by given string inputString whether it corresponds to MAC-48 address or not.

Example

For inputString = "00-1B-63-84-45-E6", the output should be
solution(inputString) = true;
For inputString = "Z1-1B-63-84-45-E6", the output should be
solution(inputString) = false;
For inputString = "not a MAC-48 address", the output should be
solution(inputString) = false.
Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] string inputString

Guaranteed constraints:
15 ≤ inputString.length ≤ 20.

[output] boolean

true if inputString corresponds to MAC-48 address naming rules, false otherwise.
----------------------------------------------------------------------------------------
bool solution(string inputString) {
    int i=0;
    if(inputString.length()>17) return false;
    do{
        if((inputString[i]<='9'&&inputString[i]>='0')||(inputString[i]<='F'&&inputString[i]>='A')) i++; else return false;
        if((inputString[i]<='9'&&inputString[i]>='0')||(inputString[i]<='F'&&inputString[i]>='A')) i++; else return false;
        if(inputString[i]!='-'&&i<17) return false;
        i++;
    }while(i<17);
    return true;
}
