//write a program to find out minimum, maximum, sumand average of N numbers without using array.
#include<stdio.h>
int main()
{
    int num,limit,sum=0,temp;
    float avg;
    printf("Enter the limit\n");
    scanf("%d",&limit);
    temp=limit;
    printf("Enter %d numbers :\n",limit);
    while(limit)
    {
        scanf("%d",&num);
        sum = sum+num;
        limit--;
    }
    avg = sum / (float)temp;
    printf("sum = %d\n",sum);
    printf("Average = %f\n",avg);
    return 0;
}