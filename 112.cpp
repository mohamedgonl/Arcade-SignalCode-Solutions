Court is in session. We got a group of witnesses who have all taken an oath to tell the truth. The prosecutor is pointing at the defendants one by one and asking each witnesses a simple question - "guilty or not?". The witnesses are allowed to respond in one of the following three ways:

I am sure he/she is guilty.
I am sure he/she is innocent.
I have no idea.
The prosecutor has a hunch that one of the witnesses might not be telling the truth so she decides to cross-check all of their testimonies and see if the information gathered is consistent, i.e. there are no two witnesses A and B and a defendant C such that A says C is guilty while B says C is innocent.

Example

For

evidences = [[ 0, 1, 0, 1], 
             [-1, 1, 0, 0], 
             [-1, 0, 0, 1]]
the output should be
solution(evidences) = true;

For

evidences = [[ 1, 0], 
             [-1, 0], 
             [ 1, 1],
             [ 1, 1]]
the output should be
solution(evidences) = false.

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] array.array.integer evidences

2-dimensional array of integers representing the set of testimonials. evidences[i][j] is the testimonial of the ith witness on the jth defendant. -1 means "innocent", 0 means "no idea", and 1 means "guilty".

Guaranteed constraints:
2 ≤ evidences.length ≤ 5,
2 ≤ evidences[0].length ≤ 10,
evidences[i].length = evidences[j].length,
-1 ≤ evidences[i][j] ≤ 1.

[output] boolean

true if the evidence is consistent, false otherwise.
--------------------------------------------------------------------------------------------
bool solution(vector<vector<int>> evidences) {
    for(int j=0;j<evidences[0].size();j++){
        bool guilty = false;
        bool innocent = false;
        for(int i=0;i<evidences.size();i++){
            if(evidences[i][j]==-1) innocent=true;
            if(evidences[i][j]==1) guilty=true;
        }
        if(guilty&&innocent) return false;
    }
    return true;
}
