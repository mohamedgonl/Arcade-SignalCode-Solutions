bool solution(string inputString) {
    int arr[26]= {0};
    for(int i =0 ;i<inputString.size(); i++){
        arr[inputString[i]-'a']++;
    }
    int count = 0;
    for(int i=0;i<26;i++){
        if(arr[i]&1==1) count ++;
        if(count>1) return false;
    }
    return true;
}
