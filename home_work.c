#include <stdio.h>

void tree_loop(char line[], int i, int pos, char sign)
{
    for(i; i<pos; i++)
    {
        line[i] = sign;
    }
}

void christmas_tree(int n)
{
    unsigned int width = 2*n - 1;
    unsigned int spaces = (n*2 - 2)/2;
    char line[width+1];
    line[width] = '\0';

    for(int i = 0; i<n; i++)
    {   
        tree_loop(line, 0, spaces, ' ');
        tree_loop(line, spaces, (width - spaces), '*');
        tree_loop(line, (width - spaces), width, ' ');
        
        spaces -= 1;
        printf("%s\n", line);
    }
}

void right_triangle(int n)
{
    char line[n+1];
    line[n] = '\0';

    for(int i = 1; i<n+1; i++)
    {   
        tree_loop(line, 0, i, '*');
        tree_loop(line, i, n, ' ');

        printf("%s\n", line);
    }
}


void triangle(int n)
{
    if(n%2 == 0)
    {   
        char line[(n/2)+1];
        line[n/2] = '\0';

        for(int i = 1; i<(n/2)+1; i++)
        {   
            tree_loop(line, 0, i, '*');
            tree_loop(line, i, (n/2), ' ');
            printf("%s\n", line);
        }
        printf("%s\n", line);
        for(int i = (n/2)-1; i>0; i--)
        {
            line[i] = ' ';
            printf("%s\n", line);
        }
    }

    else
    {
        char line[n/2+2];
        line[n/2+1] = '\0';

        for(int i = 1; i<(n/2)+2; i++)
        {
            tree_loop(line, 0, i, '*');
            printf("%s\n", line);
        }
        for(int i = (n/2); i>0; i--)
        {
            line[i] = ' ';
            printf("%s\n", line);
        }
        
    }
}

void square(int n)
{
    char line[n+1];
    line[n] = '\0';

    tree_loop(line, 0, n, '*');
    for(int i = 0; i<n; i++)
    {
        printf("%s\n", line);
    }
}

int main()
{   
    printf("%s\n", "Choose figure:");
    printf("%s\n", "1 - christmas tree");
    printf("%s\n", "2 - right triangle");
    printf("%s\n", "3 - triangle");
    printf("%s\n", "4 - square");

    short figure;
    scanf("%d", &figure);

    if(figure == 1)
    {   
        printf("%s\n", "Enter height:");
        unsigned int n;
        scanf("%d", &n);
        
        christmas_tree(n);
    }
    
    else if(figure == 2)
    {
        printf("%s\n", "Enter height:");
        unsigned int n;
        scanf("%d", &n);

        right_triangle(n);
    }

    else if(figure == 3)
    {
        printf("%s\n", "Enter height:");
        unsigned int n;
        scanf("%d", &n);

        triangle(n);
    }

    else
    {
        printf("%s\n", "Enter size");
        unsigned int n;
        scanf("%d", &n);

        square(n);
    }
    return 0;
}