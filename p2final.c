#include <stdio.h> 

int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int main(){
  int a, b, c, isscalene;
  printf("Enter side 1: ");
  a = input_side();
  printf("Enter side 2: ");
  b = input_side();
  printf("Enter side 3: ");
  c = input_side();
  isscalene = check_scalene(a, b, c);
  output(a, b, c, isscalene);
}
int input_side(){
  int a;
  scanf("%d", &a);
  return a;
}
int check_scalene(int a, int b, int c){
  if(a!=b && a!=c && b!=c)
    return 1;
}
void output(int a, int b, int c, int isscalene){
  if(isscalene == 1)
    printf("The triangle with sides %d, %d, %d is scalene.\n", a, b, c);
  else
    printf("The triangle with sides %d, %d, %d is not scalene.\n", a, b, c);
}