You are given an array of desired filenames in the order of their creation. Since two files cannot have equal names, the one which comes later will have an addition to its name in a form of (k), where k is the smallest positive integer such that the obtained name is not used yet.

Return an array of names that will be given to the files.

Example

For names = ["doc", "doc", "image", "doc(1)", "doc"], the output should be
solution(names) = ["doc", "doc(1)", "image", "doc(1)(1)", "doc(2)"].

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] array.string names

Guaranteed constraints:
5 ≤ names.length ≤ 1000,
1 ≤ names[i].length ≤ 15.

[output] array.string
-------------------------------------------------------------------------------------------
std::vector<std::string> solution(std::vector<std::string> names) {
    vector<string> nm;
    set<string> s;
    for(string str: names) {
        int t=0;
        string temp = str;
        while(s.find(temp)!=s.end())
            temp = str +"("+to_string(++t)+")";
        s.insert(temp);
        nm.push_back(temp);
    }
    return nm;
}
