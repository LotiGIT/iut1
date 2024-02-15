#include <stdio.h>
#include <stdlib.h>

/*void test();*/
void test2();

float somme(float x, float y);
float division(float x, float y);
float soustraction(float x, float y);
float multiplication(float x, float y);

int main(){

    test2();

    return EXIT_SUCCESS;
}

float somme(float x, float y){
    float res;

    res = x + y;
    return res;
}

float division(float x, float y){
    float res;

    if (y != 0)
    {
        res = x/y;
    }
    else{
        printf("Erreur");
    }
    return res;
}

float soustraction(float x, float y){
    float res;

    res = x - y;
    return res;
}


float multiplication(float x, float y){
    float res;

    res=x*y;
    return res;
}


/*void test(){
    printf("Pour la somme :  valeur attendue : %f valeur obtenue : %f\n",9.8,somme(0.6, 9.2));
    printf("Pour la soustraction :  valeur attendue : %f valeur obtenue : %f\n",1.8,soustraction(5.9, 4.1));
    printf("Pour la division :  valeur attendue : %f valeur obtenue : %f\n",5.0,division(10, 2));
    printf("Pour la division :  valeur attendue : %s valeur obtenue : %d\n", "Erreur",division(37, 0));
    printf("Pour la multiplication :  valeur attendue : %.2f valeur obtenue : %.2f\n",21.02,multiplication(3.12, 6.74));
}
*/

void test2(){
    printf("valeur attendue : %f valeur obtenue : %f\n",24.4, soustraction(somme( 4.2, multiplication( 5.3, somme(division(somme(4.5, 1.3), 2.0), 1.1))), 1.0));
    
}
