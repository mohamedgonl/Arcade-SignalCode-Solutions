bool solution(string bishop, string pawn) {
    if(abs( (int)(pawn[0]-bishop[0]) ) == abs( (int) (pawn[1]-bishop[1]) ) ) return true;
    return false; 
}
