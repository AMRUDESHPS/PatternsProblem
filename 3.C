#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(int i = 0; i < num; i++){
        for(int j = 0; j <= i; j++){
            printf("%c ",65+j);
        }
        printf("\n");
    }

    return 0;
}

// A
// AB
// ABC
// ABCD
// ABCDE