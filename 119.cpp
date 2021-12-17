Given a rectangular matrix of integers, check if it is possible to rearrange its rows in such a way that all its columns become strictly increasing sequences (read from top to bottom).

Example

For

matrix = [[2, 7, 1], 
          [0, 2, 0], 
          [1, 3, 1]]
the output should be
solution(matrix) = false;

For

matrix = [[6, 4], 
          [2, 2], 
          [4, 3]]
the output should be
solution(matrix) = true.

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] array.array.integer matrix

A 2-dimensional array of integers.

Guaranteed constraints:
1 ≤ matrix.length ≤ 10,
1 ≤ matrix[0].length ≤ 10,
-300 ≤ matrix[i][j] ≤ 300.

[output] boolean
-----------------------------------------------------------------------
bool solution(vector<vector<int>> matrix) {
    for(int i=0;i<matrix.size();i++){
        for(int j=i+1;j<matrix.size();j++){
        if(matrix[i][0]>matrix[j][0]) swap(matrix[i],matrix[j]);
        else if(matrix[i][0]==matrix[j][0]) {
            if(matrix[i][1]>matrix[j][1]) swap(matrix[i],matrix[j]);
            else if(matrix[i][1]==matrix[j][1]) 
            if(matrix[i][2]>matrix[j][2]) swap(matrix[i],matrix[j]);
        }  
    }
    }
    for(int j=0;j<matrix[0].size();j++){
        for(int i=0;i<matrix.size()-1;i++){
            if(matrix[i][j]>=matrix[i+1][j]) return false;  
        }
    }
    return true;
}
