#include "myfilelib.h"




void Write_to_file(char *data, char *filename)
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

void Duplicate(char *file_1_name,char *file_2_name)
{
    char c[1000];
    FILE *file2readfrom = fopen(file_1_name,"r");
    FILE *file2write = fopen(file_2_name,"w");
    fgets(c,1000,file2readfrom);
    Write_to_file(c,file_2_name);

}
