#include <stdio.h>
#include <stdlib.h>

int SearchValue(int arr[], int size);

int main()
{
    int numbers[5]={10,20,30,40,50};

    SearchValue(numbers,5);

    return 0;
}

int SearchValue(int arr[], int size)
{
    int value;
    printf("Enter a number : ");
    scanf("%d",&value);

    for(int i=0; i<5; i++)
    {
        if(value == arr[i])
        {
            printf("%d is in the array",value);
            return 0;
        }


    }
    printf("%d is not in the array.",value);
    return 0;
}
