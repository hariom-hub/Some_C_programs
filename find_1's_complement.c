#include <stdio.h>
int main()
{
    int size;
    printf("\t\t\tenter the size of array : ");
    scanf("%d", &size);
    int arr[size];
    printf(" Enter array elements as 0 or 1 only : \n");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]); // taking input in 0's and 1's
    }
    printf("\nArray entered is  \n");
    for (int j = 0; j < size; j++)
    {
        printf(" %d", arr[j]); // printing the entered string of 0's and 1's
    }

    // complementing the 0's and 1's entered

    printf("\nOne's complement is  \n");

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
        {
            arr[i] = 0;
        }
        else if (arr[i] == 0)
        {
            arr[i] = 1;
        }
    }
    // printing 1's complement
    for (int i = 0; i < size; i++)
    {
        printf(" %d", arr[i]);
    }

    return 0;
}
