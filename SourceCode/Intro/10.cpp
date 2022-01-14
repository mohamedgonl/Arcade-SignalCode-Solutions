int solution(string st1, string st2)
{
    int rt = 0;
    int countSt[26] = {0};
    for (char &c : st1)
    {
        countSt[c - 'a']++;
    }
    for (char &c : st2)
    {
        if (countSt[c - 'a'])
        {
            countSt[c - 'a']--;
            rt++;
        }
    }
    return rt;
}