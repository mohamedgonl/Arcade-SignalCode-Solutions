int solution(vector<vector<int>> matrix) {
    int total =0;
    for(int j = 0; j<matrix[0].size();j++){
        int i = 0;
        while(i<matrix.size()&&matrix[i][j]!=0){
            total+=matrix[i][j];
            i++;
        }
    }
    return total;
}
