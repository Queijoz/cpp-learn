#include <stdio.h>
#include <string.h>
int main(){
  char password[3];
  printf("Choose a password and I will discover it: ");
  scanf("%s", password);
  char characters[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

  char run[3] = "";
  for (int counter=0; counter<3; counter++) {
    for (int i=0; i<sizeof(characters)/sizeof(char); i++) {
      run = "";
      for (int j=0; j<=counter; j++) {
        strcat(run, characters[i]);
      }
      if (run == password) {
        printf("carai bolacha\n");
        break;
      }
      printf("%s\n", run);
    }
  }
}
