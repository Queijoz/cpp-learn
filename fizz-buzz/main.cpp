#include <stdio.h> // Standard input output header;
#include <unistd.h> // Using for sleep function;
int main(){
  printf("Starting Fizz Buzz\n");
  sleep(2);

  for (int counter = 1; counter > 0; counter++) {
    // Loop for keep printing numbers. The counter is the number which is gonna be printed.
    if (counter % 3 == 0 && counter % 5 == 0) {
      // If the counter is divisible by 3 and 5 without remainder numbers, print FizzBuzz.
      printf("FiZzBuZz\n");
    }else{
      // If the counter is multiple of 3, print Buzz. If multiple of 5, print Fizz.
      if (counter % 3 == 0) {
        printf("Buzz\n");
      }else{
        if (counter % 5 == 0) {
          printf("Fizz\n");
        }else{
          printf("%i\n", counter);
        }
      }
    }
    sleep(1);
  }
}
