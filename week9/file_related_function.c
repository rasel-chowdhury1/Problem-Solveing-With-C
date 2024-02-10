#include <stdio.h>
int main()
{
    FILE *inputFILE;
    inputFILE = fopen("input.txt", "r");
    if (inputFILE == NULL)
    {
        printf("No file found\n");
        return 0;
    }

    FILE *outputFILE;
    outputFILE = fopen("output.txt", "w");

    while (1)
    {
        char ch = fgetc(inputFILE);
        if (ch == EOF)
        {
            break;
        }
        fputc(ch, outputFILE);
    }
    fclose(inputFILE);
    fclose(outputFILE);
}