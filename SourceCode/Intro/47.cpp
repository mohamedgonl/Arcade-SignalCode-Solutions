
bool solution(string inputString) {
    int i=0;
    if(inputString.length()>17) return false;
    do{
        if((inputString[i]<='9'&&inputString[i]>='0')||(inputString[i]<='F'&&inputString[i]>='A')) i++; else return false;
        if((inputString[i]<='9'&&inputString[i]>='0')||(inputString[i]<='F'&&inputString[i]>='A')) i++; else return false;
        if(inputString[i]!='-'&&i<17) return false;
        i++;
    }while(i<17);
    return true;
}
