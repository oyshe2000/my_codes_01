#include<stdio.h>

int sumFun(int a, int b){
    return a+b;
}

int main()
{
/*  int a,b;
    printf("ENTER TWO NUMBERS\n");
    scanf("%d %d",&a,&b);
    int sum;
    sum = a+b;
    printf("sum is : %d\n",sum);  */

    int c,d,sum;
    printf("ENTER TWO NUMBERS\n");
    scanf("%d %d",&c,&d);
    sum = sumFun(c,d);
    printf("sum of %d and %d  = %d\n",c,d,sum);


    return 0;
}
