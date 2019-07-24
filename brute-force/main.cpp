#include <stdio.h>
#include <string.h>
int main(){
  char password[8];
  printf("Choose a password and I will discover it: ");
  scanf("%s", password);
  char characters[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
  for (int counter=0; counter<5; counter++) {
    for (int i=0; i<sizeof(characters)/sizeof(char); i++) {
      char run[counter+2] = {characters[i]};

      //switch for define multiple values in the run
      switch (counter) {
        case 1:
          run[0] = {characters[i]};
          for (int j=0; j<sizeof(characters)/sizeof(char); j++) {
            run[1] = {characters[j]};
            run[counter+1] = '\0';
            int result = strcmp(run, password);
            if (result == 0) {
              i = sizeof(characters)/sizeof(char);
              break;
            }else{
              printf("%s\n", run);
            }
          }
          break;
        case 2:
          run[0] = {characters[i]};
          for (int j=0; j<sizeof(characters)/sizeof(char); j++) {
            run[1] = {characters[j]};
            for (int k=0; k<sizeof(characters)/sizeof(char); k++) {
              run[2] = {characters[k]};
              run[counter+1] = '\0';
              int result = strcmp(run, password);
              if (result == 0) {
                j = sizeof(characters)/sizeof(char);
                i = sizeof(characters)/sizeof(char);
                break;
              }else{
                printf("%s\n", run);
              }
            }
          }
          break;
        case 3:
          run[0] = {characters[i]};
          for (int j=0; j<sizeof(characters)/sizeof(char); j++) {
            run[1] = {characters[j]};
            for (int k=0; k<sizeof(characters)/sizeof(char); k++) {
              run[2] = {characters[k]};
              for (int l=0; l<sizeof(characters)/sizeof(char); l++){
                run[3] = {characters[l]};
                run[counter+1] = '\0';
                int result = strcmp(run, password);
                if (result == 0) {
                  j = sizeof(characters)/sizeof(char);
                  i = sizeof(characters)/sizeof(char);
                  k = sizeof(characters)/sizeof(char);
                  break;
                }else{
                  printf("%s\n", run);
                }
              }
            }
          }
          break;
        case 4:
          run[0] = {characters[i]};
          for (int j=0; j<sizeof(characters)/sizeof(char); j++) {
            run[1] = {characters[j]};
            for (int k=0; k<sizeof(characters)/sizeof(char); k++) {
              run[2] = {characters[k]};
              for (int l=0; l<sizeof(characters)/sizeof(char); l++){
                run[3] = {characters[l]};
                for (int m=0; m<sizeof(characters)/sizeof(char); m++){
                  run[4] = {characters[m]};
                  run[counter+1] = '\0';
                  int result = strcmp(run, password);
                  if (result == 0) {
                    j = sizeof(characters)/sizeof(char);
                    i = sizeof(characters)/sizeof(char);
                    k = sizeof(characters)/sizeof(char);
                    l = sizeof(characters)/sizeof(char);
                    break;
                  }else{
                    printf("%s\n", run);
                  }
                }
              }
            }
          }
          break;
      }
      int result = strcmp(run, password);
      if (result == 0) {
        printf("A senha foi encontrada: %s\n", run);
        counter = 5;
        break;
      }else{
        printf("%s\n", run);
      }
    }
  }
}
