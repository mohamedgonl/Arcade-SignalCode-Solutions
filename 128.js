An amazon (also known as a queen + knight compound) is an imaginary chess piece that can move like a queen or a knight (or, equivalently, like a rook, bishop, or knight). The diagram below shows all squares which the amazon can attack from e4 (circles represent knight-like moves while crosses correspond to queen-like moves).



Recently, you've come across a diagram with only three pieces left on the board: a white amazon, the white king, and the black king. It's black's move. You don't have time to determine whether the game is over or not, but you'd like to figure it out in your head. Unfortunately, the diagram is smudged and you can't see the position of the black king, so you'll need to consider all possible positions.

Given the positions of the white pieces on a standard chessboard (using algebraic notation), your task is to determine the number of possible black king's positions such that:

it's checkmate (i.e. black's king is under the amazon's attack and it cannot make a valid move);
it's check (i.e. black's king is under the amazon's attack but it can reach a safe square in one move);
it's stalemate (i.e. black's king is on a safe square but it cannot make a valid move);
black's king is on a safe square and it can make a valid move.
Note that two kings cannot be placed on two adjacent squares (including two diagonally adjacent ones).

Example

For king = "d3" and amazon = "e4", the output should be
solution(king, amazon) = [5, 21, 0, 29].



Red crosses correspond to the checkmate positions, orange pluses refer to check positions, and green circles denote safe squares.

For king = "a1" and amazon = "g5", the output should be
solution(king, amazon) = [0, 29, 1, 29].



The stalemate position is marked by a blue square.

Input/Output

[execution time limit] 4 seconds (js)

[input] string king

The position of the white king, in chess notation.

Guaranteed constraints:
king.length = 2,
'a' ≤ king[0] ≤ 'h',
1 ≤ king[1] ≤ 8.

[input] string amazon

The position of the white amazon, in the same notation.

Guaranteed constraints:
amazon.length = 2,
'a' ≤ amazon[0] ≤ 'h',
1 ≤ amazon[1] ≤ 8,
amazon ≠ king.

[output] array.integer

An array of four integers, each equal to the number of black's king positions corresponding to a specific situation. More specifically, the array should be of the form [checkmate positions, check positions, stalemate positions, safe positions].
---------------------------------------------------------------------------------------------------------------
  function solution(king, amazon) {
  var kx = king[0].charCodeAt(0) - "a".charCodeAt(0);
  var ky = Number(king[1]) - 1;
  var ax = amazon[0].charCodeAt(0) - "a".charCodeAt(0);
  var ay = Number(amazon[1]) - 1;
  unsafe = Array(8)
    .fill(false)
    .map((_) => Array(8).fill(false));

  for (var i = -1; i <= 1; i++) {
    for (var j = -1; j <= 1; j++) {
      if (i || j) {
        line(unsafe, ax, ay, kx, ky, j, i);
        if (ky + i >= 0 && ky + i < 8 && kx + j >= 0 && kx + j < 8)
          unsafe[ky + i][kx + j] = true;
      }
    }
  }
  leap(unsafe, ax, ay, 1, 2);
  leap(unsafe, ax, ay, 2, 1);
  var r = [0, 0, 0, 0];
  for (var i = 0; i < 8; i++) {
    for (var j = 0; j < 8; j++) {
      if (
        (Math.abs(j - kx) > 1 || Math.abs(i - ky) > 1) &&
        (i != ay || j != ax)
      ) {
        var anySafe = false;
        for (var k = -1; k <= 1; k++) {
          for (var l = -1; l <= 1; l++) {
            if (
              (k || l) &&
              i + k >= 0 &&
              i + k < 8 &&
              j + l >= 0 &&
              j + l < 8
            ) {
              anySafe |= !unsafe[i + k][j + l];
            }
          }
        }
        r[(!unsafe[i][j] << 1) | anySafe]++;
      }
    }
  }
  return r;
}

function line(unsafe, ax, ay, kx, ky, x, y) {
  for (
    var i = ay + y, j = ax + x;
    i < 8 && i >= 0 && j < 8 && j >= 0;
    i += y, j += x
  ) {
    if (j == kx && i == ky) break;
    unsafe[i][j] = true;
  }
}

function leap(unsafe, ax, ay, x, y) {
  for (var i = ay - y; i <= ay + y; i += y << 1) {
    if (i >= 0 && i < 8) {
      for (var j = ax - x; j <= ax + x; j += x << 1) {
        if (j >= 0 && j < 8) unsafe[i][j] = true;
      }
    }
  }
}
