// بسم الله الرحمن الرحيم

/*
* Displays instructions for moving n disks from from_peg to to_peg using
* aux_peg as an auxiliary. Disks are numbered 1 to n (smallest to
* largest). Instructions call for moving one disk at a time and never
* require placing a larger disk on top of a smaller one.
*/

# include <stdio.h>

void tower(char from_peg, /* input - characters naming */
           char to_peg,   /* the problem's */
           char aux_peg,  /* three pegs */
           int n)
/* input - number of disks to move */
{
    if (n == 1)
    {
        printf("Move disk 1 from peg %c to peg %c\n", from_peg, to_peg);
    }
    else
    {
        tower(from_peg, aux_peg, to_peg, n - 1);
        printf("Move disk %d from peg %c to peg %c\n", n, from_peg, to_peg);
        tower(aux_peg, to_peg, from_peg, n - 1);
    }
}

int main(void){
    tower('A', 'C', 'B', 3);
    // tower('A', 'C', 'B', 5);
}