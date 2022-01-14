int solution(int product) {
  if (product == 0) return 10;
  if (product == 1) return 1;
  int res = 0, div = 1;
  for (int i = 9; i > 1; --i) {
    while (product % i == 0) {
      product /= i;
      res += i * div;
      div *= 10;
    }
  }
  if (product > 1)
    res = -1;
  return res;
}
