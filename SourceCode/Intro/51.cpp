int solution(int n) {
    int max = n/10;
    string n_ = to_string(n);
    for(int i =0; i<n_.length();i++){
        string tmp = n_;
        tmp.erase(tmp.begin()+i);
        if(max<stoi(tmp)) max = stoi(tmp);
    }
    return max;
}