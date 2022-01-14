bool solution(int n) {
    string n_string = to_string(n);
    int sum1 =0, sum2=0;
    int len = n_string.length();
    for(int i =0; i<len/2;i++){
        sum1+= (int) n_string[i]-'0';
        sum2+= (int) n_string[len-1-i]-'0';
    }
    if(sum1==sum2) return true;
    else return false;
}
