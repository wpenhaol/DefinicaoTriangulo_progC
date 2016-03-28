#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    float ldA, ldB, ldC;

    printf("Digite o lado 1\n");
    scanf("%f", &ldA);
    printf("Digite o lado 2\n");
    scanf("%f", &ldB);
    printf("Digite o lado 3\n");
    scanf("%f", &ldC);

    if((ldB-ldC) < ldA  && ldA <(ldB+ldC))
    {
        if((ldA-ldC) < ldB  && ldB <(ldA+ldC))
        {
            if((ldA-ldB) < ldC  && ldC <(ldA+ldB))
            {
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
