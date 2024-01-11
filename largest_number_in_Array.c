#include <stdio.h>
int main()
{

    int size;
    printf("enter the size of the array : ");
    scanf("%d", &size);
    int arr[size]; // declaraing an array of size input by the user
    printf("Enter the array elements : \n");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]); // taking numbers as array elements
    }

    printf("\nArray elements are : \n");
    for (int j = 0; j < size; j++)
    {
        printf(" %d", arr[j]); // printing the array elements
    }

    int largest = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i]; // finding the largest number in the array
        }
    }
    printf("\nthe largest number in the array  is : %d", largest);
}
