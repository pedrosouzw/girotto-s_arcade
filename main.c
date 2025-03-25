#include <stdio.h>        // Biblioteca para entrada e saída padrão
#include <time.h>         // Biblioteca para manipulação de tempo (usada no srand)
#include <stdlib.h>       // Biblioteca para funções utilitárias (rand, malloc, etc.)
#include <string.h>       // Biblioteca para manipulação de strings (strcpy)
#include <locale.h>       // Biblioteca para configurações de localização

// Pré-declaração das funções utilizadas no código
void showMenu();
void askAndAnswerGame();
void snakeInBoxGame();
void gousmasWarGame();
int comebackMenu;  // Variável global para retornar ao menu

// Função principal que inicia o programa e exibe o menu de jogos
int main() {
    showMenu();  // Chama a função que mostra o menu
    return 0;    // Finaliza o programa
}

// Função que exibe o menu de seleção de jogos
void showMenu() {
    int gameSelection;  // Variável para armazenar a opção escolhida pelo usuário

    // Exibe o cabeçalho do menu com formatação
    printf("\n\t==========================\n");
    printf("\t     Girotto's Arcade     ");
    printf("\n\t==========================\n");

    // Exibe as opções de jogos e a opção para sair
    printf("\n\t1: Pergunta e Resposta\n\t2: Cobra na Caixa!\n\t3: Gousmas War\n\t4: Sair\n");
    printf("\n\tSelecione uma opcao: ");
    scanf("%d", &gameSelection);  // Lê a escolha do usuário

    // Estrutura de seleção de opção utilizando switch-case
    switch (gameSelection) {
        // Caso escolha a opção 1: jogo de Pergunta e Resposta
        case 1:
            printf("\nVoce escolheu Pergunta e Resposta!\n");
            askAndAnswerGame();  // Chama a função do jogo Pergunta e Resposta
            break;
        // Caso escolha a opção 2: jogo Cobra na Caixa!
        case 2:
            printf("Voce escolheu Cobra na Caixa!\n");
            snakeInBoxGame();  // Chama a função do jogo Cobra na Caixa!
            break;
        // Caso escolha a opção 3: jogo Gousmas War
        case 3:
            printf("Voce escolheu Gousmas War\n");
            gousmasWarGame();  // Chama a função do jogo Gousmas War
            break;
        // Caso escolha a opção 4: sair do programa
        case 4:
            printf("Voce escolheu sair, ate mais!\n");
            break;
        // Caso nenhuma opção válida seja selecionada, reexibe o menu
        default:
            printf("\nERRO! Selecione uma opcao valida!\n");
            showMenu();  // Chama novamente o menu para nova seleção
            break;
    }
}

