/*
-the source code plasma 0.0.1(alpha).
-the program is still indevelopment and 
 does not have commands yet.
-check the readme file file for more informations.

-copyrighted by plasma devteam and Dandev(DANILAO1)
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {

    char command[100];
    bool run = 1;

    printf("\n\n\n#################################################\n");
    printf("                    -plasma-                     \n");
    printf("                   =v 0.0.1a=                    \n");
    printf("#################################################\n\n\n");

    while(run) {
        printf("user/:>");
        fgets(command, 100, stdin);
        command[strlen(command)-1] = '\0';

        if (strcmp(command, "quit") == 0) {
            run = 0;
        }

        else if(strcmp(command, "help")==0) {
            printf("working commands:\nquit (exits from plasma)\nversion (tells the version of plasma)\n");
        }
        else if (strcmp(command, "version") == 0) {
            printf("plasma version\n0.0.1 alpha\n");
        }
        else {
            printf("command \"%s\" is unknown!\n", command);
        }
    }

    return 0;
}