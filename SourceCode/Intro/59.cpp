vector<vector<int>> solution(int n) {
    vector<vector<int>> res;
    res.resize(n,vector<int>(n));
    //  right = 0, down = 1, left = 2, up = 3
    int i=0, j=0, next=0;
    int infinity_loop = 0;
    for(int k =1; k<=n*n; k++){
        res[i][j] = k;
    if(j+1<n && !res[i][j+1] && next==0){
         j++;
         infinity_loop = 0;
         continue;
         }
else if(i+1<n && !res[i+1][j] &&next==1){
         i++;
         infinity_loop = 0;
         continue;
         }
else if(j-1>=0&& !res[i][j-1] &&next==2){
        j--;
        infinity_loop = 0;
        continue;
         }
else if(i-1>=0&& !res[i-1][j] &&next==3){
        i--;
        infinity_loop = 0;
        continue;
         }
        ++next%=4;
        k--;
        infinity_loop ++;
        if(infinity_loop>5) break;
    }
    return res;
}
