int solution(string inputString) {
    vector<int> res;
    string tmp = "";
    for(int i=0; i<inputString.size(); i++){
        if(isdigit(inputString[i])) tmp+=inputString[i];
        else if(tmp!="") {
            res.push_back(stoi(tmp));
            tmp="";
        }
    }
    if(tmp!="") res.push_back(stoi(tmp));
    int sum = 0;
    for(int i=0; i<res.size();i++){
        sum+=res[i];
    }
    return sum;
}
