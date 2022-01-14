bool solution(std::vector<std::string> inputArray) {
   do {
        bool flag = true;
        for(int i = 0; i < inputArray.size() - 1; i++) {
            int diff = 0;
            for(int j = 0; j < inputArray[i].size(); j++)
                if(inputArray[i][j] != inputArray[i+1][j]) diff++;
            if(diff != 1) flag = false; 
        }
        if(flag) return true;
    } while(next_permutation(inputArray.begin(), inputArray.end()));
    return false;
}
