#include <stdio.h>

int main(){
    int i, j, numRows, val, val1 = 1;

    printf("Enter the number of rows : ");
    scanf("%d",&numRows);

    for(i=0;i<numRows;i++){
        for(int k = 0; k < numRows - i; k++){printf(" ");}
        val = 1;
        for(j=1;j<=val1;j++){
            printf("%d",val);
            val = val + 2;
        }
        val1 = val1 + 2;
        printf("\n");
    }
    return 0;
}


//   1
//  135
// 13579 