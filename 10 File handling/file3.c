#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("samplefile3.txt","w");
    
    //*******Writing to a file*******
      //There are 3 ways to write to a file 
      // fprintf
      // fputs
      // fputc
    
    char ch='a';
    fputc(ch,fp);
    
    char str[96]="\nThis is file handling";
    fputs(str,fp);

    int x=108;
    char s[120]="Through this we can write both integer and character";
    fprintf(fp,"%d %s",x,s);

    fclose(fp);
}