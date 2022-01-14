int solution(int upSpeed, int downSpeed, int desiredHeight) {
    int cur = 0, i=0;
    do{  
        i++;
        cur+= upSpeed;
        if(cur>=desiredHeight) break;
        cur-=downSpeed;
    } while(cur<desiredHeight);
    return i;
}
