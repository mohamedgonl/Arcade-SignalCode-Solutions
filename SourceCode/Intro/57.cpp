std::vector<std::string> solution(std::vector<std::string> names) {
    vector<string> nm;
    set<string> s;
    for(string str: names) {
        int t=0;
        string temp = str;
        while(s.find(temp)!=s.end())
            temp = str +"("+to_string(++t)+")";
        s.insert(temp);
        nm.push_back(temp);
    }
    return nm;
}
