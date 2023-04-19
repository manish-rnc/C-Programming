//Program to calculate the number of characters, lines and spaces present in a file

#include <stdio.h>
int main()
{
    FILE *fp;
    char filename[50];
    printf("Enter file name: ");
    scanf("%s", filename);
    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("Could not open file %s", filename);
        return 0;
    }
  
    char ch; 
    int line = 0, space=0, charac=0;
    while((ch=fgetc(fp))!=EOF)
    {
        if (ch=='\n')
            line++;
        else if(ch==' ')
            space++;   
        else
            charac++;     
    }

    fclose(fp);
    printf("\nThe file %s has %d lines\n", filename,line+1);
    printf("The file %s has %d spaces\n", filename,space);
    printf("The file %s has %d characters\n\n", filename,charac);
    return 0;
} 
