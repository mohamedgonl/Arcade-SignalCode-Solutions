int solution(int n, int firstNumber) {
    n/=2;
    if(firstNumber>=n) return firstNumber-n;
    else return firstNumber+n;
}
