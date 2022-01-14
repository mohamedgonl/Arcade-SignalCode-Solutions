char bin_to_char(string byte){
    int res = 0;
    int k =0;
    for(int i =7; i>=0; i--){
        if(byte[i]=='1') res+=pow(2,k);
        k++;
    }
    return (char) res;
}
string solution(string code) {
    string res = "";
    int i =0;
    while(i<code.length()){
        string sub = code.substr(i,8);
        res+=bin_to_char(sub);
        i+=8;
    }
    return res;
}
