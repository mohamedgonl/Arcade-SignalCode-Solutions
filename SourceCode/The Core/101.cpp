The longest diagonals of a square matrix are defined as follows:

the first longest diagonal goes from the top left corner to the bottom right one;
the second longest diagonal goes from the top right corner to the bottom left one.
Given a square matrix, your task is to swap its longest diagonals by exchanging their elements at the corresponding positions.

Example

For

matrix = [[1, 2, 3],
          [4, 5, 6],
          [7, 8, 9]]
the output should be

solution(matrix) = [[3, 2, 1],
                         [4, 5, 6],
                         [9, 8, 7]]
Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] array.array.integer matrix

Guaranteed constraints:
1 ≤ matrix.length ≤ 100,
matrix.length = matrix[i].length,
1 ≤ matrix[i][j] ≤ 105.

[output] array.array.integer

Matrix with swapped diagonals.
  --------------------------------------------------------
  vector<vector<int>> solution(vector<vector<int>> matrix) {
    int n = matrix[0].size();
    if(n==1) return matrix;
    else {
        for(int i=0;i<n;i++){
            swap(matrix[i][i],matrix[i][n-1-i]);
        }
        return matrix;
    }
}
