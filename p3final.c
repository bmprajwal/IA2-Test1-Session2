#include <stdio.h>

int input_number();
int is_composite(int n);
void output(int n, int composite);

int main(){
  int n, composite;
  n = input_number();
  composite = is_composite(n);
  output(n, composite);
  return 0;
}
int input_number(){
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  return n;  
}
int is_composite(int n){
  int count = 0;
  if(n==1)
    return 1;
  else 
    for(int i=1; i<=n;i++){
      if(n%i==0)
      count++;
    }
   return count;
}
void output(int n, int composite){
  if(composite==1)
    printf("%d is neither a prime not a composite number.\n",n );
  else  if(composite==2)
    printf("%d is a prime number.\n",n);
  else 
    printf("%d is a composite number.\n",n);
}