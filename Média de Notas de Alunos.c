

#include <stdio.h>
#include <stdlib.h>
 main()
{
int i;
float n1,n2,n3,m;
printf("Informe as notas dos alunos apertando ENTER: \n");

for (i=1;i<=40;i++)
{  printf("\n\nNotas do aluno %i = \n", i);
scanf("%f %f %f", &n1,&n2,&n3);
m=(n1+n2+n3)/3;
if(m>=7)
{ printf ("\nAluno Aprovado -  Media %f", m); }
else 
{ printf("\nAluno Reprovado - Media %f", m); }

}                

return(0);
}


