int solution(vector<int> inputArray, int k) {
    int max =0;
    for(int i=0; i<=inputArray.size()-k;i++){
        int j = i;
        int sum =0;
        for(int j1 = 0; j1<k ;j1++){
            sum+=inputArray[j+j1];
        }
        if(max < sum) max =sum;
    }
    return max;
}
