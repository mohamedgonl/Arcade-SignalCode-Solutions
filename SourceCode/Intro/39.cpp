int solution(int value1, int weight1, int value2, int weight2, int maxW) {
    if(maxW>=weight1+weight2) return value1+value2; 
    if(maxW<min(weight1,weight2)) return 0;
    if(maxW>=max(weight2,weight1)) return max(value2,value1);
    else if(weight1>weight2) return value2;
    else return value1;
   
}
