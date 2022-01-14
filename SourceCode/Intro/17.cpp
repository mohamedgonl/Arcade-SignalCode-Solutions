int solution(vector<int> inputArray) {
    int moves = 0;    
    for(int i =1 ;i<inputArray.size();i++){
        if(inputArray[i]<=inputArray[i-1]){
           int move = inputArray[i-1]+1-inputArray[i];
            inputArray[i] += move;
            moves += move;
        }
    }
    return moves;
}