// Função que implementa o jogo de Pergunta e Resposta
void askAndAnswerGame() {
    // Declaração das variáveis para armazenar as respostas do usuário
    char answer1;
    char answer2;
    char answer3;
    char answer4;
    char answer5;

    // Exibe o título do jogo
    printf("\n=== PERGUNTA E RESPOSTA ===\n");

    // Pergunta 1: cobra na caixa
    printf("\nPergunta 1: Se uma cobra esta em uma caixa e sai\n3 vezes mais rapido do que entra, quantos minutos ela\nleva para escapar completamente se entrou em 12 minutos?\n");
    printf("\nA) 4 minutos");
    printf("\nB) 9 minutos");
    printf("\nC) 12 minutos");
    printf("\nD) 36 minutos\n");
    scanf(" %c", &answer1);  // Lê a resposta do usuário

    // Verifica se a resposta está correta (opção A ou 'a')
    if (answer1 == 'A' || answer1 == 'a') {
        printf("Resposta correta!");
        printf("\nProxima pergunta...\n");  
    } else {
        printf("Resposta incorreta!");
        printf("\nProxima pergunta...\n");
    }

    // Pergunta 2: matéria que o professor Pedro Girotto ensina
    printf("\nPergunta 2: Qual a materia que o professor Pedro Girotto ensina no 1o semestre de CC?\n");
    printf("\nA) Algebra Linear");
    printf("\nB) Algoritmo e Codificacao de Sistemas");
    printf("\nC) Pensamento Computacional");
    printf("\nD) Logica Digital\n");
    scanf(" %c", &answer2);  // Lê a resposta do usuário

    // Verifica se a resposta está correta (opção B ou 'b')
    if (answer2 == 'B' || answer2 == 'b') {
        printf("\nResposta correta!\n");
        printf("\nProxima pergunta...\n");
    } else {
        printf("\nResposta incorreta!\n");
        printf("\nProxima pergunta...\n");
    }

    // Pergunta 3: quantidade de jogos disponíveis no arcade
    printf("\nPergunta 3: Quantos jogos tem Giroto's Arcade?\n");
    printf("\nA) 5 jogos");
    printf("\nB) 2 jogos");
    printf("\nC) 3 jogos");
    printf("\nD) 1 jogos\n");
    scanf(" %c", &answer3);  // Lê a resposta do usuário

    // Verifica se a resposta está correta (opção C ou 'c')
    if (answer3 == 'C' || answer3 == 'c') {
        printf("\nResposta correta!\n");
        printf("\nProxima pergunta...\n");
    } else {
        printf("\nResposta incorreta!\n");
        printf("\nProxima pergunta...\n");
    }
    
    // Pergunta 4: duração do curso de Ciência da Computação
    printf("Pergunta 4: Quantos anos de duracao tem o curso de Ciencia da Computacao?");
    printf("\nA) 2 anos");
    printf("\nB) 5 anos");
    printf("\nC) 3 anos");
    printf("\nD) 4 anos\n");
    scanf(" %c", &answer4);  // Lê a resposta do usuário
    
    // Verifica se a resposta está correta (opção D ou 'd')
    if (answer4 == 'D' || answer4 == 'd') {
        printf("\nResposta correta!\n");
        printf("\nProxima pergunta...\n");
    } else {
        printf("\nResposta incorreta!\n");
        printf("\nProxima pergunta...\n");
    }

    // Pergunta 5: jogo mais vendido do mundo
    printf("Pergunta 5: Qual o jogo mais vendido do mundo?");
    printf("\nA) Minecraft");
    printf("\nB) GTA V");
    printf("\nC) Elden Ring");
    printf("\nD) Rainbow Six Siege\n");
    scanf(" %c", &answer5);  // Lê a resposta do usuário

    // Verifica se a resposta está correta (opção A ou 'a')
    if (answer5 == 'A' || answer5 == 'a') {
        printf("\nResposta correta!\n");
    } else {
        printf("\nResposta incorreta!\n");
    }
    
    // Ao final do jogo, oferece a opção de retornar ao menu ou fechar o programa
    printf("\nVoce acabou o jogo! Selecione uma opcao: \n(1)Retornar ao menu (2)Fechar programa\n");
    scanf(" %d", &comebackMenu);  // Lê a opção do usuário

    // Se o usuário optar por retornar ao menu, chama a função showMenu()
    if ((comebackMenu == 1)) showMenu();
}

