#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("samplefile2.txt","r");

    //*******Reading a file*******
    //There are 3 ways to read a file 
      // fgetc
      // fgets
      // fscanf

    char ch;
    while(!feof(fp))
    {
        ch=getc(fp);
        printf("%c",ch);
    }
    
    //Another way
    // char s[150];
    // fgets(s,100,fp);
    // printf("%s",s);

    fclose(fp);
}