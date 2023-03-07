//RECURSION CONCEPT

int main()
{
solve(3);
return 0;
}
void solve(int x)
{
    if(x==0)
{
    printf("%d",x);
    return;
}
printf("%d",x);
solve(x-1);
printf("%d",x);
}


//RECURSION SAMPLE 2
int g;
main()
{
    test();
}
test()
{
    int l;
    static int s;
    l=++s;
      ++g;
    printf("%d %d %d \n",l,s,g);
    if(l<=2)
    
{
test();
}
printf("%d %d %d \n",l,s,g);
}
