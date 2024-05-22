#include<stdio.h>
int main(){
int raw,clm,num;
scanf("%d",&num);
for(raw=1;raw<=num;raw++){     // character for capital A start in 65 and
                                // small b start in 97
   for(clm=1;clm<=raw;clm++){

       // printf("%c",clm+64);
         printf("%c",raw+96);
   }
   printf("\n");
}
}

