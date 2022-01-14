int solution(vector<int> inputArray) {
    int prod=-999999;
    for(int i =0; i<inputArray.size()-1;i++){
    
            if(prod<inputArray[i]*inputArray[i+1]) prod = inputArray[i]*inputArray[i+1];
        
    }
    return prod;
}
