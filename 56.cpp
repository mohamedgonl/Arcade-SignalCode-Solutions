You are implementing your own HTML editor. To make it more comfortable for developers you would like to add an auto-completion feature to it.

Given the starting HTML tag, find the appropriate end tag which your editor should propose.

If you are not familiar with HTML, consult with this note.

Example

For startTag = "<button type='button' disabled>", the output should be
solution(startTag) = "</button>";
For startTag = "<i>", the output should be
solution(startTag) = "</i>".
Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] string startTag

Guaranteed constraints:
3 ≤ startTag.length ≤ 75.

[output] string
-----------------------------------------------------------------------------------
string solution(string startTag) {
    int i = startTag.find_first_of(' ');
    string tagname = startTag.substr(0,i);
    tagname.insert(1,"/");
    if(tagname[tagname.length()-1]!='>')
    tagname.append(">");
    return tagname;
}
