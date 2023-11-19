#include <stdio.h>

int main(void)
{
    char first[20], last[20];

    printf("enter your first name ");
    scanf("%s", &first);
    printf("enter your last name ");
    scanf("%s", &last);
    printf("hello, %s %s\n", first, last);

    return 0;
}