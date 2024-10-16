#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(int i = 0; i < num; i++){
        for(int k = 0; k < i; k++){
            printf(" ");
        }
        for(int j = 0; j < num - i; j++){
            printf("%c ",65+j);
        }
        printf("\n");
    }

    return 0;
}

// A B C D E
//  A B C D
//   A B C
//    A B
//     A