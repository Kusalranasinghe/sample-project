#include <stdio.h>
#include <stdlib.h>

int InputNumbers(int arr[], int size);
int CalculateTotal(int arr[], int size);
int CalculateAverage(int arr[], int size);

int main()
{
    int numbers[5];
    int choice;

    do
    {
        printf("------- Data Analyst-------\n");
        printf("1. Enter Inputs: \n");
        printf("2. Total\n");
        printf("3. Average\n");
        printf("4. Highest Number\n");
        printf("5. Lowest Number\n");
        printf("6. Search a Number\n");
        printf("7. Reverse\n");
        printf("8. Multiple by 3\n");
        printf("9. Divides by 3\n\n");

        printf("Enter your choice : ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            InputNumbers(numbers,5);
            break;

        case 2:
            CalculateTotal(numbers,5);
            break;

        case 3:
            CalculateAverage(numbers,5);
            break;
        }

    }
    while(choice !=5);

    return 0;
}

int InputNumbers(int arr[], int size)
{
    for(int i=0; i<5; i++)
    {
        printf("Enter number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    return 0;
}

int CalculateTotal(int arr[], int size)
{
    int sum =0;
    for(int i=0; i<5; i++)
    {
        sum += arr[i];

    }
    printf("Sum = %d\n\n",sum);

    return 0;
}

int CalculateAverage(int arr[], int size)
{
    int sum =0;
    float average;
    for(int i=0; i<5; i++)
    {
        sum += arr[i];
        average = sum/5;

    }
    printf("Average = %.2f\n\n",average);

    return 0;
}

