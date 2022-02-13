#include <stdio.h> 

typedef struct triangle{
  float base, altitude, area;
}Triangle;

int input_n();
Triangle input_triangle();
void input_n_triangles(int n, Triangle t[n]);
Triangle find_area(Triangle *t);
void find_areas_n(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);

int main(){
  int n = input_n();
  Triangle t[n];
  input_n_triangles(n, t);
  find_areas_n(n, t);
  Triangle smallest = find_smallest_triangle(n,t);
  output(n,t,smallest);
  
  return 0;
}
int input_n(){
  int n;
  printf("How many triangles? ");
  scanf("%d", &n);
  return n;
}
Triangle input_triangle(){
  Triangle k;
  scanf("%f%f", &k.base, &k.altitude);
  return k;
}
void input_n_triangles(int n, Triangle t[n]){
  printf("\nEnter base and height of a triangle\n\n");
  for(int i=0;i<n;i++){
    printf("Triangle %d: ", i+1);
    t[i] = input_triangle();
  }
}
Triangle find_area(Triangle *t){
  t->area = 0.5 * t->base * t->altitude;
}
void find_areas_n(int n, Triangle t[n]){
  for(int i=0;i<n;i++)
    find_area(&t[i]);
}
Triangle find_smallest_triangle(int n, Triangle t[n]){
  Triangle s = t[0];
  for(int i=1;i<n;i++){
    s = s.area < t[i].area ?s:t[i];
  }
  return s;
}
void output(int n, Triangle t[n], Triangle smallest){
  printf("\nThe smallest of triangles with base and height\n");
  for(int i=0;i<n;i++){
    printf("%.2f %.2f ,\n", t[i].base, t[i].altitude);
  }
  printf("is the triangle with base %.2f and altitude %.2f.\n", smallest.base, smallest.altitude);
  printf("\nThe area of triangle with base %.2f and height %.2f is %.2f.\n", smallest.base, smallest.altitude, smallest.area);
}