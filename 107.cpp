In the popular Minesweeper game you have a board with some mines and those cells that don't contain a mine have a number in it that indicates the total number of mines in the neighboring cells. Starting off with some arrangement of mines we want to create a Minesweeper game setup.

Example

For

matrix = [[true, false, false],
          [false, true, false],
          [false, false, false]]
the output should be

solution(matrix) = [[1, 2, 1],
                       [2, 1, 1],
                       [1, 1, 1]]
Check out the image below for better understanding:



Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] array.array.boolean matrix

A non-empty rectangular matrix consisting of boolean values - true if the corresponding cell contains a mine, false otherwise.

Guaranteed constraints:
2 ≤ matrix.length ≤ 100,
2 ≤ matrix[0].length ≤ 100.

[output] array.array.integer

Rectangular matrix of the same size as matrix each cell of which contains an integer equal to the number of mines in the neighboring cells. Two cells are called neighboring if they share at least one corner.
  -------------------------------------------------------------------------------------
  
void check(vector<vector<int>> &res ,int i, int j, int row, int col){
    if(i>=0&&i<=(row-1)&&j>=0&&j<=(col-1)) res[i][j]++;
}
vector<vector<int>> solution(vector<vector<bool>> matrix) {
    vector<vector<int>> res;
    int row = matrix.size();
    int col = matrix[0].size();
    vector<int> sub;
    for(int i=0;i<col;i++){
        sub.push_back(0);
    }
    for(int i=0;i<row;i++){
        res.push_back(sub);
    }
    for(int i=0; i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            if(matrix[i][j]) {
                check(res,i-1,j-1,row,col);
                check(res,i-1,j,row,col);
                check(res,i-1,j+1,row,col);
                check(res,i,j-1,row,col);
                check(res,i,j+1,row,col);
                check(res,i+1,j-1,row,col);
                check(res,i+1,j+1,row,col);
                check(res,i+1,j,row,col);

            }
        }
    }
    return res;
}

