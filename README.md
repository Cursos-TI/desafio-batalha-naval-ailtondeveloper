O projeto de Batalha Naval envolve conceitos como matrizes, vetores, condicionais, laços de repetição e funções. Neste exercício, criamos um tabuleiro 10x10 e posicionamos quatro navios de forma estratégica: dois em posições tradicionais (horizontal e vertical) e dois em posições diagonais, o que adiciona um nível extra de complexidade e aprendizado.

Criação do código:
O tabuleiro é representado por uma matriz bidimensional 10x10, onde cada posição começa com o valor 0, indicando água. Essa matriz simula o oceano onde os navios serão posicionados.
Cada navio tem tamanho fixo de 3 posições. As posições de cada navio são definidas por dois vetores: um para as linhas e outro para as colunas. Isso permite representar qualquer orientação — horizontal, vertical ou diagonal.
Antes de posicionar um navio, o programa verifica se as posições desejadas já estão ocupadas. Isso evita que dois navios fiquem sobrepostos.
Se não houver sobreposição, o navio é posicionado no tabuleiro, substituindo os valores 0 por 3, que representa uma parte do navio.
O tabuleiro é impresso no console com letras (A–J) no topo e números (1–10) nas laterais, facilitando a leitura e localização dos navios cada célula mostra 0 (água) ou 3 (navio), organizados em uma grade visual.

