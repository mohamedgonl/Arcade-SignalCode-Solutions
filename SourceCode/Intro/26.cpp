bool solution(int n) {
    string n1 = to_string(n);
    for(int i = 0; i<n1.size();i++){
        if((n1[i]-'0')%2!=0) return false;
    }
    return true;
}
