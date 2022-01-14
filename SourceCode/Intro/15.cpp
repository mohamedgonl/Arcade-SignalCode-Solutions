vector<string> solution(vector<string> picture) {
    int row = picture.size();
    int col = picture.at(0).size();
    vector<string> ans;
    string add ="*";
    for(int i=1;i<col+2;i++){
        add.append("*");
    }
    
    ans.push_back(add);
    for(int i=0;i<row;i++){
        ans.push_back("*"+picture.at(i)+"*");
    }
    ans.push_back(add);
    return ans;
}
