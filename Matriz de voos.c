#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int validaCpf(char cpf[11], int *valida){
    int soma=0, resultado, numero, i;
    char digito10,digito11;

    for(i=0;i<9;i++){
        numero = cpf[i]-48;
        soma += (numero*(10-i));
    }

    resultado=11-(soma%11);

    if(resultado>9)
        digito10=0;
    else
        digito10=resultado;


    soma = 0;

    for(i=0;i<9;i++){
        numero = cpf[i]-48;
        soma += (numero*(11-i));
    }
    soma += digito10*2;
    resultado = 11-(soma%11);

    if(resultado>9)
        digito11=0;
    else
        digito11=resultado;

    if((digito10 == (cpf[9]-48)) && (digito11 == (cpf[10]-48)))
        *valida = 1;
    else
        *valida = 0;
}


int main()
{
     struct voo {
           int numeroVoo;
           int a;
     };

    struct voo conj[5][10];
    int i,j,num=1000,aux=1;
    for(i=0; i<5; i++)
    {
        for(j=0; j<10; j++)
        {
            conj[i][j].numeroVoo = aux + num;
            conj[i][j].a = 1;
            aux++;
            printf("numero:%d , existencia:%d",conj[i][j].numeroVoo,conj[i][j].a);
            printf("\n");

        }
        num=num+1000;
        aux=1;
        printf("\n");
    }
}
