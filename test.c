#include <stdio.h>

int main() {
  char operator;
  double first, second;
  printf("Kalkulator Matematika\n");
  printf("Masukkan operator (+, -, *, /):\n");
  scanf("%c", &operator);
  printf("Masukkan angka pertama:\n");
  scanf("%lf", &first);
  printf("Masukkan angka kedua:\n");
  scanf("%lf", &second);

  switch (operator) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
      break;
    default:
      printf("Error! operator salah!");
  }

  return 0;
}