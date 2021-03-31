#include <stdio.h>
#include <stdlib.h>

float** converte_a(int m, int n, float* vet){
    // Converte matriz representada em vetor para representada como vetor de ponteiros

    float **matriz_res = (float **) malloc(sizeof(float *) * m);
    for(int i = 0; i < m; i++){
        matriz_res[i] = (float *) malloc(sizeof(float) * n);
    }

    int k = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            matriz_res[i][j] = vet[k];
            k++;
        }
    }
    return matriz_res;
}

float* converte_b(int m, int n, float mat[3][3]){
    // Converte matriz representada por vetor de ponteiros para representada por vetor

    float *vetor = (float *) malloc(sizeof(float) * (m*n));
    int k = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            vetor[k] = mat[i][j];
            k++;
        }
    }
    return vetor;
}

void imprime_matriz(float** mat, int n){
    printf("\n\nMatriz:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%f  ", mat[i][j]);
        }
        printf("\n\n");
    }
}

void imprime_vetor(float* vet, int n){
    int k = 0;
    
    printf("\n\nVetor:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%f ", vet[k]);
            k++;
        }            
    }
}

void libera_matriz(float** mat, int n){
    for(int i = 0; i < n; i++){
        free(mat[i]);
    }
    free(mat);
}

int main(void){
    float matriz[3][3], vetor[9], **vetor_para_matrizP, *matriz_para_vetor;

    // matriz em vetor -> matriz em ponteiro
    int k = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("\nInsira o elemento [%d]: ", k);
            scanf("%f", &vetor[k]);
            k++;
        }
    }

    vetor_para_matrizP = converte_a(3, 3, vetor);
    imprime_matriz(vetor_para_matrizP, 3);

    // matriz em ponteiro -> matriz em vetor

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("\nInsira o elemento [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    matriz_para_vetor = converte_b(3, 3, matriz);
    imprime_vetor(matriz_para_vetor, 3);


    return 0;        
}   