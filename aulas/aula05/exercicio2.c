#include <stdio.h>

struct pessoa {
    char nome[100];
    int idade;
};

void obter_dados_pessoas(struct pessoa *p, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf("%s", (p + i)->nome);
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &(p + i)->idade);
    }
}

void exibir_dados_pessoas(struct pessoa *p, int n) {
    int i;
    printf("\nDados das pessoas:\n");
    for (i = 0; i < n; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Nome: %s\n", (p + i)->nome);
        printf("Idade: %d\n", (p + i)->idade);
    }
}

int main() {
    int num_pessoas = 3;
    struct pessoa pessoas[num_pessoas];

    obter_dados_pessoas(pessoas, num_pessoas);
    exibir_dados_pessoas(pessoas, num_pessoas);

    return 0;
}