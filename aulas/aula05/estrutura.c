#include <stdio.h>

struct pessoa {
    char nome[100];
    int idade;
};

int main() {
    struct pessoa pessoas[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("Digite o nome da pessoa %d: \n", i + 1);
        scanf("%s", pessoas[i].nome);
        getchar();
        printf("Digite a idade da pessoa %d: \n", i + 1);
        scanf("%d", &pessoas[i].idade);
        getchar();
    }

    printf("\nDados das pessoas:\n");
    for (i = 0; i < 3; i++) {
        printf("Pessoa %d: \n", i + 1);
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Idade: %d\n", pessoas[i].idade);
    }

    return 0;
}