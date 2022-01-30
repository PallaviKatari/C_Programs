#include<stdio.h>
int main()
{
    int i, j,num, lar,sm, elem,n;
    printf ("\nEnter looping process \n");
    scanf ("%d", &n);
    for(i=0;i<n;i++)
    {
    printf ("\nEnter total number of elements num\n");
    scanf ("%d", &elem);
    printf ("\nEnter first number num\n");
    scanf ("%d", &num); //6
    lar = num; //6
    sm=num; //6
    for (j=1; j<= elem -1 ; j++)
    {
        printf ("\n Enter another number num\n");
        scanf ("%d",&num);
        if (num>lar) //8>6
        lar=num;//8
        if (num<sm) //8<3
        sm=num; //2
    }
    printf ("\n The largest number is %d\n", lar);
    printf ("\n The smallest number is %d\n", sm);
    }
    return 0;
}
