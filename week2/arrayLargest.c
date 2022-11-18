#include <stdio.h>
int largest(int a[10],int limit);


int main() {
  int limit;
  int a[100];
  printf("Enter the number of elements (1 to 100): ");
  scanf("%d", &limit);
   
  for (int i = 1; i <=limit; ++i) {
    printf("Enter number%d: ", i + 1);
    scanf("%d", &a[i]);

  }
    largest(a,limit);
}
int largest(int a[100],int limit){
  for (int i = 1; i <=limit; ++i) {
    if (a[0] < a[i]) {
      a[0] = a[i];
    }
  }

  printf("Largest element = %d", a[0]);

  
}