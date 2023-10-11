#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void convertCase(FILE *fptr, const char *path);

int main(){
    FILE *fPtr = NULL;
    char path[100];
    printf("Enter path of source file: ");
    scanf("%s", path);
    fPtr = fopen(path, "r");

     
    if (fPtr == NULL)
    {
        printf("\nUnable to open file.\n");
        printf("Please check whether file exists and you have read privilege.\n");
        exit(EXIT_FAILURE);
    }

    convertCase(fPtr, path);

    return 0;
}

void convertCase(FILE *fptr, const char *path)
{
    FILE *dest = NULL;
    char ch = '\0';
    dest = fopen("temp.txt", "w");
    if (dest == NULL)
    {
        printf("Unable to create temporary file.");
        fclose(fptr);
        exit(EXIT_FAILURE);
    }
    while ( (ch = fgetc(fptr)) != EOF){
        if (isupper(ch))
         	;
        else if (islower(ch))
            ch = toupper(ch);
        fputc(ch, dest);
    }

    fclose(fptr);
    fclose(dest);

    /* Delete original source file */
    remove(path);

    /* Rename temporary file as original file */
    rename("temp.txt", path);
}

