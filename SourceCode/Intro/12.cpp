vector<int> solution(vector<int> a) {
    for(int i =0 ;i<a.size();i++){
        for(int j=i+1;j<a.size();j++){
            if(a[i]>a[j] && a[j]!=-1) swap(a[i],a[j]);
        }
    }
    return a;
}
