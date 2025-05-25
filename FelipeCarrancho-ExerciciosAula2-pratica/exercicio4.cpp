#include <stdio.h>
int main ()
{
printf("Erros devem ser"); //o erro desta linha era que faltava um "
printf(" corrigidos na ordem em que sao identificados,"); //nesta linha faltou um espaço no inicio
printf(" pois ao corrigir "); //o erro desta linha era a falta do f no printf
printf("um erro \nOutros podem ser identificados"); //o erro desta linha foi a falta do ) e o /n não é erro mas fica visualmente estranho
return 0;
}
