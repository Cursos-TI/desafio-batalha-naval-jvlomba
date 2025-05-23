#include <stdio.h>
 int main(){
 int tabuleiro [10][10]= {0};
 int navio_horizontal [3]= {3,3,3};
 int navio_vertical [3]= {3,3,3};


printf("   BATALHA NAVAL!!!\n");

for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

for (int nH = 0; nH < 3; nH++){
    tabuleiro[3][3 + nH] = navio_horizontal[nH];
}
for ( int nV = 0; nV < 3; nV++){
    tabuleiro[4 + nV][7]  = navio_vertical[nV];
}


printf("\nTabuleiro com navio horizontal:\n");
 for (int i = 0; i < 10; i++) {
  for (int j = 0; j < 10; j++) {
     printf(" %d", tabuleiro[i][j]);
  }
        printf("\n");
}
 
 }

