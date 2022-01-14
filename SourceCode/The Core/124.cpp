In the Land Of Chess, bishops don't really like each other. In fact, when two bishops happen to stand on the same diagonal, they immediately rush towards the opposite ends of that same diagonal.

Given the initial positions (in chess notation) of two bishops, bishop1 and bishop2, calculate their future positions. Keep in mind that bishops won't move unless they see each other along the same diagonal.

Example

For bishop1 = "d7" and bishop2 = "f5", the output should be
solution(bishop1, bishop2) = ["c8", "h3"].



For bishop1 = "d8" and bishop2 = "b5", the output should be
solution(bishop1, bishop2) = ["b5", "d8"].

The bishops don't belong to the same diagonal, so they don't move.


Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] string bishop1

Coordinates of the first bishop in chess notation.

Guaranteed constraints:
bishop1.length = 2,
'a' ≤ bishop1[0] ≤ 'h',
1 ≤ bishop1[1] ≤ 8.

[input] string bishop2

Coordinates of the second bishop in the same notation.

Guaranteed constraints:
bishop2.length = 2,
'a' ≤ bishop2[0] ≤ 'h',
1 ≤ bishop2[1] ≤ 8.

[output] array.string

Coordinates of the bishops in lexicographical order after they check the diagonals they stand on.
  ------------------------------------------------------------------------------
  vector<string> solution(string b1, string b2) {

    if (b2 < b1) swap(b1,b2);
    if (b1[0]-b2[0]==b1[1]-b2[1]){
        while (b1[0] > 'a' && b1[1] > '1'){
            b1[0]--;
            b1[1]--;
        }
        while (b2[0] < 'h' && b2[1] < '8'){
            b2[0]++;
            b2[1]++;
        }
    }
    else if (b1[0]-b2[0]==b2[1]-b1[1]){
        while (b1[0] > 'a' && b1[1] < '8'){
            b1[0]--;
            b1[1]++;
        }
        while (b2[0] < 'h' && b2[1] > '1'){
            b2[0]++;
            b2[1]--;
        }
    }
    return {b1,b2};
}
