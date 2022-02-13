#include <stdio.h>

void input_string(char a[]);
void str_reverse(char a[]);
void output(char a[]);

int main(){
  char a[20];
  input_string(a);
  str_reverse(a);
  output(a);
  
  return 0;
}
void input_string(char a[]){
  printf("Enter string: ");
  scanf("%s", a);  
}
void str_reverse(char a[]){
  char t;
  int count = 0, end;
  while(a[count]!='\0')
    count++;
  end = count-1;
  for(int begin=0;begin<end;begin++,end--){
    t=a[begin];
    a[begin]=a[end];
    a[end]=t;
   }
}
void output(char a[]){
  printf("Reverse: %s\n", a);
}