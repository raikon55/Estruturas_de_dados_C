# Estruturas_de_dados_C
Estruturas de dados implementadas em C.

Códigos desenvolvidos durante as disciplinas oferecidas pelo curso de
Engenharia de Computação da PUC Minas.

O objetivo é centralizar todas as estruturas implementas em C em um único lugar
para fácil acesso e compartilhamento.

A universidade de São Francisco tem um site para a visualização de alguns estruturas e conceitos de programação, pode ser acessado por esse [link](https://www.cs.usfca.edu/~galles/visualization/Algorithms.html)

### Conceitos de fila, pilha e lista

**[Fila](src/fila.h) (First In, First Out)**

A regra da fila é sempre remover o elemento que está a mais tempo na estrutura. Esse tipo de estrutura é útil onde a ordem de entrada dos dados é importante, sendo necessário processar a informação na ordem que ela chega. Um exemplo é uma fila de supermercado, onde o primeiro cliente a entrar na fila, será o primeiro a ser atendido.

_Material sobre filas_
* [Apostila C Progressivo](https://www.cprogressivo.net/2014/05/Filas-em-C-Como-Programar-Tutorial-Estrutura-de-Dados-Dinamica-Queue.html)
* [Apostila da USP](https://www.ime.usp.br/~pf/algoritmos/aulas/fila.html)

**[Pilha](src/pilha.h) (Last In, First Out)**

A pilha é o oposto da fila, pois o último a entrar será o primeiro a sair. Normalmente utilizada em processos computacionais e linguagens de programação como C, por sempre voltar a quem chamou, sem interferir em outras partes.
Uma imagem para melhor entendimento de uma pilha:

_Material sobre pilhas_
* [Apostila C Progressivo](https://www.cprogressivo.net/2014/05/Pilhas-Stack-em-C-O-Que-E-Como-Implementar-Tutorial-C-Estrutura-de-Dados.html)
* [Apostila da USP](https://www.ime.usp.br/~pf/algoritmos/aulas/pilha.html)

**[Lista duplamente encadeada](src/lista.h)**

A lista é a estrutura de dados mais versátil dentre todas apresentadas, pois se pode inserir e remover elementos de qualquer ponto, e com ela é possível implementar filas e pilhas. A compreensão do funcionamento de uma lista pode ser complexo, por isso é recomendado ler esse [artigo](https://www.cprogressivo.net/2013/10/Listas-em-C-O-que-e-como-funciona-uma-LIST.html) do **C progressivo**.

_Material sobre listas_
* [Apostila C Progressivo](https://www.cprogressivo.net/2013/10/Como-fazer-uma-lista-em-C.html)
* [Explicação detalhada de lista](https://www.cprogressivo.net/2013/10/Listas-em-C-O-que-e-como-funciona-uma-LIST.html)
* [Apostila da USP](https://www.ime.usp.br/~pf/algoritmos/aulas/lista.html)

### Conceitos de algortimos de ordenação

Os algoritmos de ordenação pode ser divididos em dois métodos:
simples e eficientes.

O método simples é o grupo de algoritmos que podem ser compreendidos facilmente. Ideiais para pequenos vetores e programas mais simples.

O método eficiente possui algoritmos com um grau de complexidade maior, buscam fazer poucas comparações e trabalham melhor com grande grupo de dados. 

**[Bolha](src/ordenação.h)**

Ordenação utilizando o algoritmo bolha é simples, são feita permutações consecutivas até todos os elementos estarem ordenados. [Donald Knuth](https://www-cs-faculty.stanford.edu/~knuth/), autor da série de livros _[The Art of Computer Programming](https://en.wikipedia.org/wiki/The_Art_of_Computer_Programming)_, explicando o bolha:

"[...] the bubble sort seems to have nothing to recommend it, except a catchy name and the fact that it leads to some interesting theoretical problems [...]"

**[Inserção](src/ordenação.h)**

A cada novo elemento, é conferido a posição que deve inseri-lo, e os elementos subsequentes são movidos para "abrir espaço". O algoritmo de inserção é recomendado quando já há um grupo de elementos ordenados, e se deseja inserir um novo, mantendo a ordenação.

**[Seleção](src/ordenação.h)**

O conceito base do algoritmo é selecionar o menor elemento e passa-lo para a primeira posição (ou última, dependendo da ordem que se deseja ordenar), e fazer o mesmo com o segundo, terceiro e assim por diante. Uma aplicação desse algoritmo é quando se deseja encontrar o k-ésimo elemento de um vetor, pois se ordena até a k-ésima posição e retorna o elemento dessa posição.

**[Quick](src/ordenação.h)**

O _quick sort_ é a melhor opção prática para ordenação, devido à sua notável eficiência na média. É o algoritmo incluso em diversas bibliotecas das mais diversas linguagens de programação, um exemplo é o qsort() da _stdlib.h_ da linguagem C.

**[Merge](src/ordenação.h)**

Sua ideia base consiste em dividir o problema em vários subproblemas, e resolve-los através da recursividade. Após todos os subproblemas terem sido resolvidos, é feito a união das resoluções. Como o algoritmo Merge Sort usa recursividade, há um alto consumo de memória e tempo de execução, não sendo a melhor técnica para certos problemas.

### Conceito de hash

**[Função Hash](src/hash.h)**

Uma função matemática que aplicada sobre um conjunto de dados, gera um número conhecido como hash, que teoricamente seria único para o conjunto de dados usados. Hashes são utilizadas em diversas áreas, como blockchain, criptografia, verificação de arquivo, assinaturas digitais e muitas outras.

Uma boa função hash terá o minimo de colisões possível, para não haver o mesmo hash para conjuntos de dados distintos.

_Material sobre hashes_

* [Conceito de hash](https://pt.wikipedia.org/wiki/Fun%C3%A7%C3%A3o_hash)
* [Função hash criptográfica](https://pt.wikipedia.org/wiki/Fun%C3%A7%C3%A3o_hash_criptogr%C3%A1fica)
* [Hash e blockchain](https://guiadobitcoin.com.br/se-voce-entender-a-funcao-da-hash-voce-entendera-a-blockchain/)

### Conceito de árvore binária

**[Árvore binária](src/arvore_binaria.h)**

"Em ciência da computação, a árvore de busca binária ou árvore de pesquisa binária é uma árvore binária onde todos os nós são valores, todo nó a esquerda contêm uma sub-árvore com os valores menores ao nó raiz da sub-árvore e todos os nós da sub-árvore a direita contêm somente valores maiores ao nó raiz. Os valores são relevantes na árvore de busca binária. O objetivo desta árvore é estruturar os dados de forma flexível permitindo pesquisa binária" [¹](https://www.ft.unicamp.br/liag/siteEd/definicao/arvore-binaria.php)

_Material sobre árvores binárias_

* [Árvore binária](https://pt.wikipedia.org/wiki/%C3%81rvore_bin%C3%A1ria)
* [Apostila da USP](https://www.ime.usp.br/~pf/algoritmos/aulas/bint.html)
* [Apostila UNICAMP](https://www.ft.unicamp.br/liag/siteEd/definicao/arvore-binaria.php)

### Conceitos de teoria de grafos

"A teoria dos grafos estuda objetos combinatórios — os grafos— que são um bom modelo para muitos problemas em vários ramos da matemática, da informática, da engenharia e da indústria. Muitos dos problemas sobre grafos tornaram-se célebres, pois são um interessante desafio intelectual e porque têm importantes aplicações práticas."[¹](https://www.ime.usp.br/~pf/teoriadosgrafos/texto/TeoriaDosGrafos.pdf)

**[Lista de incidência]()**



**[Matriz de adjacencia](src/matriz_adjacente.h)**

Uma matriz de adjacência é uma das formas de se representar um grafo.

Dado um grafo G com N vértices, podemos representá-lo em uma matriz N x N A(G)(ou simplesmente A). A definição precisa das entradas da matriz varia de acordo com as propriedades do grafo que se deseja representar, porém de forma geral o valor A(G) guarda informações sobre como os vértices Vi e Vj estão relacionados (isto é, informações sobre a adjacência de Vi e Vj).

Para representar um grafo não direcionado, simples e sem pesos nas arestas, basta que as entradas A(G) da matriz A contenham 1 se Vi e Vj são adjacentes e 0 caso contrário. Se as arestas do grafo tiverem pesos, A(G) pode conter, ao invés de 1 quando houver uma aresta entre Vi e Vj, o peso dessa mesma aresta. 

**[Lista de adjacencia](src/lista_adjacente.h)**

Uma lista de adjacência é a representação de todas arestas ou arcos de um grafo em uma lista.

Se o grafo é não direcionado, cada entrada é um conjunto de dois nós contendo as duas extremidades da aresta correspondente; se ele for dirigido, cada entrada é uma tupla de dois nós, um indicando o nó de origem e o outro denotando o nó destino do arco correspondente.

Normalmente, as listas de adjacência são desordenadas. 

**[Kruskal](src/kruskal.h)**

O algoritmo de Kruskal é um algoritmo em teoria dos grafos que busca uma árvore geradora mínima para um grafo conexo com pesos. Isto significa que ele encontra um subconjunto das arestas que forma uma árvore que inclui todos os vértices, onde o peso total, dado pela soma dos pesos das arestas da árvore, é minimizado. Se o grafo não for conexo, então ele encontra uma floresta geradora mínima.