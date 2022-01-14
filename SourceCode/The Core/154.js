You are given a recursive notation of a binary tree: each node of a tree is represented as a set of three elements:

value of the node;
left subtree;
right subtree.
So, a tree can be written as (value left_subtree right_subtree). It is guaranteed that 1 ≤ value ≤ 109. If a node doesn't exist then it is represented as an empty set: (). For example, here is a representation of a tree in the given picture:

(2 (7 (2 () ()) (6 (5 () ()) (11 () ()))) (5 () (9 (4 () ()) ())))


Your task is to obtain a list of nodes, that are the most distant from the tree root, in the order from left to right.

In the notation of a node its value and subtrees are separated by exactly one space character.

Example

For

tree = "(2 (7 (2 () ()) (6 (5 () ()) (11 () ()))) (5 () (9 (4 () ()) ())))"
the output should be
solution(tree) = [5, 11, 4].

Input/Output

[execution time limit] 4 seconds (js)

[input] string tree

Guaranteed constraints:
9 ≤ tree.length ≤ 1000.

[output] array.integer

The values of the nodes that are the most distant from the tree root.
-------------------------------------------------------------------------------------------------------------------------------------------
  function solution(t) {
    var n = t.length;
    var ans;
    var lans = -1;
    var level = 0;
    var number;
    for (var i = 0; i < n; ++i) {
        var c = t[i];
        if (c === '(') {
            ++level;
            number = '';
        } else if (c === ')') {
            --level;
        } else if (c === ' ') {
            if (number && number.length > 0) {
                var parsedNumber = Number(number);
                if (lans === level) {
                    ans.push(parsedNumber);
                } else if (lans < level) {
                    lans = level;
                    ans = [parsedNumber];
                }
                number = '';
            }
        } else {
            number += c;
        }
    }
    return ans;
}
