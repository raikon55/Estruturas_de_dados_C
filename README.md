# Estruturas_de_dados_C
Estruturas de dados implementadas em C.

Códigos desenvolvidos durante as disciplinas de
Algoritmos e Estruturas de Dados I, II e III oferecidas pelo curso de
Engenharia de Computação da PUC Minas.

O objetivo é centralizar todas as estruturas implementas em C em um único lugar
para fácil acesso e compartilhamento.

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

**[Hash]()**

**[Árvore binária]()**
