string solution(string s) {
    vector<string> str;
    int i = 1;
    string tmp = ""; tmp+=s[0];
    while(i<=s.length()){
        if(s[i]==s[i-1]) tmp+=s[i];
        else {
            str.push_back(tmp);
            tmp = ""; tmp+=s[i];
        }
        i++;
    }
    tmp = "";
    for(string st:str){
        if(st.length()!=1) tmp+= to_string(st.length());
        tmp+=st[0];
    }
    return tmp;
}