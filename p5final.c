#include <stdio.h>

int input();
int gcd(int a, int b);
void output(int a, int b, int gcd);

int main(){
  int a = input();
  int b = input();
  int GCD = gcd(a,b);
  output(a,b,GCD);
  
  return 0;
}
int input(){
  int a;
  printf("Enter a number: ");
  scanf("%d", &a);
  return a;
}
int gcd(int a, int b){
  while(a!=b){
    if(a>b)
      a=a-b;
    else
      b=b-a;
  }
  return a;
}
void output(int a, int b, int gcd){
  printf("Gcd of %d and %d is %d\n",a ,b, gcd);
}