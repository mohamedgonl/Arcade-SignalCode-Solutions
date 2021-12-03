Given a rectangular matrix of characters, add a border of asterisks(*) to it.

Example

For

picture = ["abc",
           "ded"]
the output should be

solution(picture) = ["*****",
                      "*abc*",
                      "*ded*",
                      "*****"]
Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] array.string picture

A non-empty array of non-empty equal-length strings.

Guaranteed constraints:
1 ≤ picture.length ≤ 100,
1 ≤ picture[i].length ≤ 100.

[output] array.string

The same matrix of characters, framed with a border of asterisks of width 1.
  ------------------------------------------------------------------------------
  vector<string> solution(vector<string> picture) {
    int row = picture.size();
    int col = picture.at(0).size();
    vector<string> ans;
    string add ="*";
    for(int i=1;i<col+2;i++){
        add.append("*");
    }
    
    ans.push_back(add);
    for(int i=0;i<row;i++){
        ans.push_back("*"+picture.at(i)+"*");
    }
    ans.push_back(add);
    return ans;
}
