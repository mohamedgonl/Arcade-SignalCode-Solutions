bool solution(string cell1, string cell2) {
    int x1 = cell1[0] -'A', y1 = cell1[1] - '1';
    int x2 = cell2[0] -'A', y2 = cell2[1] - '1';
    if((x1+x2+y1+y2)%2==0) return true;
    else return false;
}
