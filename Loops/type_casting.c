#include <stdio.h>
#include <math.h>
int main()
{
    int i = 65;
    while (i <= 90)
    {
        char ch = (char)i;
        printf("%c %d\n", ch, i);
        i++;
    }
    return 0;
}