// Função que implementa o jogo "Cobra na Caixa!"
void snakeInBoxGame() {
    // Declaração das variáveis para armazenar os nomes dos jogadores
    char playerName[30];
    char player1Name[30];
    char player2Name[30];
    int nameSelection;
    
    // Solicita ao Jogador 1 que escolha um nome entre as opções
    printf("\nJogador 1, selecione um nome: ");
    printf("\n(1) Joao Paulo");
    printf("\n(2) Pedro");
    printf("\n(3) Gabriel");
    printf("\n(4) Henrique");
    printf("\n(5) Giovanni");
    printf("\n(6) Kadu");
    printf("\n(7) Felipe\n");
    printf("Sua escolha: ");
    scanf(" %d", &nameSelection);  // Lê a escolha do jogador 1
   
    // Define o nome do Jogador 1 com base na escolha utilizando switch-case
    switch (nameSelection) {
        case 1:
            strcpy(player1Name, "Joao Paulo");
            break;
        case 2:
            strcpy(player1Name, "Pedro");
            break;
        case 3:
            strcpy(player1Name, "Gabriel");
            break;
        case 4:
            strcpy(player1Name, "Henrique");
            break;
        case 5:
            strcpy(player1Name, "Giovanni");
            break;
        case 6:
            strcpy(player1Name, "Kadu");
            break;
        case 7:
            strcpy(player1Name, "Felipe");
            break;
        default:
            printf("\nErro! Opcao invalida, reinicie o programa.");
            return;  // Encerra a função caso a opção seja inválida
    }
    printf("\nSeu nome: %s", player1Name);  // Exibe o nome escolhido pelo Jogador 1

    // Solicita ao Jogador 2 que escolha um nome entre as mesmas opções
    printf("\nJogador 2, selecione um nome: ");
    printf("\n(1) Joao Paulo");
    printf("\n(2) Pedro");
    printf("\n(3) Gabriel");
    printf("\n(4) Henrique");
    printf("\n(5) Giovanni");
    printf("\n(6) Kadu");
    printf("\n(7) Felipe\n");
    printf("Sua escolha: ");
    scanf(" %d", &nameSelection);  // Lê a escolha do jogador 2
   
    // Define o nome do Jogador 2 com base na escolha utilizando switch-case
    switch (nameSelection) {
        case 1:
            strcpy(player2Name, "Joao Paulo");
            break;
        case 2:
            strcpy(player2Name, "Pedro");
            break;
        case 3:
            strcpy(player2Name, "Gabriel");
            break;
        case 4:
            strcpy(player2Name, "Henrique");
            break;
        case 5:
            strcpy(player2Name, "Giovanni");
            break;
        case 6:
            strcpy(player2Name, "Kadu");
            break;
        case 7:
            strcpy(player2Name, "Felipe");
            break;
        default:
            printf("\nErro! Opcao invalida, reinicie o programa.");
            return;  // Encerra a função caso a opção seja inválida
    }
    printf("\nSeu nome: %s", player2Name);  // Exibe o nome escolhido pelo Jogador 2

    // Declaração de variáveis para armazenar números sorteados e a escolha da caixa
    int buttonNum;
    int snakeNum;
    int boxSelection;
    srand(time(0));            // Inicializa a semente para números aleatórios
    snakeNum = rand() % 5;     // Sorteia a posição da cobra (entre 0 e 4)

    // Sorteia a posição do botão, garantindo que não seja igual à posição da cobra
    do {
        buttonNum = rand() % 5;
    } while (buttonNum == snakeNum);
    
    // Exibe as informações iniciais do jogo "Cobra na Caixa!"
    printf("\n=== COBRA NA CAIXA! ===\n");
    printf("Escolha entre as caixas 0, 1, 2, 3 ou 4:\n");
    printf("Uma tem uma COBRA, outra um BOTAO e as demais estao VAZIAS!\n");
    
    // Inicia o loop do jogo para que os jogadores façam suas escolhas
    while (1) {
        // Declara variáveis para controlar o turno e identificar o jogador atual
        int playerTurn = 1000;
        int i;
        // Loop para alternar o turno entre os jogadores
        for (i = 1; i < playerTurn; i++) {
            // Se o turno é par, o Jogador 1 joga; se ímpar, o Jogador 2 joga
            if (i % 2 == 0) {
                strcpy(playerName, player1Name);
                printf("\nTurno %d, %s escolha uma caixa!", i, playerName);
            } else {
                strcpy(playerName, player2Name);
                printf("\nTurno %d, %s escolha uma caixa!", i, playerName);
            }
            
            printf("\nFaca sua escolha: ");
            scanf(" %d", &boxSelection);  // Lê a escolha da caixa pelo jogador
         
            // Verifica se a caixa escolhida está dentro do intervalo permitido (0 a 4)
            if (boxSelection < 0 || boxSelection > 4) {
                printf("Erro! Digite 0, 1, 2, 3 ou 4!\n");
                continue;  // Se inválido, solicita nova escolha
            }
            
            // Verifica se a caixa contém a cobra, o botão ou está vazia
            if (boxSelection == snakeNum) {
                printf("\nX-X-X ARGH! A cobra te mordeu! X-X-X\nFim de jogo!\n");
                break;  // Finaliza o turno se a cobra for encontrada
            } else if(boxSelection == buttonNum) {
                printf("\n*** Voce achou o botao! ***\nParabens! Vitoria!\n");
                break;  // Finaliza o turno se o botão for encontrado
            } else {
                printf("Caixa %d: Vazia... Tente outra!\n", boxSelection);
            }
        }
        
        // Após o fim do turno, exibe as posições secretas dos itens (cobra, botão e as caixas vazias)
        printf("\nPosicoes secretas:\nCobra: %d | Botao: %d | Vazias: ", snakeNum, buttonNum);
        for (int i = 0; i < 5; i++) {
            if (i != snakeNum && i != buttonNum)
                printf("%d ", i);
        }
        printf("\n");
        
        // Oferece a opção de retornar ao menu ou fechar o programa após o jogo
        int comebackMenu;
        printf("\n(1)Retornar ao menu (2)Fechar o programa\n");
        scanf(" %d", &comebackMenu);
        if (comebackMenu == 1) showMenu();  // Se selecionado, retorna ao menu principal
    }
}
    
