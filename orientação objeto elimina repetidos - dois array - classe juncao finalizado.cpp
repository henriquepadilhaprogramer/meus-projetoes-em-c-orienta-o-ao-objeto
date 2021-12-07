
#include <iostream>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

    using namespace std; 

    class array{ // nome da classe.
    // declarando as variáveis.
    int X, Y;
    int array1[6], array2[6], array3[12];
    bool rept;//bool é um tipo de dados. 
    //Assim como tem o int, o char e o double, 
    //tem o bool. O bool só aceita dois valores: true ou false.//
    
    public: // método público para facilitar a edição do usuario.

    juncao(int array3[12]);

    };

    int array::juncao(int array3[12]){

    for (X=0;X<6;X++){
    cout << "Digite o valor desejado do primeiro array: " << X<< endl;
    cin >> array1[X];}

    for (X=0;X<6;X++){
    cout << "Digite o  valor desejado do segundo array: " << X<< endl;
    cin >> array2[X];}

    for (X=0; X<6; X++){
    array3[X] = array1[X];}

    for (X=6; X<12; X++){
    array3[X] = array2[X-6];}

    for (X=0; X<12; X++){
        rept = false;
        for (Y=0; Y<X;Y++){
            if(array3[X] == array3[Y]){
                rept = true;// indica os números que são repetidos.
                break;
        }
    }

    if(!rept){//mostra no vetor"resposta" os números não repetidos.
    cout << array3[X] << " ";}
    }

}

    int main(){

        int array3[12]; // size -- retorna a capacidade corrente da string, 
                        //ou seja, quantos elementos ela poderá conter antes de necessitar mais memória;
        
        int*array3;
        array3 = (int *) realloc(sizeof(int));//serve para realocar memória,
                                              //Se ptr(PONTEIRO) for nulo, aloca size bytes e devolve um ponteiro;
                                              //se size é zero, a memória apontada por ptr é liberada. 
                                              //e não houver memória suficiente para a alocação,
                                              //um ponteiro nulo é devolvido e o bloco original é deixado inalterado.
        array posicao;
        posicao.juncao(array3);

    }