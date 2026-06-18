#include <stdio.h>

void reverseArray(int ary[], int n)
{
    int temp;

    for(int i = 0; i < n/2; i++)
    {
        temp = ary[i];
        ary[i] = ary[n-1-i];
        ary[n-1-i] = temp;
    }
}

int main()
{
    int n;

    printf("Input n = ");
    scanf("%d", &n);

    int ary[n];

    for(int i = 0; i < n; i++)
    {
        printf("ary[%d] = ", i);
        scanf("%d", &ary[i]);
    }

    reverseArray(ary, n);

    printf("Reverse array:\n");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", ary[i]);
    }

    return 0;
}
