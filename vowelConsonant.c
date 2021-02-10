//to check if the entered character is a vowel or consonant
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void checkAlpha(char);
void main()
{
    char c;
    printf("enter your character");
    scanf("%c",&c);
    checkAlpha(c);
    getch();
}
void checkAlpha(char c)
{
    if (isalpha(c)>0)
    {
        switch(c)
        {
            case 'a':
            case 'e':
            case'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case'I':
            case 'O':
            case 'U':
                printf("it is a vowel");
                break;
            default:
                printf("it is a consonant");
                break;
        }
    }
    else
    {
        printf("the entered character is not an alphabet");
    }
}
