#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tamanio 20
#define num 120

int columna= tamanio-1,fila= tamanio-1;
int optima  = (tamanio*tamanio +1);
int iter;

void tablero(int arry[][tamanio])
{
    int j,i;
    for (j=0; j<tamanio; j++)
    {
        for (i=0; i<tamanio; i++)
        {arry[j][i] = 0;}
    }
}

void mostrar(int arry[][tamanio])
{
    int j,i;

    for (i=0; i<tamanio; i++)
    {
        for (j=0; j<tamanio; j++)
        {printf(" %2d |",arry[j][i]);}
        printf("\n\n");
    }
}

void visual(int arry[][tamanio])
{
    int i,j;
    for (i=0; i<tamanio*3+2; i++)
        printf("%c",205);
    printf("\n%c",186);
    for (i=0; i<tamanio; i++)
    {
        for (j=0; j<tamanio; j++)
        {
            if (arry[j][i] == -1)
                printf("%c%c%c",219,219,219);
            if (arry[j][i] == 0)
                printf("   ");
            if (arry[j][i] != 0 && arry[j][i] != -1)
                printf(" %c ",15);

        }
        printf("%c\n%c",186,186);
    }
    for (i=0; i<tamanio*3+1; i++)
        printf("%c",205);
}

void alt(int arry[][tamanio])
{
    int i, x, y;
    srand(time(NULL));
    for (i=0; i<num; i++)
    {
        x = rand()%tamanio;
        y = rand()%tamanio;
        if(x != columna || y != fila)
            arry[x][y] = -1;

    }
}

void traspaso(int antes[][tamanio], int despues[][tamanio])
{
    int j,i;
    for (i=0; i<tamanio; i++)
    {
        for (j=0; j<tamanio; j++)
        {
            despues[j][i] = antes[j][i];
        }
    }
}

void recusividad(int tab[][tamanio], int tab_aux[][tamanio],int casilla, int x, int y)
{
    int arrx[]={1,0,-1,0};//movimiento
    int arry[]={0,1,0,-1};

    int indice = 0;//vector
    int newx, newy;

    while(indice <= 3)
    {
        newx= x+arrx[indice];
        newy= y+arry[indice];

        if ((tab[newx][newy] == 0) && (newx < tamanio && newx >= 0 && newy < tamanio && newy >= 0)&& (casilla < optima))
        {

            tab[newx][newy] = casilla;

            if (columna == newx && fila == newy)//encontro la solucion
            {
                system("cls");
                visual(tab);


                if (casilla < optima)
                {
                    traspaso(tab,tab_aux);
                    optima = casilla;
                }
            }

            recusividad(tab,tab_aux,casilla+1,newx,newy);
        }
        indice+=1;
        iter = iter + 1;
    }
    tab[x][y]= 0;
}


int main()
{
    int tabl[tamanio][tamanio];
    int tablero_aux[tamanio][tamanio];
    int j,i;
    tablero(tabl);
    tablero(tablero_aux);
    alt(tabl);
    printf("\n                     SOLUCION  LABERINTO\n");
    visual(tabl);
    printf("\ncolumna y fila\n");
    scanf("%d%d",&j,&i);
    tabl[j][i]=1;
    recusividad(tabl,tablero_aux,2,j,i);
    visual(tablero_aux);

    return 0;
}
