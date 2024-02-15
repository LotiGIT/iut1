#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>



typedef struct 
{
    float latitude;
    float longitude;
    float elevation;
}pointGPS;

void afficherPoint(pointGPS p);
void lister(char nomFic[]);
float sommet(char nomFic[]);
void departEtArrivee(char nomFic[]);
void ajouterPoint(char nomFic[]);
void fusionner(char nomFic[], char nomFic2[], char nomFic3[]);

int main()
{
    char nomFic[] = "Trace1.data";
    pointGPS p;
    afficherPoint(p);
    lister(nomFic);
    sommet(nomFic);
    ajouterPoint(nomFic);
    return EXIT_SUCCESS;
}

void afficherPoint(pointGPS p)
{
    printf("%.3f    %.3f    %.3f\n", p.latitude, p.longitude, p.elevation);

}

void lister(char nomFic[])
{
    FILE *f;
    pointGPS p;
    bool eof = false;

    f = fopen(nomFic, "rb");

    do
    {
        fread(&p, sizeof(p), 1, f);
        eof = feof(f);
        if (!eof)
        {
            
            printf("                Long.        Lat.       Alt.\n");
            printf("Point  1:        %.3f      %.3f      %.3f\n", p.latitude, p.longitude, p.elevation);
            printf("\n");
        }
    } while (!eof);
    printf("\n");
    fclose(f);
}

float sommet(char nomFic[])
{
    FILE *f;
    pointGPS p;
    bool eof = false;
    float resultat;
    resultat = 0;
    f = fopen(nomFic, "rb");

    do
    {
        fread(&p, sizeof(p), 1, f);
        eof = feof(f);
        if (!eof && resultat < p.elevation)
        {
           
            
            if (p.elevation > resultat)
            {
                resultat = p.elevation;
            }
        }
        
    } while (!eof);
    printf("\n");
    printf("Le point le plus haut se situe à cette altitude : %2.3f \n", resultat);
    fclose(f);
    return resultat;
    
}

void departEtArrivee(char nomFic[])
{
    FILE *f;
    pointGPS p;
    bool eof = false;
    int deb, fin;
    deb = 0;
    fin = 0;
    f = fopen(nomFic, "rb");

    do
    {
        fread(&p, sizeof(p), 1, f);
        eof = feof(f);
        if (!eof)
        {
        //    while(/* condition */)
        //    {
        //     printf("Erreur, le fichier est vide ! \n");
        //    }
           
            
            
        }
        
    } while (!eof);
    printf("\n");
    printf("Depart : Point %d\n", deb);
    printf("Arrivee : Point %d\n", fin);
    fclose(f);
}

void ajouterPoint(char nomFic[])
{
    FILE *f;
    pointGPS p;

    f = fopen(nomFic, "ab");

    printf("Longitude : ");
    scanf("%f", &p.longitude);

    while (p.longitude != 0)
    {
        // Lecture des donnees
        printf("Latitude : ");
        scanf("%f", &p.latitude);
        printf("Altitude : ");
        scanf("%f", &p.elevation);
        // Ecriture dans le fichier
        fwrite(&p, sizeof(p), 1, f);
        printf("Longitude : ");
        scanf("%f", &p.longitude);
    }
    fclose(f);
}

void fusionner(char nomFic[], char nomFic2[], char nomFic3[])
{

}