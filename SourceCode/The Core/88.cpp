Given an array of 2k integers (for some integer k), perform the following operations until the array contains only one element:

On the 1st, 3rd, 5th, etc. iterations (1-based) replace each pair of consecutive elements with their sum;
On the 2nd, 4th, 6th, etc. iterations replace each pair of consecutive elements with their product.
After the algorithm has finished, there will be a single element left in the array. Return that element.

Example

For inputArray = [1, 2, 3, 4, 5, 6, 7, 8], the output should be
solution(inputArray) = 186.

We have [1, 2, 3, 4, 5, 6, 7, 8] -> [3, 7, 11, 15] -> [21, 165] -> [186], so the answer is 186.

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] array.integer inputArray

Guaranteed constraints:
1 ≤ inputArray.length ≤ 27,
-100 ≤ inputArray[i] ≤ 100.

[output] integer
----------------------------------------------------------------
int solution(vector<int> a) {
    int k = 1;
while(a.size()>1) {
    for(int i = 0; i < a.size() - 1; i += 2){
        if(k%2!=0) a[i/2] = a[i]+a[i+1];
        else a[i/2] = a[i]*a[i+1];
    }  
   k++;
   a.resize(a.size() / 2);
}
   return a[0];
}
