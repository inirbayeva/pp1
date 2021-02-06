#include<stdio.h>
void print_fact(int n)
{
    if (n==1)
        return ;
    int sum = 2;
    while (n%sum != 0)
        sum++;
    printf ( "%d",sum );
    print_fact ( n/sum );

}
int main (){
    int n;
    printf( "please insert a number \n" );
    scanf( "%d",&n );
    print_fact(n);
}
