Miss X has only two solution in her possession, both of which are old and miss a tooth or two. She also has many purses of different length, in which she carries the solution. The only way they fit is horizontally and without overlapping. Given teeth' positions on both solution, find the minimum length of the purse she needs to take them with her.

It is guaranteed that there is at least one tooth at each end of the comb.
It is also guaranteed that the total length of two strings is smaller than 32.
Note, that the solution can not be rotated/reversed.

Example

For comb1 = "*..*" and comb2 = "*.*", the output should be
solution(comb1, comb2) = 5.

Although it is possible to place the solution like on the first picture, the best way to do this is either picture 2 or picture 3.



Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] string comb1

A comb is represented as a string. If there is an asterisk ('*') in the ith position, there is a tooth there. Otherwise there is a dot ('.'), which means there is a missing tooth on the comb.

Guaranteed constraints:
3 ≤ comb1.length ≤ 8.

[input] string comb2

The second comb is represented in the same way as the first one.

Guaranteed constraints:
1 ≤ comb2.length ≤ 5.

[output] integer

The minimum length of a purse Miss X needs.
  --------------------------------------------------------------------------
  
int convert(string comb){
     int bit_com=0;
    for(int i=0; i<comb.length()-1;i++){
        if(comb[i]=='*') bit_com|=1;
        bit_com<<=1;
    } bit_com|=1;
    return bit_com;
}
int solution(string comb1, string comb2) {
    int longer_comb=0, shorter_comb=0;
    int longer_length=max(comb1.length(),comb2.length());
    int shorter_length=min(comb2.length(),comb1.length());
    if(comb1.length()>comb2.length()){
        longer_comb=convert(comb1);
        shorter_comb=convert(comb2);
    }
    else{
        longer_comb=convert(comb2);
        shorter_comb=convert(comb1);
    }
    longer_comb<<=shorter_length;
    int min = comb1.length()+comb2.length();
    int sum =min;

    for(int i=0;i<=sum;i++){
       if((longer_comb&shorter_comb)==0) {
           int len;
           if(i<=shorter_length) len = sum-i;
           if(i>shorter_length&&i<=longer_length) len=longer_length;
           if(i>longer_length) len=i;
           
           if(len<min) min = len;
       }
       shorter_comb<<=1;
    }
    return min;
}
