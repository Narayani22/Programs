// 1       2       3       4

// 5       6       7       8

// 9       10      11      12

#include <stdio.h>
void Pattern(int iRow, int iColumn)
{
    int iCount1 = 0, iCount2 = 0, iCount3 = 1;

    for (iCount1 = 0; iCount1 < iRow; iCount1++)
    {
        for (iCount2 = 0; iCount2 < iColumn; iCount2++)
        {
            printf("%d\t", iCount3);
            iCount3++;
        }
        printf("\n\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter Number Of Rows And Columns:\n");
    scanf("%d%d", &iValue1, &iValue2);
    Pattern(iValue1, iValue2);

    return 0;
}