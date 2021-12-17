Given an array of strings, sort them in the order of increasing lengths. If two strings have the same length, their relative order must be the same as in the initial array.

Example

For

inputArray = ["abc",
              "",
              "aaa",
              "a",
              "zz"]
the output should be

solution(inputArray) = ["",
                            "a",
                            "zz",
                            "abc",
                            "aaa"]
Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] array.string inputArray

A non-empty array of strings.

Guaranteed constraints:
3 ≤ inputArray.length ≤ 100,
0 ≤ inputArray[i].length ≤ 100.

[output] array.string
---------------------------------------------------------
vector<string> solution(vector<string> a) {
    stable_sort(a.begin(), a.end(), [](string i, string j) -> bool { return i.size() < j.size(); });
    return a;
}
