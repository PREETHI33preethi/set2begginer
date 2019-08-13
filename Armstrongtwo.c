is program is built on the concept of how to check whether an integer is an Armstrong number or not.

Example: Armstrong Numbers Between Two Integers
#include <stdio.h>
#include <math.h>
int main()
{
    int low, high, i, temp1, temp2, remainder, n = 0, result = 0;
    scanf("%d %d", &low, &high);
    printf("Armstrong numbers between %d an %d are: ", low, high);
    for(i = low + 1; i < high; ++i)
    {
        temp2 = i;
        temp1 = i;
        while (temp1 != 0)
        {
            temp1 /= 10;
            ++n;
        } 
        while (temp2 != 0)
        {
            remainder = temp2 % 10;
            result += pow(remainder, n);
            temp2 /= 10;
        }
        if (result == i) {
            printf("%d ", i);
        }
        n = 0;
        result = 0;
    }
    return 0;
}
