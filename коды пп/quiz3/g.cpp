#include<stdio.h>
void print_fact(int n){
    if (n==1)
        return;
    int f=2;
    while (n%f != 0)
        f++;
    printf("%d",f);
    print_fact (n/f);

} int main ()
{
    int n;
    printf("please insert a number \n");
    scanf("%d",&n);
    print_fact(n);
}
