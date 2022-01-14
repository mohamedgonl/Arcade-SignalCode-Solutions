
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

