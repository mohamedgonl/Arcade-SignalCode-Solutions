int solution(vector<int> a) {
    int len = a.size();
    if(len%2!=0) return a[len/2];
    else {
        int sum1=0, sum2=0;
        for(int i = 0; i<len ;i++ ){
         sum1 += abs(a[i]-a[len/2-1]);
         sum2 += abs(a[i]-a[len/2]);
            }
        if(sum1<=sum2) return a[len/2-1];
        else return a[len/2];
}
}
