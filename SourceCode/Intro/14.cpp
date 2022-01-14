vector<int> solution(vector<int> a) {
    int sum1=0, sum2=0;
    for(int i=0;i<a.size();i+=2){
        sum1+=a[i];
    }
    for(int i=1;i<a.size();i+=2){
        sum2+=a[i];
    }
    return {sum1,sum2};
}
