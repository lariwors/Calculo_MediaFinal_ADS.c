#include <stdio.h>

int main() {
    int resposta;

    // Parte 1: Pergunta inicial
    printf("Oi, vamos ver como ficaram suas notas?\n");

    // Repetição até o usuário digitar 1 ou 2
    do {
        printf("Digite 1 para SIM ou 2 para NAO: ");
        scanf("%d", &resposta);

        if (resposta != 1 && resposta != 2) {
            printf("Opção inválida. Por favor, tente novamente.\n");
        }

    } while (resposta != 1 && resposta != 2);

    if (resposta == 1) {
        // ===== Novo bloco: Nome e escolha da matéria =====
        char nome[50];
        int materia;

        printf("\n===== INÍCIO DO BLOCO DE NOTAS =====\n");

        // Pergunta o nome do usuário
        printf("Qual é o seu nome? ");
        scanf(" %[^\n]", nome);

        // Exibe menu de matérias
        printf("\nOlá, %s! Escolha uma das matérias abaixo:\n", nome);
        printf("1 - Introdução à Programação\n");
        printf("2 - Introdução à Segurança da Informação\n");
        printf("3 - Fundamentos de Redes de Computadores\n");
        printf("4 - Sistemas de Informação e Sociedade\n");
        printf("5 - Arquitetura de Computadores\n");

        // Lê a escolha da matéria
        do {
            printf("Digite o número da matéria (1 a 5): ");
            scanf("%d", &materia);

            if (materia < 1 || materia > 5) {
                printf("Opção inválida. Por favor, escolha entre 1 e 5.\n");
            }
        } while (materia < 1 || materia > 5);

        // Nome da matéria com base na escolha
        char nomeMateria[100];
        switch (materia) {
            case 1:
                snprintf(nomeMateria, sizeof(nomeMateria), "Introdução à Programação");
                break;
            case 2:
                snprintf(nomeMateria, sizeof(nomeMateria), "Introdução à Segurança da Informação");
                break;
            case 3:
                snprintf(nomeMateria, sizeof(nomeMateria), "Fundamentos de Redes de Computadores");
                break;
            case 4:
                snprintf(nomeMateria, sizeof(nomeMateria), "Sistemas de Informação e Sociedade");
                break;
            case 5:
                snprintf(nomeMateria, sizeof(nomeMateria), "Arquitetura de Computadores");
                break;
        }

        // Coleta as notas
        float nota1, nota2;
        printf("\nMatéria selecionada: %s\n", nomeMateria);
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);

        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        float media = (nota1 + nota2) / 2;

        // Exibe o resultado
        printf("\n%s, sua média em %s foi: %.2f\n", nome, nomeMateria, media);

        if (media >= 7.0) {
            printf("Parabéns! Você está aprovado(a).\n");
        } else {
            printf("Você está reprovado(a). Estude mais na próxima!\n");
        }

    } else {
        // Se o usuário não quiser continuar
        printf("Tudo bem! Até a próxima.\n");
    }

    return 0;
}