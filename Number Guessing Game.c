#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main (){
  int random_num;
  srand(time(NULL));
  random_num=(rand() % 100)+1;
  printf("Guess a Number between 1 and 100\n");
  int guess,tries=0;
  
  do{
    scanf("%d",&guess);
    if(guess>random_num){
      printf("The number you guess is greater");
      tries++;
    }
    else if(guess<random_num){
      printf("The number you guess is smaller");
      tries++;
    }
    else{
      printf("Yeah!!, You guessed the number in %d attempts!",tries);
    }
  }
  while (guess != random_num );
  return 0;
}
