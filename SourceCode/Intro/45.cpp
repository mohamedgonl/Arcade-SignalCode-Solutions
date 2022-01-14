bool palindrome(string st){
    for(int i = 0; i<st.length()/2;i++){
        if(st[i]!=st[st.length()-1-i]) return false;
    }
    return true;
}
string solution(string st) {
    int i=-1;
    while(1){
        string tmp = st;
        for(int j = i; j>=0;j--) tmp+=st[j];
        if(palindrome(tmp)) return tmp;
        i++;
    }
}
