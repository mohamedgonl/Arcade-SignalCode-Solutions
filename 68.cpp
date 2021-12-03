Given an array of strings, return another array containing all of its longest strings.

Example

For inputArray = ["aba", "aa", "ad", "vcd", "aba"], the output should be
solution(inputArray) = ["aba", "vcd", "aba"].

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] array.string inputArray

A non-empty array.

Guaranteed constraints:
1 ≤ inputArray.length ≤ 10,
1 ≤ inputArray[i].length ≤ 10.

[output] array.string

Array of the longest strings, stored in the same order as in the inputArray.
  ------------------------------------------------------------------------------
  vector<string> solution(vector<string> inputArray) {
    vector<string> ans = {inputArray.at(0)};
    for(int i=1;i<inputArray.size();i++){
        if(inputArray.at(i).size()>ans.back().size()) ans = {inputArray.at(i)};
        else if(inputArray.at(i).size()==ans.back().size())
        ans.push_back(inputArray.at(i));
    }
    return ans;
}
