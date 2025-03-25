# Giroto's Arcade - Sistema de Entretenimento

## Descrição

Este sistema oferece três minijogos distintos acessíveis a partir de um menu principal. O programa permanecerá em execução até que o usuário escolha a opção de sair. Ao selecionar um minijogo, uma breve descrição será exibida antes do início da partida.

## Status do Projeto

- Finalizado

## Tecnologias Utilizadas

- Linguagem C
- Biblioteca `stdlib.h` (para geração de números aleatórios e controle de execução)
- Biblioteca `stdio.h` (para entrada e saída de dados)
- Biblioteca `time.h` (para manipulação de tempo e geração de números aleatórios com base no tempo)
- Biblioteca `string.h` (para manipulação de strings)
- Biblioteca `locale.h` (para suporte a configurações regionais)

## Como Instalar e Rodar

```bash
# Clone este repositório
git clone https://github.com/usuario/repositorio.git

# Acesse o diretório do projeto
cd repositorio

# Compile o programa
gcc main.c -o minijogos

# Execute o programa
./minijogos

```
## Como Jogar ##
O jogo inicia com um menu principal, onde o usuário pode escolher entre os três minijogos ou sair do programa.

## Pergunta e Resposta ##
O computador apresenta uma pergunta com quatro alternativas.

O jogador escolhe a resposta e recebe um feedback sobre a correção.

Caso erre, a resposta correta é exibida.

O jogo contém cinco perguntas fixas e pode ser reiniciado após a conclusão.

## Cobra na Caixa! ##
Dois exploradores estão presos em uma tumba egípcia.

Existem cinco caixas: uma esconde o botão para sair e outra uma cobra mortal.

Os jogadores escolhem nomes a partir de uma lista predefinida.

Um jogador é sorteado para começar.

O jogo segue até que um jogador encontre a cobra (perde) ou o botão (vence).

## Gousmas War ##
Cada jogador inicia com duas criaturas chamadas Gousmas.

As Gousmas atacam umas às outras, transferindo fúria.

Se uma Gousma atingir fúria maior que 5, ela se desintegra.

O jogador pode dividir uma Gousma, respeitando o limite de duas por jogador.

O jogador que perder todas as suas Gousmas perde a partida.

## Desenvolvimento

Este projeto está sendo desenvolvido por **João Paulo Koury** e **Pedro Andrade**.