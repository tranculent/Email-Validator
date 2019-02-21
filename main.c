#include <stdio.h> 
#include <string.h>

int main() {
  char email[30] = "Dan+Gi.tson@gmail.com";
  char newArr[30];
  int at = 0;
  int dotCounted = 0;
  int isThereAPlus = 0;
  for (int i = 0; i < 30; i++) {
    // get the characters after '@'
    if (at == 1) {
      newArr[i] = email[i];
      if(newArr[i] == '.') {
        dotCounted++;
      }
      if(dotCounted == 2) {
        printf("Invalid email address, more than 1 dots in the domain name!");
        break;
      }
      if(newArr[i] == '+'){
        printf("Invalid email address, a '+' has been detected in the domain name.");
        isThereAPlus = 1;
        break;
      }
    }
    // if email[i] is equal to '@'
    if(email[i] == 64){
      at = 1;
    }
  }
  if(dotCounted != 2 && isThereAPlus == 0) {
    printf("It is a valid email address.");
  }
}
