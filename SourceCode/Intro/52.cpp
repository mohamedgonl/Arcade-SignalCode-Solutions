string solution(string text) {
    vector<string> res;
    string tmp ="";
    for(int i = 0; i<text.length(); i++){
        if(isalpha(text[i])) tmp += text[i];
        else if(tmp!="") {
            res.push_back(tmp);
            tmp = "";
        }
    }
    if(tmp!="") res.push_back(tmp);
    int max = 0, pos;
    for(int i = 0; i<res.size();i++){
        if(max<res[i].size()) {
            max = res[i].size();
            pos = i;
        }
    }
    return res[pos];
}
