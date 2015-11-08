/**************************************   
* Trabalho 3 de Programacao de Computadores I - Batalha Naval  
* Curso de Sistemas da informacao  
* Aluno: Karolyne Pontes Marchon Portilho - matricula: 0050013539
* Professor: Alex Salgado 
***************************************/

#include <stdio.h>
int main ()
{
    
    int batalha[5][5] = {{0,0,1,1,0},
                        {1,0,1,0,0},
                        {0,1,1,0,0},
                        {1,0,0,1,1},
                        {0,1,0,1,0}}; 
    int i, j; 
    char jogador[30]; 
    int continuar = 1; 
    int pontos = 0; 
    
    printf ( "Informe seu nome:" );
    scanf ( " %s", jogador );
    
    
    while ( continuar == 1 )
    {
        printf ("Digite a coordenada de linha:(0 a 4)");
        scanf ("%d",&i);
    
        printf ("Digite a coordenada de coluna:(0 a 4)");
        scanf ("%d",&j);
        
        if ( batalha[i][j] == 1 )
        {
            printf("\nBomba!! Você ganhou um ponto\n");
            pontos++;
        }
        else if ( batalha[i][j] == 0 )
        {
            printf("\nÁgua!! Você não fez pontos :( \n");
        }
        
        printf( "\n Olá %s, você fez %d pontos!\n", jogador, pontos );
        printf( "Deseja continuar? (Sim = 1, Não = 0)\n");
        scanf ( "%d", &continuar);
        
        
    }
    
    return 0;
}