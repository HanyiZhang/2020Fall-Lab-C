int setBit(int a, int b) {
  int temp = 1;
  temp = 1 << b;
  int c = a | temp;

  return c;
}

int clearBit(int a, int b) {
  int c = 1;
  c = c << b;
  c = ~c;
  c = c & a;

  return c;
}

int flip(int a, int b) {
  int c = 1;
  c = c << b;
  c = a ^ c;

  return c;
}

int replaceBits(int a, int b, int c) {
  int answer = a & b;
  answer = c | answer;

  return answer;
}

int buildColor(int r, int g, int b) {
  int color = 0;
  int temp = r << 16;
  int temp1 = g << 8;
  int temp2 = b;

  int answer = color | temp | temp1 | temp2;

  return answer;
}

double choose(int n, int r) {
  int temp = n - r;

  double numerator = 1;
  for (int i = n; i >= temp + 1; i--) {
    numerator *= i;
  }

  double denominator = 1;
  for (int i = r; i >= 1; i--) {
    denominator *= i;
  }

  double answer = numerator/denominator;
  return temp;
}
