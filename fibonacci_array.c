#include<stdio.h>
int main(){
int n;
char ans;
restart:
printf("Enter the number of terms required: \n");
scanf("%d",&n);
long int ar[n];
ar[0]=0;
ar[1]=1;
for(int i=2;i<n;i++)
ar[i]=ar[i-1]+ar[i-2];
for(int i=0;i<n;i++){
printf("%ld  ",ar[i]);
if((i+1)%5==0)
    printf("\n");
}
printf("\nDo you want to run the program again?\nEnter Y to continue, N to exit\t");
scanf("%s",&ans);
if((ans=='y')||(ans=='Y'))
    goto restart;
return 0;
}
