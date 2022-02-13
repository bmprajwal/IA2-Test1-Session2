#include <stdio.h> 

int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int main(){
   int n, sum;
  n = input_array_size();
  int a[n];
  input_array(n, a);
  sum = sum_composite_numbers(n, a);
  output(sum);
  
  return 0;
}
int input_array_size(){
  int n;
  printf("How many numbers to be taken input? ");
  scanf("%d", &n);
  return n;
}
void input_array(int n, int a[n]){
  for(int i = 0;i<n;i++){
    printf("Number %d: ", i+1);
    scanf("%d", &a[i]);
  }
}
int sum_composite_numbers(int n, int a[n]){
  int count=0, sum = 0;
  for(int i=0;i<n;i++){
    for(int j=1;j<=a[i];j++){
     if(a[i]%j==0)
       count++;
    }
  if(count>2)
    sum +=a[i];
  count = 0;
  }
  return sum;
}
void output(int sum){
  printf("Sum of composite numbers is %d.\n", sum);
}