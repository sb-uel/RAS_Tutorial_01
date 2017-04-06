/****************************************
  Projeto: Maquina Inutil
    Autor: Tiago Piai github : tiagopiai
  file: main.ino
*****************************************/
/****************************************
  Exemplo de utilização do código
*****************************************/

#include <Arduino.h>
#include "maquinainutil.h"

void setup() {
  init_all(); // Inicializa pinos
}

void loop() {
// MODO BLOQUEANTE
 /* 
  checaChave(ON);       // Espera ate a chave ser ligada
  esperaSegundos(1);    // Espera 1 seg
  acionaMotor(5, 170);  // Aciona o motor para desligar a chave
  checaChave(OFF);      // Verifica se ela foi desligada
  esperaSegundos(1);    // Espera 1 seg
  acionaMotor(5, 10);   // Aciona o motor para retornar a caixa
*/
// MODO NAO BLOQUEANTE
/*
  if (statusChave() == ON) {
    esperaSegundos(1);    // Espera 1 seg
    acionaMotor(5, 170);  // Aciona o motor para desligar a chave

  } else {
    esperaSegundos(1);    // Espera 1 seg
    acionaMotor(5, 10);   // Aciona o motor para retornar a caixa
  }
*/
}
