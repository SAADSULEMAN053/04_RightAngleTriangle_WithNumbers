#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Numberofrows;
    printf("Enter the number of rows: ");
    scanf("%d",&Numberofrows);
    printf("\n");
    for(int i=1;i<=Numberofrows;i++) // i hear is iterator for no. of row
        {
            for(int j=1;j<=i;j++) // j is for printing the amount of numbers
                {
                    printf("%d ",j); // j will be incremented so the printed digit will vary according to the increment
                }
            printf("\n");
        }
    return 0;
}
