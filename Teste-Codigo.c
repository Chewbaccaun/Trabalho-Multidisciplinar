#include <stdio.h>
#define LINHAS 2
#define COLUNAS 2
void somar(float [ ][COLUNAS], float [ ][COLUNAS], float [ ][COLUNAS]);

void imprimir( float [ ] [COLUNAS] );

int main(void){

    float m1[ ] [COLUNAS] = {
            { 1.0, 2.0},
            { 1.0, 2.0},
            { 1.0, 2.0},
   };

   float m2[ ] [COLUNAS] = {
            { 1.0, 2.0},
            { 1.0, 2.0},
            { 1.0, 2.0},
   };

   float m3[ ] [COLUNAS] = { 0 };

   somar ( m1, m2, m3 );
   imprimir( m3 );
   return(0);
}
void somar(float m1[][COLUNAS], float m2[ ] [ COLUNAS ], float m3[] [ COLUNAS ]){
     int i=0, j=0;
     for( i=0; i<LINHAS; i++ )
          for ( j=0; j<COLUNAS; j++ )
                 m3[i][j] = m1[i][j] + m2[i][j];
}
void imprimir( float m[ ] [ COLUNAS ] ) {
     int i=0, j=0;
     for( i=0; i<LINHAS; i++ ){
            printf("\n");
            for( j=0; j<COLUNAS; j++)
                 printf("%.2f\t", m[ i ][ j ] );
     }//fim for
}
