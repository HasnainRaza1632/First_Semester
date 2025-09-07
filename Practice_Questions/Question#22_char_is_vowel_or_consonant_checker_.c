#include <stdio.h>
#define a 'a'
#define A 'A'
#define e 'e'
#define E 'E'
#define I 'I'
#define i 'i'
#define O 'O'
#define o 'o'
#define u 'u'
#define U 'U'
int main()
{

    char input_char;
    printf("Enter character:");
    scanf("%c", &input_char);

    if (input_char == a || input_char == A || input_char == e || input_char == E || input_char == i || input_char == I || input_char == o || input_char == O || input_char == u || input_char == U)
    {

        printf("%c is Vowel", input_char);
    }
    else
        printf("%c is consonant", input_char);

    return 0;
}