# C-program
//Recursion program-C
#include <stdio.h>

main()
{
test();
}

test()
{
     int l=1;
     static int s;
    l=++s;
    printf("%d %d \n",l,s);
    if(l<=2)
    {
        test();
        
    }
    printf("%d %d \n",l,s);
}
