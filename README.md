# Estruturas_de_dados_C
Estruturas de dados implementadas em C.

Códigos desenvolvidos durante as disciplinas de
Algoritmos e Estruturas de Dados I, II e III oferecidas pelo curso de
Engenharia de Computação da PUC Minas.

O objetivo é centralizar todas as estruturas implementas em C em um único lugar
para fácil acesso e compartilhamento.

A universidade de São Francisco tem um site para a visualização de alguns estruturas e conceitos de programação, pode ser acessado por esse [link](https://www.cs.usfca.edu/~galles/visualization/Algorithms.html)

### Conceitos de fila, pilha e lista

**[Fila](https://github.com/raikon55/Estruturas_de_dados_C/blob/master/src/fila.h) (First In, First Out)**

A regra da fila é sempre remover o elemento que está a mais tempo na estrutura. Esse tipo de estrutura é útil onde a ordem de entrada dos dados é importante, sendo necessário processar a informação na ordem que ela chega. Um exemplo é uma fila de supermercado, onde o primeiro cliente a entrar na fila, será o primeiro a ser atendido.

_Material sobre filas_
* [Apostila C Progressivo](https://www.cprogressivo.net/2014/05/Filas-em-C-Como-Programar-Tutorial-Estrutura-de-Dados-Dinamica-Queue.html)
* [Apostila da USP](https://www.ime.usp.br/~pf/algoritmos/aulas/fila.html)

**[Pilha](https://github.com/raikon55/Estruturas_de_dados_C/blob/master/src/pilha.h) (Last In, First Out)**

A pilha é o oposto da fila, pois o último a entrar será o primeiro a sair. Normalmente utilizada em processos computacionais e linguagens de programação como C, por sempre voltar a quem chamou, sem interferir em outras partes.
Uma imagem para melhor entendimento de uma pilha:

![Processo de empilhar e desempilhar](https://upload.wikimedia.org/wikipedia/commons/thumb/b/b4/Lifo_stack.png/350px-Lifo_stack.png)

_Material sobre pilhas_
* [Apostila C Progressivo](https://www.cprogressivo.net/2014/05/Pilhas-Stack-em-C-O-Que-E-Como-Implementar-Tutorial-C-Estrutura-de-Dados.html)
* [Apostila da USP](https://www.ime.usp.br/~pf/algoritmos/aulas/pilha.html)

**[Lista duplamente encadeada](https://github.com/raikon55/Estruturas_de_dados_C/blob/master/src/lista.h)**

A lista é a estrutura de dados mais versátil dentre todas apresentadas, pois se pode inserir e remover elementos de qualquer ponto, e com ela é possível implementar filas e pilhas. A compreensão do funcionamento de uma lista pode ser complexo, por isso é recomendado ler esse [artigo](https://www.cprogressivo.net/2013/10/Listas-em-C-O-que-e-como-funciona-uma-LIST.html) do **C progressivo**.

_Material sobre listas_
* [Apostila C Progressivo](https://www.cprogressivo.net/2013/10/Como-fazer-uma-lista-em-C.html)
* [Explicação detalhada de lista](https://www.cprogressivo.net/2013/10/Listas-em-C-O-que-e-como-funciona-uma-LIST.html)
* [Apostila da USP](https://www.ime.usp.br/~pf/algoritmos/aulas/lista.html)

### Conceito de hash

**[Função Hash](https://github.com/raikon55/Estruturas_de_dados_C/blob/master/src/hash.h)**

Uma função matemática que aplicada sobre um conjunto de dados, gera um número conhecido como hash, que teoricamente seria único para o conjunto de dados usados. Hashes são utilizadas em diversas áreas, como blockchain, criptografia, verificação de arquivo, assinaturas digitais e muitas outras.

Uma boa função hash terá o minimo de colisões possível, para não haver o mesmo hash para conjuntos de dados distintos.

_Material sobre hashes_

* [Conceito de hash](https://pt.wikipedia.org/wiki/Fun%C3%A7%C3%A3o_hash)
* [Função hash criptográfica](https://pt.wikipedia.org/wiki/Fun%C3%A7%C3%A3o_hash_criptogr%C3%A1fica)
* [Hash e blockchain](https://guiadobitcoin.com.br/se-voce-entender-a-funcao-da-hash-voce-entendera-a-blockchain/)

### Conceito de árvore binária

**[Árvore binária](https://github.com/raikon55/Estruturas_de_dados_C/blob/master/src/binary_tree.h)**

"Em ciência da computação, a árvore de busca binária ou árvore de pesquisa binária é uma árvore binária onde todos os nós são valores, todo nó a esquerda contêm uma sub-árvore com os valores menores ao nó raiz da sub-árvore e todos os nós da sub-árvore a direita contêm somente valores maiores ao nó raiz. Os valores são relevantes na árvore de busca binária. O objetivo desta árvore é estruturar os dados de forma flexível permitindo pesquisa binária" [¹](https://www.ft.unicamp.br/liag/siteEd/definicao/arvore-binaria.php)

_Material sobre árvores binárias_

* [Árvore binária](https://pt.wikipedia.org/wiki/%C3%81rvore_bin%C3%A1ria)
* [Apostila da USP](https://www.ime.usp.br/~pf/algoritmos/aulas/bint.html)
* [Apostila UNICAMP](https://www.ft.unicamp.br/liag/siteEd/definicao/arvore-binaria.php)
