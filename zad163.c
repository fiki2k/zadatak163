// Program polju pointera treba pridodat vrijednost.

#include <stdio.h>

int main()
{
    
    int a,b,c;

    /* kreiramo polje pointera da spremimo vrijednosti. */
    int *ptr[3];

    /*dodjelimo adrese svih varijabli na ptr. */
    ptr[0]= &a;
    ptr[1]= &b;
    ptr[2]= &c;

    
    a=100;
    b=200;
    c=300;

    /*ispis vrijednosti. */
    printf("\tVrijednost od \ta: %d \tb: %d \tc: %d\n",*ptr[0],*ptr[1],*ptr[2]);

    /*dodjeli 10 svim vrijednostima ptr. */
    *ptr[0] +=10;
    *ptr[1] +=10;
    *ptr[2] +=10;
    printf("\n\tNakon dodjeljivanja 10 \n\n");
    printf("\tVrijednost od \ta: %d \tb: %d \tc: %d\n",*ptr[0],*ptr[1],*ptr[2]);

    return 0;
}
