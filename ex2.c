#include <stdio.h>
#include <stdlib.h>

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

    printf("chaine: %s \n\n", arg);

    int i;
    int lenghtArg=0;
    int retour;
    for(i=0;arg[i]!='\0';i++)
    {
        lenghtArg++;
    }
    retour = 0;
    for(i=0;i<lenghtArg;i++)
    {
        if (arg[i]!=arg[lenghtArg-i-1])
        {
            printf("%c-",arg[i]);
            printf("%c\n",arg[lenghtArg-i-1]);
            retour = 1;
        }
    }
    return retour;
}

