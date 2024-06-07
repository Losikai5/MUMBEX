#include <stdio.h>
#include <stdlib.h>

int main()
{
int marks[10];


    for(int number ; number < 10 ;  ++number){
            printf("enter hours %d :", number);
        scanf("%d\n", &marks[number]);
    }
      for(int number = 0; number < 10; ++number){
        printf("%d", marks[number]);
      }
    return 0;
}
