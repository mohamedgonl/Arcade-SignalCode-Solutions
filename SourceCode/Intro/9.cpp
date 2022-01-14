vector<string> solution(vector<string> inputArray) {
    vector<string> res;
    int len = 0;
    for(int i =0 ; i<inputArray.size();i++){
        if(inputArray[i].length()>len){
            len = inputArray[i].length();
        }
    }
     for(int i =0 ; i<inputArray.size();i++){
         if(inputArray[i].length()==len){
             res.push_back(inputArray[i]);
         }
}
return res;
}
