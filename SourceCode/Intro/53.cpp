bool solution(string time) {
    int hour = (int)(time[0]-'0')*10 + (int)(time[1]-'0');
    int minute = (int)(time[3]-'0')*10 + (int)(time[4]-'0');
    if(hour<24&&minute<60) return true;
    return false;
}
