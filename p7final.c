#include <stdio.h>

struct triangle{
  float base, height, area;
};
typedef struct triangle Triangle;

Triangle input_triangle();
void find_area(Triangle *t);
void output(Triangle t);

int main(){
  Triangle t;
  t = input_triangle();
  find_area(&t);
  output(t);

  return 0;
}
Triangle input_triangle(){
  Triangle a;
  printf("Enter the base and height of triangle: ");
  scanf("%f%f", &a.base, &a.height);
  return a;
}
void find_area(Triangle *t){
  t->area = 0.5 * t->base * t->height;
}
void output(Triangle t){
  printf("The area of triangle with base = %f and height = %f is %f\n", t.base, t.height, t.area);
}