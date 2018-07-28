#include "binRecRead.h"

int binLoad(char* fileName, char* pointer, int size)
{
    FILE* fp;
    if ((fp = fopen(fileName, "rb")) == NULL)
    {
        perror("Error with opening file.");
        return 1;
    }  
    int i;
    while ((i = getc(fp)) != EOF)
    {
        *pointer++ = i;
    }
    fclose(fp);
    return 0;
     
}
int binWrite(char* fileName, char* pointer, int size)
{
    FILE* fp;
    if ((fp = fopen(fileName, "wb")) == NULL)
    {
        perror("Error with opening file.");
        return 0;
    }
    
    for (int i = 0; i < size; i++)
    {
        putc(*pointer++, fp);
    }
    fclose(fp);
    return 1;
}