#include <stdio.h>
#include <stdlib.h>


void test();

int main(){


}


void test(){
printf("valeur attendue : %d valeur obtenue : %d\n",5.0,fcalcul(3,4));
printf("valeur attendue : %d valeur obtenue : %d\n",1.414,fcalcul(1,1));
printf("valeur attendue : %d valeur obtenue : %d\n",0.0,fcalcul(0,0));
printf("valeur attendue : %d valeur obtenue : %d\n",3.606,fcalcul(2,3));
printf("valeur attendue : %d valeur obtenue : %d\n",10.630,fcalcul(7,8));
}