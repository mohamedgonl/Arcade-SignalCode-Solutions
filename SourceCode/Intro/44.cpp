string solution(string address) {
    int i=0;
     do{ 
         i = address.find('@',i+1);       
    }
    while(!isalpha(address[i+1]));
    return address.substr(i+1);
}
