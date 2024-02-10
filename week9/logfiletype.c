#include <stdio.h>
int main()
{
    FILE *logfile;
    logfile = fopen("logfile.txt", "a");
    FILE *inputfile;
    inputfile = fopen("nofile.txt", "r");
    if (inputfile == NULL)
    {
        fprintf(logfile, "Input file not found at 0.02 o'clock\n");
    }
    fclose(logfile);
    fclose(inputfile);
    return 0;
}