#include "myfilelib.h"


char * fgets0(char *file, int max, FILE *fp)
{
    int c;
    char *p;

    for (p = file, max--; max > 0; max--) {
        if ((c = fgetc (fp)) == EOF)
            break;
        *p++ = c;
    }
    *p = 0;
    if (p == file || c == EOF)
        return NULL;
    return (p);
}

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

void Duplicate_Files(char *file_1_name,char *file_2_name)
{
    char c[1000];
    FILE *file2readfrom = fopen(file_1_name,"r");
    FILE *file2write = fopen(file_2_name,"w");
    fgets0(c,1000,file2readfrom);
    Write_to_file(c,file_2_name);

}

char * Read_File(char *filename)
{
    static char c[1000];
    FILE *file = fopen(filename,"r");
    fgets0(c,1000,file);
    return c;
}

void Create_File(char *filename)
{
    FILE *file = fopen(filename,"w");
}

void ListallFilesindir(char *direct)
{
    DIR *directory;
    struct dirent *dir;
    directory = opendir(direct);
    if(directory)
    {
        while ((dir = readdir(directory)) != NULL)
        {
            printf("%s \n", dir->d_name);
        }
        closedir(directory);
    }

}


void Remove_Stuff_from_File(char *file1_name, char *file2_name, int character)
{
    int newdata[10000],i;
    char *data;
    data = Read_File(file1_name);
    int length = strlen(data);
    while (i < length)
    {
        if((int)data[i] == character)
        {
            data[i] = 127;
        }
        newdata[i] = data[i];
        i++;
    }
    Write_to_file(newdata,file2_name);

}
