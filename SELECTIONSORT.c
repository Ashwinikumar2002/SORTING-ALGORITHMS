#include<stdio.h>
int main()
{
 int i,j,count, temp,number[25];
 printf("How many numbers are you going to enter?-");
 scanf("%d",&count);
 printf("Please enter the %d elements:", count);
 for(i=0;i<count;i++)
 {
 scanf("%d",&number[i]);
ASHWINI KUMAR
1906171
CSL3401 LAB
BTECH-CSE
 }
 for(i=0;i<count;i++)
 {
 for(j=i+1;j<count;j++)
 {
 if(number[i]>number[j])
 {
 temp= number[i];
 number[i]=number[j];
 number[j]=temp;
 }
 }
 }
 printf("Sorted Elements are:");
 for(i=0;i<count;i++)
 {
 printf("%d\t",number[i]);
 }
 return 0;
}