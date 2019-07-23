#include <stdio.h>
int main(){
  printf("Tell me 5 numbers. I will put in crescent order for you.\n");
  int numbers[5];
  for (int i=0; i<5; i++) {
    scanf("%i", &numbers[i]);
  }
  for (int j=0; j<sizeof(numbers)/sizeof(int); j++){
    for (int i=0; i<4; i++) {
      if (numbers[i]>numbers[i+1]) {
        int swap = numbers[i];
        numbers[i] = numbers[i+1];
        numbers[i+1] = swap;
      }
    }
  }
  printf("The sequence is: %i, %i, %i, %i, %i\n", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]);
}
