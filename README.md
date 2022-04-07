# AEDS-Contando-de-Instruçoes

## Exercício

Elabore um pequeno programa que utilize uma matriz N x N, com o valor de N fornecido como entrada do programa, para executar a seguinte operação:

1) - Preenche a matriz N x N com números inteiros aleatórios de 0 a 99;

2) - Considere a posição Linha 0 e Coluna 0 (0,0) como início;

3) - Considere a posição (N, N) como posição final;

4) - Percorra a matriz a partir do início, somando a cada passo, o próximo maior valor encontrado;

5) - O próximo valor pode ser o que está na mesma linha e imediatamente à direita, imediatamente à esquerda, bem como, o que está na coluna abaixo do numero corrente;

     5.1) - Há apenas uma exceção de percurso. Ao chegar na última linha deve-se percorre-la até o fim sem realizar mais migrações para colunas acima. 

6) - Andando na matriz conforme as regras acima, qual o maior caminho do início até o final, sabendo-se que a soma das posições representa o tamanho do caminho.


## Lógica

 - No Contador.h 
 
      Foi declarado as bibliotecas necessárias para a realização e compilação do código e a declaração da função que seria chamada no main.c e desenvolvida no Contador.c. 

 - No Contador.c

      Declaramos as variáveis e a matriz que receberá o parâmetro definido pelo usuário no main.c. Logo em seguida foi desenvolvido uma função de repetição (For) para a criação e impressão da matriz de acordo com a quantidade de linhas e colunas necessárias.

      É definido no código que todas as minhas condições sejam analisadas enquanto o código não percorrer o maior caminho até a última posição da matriz. As condições são as seguintes: 
  
        - Quando minha matriz estiver na coluna 0 - podendo percorrer para direita e para baixo; 
        - Quando minha matriz estiver na coluna n-1 (última coluna da matriz) - podendo percorrer para esquerda e para baixo;
        - Quando minha matriz estiver na linha i-1 (última linha da matriz) - podendo percorrer somente para direita; 
        - Quando minha matriz estiver no centro - podendo percorrer para esquerda, para baixo e para direita.
      
      A cada posição percorrida na matriz foi somado à minha variável soma para obter o somatório do maior caminho da matriz. Além disso, para evitar que nossa matriz retorne por um caminho que já foi percorrido, foi atribuído a cada posição percorrida o valor -1. Sabendo que minha matriz possui números aleatórios entre 0 à 99, não existe a possibilidade do valor -1 ser maior que qualquer posição. 
      
      Ao final, após o código reconhecer a última posição da matriz e parar a função de repetição while é imprimido uma nova matriz com o caminho percorrido transcrito do valor -1 para "X" caso o usuário queira conferir a soma da matriz. E em seguida é imprimido a soma com o valor total. 
      
 - No main.c
 
      Declaramos o n (valor definido para a matriz quadrática) e pedimos para o usuário definir um valor de sua preferência. Em seguida chamamos a função que declaramos e desenvolvemos no Contador.h e Contador.c. 
        
  

