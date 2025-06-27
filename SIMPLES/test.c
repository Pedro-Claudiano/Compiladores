#include <stdio.h>
#include <stdlib.h>

int main(){
   int a;
   int b=5;
   int c;
   int f;
   int i;
   float d;
   int vteste[10];
   int cteste[10];
   int dteste[5+8];
   int r[10];
   int va[10];
   int vb[10];
   float ff[3];
   cteste[0]=5;
   vteste[6]=vteste[4]+cteste[2]-8;
   for(i = 1;i < 10;i += 1){   
      scanf("%d",&cteste[i]);
   }
   b=8+va[2];
   scanf("%d",&a);
   scanf("%d",&c);
   scanf("%d",&f);
   scanf("%f",&d);
   b=(a+b)*c/c+va[2];
   f=5+2;
   c=c+f*5;
   printf("\n%d",b);
   printf("\n%d",f);
   printf("\n%d",c);
   printf("\n%f",d);
   if(b>f){   
      printf("\n%d",b);
   }
   else{   
      printf("\n%d",f);
   }
   if(a==5){   
      if(b>5){      
         if(c<10){         
            printf("\n%d",a+b+c);
         }
      }
   }
   while((b>f&&a<1000)||a<f){   
      printf("\n%d",f*10);
      f=f-1;
   }
   for(i = 10;i > 1;i += -1){   
      printf("\n%d",i);
   }
}
