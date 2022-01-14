vector<vector<int>> solution(vector<vector<int>> image) {
    vector<vector<int>> ans;
    for(int i=1;i<image.size()-1;i++){  
        vector<int> sub;
        for(int j=1;j<image[0].size()-1;j++){
            int element = (image[i-1][j-1]+image[i-1][j]+image[i-1][j+1]+image[i][j-1]+image[i][j]+image[i][j+1]+image[i+1][j-1]+image[i+1][j]+image[i+1][j+1])/9;
            sub.push_back(element);
        }
        ans.push_back(sub);
    }
    return ans;
}
