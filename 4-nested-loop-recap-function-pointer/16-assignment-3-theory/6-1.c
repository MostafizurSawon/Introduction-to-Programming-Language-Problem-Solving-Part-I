#include<stdio.h>

void change(int x, int y) {
 x = x*2;
 y = y*2;
} 
int main() {
 int m = 10, n = 20;
 printf("Before executing change m=%d n=%d\n", m, n);
 change(m, n);
 printf("After executing change m=%d n=%d\n", m, n); 
 return 0;
}