Reverse the order of the bits in a given integer.

Example

For a = 97, the output should be
mirrorBits(a) = 67.

97 equals to 1100001 in binary, which is 1000011 after mirroring, and that is 67 in base 10.

For a = 8, the output should be
mirrorBits(a) = 1.

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] integer a

Guaranteed constraints:
5 ≤ a ≤ 105.

[output] integer
-------------------------------------------------------------------------------------------------------
int mirrorBits(int a) {
    int ans=0;
    while(a!=0){
        ans<<=1;
        if((a&1)==1) ans=ans|1;
        a>>=1;
    }
    return ans;
}
