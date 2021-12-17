Mark got a rectangular array matrix for his birthday, and now he's thinking about all the fun things he can do with it. He likes shifting a lot, so he decides to shift all of its i-contours in a clockwise direction if i is even, and counterclockwise if i is odd.

Here is how Mark defines i-contours:

the 0-contour of a rectangular array as the union of left and right columns as well as top and bottom rows;
consider the initial matrix without the 0-contour: its 0-contour is the 1-contour of the initial matrix;
define 2-contour, 3-contour, etc. in the same manner by removing 0-contours from the obtained arrays.
Implement a function that does exactly what Mark wants to do to his matrix.

Example

For

matrix = [[ 1,  2,  3,  4],
           [ 5,  6,  7,  8],
           [ 9, 10, 11, 12],
           [13, 14, 15, 16],
           [17, 18, 19, 20]]
the output should be

solution(matrix) = [[ 5,  1,  2,  3],
                             [ 9,  7, 11,  4],
                             [13,  6, 15,  8],
                             [17, 10, 14, 12],
                             [18, 19, 20, 16]]
For matrix = [[238, 239, 240, 241, 242, 243, 244, 245]],
the output should be
solution(matrix) = [[245, 238, 239, 240, 241, 242, 243, 244]].

Note, that if a contour is represented by a 1 × n array, its center is considered to be below it.

For

matrix = [[238],
           [239],
           [240],
           [241],
           [242],
           [243],
           [244],
           [245]]
the output should be

solution(matrix) = [[245],
                             [238],
                             [239],
                             [240],
                             [241],
                             [242],
                             [243],
                             [244]]
If a contour is represented by an n × 1 array, its center is considered to be to the left of it.

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] array.array.integer matrix

Guaranteed constraints:
1 ≤ matrix.length ≤ 100,
1 ≤ matrix[i].length ≤ 100,
1 ≤ matrix[i][j] ≤ 1000.

[output] array.array.integer

The given matrix with its contours shifted.
  ---------------------------------------------------------------------------------------
  void changeReverse(vector<vector<int>> &matrix, int firstRow, int lastRow, int firstCol, int lastCol){
    if(firstCol==lastCol||firstRow==lastRow){
        for(int i=firstCol;i<lastCol;i++){
            swap(matrix[firstRow][i],matrix[firstRow][i+1]);
        }
        for(int i=firstRow;i<lastRow;i++){
            swap(matrix[i][firstCol],matrix[i+1][firstCol]);
        }
    }else {
        for (int i = firstCol; i < lastCol; i++) {
            swap(matrix[firstRow][i], matrix[firstRow][i + 1]);
        }
        for (int i = firstRow; i < lastRow; i++) {
            swap(matrix[i][lastCol], matrix[i + 1][lastCol]);
        }

        for (int i = lastCol; i > firstCol; i--) {
            swap(matrix[lastRow][i], matrix[lastRow][i - 1]);
        }
        for (int i = lastRow; i > firstRow + 1; i--) {
            swap(matrix[i][firstCol], matrix[i - 1][firstCol]);
        }
    }
}
void change(vector<vector<int>> &matrix, int firstRow, int lastRow, int firstCol, int lastCol){
    if(firstCol==lastCol||firstRow==lastRow){
        for(int i=lastRow;i>firstRow;i--){
            swap(matrix[i][firstCol],matrix[i-1][firstCol]);
        }
        for(int i=lastCol;i>firstCol;i--){
            swap(matrix[firstCol][i],matrix[firstCol][i-1]);
        }
    }else{
    for(int i=firstRow;i<lastRow;i++){
        swap(matrix[i][firstCol],matrix[i+1][firstCol]);
    }
    for(int i=firstCol;i<lastCol;i++){
        swap(matrix[lastRow][i],matrix[lastRow][i+1]);
    }
    if(firstCol==lastCol||firstRow==lastRow);else{
        for(int i=lastRow;i>firstRow;i--){
            swap(matrix[i][lastCol],matrix[i-1][lastCol]);
        }
        for(int i=lastCol;i>firstCol+1;i--){
            swap(matrix[firstRow][i],matrix[firstRow][i-1]);
        }
    }
    }
}
vector<vector<int>> solution(vector<vector<int>> matrix) {
    int row = matrix.size();
    int col = matrix[0].size();
    int i =0;
    int end = ceil((float)min(row,col)/2);
    int firstRow =0,firstCol=0;
    int lastRow=row-1, lastCol=col-1;
    while(i<end){
        if(i%2==0)   change(matrix, firstRow+i, lastRow-i, firstCol+i, lastCol-i);
        else changeReverse(matrix, firstRow+i, lastRow-i, firstCol+i, lastCol-i);
        i++;
    }
    return matrix;
}

