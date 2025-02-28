#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int main() {

  int escolhaUsuario;
  int escolhaComputador;

  srand(time(NULL));

  printf("Escolha uma opção: \n 1 - Pedra\n 2 - Papel \n 3 - Tesoura\n");
  scanf("%d",&escolhaUsuario);

  escolhaComputador = (rand()% 3) +1;

  if (escolhaUsuario < 1 || escolhaUsuario > 3){

    printf("Opção invalida. Por favor, escolha 1, 2 ou 3. \n");

    return -2;
  }
  printf("Você escolheu: %d\n", escolhaUsuario);
  printf("O computador escolheu: %d\n", escolhaComputador);

  char* opcaoes[] = {"Pedra","Papel","Tesoura"};
  printf("Você escolheu: %s\n",opcaoes[escolhaUsuario - 1]);
  printf("O computar escolheu: %s\n", opcaoes[escolhaComputador -1]);

  if (escolhaUsuario == escolhaComputador){
    printf("Empate!\n");
  }
  else if((escolhaUsuario == 1 && escolhaComputador ==3) ||
  (escolhaUsuario == 2 && escolhaComputador ==1) ||
  (escolhaUsuario == 3 && escolhaComputador ==2)){
    printf("Você venceu!\n");
  }  
  
  else {
    printf("Computador venceu!\n");
  }      

  return 0;
}