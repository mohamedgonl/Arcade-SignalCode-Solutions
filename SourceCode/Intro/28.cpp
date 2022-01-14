string solution(string inputString) {
    for(int i = 0; i<inputString.size();i++){
        if(inputString[i] == 'z') inputString[i]='a';
        else inputString[i]++;
    }
    return inputString;
}
