typedef char chaine10[11] ;
typedef struct{
chaine10 reference;
int dateEntStock;
} produit;
void saisir(produit *adr_prod, int dateJ){
// met dans *adr_prod un produit saisi au clavier à la date dateJ
printf("référence ?\n");
scanf("%s",adr_prod->reference);
adr_prod->dateEntStock=dateJ;
}
void afficher(produit prod){
// affiche à l'écran le produit prod
printf("%s %d\n",prod.reference,prod.dateEntStock);
}

void modifdate(int* adr_datej){
//tourne la page de l'éphéméride
(*adr_datej)++;
}



typedef pile stock ;
void init(stock* adr_st)
{

}

void entree(produit pr, stock* adr_st)
{

}

void sortie(stock* adr_st, int dateJ)
{
    
}