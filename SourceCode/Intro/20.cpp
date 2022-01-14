int solution(vector<int> inputArray) {
    int max = -1;
    for(int i=0;i<inputArray.size()-1;i++){
        if(max < abs(inputArray[i]-inputArray[i+1]))
        max = abs(inputArray[i]-inputArray[i+1]);
    }
    return max;
}
