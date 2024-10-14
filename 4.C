#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(int i = 0; i < num; i++){
        for(int k = 0; k < num - i; k++){
            printf(" ");
        }
        for(int j = 0; j <= i; j++){
            printf("%c ",65+j);
        }
        printf("\n");
    }

    return 0;
}

//     A
//    A B
//   A B C
//  A B C D
// A B C D E