#include <stdio.h>
int main()
{
    int x[2][3][2] =
        {
            {{0, 1}, {2, 3}, {4, 5}},
            {{6, 7}, {8, 9}, {10, 11}}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("Element at x[%d][%d][%d]=%d", i, j, k, x[i][j][k]);
                ;
                printf("\n");
            }
        }
    }
    return 0;
}
