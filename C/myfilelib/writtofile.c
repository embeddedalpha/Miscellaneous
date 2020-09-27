#include "writtofile.h"




void Write_to_file(char *data, int data_len, char *filename, int filename_len)
{
    FILE *file = fopen(filename,"w");
    if(file == NULL)
    {
        printf("An error occured while opening the file\n");
    }
    else
    {
        printf("The file is opened to be written \n");\
        fputs(data, file);
        fputs("\n", file);
        fclose(file);
        printf("The file is written \n "); 
    }
    
}
