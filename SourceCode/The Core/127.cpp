Consider a bishop, a knight and a rook on an n × m chessboard. They are said to form a triangle if each piece attacks exactly one other piece and is attacked by exactly one piece. Calculate the number of ways to choose positions of the pieces to form a triangle.

Note that the bishop attacks pieces sharing the common diagonal with it; the rook attacks in horizontal and vertical directions; and, finally, the knight attacks squares which are two squares horizontally and one square vertically, or two squares vertically and one square horizontally away from its position.



Example

For n = 2 and m = 3, the output should be
solution(n, m) = 8.



Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] integer n

Guaranteed constraints:
1 ≤ n ≤ 40.

[input] integer m

Guaranteed constraints:
1 ≤ m ≤ 40,
3 ≤ n · m.

[output] integer
------------------------------------------------------------
int solution(int n, int m) {

    int twoByThree = 0;
    if((n-1) * (m-2) > 0)
        twoByThree += (n-1) * (m-2) * 8;
    if((n-2) * (m-1) > 0)
        twoByThree += (n-2) * (m-1) * 8;
    
    int threeByThree = 0;
    if((n-2) * (m-2) > 0)
        threeByThree += (n-2) * (m-2) * 16;
    
    int twoByFour = 0;
    if((n-1) * (m-3) > 0)
        twoByFour += (n-1) * (m-3) * 8;
    if((n-3) * (m-1) > 0)
        twoByFour += (n-3) * (m-1) * 8;
    
    int threeByFour = 0;
    if((n-2) * (m-3) > 0)
        threeByFour += (n-2) * (m-3) * 8;
    if((n-3) * (m-2) > 0)
        threeByFour += (n-3) * (m-2) * 8;
    
    return twoByThree + threeByThree + twoByFour + threeByFour;
}
