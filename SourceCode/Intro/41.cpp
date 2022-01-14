bool solution(string name) {
    if(isdigit(name[0])) return false;
    else for(char c : name) {
        if(!isdigit(c) && !isalpha(c) && c!='_') 
            return false;
    }
    return true;
}
