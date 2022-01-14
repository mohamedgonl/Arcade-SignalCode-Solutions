bool solution(vector<int> a, vector<int> b) {
    int count=0;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i]) count++;
    }
    if(count==0) return true;
    if(count==2) {
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a==b) return true;
}
return false;
}
