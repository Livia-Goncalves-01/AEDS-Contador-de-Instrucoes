#include "Contador.h"

void contador(int n){
    int matriz[n][n];
    int soma =0;
    int i,j = 0;

    for(int i=0; i < n; i++){
        for(int j=0; j< n; j++){
            matriz[i][j]= rand()%99;
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    soma= matriz[0][0];
    matriz[0][0]= -1;

    while(matriz[i][j] != matriz[n-1][n-1]){
        if(j == 0 && i != n-1){
            if(matriz[i+1][j] > matriz[i][j+1]){
                soma = soma + matriz[i+1][j];
                matriz[i+1][j] = -1;
                i++;
            }else{
                soma = soma + matriz[i][j+1];
                matriz[i][j+1] = -1;
                j++;
            }
        }else if(j == n-1 && i != n-1){
            if(matriz[i][j-1] > matriz[i+1][j]){
                soma = soma + matriz[i][j-1];
                matriz[i][j-1] = -1;
                j--;
            }else{
                soma = soma + matriz[i+1][j];
                matriz[i+1][j] = -1;
                i++;
            }
        }else if(i == n-1){
            soma = soma + matriz[i][j+1];
            matriz[i][j+1]= -1;
            j++;
        }else{
            if(matriz[i][j+1]> matriz[i][j-1] && matriz[i][j+1]> matriz[i+1][j]){
                soma = soma +matriz[i][j+1];
                matriz[i][j+1] = -1;
                j++;
            }else if(matriz[i][j-1] >matriz[i][j+1] && matriz[i][j-1] > matriz[i+1][j] ){
                soma = soma + matriz[i][j-1];
                matriz[i][j-1] = -1;
                j--;
            }else{
                soma = soma + matriz[i+1][j];
                matriz[i+1][j] = -1;
                i++;
            }
        }
    }
    
    printf("\n");
    printf("\n");
    printf("Matriz com caminho:\n\n");

    for(int i =0; i < n; i++){
        for(int j=0; j< n; j++){
            if(matriz[i][j] == -1){
                printf("x\t");
            }else{
                printf("%d\t", matriz[i][j]);
            }
            
        }
        printf("\n");
    }
    
    printf("\nSoma: %d", soma);

}
