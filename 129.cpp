Pawn race is a game for two people, played on an ordinary 8 × 8 chessboard. The first player has a white pawn, the second one - a black pawn. Initially the pawns are placed somewhere on the board so that the 1st and the 8th rows are not occupied. Players take turns to make a move.

White pawn moves upwards, black one moves downwards. The following moves are allowed:

one-cell move on the same vertical in the allowed direction;
two-cell move on the same vertical in the allowed direction, if the pawn is standing on the 2nd (for the white pawn) or the 7th (for the black pawn) row. Note that even with the two-cell move a pawn can't jump over the opponent's pawn;
capture move one cell forward in the allowed direction and one cell to the left or to the right.


The purpose of the game is to reach the the 1st row (for the black pawn) or the 8th row (for the white one), or to capture the opponent's pawn.

Given the initial positions and whose turn it is, determine who will win or declare it a draw (i.e. it is impossible for any player to win). Assume that the players play optimally.

Example

For white = "e2", black = "e7", and toMove = 'w', the output should be
solution(white, black, toMove) = "draw";
For white = "e3", black = "d7", and toMove = 'b', the output should be
solution(white, black, toMove) = "black";
For white = "a7", black = "h2", and toMove = 'w', the output should be
solution(white, black, toMove) = "white".
Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] string white

Coordinates of the white pawn in the chess notation.

[input] string black

Position of the black pawn in the same notation. It is guaranteed that white ≠ black.

[input] char toMove

'w' if it is the first player's turn, 'b' otherwise.

[output] string

"white", "black" or "draw" depending on the result of the game.
  --------------------------------------------------------------------------------------------
  std::string solution(const std::string& white, const std::string& black, char toMove) {
    std::string res[3] {"draw", "white", "black"};
    const int whiteCol = white[0] - 'a';
    const int blackCol = black[0] - 'a';
    int whiteRow = white[1] - '1';
    int blackRow = black[1] - '1';
    if (whiteCol == blackCol && blackRow > whiteRow)
        return res[0];
    if (std::abs(whiteCol - blackCol) > 1 || blackRow <= whiteRow) {
        const int whiteToMove = 7 - (whiteRow) - (whiteRow == 1 ? 1 : 0);
        const int blackToMove = (blackRow) - (blackRow == 6 ? 1 : 0);
        return whiteToMove + (toMove == 'b' ? 1 : 0) <= blackToMove ? res[1] : res[2];
    }
    while (true) {
        if (blackRow - whiteRow == 1)
            break;
        switch (toMove) {
        case 'w':
            whiteRow += (whiteRow != 1 || blackRow - (whiteRow + 2) == 1) ? 1 : 2;
            break;
        case 'b':
            blackRow -= (blackRow != 6 || (blackRow - 2) - whiteRow == 1) ? 1 : 2;
            break;
        }
        if (blackRow == 0 || whiteRow == 7)
            break;
        toMove = toMove == 'w' ? 'b' : 'w';
    }
    return res[toMove == 'w' ? 1 : 2];
}
