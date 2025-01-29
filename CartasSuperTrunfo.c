#include <stdio.h>
 #include <stdlib.h>
#include <string.h>

#define NUM_CARTAS 10 
#define MAX_NOME 50 

typedef struct {
    char nome[MAX_NOME];
    int forca;
    int velocidade;
    int inteligencia;


} Carta;

void inicializadorCartas(Carta cartas[]) {

    strcpy(cartas[0].nome, "Brasil");
    cartas[0].forca = 80;
    cartas[0].velocidade = 60;
    cartas[0].inteligencia = 50;

    
    strcpy(cartas[1].nome, "Japão");
    cartas[2].forca = 90;
    cartas[2].velocidade = 50;
    cartas[2].inteligencia = 60;
    
     }

void exibirCarta(Carta carta) {
        printf("Brasil: %s\n", carta.nome);
        printf("forca: %d\n", carta.forca);
        printf("velocidade: %d\n", carta.velocidade);
        printf("inteligencia: %d\n", carta.inteligencia);
    
     }

int compararCartas(Carta carta1, Carta carta2, int atributo) {

        switch(atributo) {
        case 1:
            return carta1.forca - carta2.forca;
        case 2:
            return carta1.velocidade - carta2.velocidade;
        case 3: 
            return carta1.inteligencia - carta2.inteligencia;
        default:
            return 0;   
    }
}
int main() {

    
    Carta cartas[NUM_CARTAS];
    inicializadorCartas(cartas);

    int atributoEscolhido, Resultado;

    printf("Bem-vindo ao jogo Super Trunfo!\n");

    
    int cartajogador = 0; 
    int cartacomputador = 1; 

     
    printf("Carta do jogador:\n");
    exibirCarta(cartas[cartajogador]);
    printf("\n");

    printf("Carta do computador:\n");
    exibirCarta(cartas[cartacomputador]);
    printf("\n");

    printf("Escolha o atributo para comprar (1: Forca, 2: Velocidade, 3: Inteligencia): ");
    scanf("%d", &atributoEscolhido);


    

       if (Resultado > 0) {
        printf("Você venceu!\n");
    } else if (Resultado < 0) {
        printf("Você perdeu.\n");
    } else {
        printf("Empate!\n");
    }

    return 0;
}
    #include <stdio.h>
#include <string.h>

#define MAX_CARTAS 100
#define MAX_NOME 50

// Definição da estrutura Carta
typedef struct {
    int codigo;                // Código da cidade
    char nome[MAX_NOME];       // Nome da cidade
    int populacao;             // População da cidade
    float area;                // Área da cidade (em km²)
    float pib;                 // PIB da cidade (em trilhões de dólares)
    int pontos_turisticos;     // Número de pontos turísticos
} Carta;

// Funções para manipulação das cartas
void cadastrarCarta(Carta* cartas, int* quantidade);
void listarCartas(Carta* cartas, int quantidade);
void limparBuffer();

int main() {
    Carta cartas[MAX_CARTAS];
    int quantidade = 0;
    int opcao;

    do {
        printf("\n==== Menu do Jogo Super Trunfo - Cidades ====\n");
        printf("1. Cadastrar Carta\n");
        printf("2. Listar Cartas\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        limparBuffer();  // Limpa o buffer do teclado

        switch(opcao) {
            case 1:
                cadastrarCarta(cartas, &quantidade);
                break;
            case 2:
                listarCartas(cartas, quantidade);
                break;
            case 3:
                printf("Saindo do sistema...\n");
                break;
            default:
                printf("Opção inválida, tente novamente.\n");
        }
    } while (opcao != 3);

    return 0;
}



