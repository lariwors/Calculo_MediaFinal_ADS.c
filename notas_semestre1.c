#include <stdio.h> 

int main (){
    int materia, resposta, repetir;
    float simulado1, simulado2, socioemocional, av1; 
    float somaNotas, mediaFinal;
    char nome[30];

    char materias[5][50] = {
        "Introdução à Programação de Computadores",
        "Introdução à Segurança da Informação",
        "Fundamentos de Redes de Computadores",
        "Sistemas de Informação e Sociedade",
        "Arquitetura de Computadores"
    };
    

//Apresentação
    printf("Olá, vamos ver quais foram sua nota final neste primeiro semestre?\n");

//Início
    do {
        printf("Digite 1 para SIM ou 2 para NÃO\n");
        scanf("%d", &resposta);
    
    if (resposta != 1 && resposta != 2){
        printf("Opção inválida. Tente novamente digitando apenas 1 ou 2.\n");
        }
    } while (resposta != 1 && resposta != 2);


    if (resposta == 2){
        printf("Tudo bem, nos vemos em breve!\n");

    return 0;
    }
//Nome do usuário
    printf("\nPrimeiro, digite seu nome:\n");
    scanf("%s", &nome);

// Loop para escolha de novas matérias
do {
// Escolha da matéria
    do {
        printf("\nOlá %s! Escolha uma das matérias abaixo:\n", nome);
        for (int i = 0; i < 5; i++) {
            printf("%d - %s\n", i + 1, materias[i]);
        }
            scanf("%d", &materia);
        
        if (materia < 1 || materia > 5) {
            printf("Opção inválida. Por favor, escolha entre 1 e 5.\n");
        }
    } while (materia < 1 || materia > 5);

//Coleta das notas
    printf("\nMatéria selecionada: %s\n\n", materias[materia - 1]);

    do {
        printf("Digite a nota da sua avaliação Socioemocional (0 a 5.0): ", socioemocional);
        scanf("%f", &socioemocional);
    } while (socioemocional < 0 || socioemocional > 5.0 );
    
    do {
    printf("Digite a nota do Simulado 1 (0 a 1.0): ", simulado1);
    scanf("%f", &simulado1);
    } while (simulado1 < 0 || simulado1 > 1.0);
    
    do {
        printf("Digite a nota do Simulado 2 (0 a 1.0): ", simulado2);
        scanf("%f", &simulado2);
    } while (simulado2 < 0 || simulado2 > 1.0);
    
    do {
        printf("Digite a nota da AV1 (0 a 5.0): ", av1);
        scanf("%f", &av1);
    } while (av1 < 0 || av1 > 5.0);

//Cálculo das notas
    somaNotas = socioemocional + simulado1 + simulado2 + av1;
    mediaFinal = (somaNotas / 12.0) * 10.0;

//Exibição da média.
    printf("\nSua média final em %s foi: %.2f\n", materias[materia - 1], mediaFinal);

    if (mediaFinal >= 6.0){
        printf("Parabéns!! Você passou nessa matéria!\n");
    } else {
        printf("Infelizmente, você não obteve nota suficiente para passar. Faça a AVS para ter uma nova chance.\nBoa sorte!!");
    }

// Pergunta se deseja calcular outra nota
    do {
        printf("\nDeseja calcular a nota de outra matéria? (1 para SIM, 2 para NÃO): ");
        scanf("%d", &repetir);
        if (repetir != 1 && repetir != 2) {
            printf("Opção inválida. Digite 1 para SIM ou 2 para NÃO.\n");
        }
    } while (repetir != 1 && repetir != 2);

} while (repetir == 1);
    printf("Encerrando o programa. Até mais, %s!\n", nome);
    
return 0;
}