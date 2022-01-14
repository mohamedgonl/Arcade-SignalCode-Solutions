Find the number of ways to express n as sum of some (at least two) consecutive positive integers.

Example

For n = 9, the output should be
solution(n) = 2.

There are two ways to represent n = 9: 2 + 3 + 4 = 9 and 4 + 5 = 9.

For n = 8, the output should be
solution(n) = 0.

There are no ways to represent n = 8.

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] integer n

A positive integer.

Guaranteed constraints:
1 ≤ n ≤ 104.

[output] integer
------------------------------------------------------------------------------
int solution(int n) {
    int count =0;
    for(int i=1;i<=n/2;i++){
        int s=0;
        for(int j=i;j<=n/2+1;j++){
            s+=j;
            if(s==n) {count++;
                        break;}
        }
    }
    return count;
}
