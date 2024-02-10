#include <stdio.h>
int main()
{
    FILE *inputFILE;
    FILE *outputFILE;
    inputFILE = fopen("input.txt", "r");
    if (inputFILE == NULL)
    {
        printf("File does not found.");
        return 0;
    }
    outputFILE = fopen("output.txt", "w");

    int n;
    fscanf(inputFILE, "%d", &n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        fscanf(inputFILE, "%d", &a);
        sum += a;
    }
    fprintf(outputFILE, "sum -> %d", sum);
    fclose(inputFILE);
    fclose(outputFILE);
}