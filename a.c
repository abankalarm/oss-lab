#include <stdio.h>
int main()
{
    char ch;
    FILE *fpr, *fpw;
    fpr = fopen("file1.txt", "r");
    if (fpr == NULL)
    {
         puts("Input file cannot be opened");
    }

    fpw= fopen("file2.txt", "w");
    if (fpw == NULL)
    {
       puts("Output file cannot be opened");
    }
    while(1)
    {
        ch = fgetc(fpr);
        if (ch==EOF)
            break;
        else
            fputc(ch, fpw);
    }
    fclose(fpr);
    fclose(fpw);

    return 0;
}
