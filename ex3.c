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

    printf("chaine: %s\n", arg);

    
    int i;
    int lenghtArg=0;
    for(i=0;arg[i]!='\0';i++)
    {
        lenghtArg++;
    }


    int tailleArbre = lenghtArg;
    int espace = tailleArbre-1;
    int j,u;
    int var_incr_tree=1;
    int Pos_chaine=0;
    int Pos_chaine2=0;

    for(i=0;i<lenghtArg;i++)
    {
    Pos_chaine =0; 
    Pos_chaine2 =i;   

    
        for(j=0;j<espace;j++)
        {
            printf(" ");
        }
        for(u=0;u<var_incr_tree;u++)
        {
        
            if (u<(var_incr_tree/2))
            {
                printf("%c",arg[Pos_chaine2]);
                Pos_chaine2--;
                if (Pos_chaine2 < 0)
                    Pos_chaine2 =lenghtArg;
            }
            else
            {
                printf("%c",arg[Pos_chaine]);
                Pos_chaine++;
                if (Pos_chaine > (lenghtArg-1))
                    Pos_chaine =0;
            }
            
              
        }
        espace--;
        printf("\n");
        var_incr_tree += 2;
    }

    
    return 0;
}

