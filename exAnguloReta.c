#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

float incliReta(float a1, float b1, float a2, float b2){
  
  float m;

  m = (b2 - b1) / (a2 - a1);

  return m;
}

//--------------------------------------------
int main(void){
  
  float x1, y1, x2, y2, declividade;
  
  printf("Este é um exemplo que utiliza uma função definida externamente do bloco principal e calcula a inclinação de uma reta. \n\n");
  
  printf("Digite a coordenada do primeiro ponto na foma x1, y1: ");
  scanf("%f, %f", &x1, &y1);
  
  printf("Digite a coordenada do segundo ponto na foma x2, y2: ");
  scanf("%f, %f",&x2, &y2);
  
  declividade = incliReta(x1, y1, x2, y2);
  
  printf("A inclinação da reta que passa pelos pontos é %f\n", declividade);
  
  return 0;
}
