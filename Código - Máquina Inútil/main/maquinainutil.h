/****************************************
  Projeto: Maquina Inutil
    Autor: Tiago Piai github : tiagopiai
  file: maquinainutil.h
*****************************************/
#ifndef __MAQUINAINUTIL_H
#define __MAQUINAINUTIL_H


// BIBLIOTECAS
#include <Arduino.h>
#include "Servo.h"

// DEFINES
#define pinChave 11
#define pinServo 9


//ENUM
enum switch_e {ON = 0, OFF = 1};

// PROTOTIPOS
void init_all();
void acionaMotor(int pVelocidade, int pNewPos);
void checaChave(int pS);
int statusChave();
void esperaSegundos(float pTempo);

#endif
