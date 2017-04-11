# RAS_Tutorial_01 (Máquina-Inútil)

Desenvolvimento de uma máquina inútil com o objetivo de introduzir iniciantes ao campo da robótica.

_PS: O arquivo **ras_tutorial_01.pdf** e um guia para que o interessado busque conhecer um pouco a fundo sobre os elementos utilizados na execução deste projeto._ 

As funções aqui implementadas tem a finalidade de simplificar o estudo daqueles que buscam uma introdução a robótica porém possuem pouca
ou nenhuma base de programação. Assim que um conhecimento considerável sobre programação for desenvolvido ficará claro que tais funções 
nao exprimem a melhor eficiêcia dos componentes utilizados e existem métodos melhores, porém relativamente mais complexos, de se 
implementar a Máquina Inútil em questão.

## Funções

* `init_all()`: Inicializa e configura os pinos que serao utilizados para a chave e para o acionamento do Servo. Deve ser inclusa dentro do arquivo main.ino na funcao void setup().

* `esperaSegundos(tempo_em_segundos)`: Esta funcao faz com que o programa pare por pTempo segundos, sendo pTempo um numero real positivo.

* `checaChave(estado_da_chave)`: Espera por tempo indeterminado ate que a chave seja acionada de modo ON ou OFF de acordo com o valor em pS.

* `statusChave()`: Retorna a posicao da chave ON ou OFF. Pode ser chamada dentro de um if para dizer se a chave esta ligada ou desligada.

* `acionaMotor(velocidade, posicao_em_graus)`: Aciona o servo motor a uma velocidade pVelocidade ate atingir a posicao pNewPos. pVelocidade pode assumir valores de 1 a 5, sendo 5 a velocidade máxima.

__Todas essas funcoes podem ser vistas sendo aplicada no arquivo main.ino para exemplificar seu uso. Neste arquivo e possivel ver a 
presenca de dois modos bloqueante e nao bloqueante. Descomente um dos dois para ve-lo funcionando.__

O modo bloqueante requer que sejam executadas as funcoes naquela ordem especifica, ou seja, nada vai acontecer enquanto a chave nao for 
alterada. O modo nao bloqueante ja permite que outras funcoes sejam executadas enquanto a chave nao for ativada.

## Pinagem
```
PINOS 
Pino 9  -------------------- Sinal para o servomotor
Pino 11 -------------------- Entrada de sinal da chave

CONEXÕES
  Servomotor
  Fio vermelho -------------------- +5V
  Fio marrom   -------------------- GND
  Fio amarelo  -------------------- Pino 9
  
CHAVES
  Pino central -------------------- GND
  Pino lateral* ------------------- Pino 11
```
__(escolha qualquer um dos pinos laterais teste e se atente na hora da montagem).__

## Construção Mecânica
Para construção mecânica da máquina inútil recomenda-se buscar inspirações em outras caixas na internet e personaliza-la de acordo com 
o seu gosto.

__A biblioteca Servo.h foi obtida atraves do website: https://www.arduino.cc/en/reference/servo__
