bool solution(string inputString) {
    int size = inputString.size();
    for(int i = 0;i<size/2;i++){
        if(inputString[i]!=inputString[size-1-i]) return false;
    }
    return true;
}
