#include <stdio.h>
void fac(int a)
{
    printf("%d" ,a);
    fac(a+1);
}
int main()
{
    fac(1);
    return 0;
}