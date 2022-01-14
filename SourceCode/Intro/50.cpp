int solution(string cell) {
    int count =0;
    char x = cell[0];
    char y = cell[1];
    if(x-2>='a'&&y+1<='8') count++;
    if(x-1>='a'&&y+2<='8') count++;
    if(x+1<='h'&&y+2<='8') count++;
    if(x+2<='h'&&y+1<='8') count++;
    if(x+2<='h'&&y-1>='1') count++;
    if(x+1<='h'&&y-2>='1') count++;
    if(x-1>='a'&&y-2>='1') count++;
    if(x-2>='a'&&y-1>='1') count++;
    return count;
    
}
