The longest diagonals of a square matrix are defined as follows:

the first longest diagonal goes from the top left corner to the bottom right one;
the second longest diagonal goes from the top right corner to the bottom left one.
Given a square matrix, your task is to reverse the order of elements on both of its longest diagonals.

Example

For

matrix = [[1, 2, 3],
          [4, 5, 6],
          [7, 8, 9]]
the output should be

solution(matrix) = [[9, 2, 7],
                              [4, 5, 6],
                              [3, 8, 1]]
Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] array.array.integer matrix

Guaranteed constraints:
1 ≤ matrix.length ≤ 100,
matrix.length = matrix[i].length,
1 ≤ matrix[i][j] ≤ 105.

[output] array.array.integer

Matrix with the order of elements on its longest diagonals reversed.
  --------------------------------------------------------------------------------------
  vector<vector<int>> solution(vector<vector<int>> matrix) {
    int n = matrix.size();
    for(int i=0;i<n/2;i++){
      swap(matrix[i][i], matrix[n-1-i][n-1-i]);
      swap(matrix[i][n-1-i],matrix[n-1-i][i]);
    }
    return matrix;
}
