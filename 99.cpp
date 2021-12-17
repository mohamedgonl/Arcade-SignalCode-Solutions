Two two-dimensional arrays are isomorphic if they have the same number of rows and each pair of respective rows contains the same number of elements.

Given two two-dimensional arrays, check if they are isomorphic.

Example

For

array1 = [[1, 1, 1],
          [0, 0]]
and

array2 = [[2, 1, 1],
          [2, 1]]
the output should be
solution(array1, array2) = true;

For

array1 = [[2],
          []]
and

array2 = [[2]]
the output should be
solution(array1, array2) = false.

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] array.array.integer array1

Guaranteed constraints:
1 ≤ array1.length ≤ 5,
0 ≤ array1[i].length ≤ 5,
0 ≤ array1[i][j] ≤ 50.

[input] array.array.integer array2

Guaranteed constraints:
1 ≤ array2.length ≤ 5,
0 ≤ array2[i].length ≤ 5,
0 ≤ array2[i][j] ≤ 50.

[output] boolean
------------------------------------------------------------------
bool solution(vector<vector<int>> array1, vector<vector<int>> array2) {
    if(array1.size()==array2.size()){
        for(int i=0;i<array2.size();i++){
            if(array2[i].size()!=array1[i].size()) return false;
        }
        return true;
    }
    else return false;
}
