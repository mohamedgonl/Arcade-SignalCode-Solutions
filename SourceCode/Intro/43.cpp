bool solution(string inputString) {
    int chaarracters[26]={0};
    for(char c: inputString){
        chaarracters[c-'a']++;
    }
    for(int i=0;i<25;i++){
        if(chaarracters[i]<chaarracters[i+1]) return false;
    }
    return true;
}
