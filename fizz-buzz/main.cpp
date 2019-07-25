#include <stdio.h> // Standard input output header;
#include <string.h> // Using for string manipulate;
#include <unistd.h> // Using for sleep function;
int main(){
  printf("Starting Fizz Buzz\n\n");
  sleep(2);

  for (int counter = 1; counter > 0; counter++) {
    // Loop for keep printing numbers.
    char output[8] = "";
    if (counter % 3 == 0) { strcat(output, "Fizz"); }
    if (counter % 5 == 0) { strcat(output, "Buzz"); }
    if (strcmp(output, "") == 0) { printf("%d\n", counter); sleep(1); continue; }

    printf("%s\n", output);
    sleep(1);
  }
}
