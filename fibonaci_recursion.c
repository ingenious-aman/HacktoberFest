//this is program to print the fibonacci series using recursion
#include<stdio.h>
long int fibo(int n){
if(n==1)
return 0;
else if(n==2)
return 1;
else
return fibo(n-1)+fibo(n-2);


}

int main(){
    int num;
    char ans;
restart:


printf("Enter the number of terms needed :\t");
scanf("%d",&num);
for(int i=1;i<=num;i++){
printf("%ld\t",fibo(i));
if(i%5==0)
printf("\n");
}
printf("Do you want to run the program again?\nEnter Y to continue, N to exit\t");
scanf("%s",&ans);
if((ans=='y')||(ans=='Y'))
    goto restart;
return 0;
}
