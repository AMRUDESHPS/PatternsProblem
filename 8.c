#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(int i = 0; i < num; i++){
        for(int j = 0; j < num ; j++){
            if(j == 0 || j == (num - 1) || j == i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

// N
