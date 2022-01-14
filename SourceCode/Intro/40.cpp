string solution(string inputString) {
    string res = "";
    for(int i =0; i<inputString.size();i++){
        if(isdigit(inputString[i])) res+=inputString[i];
        else break;
    }
    return res;
}
