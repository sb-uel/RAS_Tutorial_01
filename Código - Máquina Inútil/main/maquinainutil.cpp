/****************************************
  Projeto: Maquina Inutil
    Autor: Tiago Piai github : tiagopiai
  file: maquinainutil.cpp
*****************************************/

#include "maquinainutil.h"

// GLOBAIS
Servo servo;
int pos = 0;

// FUNCOES

// Funcao:    init_all()
// Descricao: Inicializa e configura os pinos que serao utilizados
//            para a chave e para o acionamento do Servo.
void init_all() {
  servo.attach(pinServo);
  pinMode(pinChave, INPUT_PULLUP);
}



// Funcao:    esperaSegundos(float pTempo)
// Descricao: Esta funcao faz com que o programa pare por pTempo
//            segundos, sendo pTempo um numero real positivo.
void esperaSegundos(float pTempo) {
  delay((unsigned long)(pTempo * 1000));
}



// Funcao:    checaChave(int pS)
// Descricao: Espera por tempo indeterminado ate que a chave seja
//            acionada de modo ON ou OFF de acordo com o valor em pS.
void checaChave(int pS) {
  while (digitalRead(pinChave) != pS);
}



// Funcao:    statusChave()
// Descricao: Retorna a posicao da chave ON ou OFF.
int statusChave() {
  return digitalRead(pinChave);
}



// Funcao:    acionaMotor(int pVelocidade, int pNewPos)
// Descricao: Aciona o servo motor a uma velocidade pVelocidade ate
//            atingir a posicao pNewPos. pVelocidade pode assumir
//            valores de 1 a 5, sendo 5 a velocidade máxima.
void acionaMotor(int pVelocidade, int pNewPos) {

  int i_pos = 0;

  // Checa a velocidade e aciona o motor
  if (pVelocidade >= 1 && pVelocidade < 6) {
    if (pos < pNewPos) {
      for (i_pos = pos; i_pos <= pNewPos; i_pos += pVelocidade) {
        servo.write(i_pos);
        delay(15);
      }
    } else {
      for (i_pos = pos; i_pos >= pNewPos; i_pos -= pVelocidade) {
        servo.write(i_pos);
        delay(15);
      }
    }
    pos = pNewPos;
  }

}
