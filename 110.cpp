You have a rectangular white board with some black cells. The black cells create a connected black figure, i.e. it is possible to get from any black cell to any other one through connected adjacent (sharing a common side) black cells.

Find the perimeter of the black figure assuming that a single cell has unit length.

It's guaranteed that there is at least one black cell on the table.

Example

For

matrix = [[false, true,  true ],
          [true,  true,  false],
          [true,  false, false]]
the output should be
solution(matrix) = 12.



For

matrix = [[true, true,  true],
          [true, false, true],
          [true, true,  true]]
the output should be
solution(matrix) = 16.



Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] array.array.boolean matrix

A matrix of booleans representing the rectangular board where true means a black cell and false means a white one.

Guaranteed constraints:
2 ≤ matrix.length ≤ 5,
2 ≤ matrix[0].length ≤ 5.

[output] integer
-----------------------------------------------------------------------------------------------------------
bool check2(vector<vector<bool>> &matrix, int i, int j){
    if(i<0||i>=matrix.size()||j<0||j>=matrix[0].size()) ;
    else if(matrix[i][j]) return true;
    return false;
}
int check(vector<vector<bool>> &matrix, int i, int j){
    int k=0;
    if(check2(matrix,i-1,j)) k++;
    if(check2(matrix,i,j-1)) k++;
    if(check2(matrix,i,j+1)) k++;
    if(check2(matrix,i+1,j)) k++;
    return k;
}
int solution(vector<vector<bool>> matrix) {
    int s=0,m=0;
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            if(matrix[i][j]) {
                ++s;
                m+=check(matrix,i,j);
            }
        }
    }
    return 4*s-m;
}
