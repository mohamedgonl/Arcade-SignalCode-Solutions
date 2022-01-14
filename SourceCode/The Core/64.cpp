Given a rectangular matrix containing only digits, calculate the number of different 2 × 2 squares in it.

Example

For

matrix = [[1, 2, 1],
          [2, 2, 2],
          [2, 2, 2],
          [1, 2, 3],
          [2, 2, 1]]
the output should be
solution(matrix) = 6.

Here are all 6 different 2 × 2 squares:

1 2
2 2
2 1
2 2
2 2
2 2
2 2
1 2
2 2
2 3
2 3
2 1
Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] array.array.integer matrix

Guaranteed constraints:
1 ≤ matrix.length ≤ 100,
1 ≤ matrix[i].length ≤ 100,
0 ≤ matrix[i][j] ≤ 9.

[output] integer

The number of different 2 × 2 squares in matrix.
-----------------------------------------------------------
int solution(vector<vector<int>> matrix) {
    set<vector<int>> res;
    for(int i=0; i<matrix.size()-1;i++){
        for(int j=0;j<matrix[i].size()-1;j++){
           vector<int> a = {matrix[i][j],matrix[i][j+1],matrix[i+1][j],matrix[i+1][j+1]};
            res.insert(a);
        }
    }
return res.size();
}
