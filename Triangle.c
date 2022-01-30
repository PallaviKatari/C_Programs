#include <stdio.h>
void main()
{
   int i,j,rows,k=1;
   printf("Input number of rows : ");
   scanf("%d",&rows);
   for(i=1;i<=rows;i++) //4<=3
   {
	for(j=1;j<=i;j++) // 1<=3 2<=3 3<=3 4<=3
	   printf("*");
	printf("\n");
   }
   for(i=1;i<=rows;i++)//3<=3
   {
	for(j=1;j<=i;j++)//1<=3 2<=3 3<=3
	   printf("%d",j);//1 2 2 3 3 3
	printf("\n");
   }
   for(i=1;i<=rows;i++)
   {
	for(j=1;j<=i;j++)
	   printf("%d",i);
	printf("\n");
   }
   for(i=1;i<=rows;i++) //3<=3
   {
	for(j=1;j<=i;j++) //1<=3 2<=3  3<=3
	   printf("%d ",k++); // 1  2  3 4 5 6
	printf("\n");
   }
}
