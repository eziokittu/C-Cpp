// Question : 16
// A character is entered through keyboard. Write a
// C program to determine whether the character entered
// is a capital letter, a small case letter, a digit, or
// a speacial symbol.
// Characters ------------- ASCII values
//   A - Z    -------------   65 - 90
//   a - z    -------------   97 - 122
//   0 - 9    -------------   48 - 57
// special symbols  ---- 0-47, 58-64, 91-96, 123-127

# include <stdio.h>

void CheckCharacter(char c)
{
    if ((c >= 65) && (c <= 90))
        printf("'%c' is a capital letter", c);
    else if ((c >= 97) && (c <= 122))
        printf("'%c' is a small case letter", c);
    else if ((c >= 48) && (c <= 57))
        printf("'%c' is a number", c);
    else
        printf("'%c' is a special symbol", c);
}

int main()
{
    char c;
    printf("Enter any character : ");
    scanf("%c", &c);

    CheckCharacter(c);

    return 0;
}