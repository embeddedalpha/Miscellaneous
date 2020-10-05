# A handy and easy-to-use library for handling files related tasks.

### Functions included in the library are:

```C
void Write_to_file(char *data, char *filename);
void Duplicate_Files(char *file_1_name,char *file_2_name);
char * Read_File(char *filename);
void ListallFilesindir(char *direct);
```

### Examples on each functions:-

#### Write_to_file : This function as name suggests writes user data into a file. The function takes the data to be written and the name of the file as the parameters.
```C

char data[100] = "Hello my name is John \n";
Write_to_file(data, "file.txt");

```

#### Duplicate_Files : This function duplicates a file or simply copies the data from one file into an another file. The function takes the name of the file to be copied from and the name file the data is to be written to.

```C
Duplicate_Files("file1.txt","file2.txt");
```

#### Read_File: This function reads a file, and returns a pointer where the data is stored in the memory. So the user can use the pointer to access the data. This function takes the name of the file to be read.

```C
char *data;
data = Read_File("file.txt");
puts(data);
```

#### Create_File: This function creates a file with the name passed as the parametere.

```C
Create_File("John Doe.txt");
```

#### ListallFilesindir: This funcrion lists all the files in a directory. Function takes the name of directory as a parameter.

```C
ListallFilesindir(".");
```
#### Remove_Stuff_from_File: This function deletes a particular character from a file. Function takes 3 arguments, file1_name: name of file from which the character has to be removed, file2_name: name of the file where the newly formed data is supposed to be saved, the name of the file can be the same as file1_name, and character: the character to be deleted. The user is excepted to go through the ASCII table and pass the appropriate decimal equivalent of the character to be deleted.

```C
Remove_Stuff_from_File("Array.txt", "Array.txt", 10) //This function removes all the new lines from the file
```
