// Program to check whether the number is a Pronic Number or not.
// Eg :- 6 = 4*5 : since it is a product of two consecutive number then it is a Pronic Number.
// Eg :- 15 = 5*3 : since it is not a product of two consecutive number then it is not a Pronic Number.

#include <stdio.h>
int main()
{
    int num, chkNum = 0, flag = -1;

    printf("\nEnter any number :: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        chkNum = i * (i + 1);
        if (chkNum == num)
        {
            flag = 999;
            break;
        }
    }

    if (flag == -1)
        printf("\nThe Number %d is not a Pronic Number.", num);

    else
        printf("\nThe Number %d is a Pronic Number.", num);
}
