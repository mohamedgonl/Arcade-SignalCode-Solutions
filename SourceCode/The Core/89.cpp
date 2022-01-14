Given array of integers, for each position i, search among the previous positions for the last (from the left) position that contains a smaller value. Store this value at position i in the answer. If no such value can be found, store -1 instead.

Example

For items = [3, 5, 2, 4, 5], the output should be
solution(items) = [-1, 3, -1, 2, 4].

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] array.integer items

Non-empty array of positive integers.

Guaranteed constraints:
3 ≤ items.length ≤ 15,
1 ≤ items[i] ≤ 200.

[output] array.integer

Array containing answer values computed as described above.
--------------------------------------------------------------------
vector<int> solution(vector<int> items) {
    vector<int> ans={-1};
    for(int i=1;i<items.size();i++){
        int j=i-1;
        while(j>=0){
            if(items[j]<items[i]) {ans.push_back(items[j]);
            break;
        }
        j--;
        if(j<0) ans.push_back(-1);
    }
}
return ans;
}
