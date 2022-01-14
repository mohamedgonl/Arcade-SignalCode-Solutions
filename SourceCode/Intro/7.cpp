bool solution(std::vector<int> sequence) {
    int count = 0;
    for(int i=0; i<sequence.size()-1; i++){
        if(sequence[i] >= sequence[i+1]){
            count++;
            // 3-6-2-4
            if(sequence[i-1]>=sequence[i+1] && i>=1 && sequence[i]>=sequence[i+2] && i+2<sequence.size()){
                count++;
            }
        }
    }
    if(count>1){
        return false;
    }else{
        return true;
    }
}
