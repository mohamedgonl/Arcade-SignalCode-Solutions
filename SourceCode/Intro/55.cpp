int solution(vector<vector<int>> matrix) {
    set<vector<vector<int>>> set;
    for(int i =0; i<matrix.size()-1; i++){
        for(int j=0; j<matrix[0].size()-1; j++){
            set.insert({{matrix[i][j],matrix[i][j+1]},{matrix[i+1][j],matrix[i+1][j+1]}});
        }
    }
    return set.size();
}
