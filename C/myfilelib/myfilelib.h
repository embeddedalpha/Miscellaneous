#ifndef _writetofile_h_
#define _writetofile_h_

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void Write_to_file(char *data, char *filename);
void Duplicate_Files(char *file_1_name,char *file_2_name);
char * Read_File(char *filename);
void Create_File(char *filename);
void ListallFilesindir(char *direct);

#endif
