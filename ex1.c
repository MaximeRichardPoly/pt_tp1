#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *get_first_arg(int argc, char *argv[])
{
    if (argc <2)
    {
        printf("no argument\n\n");
        exit(0);
    }
    return (argv[1]);
}

int main(int argc, char *argv[])
{
    char *arg = get_first_arg(argc, argv);
    int len;
    printf("chai: %s \n\n", arg);
    len = strlen(arg);

    int i;
    int lenghtArg=0;
    for(i=0;arg[i]!='\0';i++)
    {
        lenghtArg++;
    }

    
    
    printf("La logueur de la chaine est : %d\n",lenghtArg);

    return 0;
}

