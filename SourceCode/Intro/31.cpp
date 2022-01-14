int solution(int deposit, int rate, int threshold) {
    int n =0;
    float increase = 1+rate/100.0;
    float cur = deposit;
    while(cur<threshold) {
        cur*=increase;
        n++;
    }
    return n;
}
