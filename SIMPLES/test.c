#include <stdio.h>
#include <stdlib.h>


int fatorial(int n){
   int r;
   if(n<0){   
      return 0;
   }
   if(n==0||n==1){   
      return 1;
   }
   else{   
      r=fatorial(n-1);
      return n*r;
   }
}


void imprime(int n){
   printf("\n%d",n);
}



int main(){
   int i;
   int j;
   int a=5;
   int b=10;
   int c=9;
   int f=7;
   int dteste[10];
   int numero;
   int resultado;
   printf("%s\n",#----- Testando FUNCTION -----#);
   printf("%s",Digite um valor: );
   scanf("%d",&numero);
   resultado=fatorial(numero);
   printf("%s\n",#----- Testando ESCREVAL -----#);
   printf("%d\n",resultado);
   printf("%d\n",a+b);
   printf("%s\n",#----- Testando IF -----#);
   if(a==5){   
      if(b>5){      
         if(c<10){         
            printf("%d\n",a+b+c);
         }
      }
   }
   printf("%s\n",#----- Testando FOR -----#);
   for(j = 1;j < 10;j += 1){   
      printf("%d\n",j);
   }
   for(i = 10;i > 1;i += -1){   
      printf("%d\n",i);
   }
}
