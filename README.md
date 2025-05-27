Objetivo do código foi criar um tabuleiro de Batalha Naval 10x10, posicionar dois navios de tamanho 3 (um na horizontal e outro na vertical), e mostrar esse tabuleiro no console com letras e números para facilitar a visualização.
Onde definimos as constantes: tamanho do tabuleiro, tamanho dos navios, o valor de 0 representa água e o valor 3 que representa uma parte de navio.
A criação de uma matriz 10x10 chamada tabuleiro, preenchida com zeros (água).
Os vetores representam os navios. Cada um tem 3 partes com valor 3.
O posicionamento dos Navios:
Antes de colocar os navios, o código verifica se o navio cabe no tabuleiro (não ultrapassa os limites).
Se não há outro navio na posição (evita sobreposição).
Se tudo estiver certo, ele copia os valores do vetor do navio para a matriz tabuleiro.
A primeira linha imprime as letras das colunas (A a J).
Na impressão cada linha do tabuleiro é impressa com seu número (1 a 10) e os valores (0 ou 3).

Concluindo o código cria um tabuleiro 10x10, posiciona dois navios de forma segura, mostra o tabuleiro com letras e números para facilitar a leitura.