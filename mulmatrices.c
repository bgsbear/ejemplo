//Laura Liliana Esquibel Prudencio
#include<stdio.h>
#include<conio.h>
int main ()
{
    int a[10][10], b[10][10], ab[10][10];
    int i, j, k, f, co, f2, co2;
    printf ("Cuantas filas quieres en la primer matriz? ");
    scanf ("%i", & f);
    printf ("Cuantas columnas quieres en la primer matriz? ");
    scanf ("%i", & co);
    f2=co;
    printf ("Para que la multiplicacion pueda ejecutarse se va a tomar el numero de columnas de la primer matriz para que sea el numero de filas de la segunda matriz.\nCuantas columnas quieres que tenga la segunda matriz? ");
    scanf ("%i", & co2);
    printf ("Escribe los valores de la matriz a:\n");
    for (i=0;i<f;i++)
    {
        for(j=0;j<co;j++)
        {
            printf ("a(%i,%i): ", i+1, j+1);
            scanf ("%i", & a[i][j]);
        }
    }
    printf ("Escribe los valores de la matriz b:\n");
    for (i=0;i<f2;i++)
    {
        for(j=0;j<co2;j++)
        { 
            printf ("b(%i,%i)", i+1, j+1);
            scanf ("%i", & b[i][j]);
        }
    }
    for (i=0;i<f;i++)
    {
        for(j=0;j<co;j++)
        {
            ab[i][j]=0;
            for(k=0;k<co2;k++)
            {
                ab[i][j]+=a[i][k]*b[k][j];         
            }
        }
    }
    printf("La matriz resultante es:\n");
    for (i=0;i<f;i++) 
    {
        for (j=0;j<co2;j++) 
        {
            printf("ab(%i,%i)=%i ", i + 1, j + 1, ab[i][j]);
        }
    }
    getch ();
    return 0;
}