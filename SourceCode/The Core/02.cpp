// Given an integer n, return the largest number that contains exactly n digits.

// Example

// For n = 2, the output should be
// largestNumber(n) = 99.

// Input/Output

// [execution time limit] 0.5 seconds (cpp)

// [input] integer n

// Guaranteed constraints:
// 1 ≤ n ≤ 9.

// [output] integer

// The largest integer of length n.



int largestNumber(int n) {
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans+9*pow(10,i);
    }
    return ans;
}
