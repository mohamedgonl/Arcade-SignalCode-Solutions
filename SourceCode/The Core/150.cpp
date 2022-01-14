You are writing a spreadsheet application for an ancient operating system. The system runs on a computer so old that it can only display ASCII graphics. Currently you are stuck with implementing the cells joining algorithm.

You are given a table in ASCII graphics, where the following characters are used for borders: +, -, |. The rows can have different heights and the columns can have different widths. Each cell has an area greater than 1 (excluding the borders) and can contain any ASCII characters excluding +, - and |.

The algorithm you want to implement should merge the cells within a given rectangular part of the table into a single cell by removing the borders between them (i.e. replace them with space characters (' ') and replace redundant +s with correct border symbols). The cells to join are represented by the coordinates of the cells at the extreme bottom-left and top-right of the area.

Example
For

table = ["+----+--+-----+----+",
         "|abcd|56|!@#$%|qwer|",
         "|1234|78|^&=()|tyui|",
         "+----+--+-----+----+",
         "|zxcv|90|77777|stop|",
         "+----+--+-----+----+",
         "|asdf|~~|ghjkl|100$|",
         "+----+--+-----+----+"]
and coords = [[2, 0], [1, 1]], the output should be

solution(table, coords) = ["+----+--+-----+----+",
                               "|abcd|56|!@#$%|qwer|",
                               "|1234|78|^&=()|tyui|",
                               "+----+--+-----+----+",
                               "|zxcv 90|77777|stop|",
                               "|       +-----+----+",
                               "|asdf ~~|ghjkl|100$|",
                               "+-------+-----+----+"]
Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] array.string table

A table in ASCII graphics. '|' and '-' characters represent borders, and '+' characters represent their intersection. It is guaranteed that there are no joined cells in the table. It's also guaranteed that the table occupies the entire rectangular array, i.e. its outer borders occupy the leftmost and the rightmost columns of the array as well as its topmost and bottommost rows.

Guaranteed constraints:
3 ≤ table.length ≤ 25,
3 ≤ table[i].length ≤ 80,
table[i].length = table[j].length.

[input] array.array.integer coords

coords[0] contains 0-based row and column indices (given in that exact order) of the extreme bottom left cell in the area to join, and coords[1] contains indices of the extreme top right cell of that region.

It's guaranteed that there are at least two cells to be joined, and that cells with the given indices do exist in the table.

The rows are numbered from top to bottom while the columns are numbered from left to right.

Guaranteed constraints:
coords.length = 2,
coords[i].length = 2,
0 ≤ coords[1][0] ≤ coords[0][0] < 10,
0 ≤ coords[0][1] ≤ coords[1][1] ≤ 25.

[output] array.string

Table with cells in given region joined into one.
  --------------------------------------------------------------------------------------------------------------------------------------
  std::vector<std::string> solution(std::vector<std::string> t, std::vector<std::vector<int>> co) {
    vector<int> r,c;
    int x=0,y=0,topRow,botRow,leftCol,rightCol;
    for(auto e:t) { 
        if(e[0]=='+') r.push_back(x); 
        x++; 
        }
    for(auto e:t[0]) { 
        if(e=='+') c.push_back(y); 
        y++; 
        }
    topRow=r[min(co[0][0],co[1][0])];
    botRow=r[max(co[0][0],co[1][0])+1];
    leftCol=c[min(co[0][1],co[1][1])];
    rightCol=c[max(co[0][1],co[1][1])+1];
    for(x=topRow+1;x<botRow;x++) {
        for(y=leftCol+1;y<rightCol;y++) {
            if(t[x][y]=='-'||t[x][y]=='|'||t[x][y]=='+') t[x][y]=' ';
            if(topRow==0) t[topRow][y]='-';
            if(botRow==t.size()-1) t[botRow][y]='-';
        }
        if(leftCol==0) t[x][leftCol]='|';
        if(rightCol==t[0].length()-1) t[x][rightCol]='|';
    }
    return t;
}