// Função que implementa o jogo "Gousmas War"
void gousmasWarGame() {
    // Declaração de variáveis para controlar a "furia" (poder) de cada gousma dos jogadores
    int gousma1x = 1;
    int gousma2x = 1;
    int gousma1y = 1;
    int gousma2y = 1;
    int gousmaAttackedSelection;
    int gousmaAttackerSelection;
    int loop;
    int transfer;
    char selection;
    
    // Exibe o título e as regras do jogo
    printf("\n=== GOUSMAS WAR ===\n");
    printf("\nCada jogador tem duas furias, cada uma comeca com 1 de poder, toda vez que voce\nataca o inimigo, transfere a quantidade de poder da sua gousma para a do adversario.\n");
    printf("\nO jogador X comeca atacando!\n");
    
    // Inicia o loop principal do jogo
    do {
        loop = 1;
        // --- Turno do Jogador X ---
        // Solicita que o Jogador X escolha qual gousma usar para atacar
        printf("\nJogador X, selecione a gousma que voce quer usar para atacar: ");
        printf("gousma1 (digite 1) com %d de furia, ou gousma2 (digite 2) com %d de furia: ", gousma1x, gousma2x);
        scanf(" %d", &gousmaAttackerSelection);
        // Solicita que o Jogador X escolha qual gousma do adversario atacar
        printf("\nAgora, selecione a gousma que voce quer atacar (1 ou 2): ");
        scanf(" %d", &gousmaAttackedSelection);
        
        // Realiza a transferência de poder do Jogador X para o Jogador Y conforme a escolha
        if (gousmaAttackerSelection == 1 && gousmaAttackedSelection == 1)
            gousma1y += gousma1x;
        else if (gousmaAttackerSelection == 2 && gousmaAttackedSelection == 1)
            gousma1y += gousma2x;
        else if (gousmaAttackerSelection == 1 && gousmaAttackedSelection == 2)
            gousma2y += gousma1x;
        else if (gousmaAttackerSelection == 2 && gousmaAttackedSelection == 2)
            gousma2y += gousma2x;
        
        // --- Verifica derrota e possibilidade de reviver para o Jogador Y ---
        // Verifica se a gousma1 de Jogador Y excedeu o limite e pode ser revivida
        if (gousma1y > 5 && gousma2y > 1) {
            gousma1y = 0;
            do {
                printf("\nJogador Y, sua gousma1 foi derrotada, deseja transferir alguma quantidade de furia para ela ser revivida? (y/n)\n");
                scanf(" %c", &selection);
                if (selection == 'y') {
                    printf("\nDigite o quanto deseja transferir: ");
                    scanf(" %d", &transfer);
                    // Valida se o valor a ser transferido não é igual ou maior que a furia disponível na outra gousma
                    if (transfer == gousma2y || transfer > gousma2y) {
                        printf("\nErro! O valor que voce digitou nao pode ser igual ou maior ao nivel de furia da sua gousma atual.\n");
                        selection = 'z';
                    } else if (selection == 'n') {
                        printf("\nOk! O jogo vai continuar normalmente\n");
                        selection = 'y';
                    }
                }
            } while (selection != 'y');
        } else if (gousma1y > 5 && gousma2y == 1) {
            printf("\nJogador Y, sua gousma1 foi derrotada, porem voce nao tem como reviver, ja que esta somente com 1 de furia na gousma2\n");
            gousma1y = 0;
        }
        
        // Verifica se a gousma2 de Jogador Y excedeu o limite e pode ser revivida
        if (gousma1y > 1 && gousma2y > 5) {
            gousma2y = 0;
            do {
                printf("\nJogador Y, sua gousma2 foi derrotada, deseja transferir alguma quantidade de furia para ela ser revivida? (y/n)\n");
                scanf(" %c", &selection);
                if (selection == 'y') {
                    printf("\nDigite o quanto deseja transferir: ");
                    scanf(" %d", &transfer);
                    // Valida se o valor a ser transferido não é igual ou maior que a furia disponível na outra gousma
                    if (transfer == gousma1y || transfer > gousma1y) {
                        printf("\nErro! O valor que voce digitou nao pode ser igual ou maior ao nivel de furia da sua gousma atual.\n");
                        selection = 'z';
                    } else if (selection == 'n') {
                        printf("\nOk! O jogo vai continuar normalmente\n");
                        selection = 'y';
                    }
                }
            } while (selection != 'y');
        } else if (gousma2y > 5 && gousma1y == 1) {
            printf("\nJogador Y, sua gousma2 foi derrotada, porem voce nao tem como reviver, ja que esta somente com 1 de furia na gousma1\n");
            gousma2y = 0;
        }
        
        // Verifica se o Jogador Y perdeu todas as gousmas (condição de derrota)
        if ((gousma1y == 0 && gousma2y == 0) || (gousma1y > 5 && gousma2y == 0) || (gousma1y == 0 && gousma2y > 5) || (gousma1y > 5 && gousma2y > 5)) {
            printf("\nO jogador X ganhou!");
            loop = 0;
        } else {
            // --- Turno do Jogador Y ---
            // Solicita que o Jogador Y escolha qual gousma usar para atacar
            printf("\nJogador Y, selecione a gousma que voce quer usar para atacar: ");
            printf("gousma1 (digite 1) com %d de furia, ou gousma2 (digite 2) com %d de furia: ", gousma1y, gousma2y);
            scanf(" %d", &gousmaAttackerSelection);
            // Solicita que o Jogador Y escolha qual gousma do adversario atacar
            printf("\nAgora, selecione a gousma que voce quer atacar (1 ou 2): ");
            scanf(" %d", &gousmaAttackedSelection);
            
            // Realiza a transferência de poder do Jogador Y para o Jogador X conforme a escolha
            if (gousmaAttackerSelection == 1 && gousmaAttackedSelection == 1)
                gousma1x += gousma1y;
            else if (gousmaAttackerSelection == 2 && gousmaAttackedSelection == 1)
                gousma1x += gousma2y;
            else if (gousmaAttackerSelection == 1 && gousmaAttackedSelection == 2)
                gousma2x += gousma1y;
            else if (gousmaAttackerSelection == 2 && gousmaAttackedSelection == 2)
                gousma2x += gousma2y;
        }
        
        // --- Verifica derrota e possibilidade de reviver para o Jogador X ---
        // Verifica se a gousma1 de Jogador X excedeu o limite e pode ser revivida
        if (gousma1x > 5 && gousma2x > 1) {
            gousma1x = 0;
            do {
                printf("\nJogador X, sua gousma1 foi derrotada, deseja transferir alguma quantidade de furia para ela ser revivida? (y/n)\n");
                scanf(" %c", &selection);
                if (selection == 'y') {
                    printf("\nDigite o quanto deseja transferir: ");
                    scanf(" %d", &transfer);
                    // Valida se o valor a ser transferido não é igual ou maior que a furia disponível na outra gousma
                    if (transfer == gousma2x || transfer > gousma2x) {
                        printf("\nErro! O valor que voce digitou nao pode ser igual ou maior ao nivel de furia da sua gousma atual.\n");
                        selection = 'z';
                    } else if (selection == 'n') {
                        printf("\nOk! O jogo vai continuar normalmente\n");
                        selection = 'y';
                    }
                }
            } while (selection != 'y');
        } else if (gousma1x > 5 && gousma2x == 1) {
            printf("\nJogador X, sua gousma1 foi derrotada, porem voce nao tem como reviver, ja que esta somente com 1 de furia na gousma2\n");
            gousma1x = 0;
        }
        
        // Verifica se a gousma2 de Jogador X excedeu o limite e pode ser revivida
        if (gousma1x > 1 && gousma2x > 5) {
            gousma2x = 0;
            do {
                printf("\nJogador X, sua gousma2 foi derrotada, deseja transferir alguma quantidade de furia para ela ser revivida? (y/n)\n");
                scanf(" %c", &selection);
                if (selection == 'y') {
                    printf("\nDigite o quanto deseja transferir: ");
                    scanf(" %d", &transfer);
                    // Valida se o valor a ser transferido não é igual ou maior que a furia disponível na outra gousma
                    if (transfer == gousma1x || transfer > gousma1x) {
                        printf("\nErro! O valor que voce digitou nao pode ser igual ou maior ao nivel de furia da sua gousma atual.\n");
                        selection = 'z';
                    } else if (selection == 'n') {
                        printf("\nOk! O jogo vai continuar normalmente\n");
                        selection = 'y';
                    }
                }
            } while (selection != 'y');
        } else if (gousma2x > 5 && gousma1x == 1) {
            printf("\nJogador X, sua gousma2 foi derrotada, porem voce nao tem como reviver, ja que esta somente com 1 de furia na gousma1\n");
            gousma2x = 0;
        }
        
        // Verifica se o Jogador X perdeu todas as gousmas (condição de derrota)
        if ((gousma1x == 0 && gousma2x == 0) || (gousma1x > 5 && gousma2x == 0) || (gousma1x == 0 && gousma2x > 5) || (gousma1x > 5 && gousma2x > 5)) {
            printf("\nO jogador Y ganhou!");
            loop = 0;
        }
        
    } while (loop == 1);  // Continua o loop enquanto o jogo estiver em andamento
    
    // Ao final do jogo, oferece a opção de retornar ao menu ou fechar o programa
    int comebackMenu;
    printf("\n(1)Retornar ao menu (2)Fechar o programa\n");
    scanf(" %d", &comebackMenu);
    if (comebackMenu == 1) showMenu();  // Se o usuário escolher retornar, chama o menu principal
}
