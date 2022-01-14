int solution(vector<int> votes, int k) {
    int max = 0, count = 0, count2=0;
    for(int i: votes){
        if(max<i) max = i;
    }
    for(int i: votes){
        if(i==max) count2++;
        if(i+k>max) count++;
    }
    if(count2>1 && k==0) return 0;
    if(count2==1 && k==0) return 1;
    return count; 
}
