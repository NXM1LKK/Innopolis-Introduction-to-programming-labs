#include <stdio.h>
#include <string.h>

int main()
{
    char str[99];
    char rev[99];

    scanf("%s", str);
    int len = strlen(str);

    for (int i = 0; i<len; i++){
        rev[i] = str[len-1-i];
    }

    printf("%s", rev);

    return 0;
}