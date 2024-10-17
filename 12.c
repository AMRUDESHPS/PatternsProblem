#include <stdio.h>

int main()
{
    int numRows, i, j, k;
    printf("Enter a number : ");
    scanf("%d",&numRows);
    for(i = 0; i < numRows * 2 - 1; i++){
        int stars,space;
        if(i < numRows){
            stars = i * 2 + 1;
            space = numRows - i - 1;
        }else{
            stars = ((numRows * 2) - i - 1) * 2 - 1;
            space = i - numRows + 1;
        }
        for(j = 0; j < space; j++){printf(" ");}
        for(k = 0; k < stars; k++){
            printf("%c",65 + k);
        }
        printf("\n");
    }

    return 0;
}


//   A
//   ABC
//  ABCDE
//   ABC
//   A