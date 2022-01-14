function solution(inputString) {
    let numbers = inputString.split(".");
    if (numbers.length !== 4) return false;
    for (i = 0; i < 4; i++) {
        if (numbers[i] !== "0") {
            if( numbers[i][0] == 0) return false;
            if (numbers[i] === "") return false;
            let number = Number(numbers[i]) || -1 ;
            if (number < 0 || number > 255) {
             return false;   
            }
        }
    }
    return true;
}
