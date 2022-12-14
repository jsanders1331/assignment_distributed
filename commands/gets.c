#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <unistd.h>
#include <limits.h>
#include <sys/utsname.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>
#include <errno.h>
#include <libgen.h>
//

#include "gets.h"

int my_gets(char *file) // reads in a file with a buffer
{
    
    char source[41]; // buffer 
    FILE *fptr = fopen(file, "r");
    char filename[1024], c; 
    if (fptr == NULL)
    {
        printf("Error opening file\n");
        return -1; //false
    }
    while(true){

        size_t chars_read = fread(source, sizeof(char), 40, fptr); // Read each 
        // if less than 40, reached end of file
        source[41] = '\0';
        printf("%s",source);
        if(chars_read != 40){ // if we have gone over buffer size
            printf("%s", "\n");
            break;
        }
        bzero(source,41);
        char c;
        scanf("%c",&c); // simulate if any key is pressed
    }
    
    
    fclose(fptr);
    return 0;
}