#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char s[1005];

    fgets(s, sizeof(s), stdin);
    int len = strlen(s);

    for (int i = 0; i <= len; i++)
    {
        if (s[i] == ' ')
        {
            printf("\n");
        }
        else
        {
            printf("%c", s[i]);
        }
    }

    return 0;
}

/*
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    fgets(s, sizeof(s), stdin);
    s = realloc(s, strlen(s) + 1);
    for (char *c = s; *c != NULL; c++) {
    if (*c == ' ') {
        *c = '\n';
    }
}
printf("%s", s);
    return 0;
}
*/