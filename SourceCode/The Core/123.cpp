Given a position of a knight on the standard chessboard, find the number of different moves the knight can perform.

The knight can move to a square that is two squares horizontally and one square vertically, or two squares vertically and one square horizontally away from it. The complete move therefore looks like the letter L. Check out the image below to see all valid moves for a knight piece that is placed on one of the central squares.



Example

For cell = "a1", the output should be
solution(cell) = 2.



For cell = "c2", the output should be
solution(cell) = 6.



Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] string cell

String consisting of 2 letters - coordinates of the knight on an 8 × 8 chessboard in chess notation.

Guaranteed constraints:
cell.length = 2,
'a' ≤ cell[0] ≤ 'h',
1 ≤ cell[1] ≤ 8.

[output] integer
----------------------------------------------------------------------------------------
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
