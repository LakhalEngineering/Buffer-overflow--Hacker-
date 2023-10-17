#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define buffer_size 10

char buffer[buffer_size] = "message";
char password[buffer_size] = "password";

int main(int argc,char **argv){

    while(argc != 3){

        printf("usage : %s <password> <string_to_print>\n", argv[0]);
        exit(1);
    }

    strcpy(buffer, argv[2]);
    if(strcmp(argv[1],password) == 0){
        printf("password checks out\n");
        printf("MSG: %s\n",buffer);
    }else
    {
        printf("password error !!\n");
    }
    return 0;
}