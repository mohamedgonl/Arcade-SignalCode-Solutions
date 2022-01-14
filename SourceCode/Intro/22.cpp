int solution(vector<int> inputArray) {
    int max = inputArray[0];
    for(int i = 1 ; i<inputArray.size();i++){
        if(max < inputArray[i]) max = inputArray[i];
    }
    for(int i  = 2 ; i<max; i++){
        bool meet = false;
        for(int j =0;j<inputArray.size();j++){
            if(inputArray[j]%i==0) {
                meet = true;
                break;
            }
        }
        if(!meet) return i;
    }
    return max+1;
}
