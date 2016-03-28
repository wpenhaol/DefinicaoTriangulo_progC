#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
	// declaracao das variaveis
    float ldA, ldB, ldC;

	// entrada de dados para o lado 1
    printf("Digite o lado 1\n");
    // atribuicao do valor digitado do lado 1 na variavel ldA
    scanf("%f", &ldA);
    
    // entrada de dados para o lado 2
    printf("Digite o lado 2\n");
    // atribuicao do valor digitado do lado 1 na variavel ldB
    scanf("%f", &ldB);
    
    // entrada de dados para o lado 3
    printf("Digite o lado 3\n");
    // atribuicao do valor digitado do lado 1 na variavel ldC
    scanf("%f", &ldC);

	/*
	*	verificacao das condicores da existencia de um triangulo onde temos essas condições 
	*
	*	1º if = | b - c | < a < b + c
	*	2º if = | a - c | < b < a + c
	*	3º if = | a - b | < c < a + b	
	*
	*/
	
    if((ldB-ldC) < ldA  && ldA <(ldB+ldC))
    {
        if((ldA-ldC) < ldB  && ldB <(ldA+ldC))
        {
            if((ldA-ldB) < ldC  && ldC <(ldA+ldB))
            {
            	
            	/*
            	Definicao dos triangulos onde:
            	
            	Triângulo escaleno: Todos os lados e ângulos são diferentes.
            	
            	Triângulos isósceles: dois lados iguais e os ângulos opostos a esses lados iguais. 
            	
            	Triângulo equilátero: Todos os lados e ângulos iguais. Concluímos que seus ângulos serão de 60°.
            	*/
            	
            	
                if(ldA==ldB && ldB==ldC){
                    printf("\nTriangulo equilatero.\n");
                }else if(ldA==ldB || ldB==ldC || ldA==ldC){
                    printf("\nTriangulo isosceles.\n");
                }else{
                    printf("\nTriangulo Escaleno.\n");
                }
            }else{
                 printf("\nDados invalidos para a existencia de um triangulo!\n");
            }
       }else{
            printf("\nDados para a existencia de um triangulo!\n");
       }
    }else{
          printf("\nDados para a existencia de um triangulo!\n");
    }

    return 0;
}
