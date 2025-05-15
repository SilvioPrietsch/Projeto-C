#include  <stdio.h>

int main(){

    char nome[50];
    int idade, matricula;
    float altura;

    printf("Digite seu nome: \n");
    scanf("%s", nome);

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua matricula: \n");
    scanf("%d", &matricula);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);


    printf("Nome do aluno: %s --- Matricula: %d\n", nome, matricula);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);

    return 0;







}

     



