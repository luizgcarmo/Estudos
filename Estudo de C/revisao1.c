#include <stdio.h>
#include <stdlib.h>

char media(float p1, float p2, float p3, float p4){
  float final;
  final=((p1*0.2)+(p2*0.3)+(p3*0.4)+(p4*0.5));
  char a;
  if(final>=6.0){
    if(final>=7.0){
      if(final>=8.5){
        a='A';
        return a;
      }
      a='B';
      return a;
    }
    a='C';
    return a;
  }else a='D';

  return a;
  }
  
int main(){

  float p1,p2,p3,p4;  // p1(peso 2), p2(peso 3), p3(peso 4), p4(peso 5)
  char concept;

    printf("\tDigite a nota da P1 : \n");
    scanf("%f",&p1);
    printf("\tDigite a nota da P2 : \n");
    scanf("%f",&p2);
    printf("\tDigite a nota da P3 : \n");
    scanf("%f",&p3);
    printf("\tDigite a nota da P4 : \n");
    scanf("%f",&p4);

    concept=media(p1,p2,p3,p4);

    switch (concept) {
      case 'A':
      printf("Aluno aprovado com conceito %c",concept);
      break;
      case 'B':
      printf("Aluno aprovado com conceito %c",concept);
      break;
      case 'C':
      printf("Aluno aprovado com conceito %c",concept);
      break;
      case 'D':
      printf("Aluno reprovado, conceito %c",concept);
      break;
      default:
        break;
    }
    printf("\n");
    
  system("pause");
  return 0;
}
