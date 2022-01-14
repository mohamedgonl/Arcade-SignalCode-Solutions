You are given a vertical box divided into equal columns. Someone dropped several stones from its top through the columns. Stones are falling straight down at a constant speed (equal for all stones) while possible (i.e. while they haven't reached the ground or they are not blocked by another motionless stone). Given the state of the box at some moment in time, find out which columns become motionless first.

Example

For

rows = ["#..##",
        ".##.#",
        ".#.##",
        "....."]
the output should be solution(rows) = [1, 4].

Check out the image below for better understanding:



Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] array.string rows

A non-empty array of strings of equal length consisting only of #-s and .-s describing the box at a specific moment in time. Sharps represent stones, and dots represent empty cells. row[0] corresponds to the upper row. Last element of rows corresponds to the ground level.

Guaranteed constraints:
2 ≤ rows.length ≤ 100,
2 ≤ rows[i].length ≤ 100.

[output] array.integer

A sorted array containing numbers of all columns (leftmost column's number is 0) in which movements will stop at the same second and earlier than in any other column. Assume that if there are no stones in a column then movement stops immediately, i.e. after 0 seconds.
----------------------------------------------------------------------------------
 vector<int> solution(vector<string> rows) {
    vector<int> res;
    int min =999999;
    res.push_back(999999);
    for(int i=0;i<rows[0].size();i++){
        int s=0; 
        bool check = false;
        for(int j=0;j<rows.size();j++){
            if(rows[j][i]=='#') check = true;
            if(check&&rows[j][i]=='.') s++;
        }
        if(s<min) {
            min=s;
            while(!res.empty()) res.pop_back();
            res.push_back(i);
        }else
        if(s==min) res.push_back(i);
    }
  
  return res;
}
