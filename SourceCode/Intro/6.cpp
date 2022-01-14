int solution(vector<int> statues) {
    sort(statues.begin(),statues.end());
    int sum = 0;
    for(int i = 0; i<statues.size()-1;i++){
        sum+=statues[i+1] - statues[i] -1;
    }
    return sum;
}
