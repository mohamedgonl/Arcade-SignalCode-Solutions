Given an array of integers, sort its elements by the difference of their largest and smallest digits. In the case of a tie, that with the larger index in the array should come first.

Example

For a = [152, 23, 7, 887, 243], the output should be
solution(a) = [7, 887, 23, 243, 152].

Here are the differences of all the numbers:

152: difference = 5 - 1 = 4;
23: difference = 3 - 2 = 1;
7: difference = 7 - 7 = 0;
887: difference = 8 - 7 = 1;
243: difference = 4 - 2 = 2.
23 and 887 have the same difference, but 887 goes after 23 in a, so in the sorted array it comes first.

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] array.integer a

An array of integers.

Guaranteed constraints:
0 ≤ sequence.length ≤ 104,
1 ≤ sequence[i] ≤ 105.

[output] array.integer

Array a sorted as described above.
-------------------------------------------------------------------
int difference(int x){
    int max =x%10;
    int min =x%10;
    x/=10;
    while(x>0){
        int a = x%10;
        if(max<a) max = a;
        if(min>a) min = a;
        x/=10;
    }
    return max-min;
}
vector<int> solution(vector<int> a) {
    stable_sort(a.begin(),a.end(),[](int x1,int x2){
        return difference(x1)<=difference(x2);
    });
    return a;
}
