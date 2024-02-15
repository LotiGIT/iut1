#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// fichier de notre cru(wtf?) dont on aura besoin :
#include "fonctions_date.h"
#include "const.h"
#include "types.h"
#include "globales.h"


int main()
{
    t_file maFile;
    t_element elt;
    
}

void afficheTous(t_file f)
{
    for (int i = 0; i < MAX_MESSAGE; i++)
    {
        printf("%s %s\n", f.tbElt[i].dateStr, f)
    }
    
}
