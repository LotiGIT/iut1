#include <stdio.h>
#include <stdlib.h>

const int MOY_G = 10;
const int MOY_UE = 8;

int main()
{
    float ue1, ue2, moyenne;

    printf("Moyenne UE1 : ");
    scanf("%f",&ue1);
    printf("Moyenne UE2 : ");
    scanf("%f",&ue2);
    moyenne = (ue1+ue2)/2;
    printf("%4.2f\n",moyenne);

    if(moyenne < MOY_G)
    {
        printf("Jury souverain");
    }
    else
    {
        if(ue1 < MOY_UE || ue2 < MOY_UE)
        {
            printf("Redoublement");
        }
        else if(ue1 >= MOY_UE && ue2 >= MOY_UE)
        {
            printf("Semestre validé");
        }
        
    }
    
    return 0;
}