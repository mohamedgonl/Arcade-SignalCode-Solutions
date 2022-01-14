int solution(string s) {
    set<char> res;
    for(char c: s) {
        res.insert(c);
    }
    return res.size();
}
