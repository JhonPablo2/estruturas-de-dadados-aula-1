#include <stdio.h>


int main() {
      
    int vet [5];
    int aux, i, j;

    for (int i=0; i < 5; i++){
        printf ("digite %d numero:\n", i+1);
        scanf ("%d", &vet[i]);    
    }
    
    for (i=0; i < 5 ; i++){
        for (j=0; j < 5; j++){
            if (vet [j] > vet [j+1]){
                aux = vet[j];
                vet[j]= vet[j+1];
                vet[j+1] = aux;
            
            }
        }
    }

        
       printf ("ordem crescente:");
       for (int i=0; i < 5; i++){
            printf ("\n%d", vet[i]);

       } 



        printf ("\nordem decresente:");   
        for (int i=4 ; i >= 0; i--){
            
            printf ("\n%d", vet[i]);
        }                                   

}
