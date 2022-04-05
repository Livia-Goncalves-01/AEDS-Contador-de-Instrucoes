#include "Contador.h"

void contador(int n){
    int matriz[n][n];
    int soma =0;

    for(int i=0; i < n; i++){
        for(int j=0; j< n; j++){
            matriz[i][j]= rand()%99;
            printf("%d", matriz[i][j]);
        }
    }
    soma= matriz[0][0];
    matriz[0][0]= "-1";

    while(matriz[i][j]!= matriz[n-1][n-1]){
        if(matriz[i][j] == matriz[i][0]){
            if(matriz[i+1][j] > matriz[i][j+1]){
                
            }
        }
    }


}