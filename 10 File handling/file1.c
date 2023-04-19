#include<stdio.h>
int main()
{
    //fopen()    Create a new file or open an existing file
    //fclose()   Closing a file
    //fprintf()  To write to a file
    //fscanf()   To read a file
    //fputs      To write 
    //fgets      To read
    //There are a lot of functions.

    //Files- 1)text file(.txt)  2)binary file(.bin)

    //r Open the file for reading only               r------read mode
    //w Open the file for writing only               w------write mode
    //a Open the file for adding data to it          a------append mode
    //r+ Open existing file for both read and write
    //w+ Same as w but both reading and writing
    //a+ Same as a but both reading and writing
    
    //Same is for binary files, only we need to add b with these modes
    // Ex-   Instead of "r"  we write "rb"
    //       Instead of "w+" we write "wb+"   and so on.    


    //general syntax
    FILE *fp;
    fp=fopen("file_name.txt","r");      
    if(fp==NULL)
    {
        printf("File not found");
        exit(1);
    }
    
    fclose(fp);                          //when opened it must be closed
}