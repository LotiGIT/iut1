#include <stdlib.h>
#include <time.h>
#include <stdio.h>



int generer(int borne);
void test();
int comparer(int x, int y);

int main(){
    int x;
    int y;
    int z;
    
    z = comparer(x, y);
    printf("%d", &z);
    return EXIT_SUCCESS;
}


int generer(int borne){  
    int gener;
    srand(time(NULL));
    gener = rand()%borne;
    return gener;
}

void test(){
    printf("Génération : %d\n\n\n", generer(100));

}

int comparer(int x, int y){
    printf("valeur de x : ");
    scanf("%d", &x);
    printf("valeur de y : ");
    scanf("%d", &y);


    if (x == y)
    {
        
        return 0;
    }
    else if (x > y)
    {
    
        return 1;
    }
    else
    {
     
        return -1;
    } 
    
}