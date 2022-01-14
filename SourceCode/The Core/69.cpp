There are some people and cats in a house. You are given the number of legs they have all together. Your task is to return an array containing every possible number of people that could be in the house sorted in ascending order. It's guaranteed that each person has 2 legs and each cat has 4 legs.

Example

For legs = 6, the output should be
solution(legs) = [1, 3].

There could be either 1 cat and 1 person (4 + 2 = 6) or 3 people (2 * 3 = 6).

For legs = 2, the output should be
solution(legs) = [1].

There can be only 1 person.

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] integer legs

The total number of legs in the house. It's guaranteed,that this number is even.

Guaranteed constraints:
0 ≤ legs < 50.

[output] array.integer

Every possible number of people that can be in the house.
  ------------------------------------------------------------------------------
  vector<int> solution(int legs) {
vector<int> ans;
if(legs%4!=0) ans.push_back(1);
else ans.push_back(0);
int next = ans.back()+2;
while(next*2<=legs){
    ans.push_back(next);
    next = ans.back()+2;
}
return ans;

}
