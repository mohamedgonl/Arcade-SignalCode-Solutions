Let's call two integers A and B friends if each integer from the array divisors is either a divisor of both A and B or neither A nor B. If two integers are friends, they are said to be in the same clan. How many clans are the integers from 1 to k, inclusive, broken into?

Example

For divisors = [2, 3] and k = 6, the output should be
solution(divisors, k) = 4.

The numbers 1 and 5 are friends and form a clan, 2 and 4 are friends and form a clan, and 3 and 6 do not have friends and each is a clan by itself. So the numbers 1 through 6 are broken into 4 clans.

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] array.integer divisors

A non-empty array of positive integers.

Guaranteed constraints:
2 ≤ divisors.length < 10,
1 ≤ divisors[i] ≤ 10.

[input] integer k

A positive integer.

Guaranteed constraints:
5 ≤ k ≤ 10.

[output] integer
---------------------------------------------------------------------------------------------
bool isFriends(vector<int> divisors, int a, int b){
    while(!divisors.empty()){
        int i=divisors.back();
        if((a%i==0&&b%i!=0)||(a%i!=0&&b%i==0)) return false;
        divisors.pop_back();
    }
    return true;
}
int solution(vector<int> divisors, int k) {
int friendclans=0;
for(int i=1;i<k;i++){
    for(int j=i+1;j<=k;j++){
        if(isFriends(divisors, i, j)) { friendclans++;
        break;}
    }
}
return k-friendclans;
}
