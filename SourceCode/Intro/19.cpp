bool solution(int yourLeft, int yourRight, int friendsLeft, int friendsRight) {
    if(max(yourLeft,yourRight)==max(friendsLeft,friendsRight) && min(yourLeft,yourRight)==min(friendsLeft,friendsRight)) return true;
    return false;
}
