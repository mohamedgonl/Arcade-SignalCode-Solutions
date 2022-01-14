You have been watching a video for some time. Knowing the total video duration find out what portion of the video you have already watched.

Example

For part = "02:20:00" and total = "07:00:00", the output should be
solution(part, total) = [1, 3].

You have watched 1 / 3 of the whole video.

Input/Output

[execution time limit] 0.5 seconds (cpp)

[input] string part

A string of the following format "hh:mm:ss" representing the time you have been watching the video.

[input] string total

A string of the following format "hh:mm:ss" representing the total video duration.

[output] array.integer

An array of the following format [a, b] (where a / b is a reduced fraction).
  -------------------------------------------------------------------------------
  int seconds (string total){
     int hour = (int)(total[0]-'0')*10+ (int)(total[1]-'0');
    int minute = (int)(total[3]-'0')*10+ (int)(total[4]-'0');
    int second = (int)(total[6]-'0')*10+ (int)(total[7]-'0');
    return hour*3600 + minute*60 + second;
}
vector<int> solution(string part, string total) {
   int tol = seconds(total);
   int part1 = seconds(part);
   int g = gcd(part1, tol);
   return {part1/g,tol/g};
}
