#include<stdio.h>

int gcd_iterative(int a, int b)
{
    int temp;

    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int gcd_recursive(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        gcd_recursive(b,a%b);
    }
}

int main(void)
{
    int a;
    int b;
    printf("Please enter a positive number a: \n");
    scanf("%d", &a);
    while(a<=0) {
        printf("This number is not positive, Please try again:\n");
        printf("Please enter a positive integer a:/");
        scanf("%d", &a);
    }

    printf("Please enter a positive number b: \n");
    scanf("%d", &b);
    while(b<=0) {
        printf(" This number is not positive, Please try again:\n");
        printf("Please enter a positive integer a:/");
        scanf("%d", &b);
    }

    int ans_r = gcd_recursive(a,b);
    int ans_i = gcd_iterative(a,b);
    printf("Using iteration, we get the answer: %d\n",ans_i);
    printf("Using recursion, we get the answer: %d/n",ans_r);

    return 0;
}