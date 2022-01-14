Given an integer size, return array of length size filled with 1s.

Example

For size = 4, the output should be
solution(size) = [1, 1, 1, 1].

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] integer size

A positive integer.

Guaranteed constraints:
1 ≤ size ≤ 1000.

[output] array.integer
-----------------------------------------------------------
vector<int> solution(int size) {
    return vector<int>(size, 1);
}
