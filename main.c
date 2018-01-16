

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char inst [100];                    //holds instruction
        char *user= getenv("USER"), *pwd = getenv("PWD");

        do {
                printf("%s :: %s => ", user, pwd);           //display

                do {                            // loop reads characters separated by spaces
                        scanf( "%s", inst);
                        printf("inst: %s\n", inst);   //checking TODO remove


                } while ('\n' != getchar());    //until '\n' is reached


        }while (strncmp(inst, "exit", 4) != 0);//until "exit" is read in

    return 0;
}
