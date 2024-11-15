#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    switch(ch)
    {
        case 'A':
        case 'U':
        case 'E':
        case 'I':
        case 'O':
        case 'a':
        case 'e':
        case 'o':
        case 'i':
        case 'u':
            printf("VOWEL");
            break;
        default:
            printf("CONSONANT");
            break;                                    
    }
    return 0;
}