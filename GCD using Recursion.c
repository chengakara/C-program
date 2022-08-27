//GCD OF 2 NUMBER USING RECURSION
int gcd(int a,int b);
main()
{
    int a,b,x;
    printf("enter the values for a,b");
    scanf("%d %d \n",&a,&b);
    x=gcd(a,b);
    printf("%d \n",x);
}
int gcd(int a,int b)
{
    if(a==b)
    return a;
    else if(a>b)
    gcd(a-b,b);
    else if(b>a)
    gcd(a,b-a);
}
