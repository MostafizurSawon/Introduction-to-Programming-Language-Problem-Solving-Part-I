#include<stdio.h>

void change(int *x, int *y) {
 *x = 20;
 *y = 10;
} 
int main() {
 int m = 10, n = 20;
 printf("Before executing change m=%d n=%d\n", m, n);
 change(&m, &n);
 printf("After executing change m=%d n=%d\n", m, n); 
 return 0;
}