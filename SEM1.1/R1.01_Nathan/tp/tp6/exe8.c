#include <stdio.h>
#include <stdlib.h>

int ET(int,int);
int OU(int,int);
int OUEX(int,int);

void add_b(int,int,int,int*,int*);

void testOperateur();
void testAdd();

int main()
{
    //testOperateur();
    //testAdd();
    int a4,a3,a2,a1;
    int b4,b3,b2,b1;
    int c1,c2,c3,D;
    int s1,s2,s3,s4;


    scanf("%d %d %d %d",&a4,&a3,&a2,&a1);
    scanf("%d %d %d %d",&b4,&b3,&b2,&b1);
    //printf("%d%d%d%d",b4,b3,b2,b1);

    add_b(a1,b1,0,&c1,&s1);
    add_b(a2,b2,c1,&c2,&s2);
    add_b(a3,b3,c2,&c3,&s3);
    add_b(a4,b4,c3,&D,&s4);

    printf("%d%d%d%d",s4,s3,s2,s1);

    return EXIT_SUCCESS;
}

void add_b(int B, int A, int cin, int* cout, int* s)
{
    *cout = OU(ET(cin,OUEX(A,B)),ET(A,B));
    *s = OUEX(cin,OUEX(B,A));
}

void testAdd()
{
    int A,B,cin,cout,s;
    A = 0;
    B = 0;
    cin = 0;
    add_b(B,A,cin,&cout,&s);
    printf("VA : %d %d VO : %d %d\n",0,0,cout,s);
    A = 0;
    B = 0;
    cin = 1;
    add_b(B,A,cin,&cout,&s);
    printf("VA : %d %d VO : %d %d\n",0,1,cout,s);    
    A = 0;
    B = 1;
    cin = 0;
    add_b(B,A,cin,&cout,&s);
    printf("VA : %d %d VO : %d %d\n",0,1,cout,s);    
    A = 0;
    B = 1;
    cin = 1;
    add_b(B,A,cin,&cout,&s);
    printf("VA : %d %d VO : %d %d\n",1,0,cout,s);    
    A = 1;
    B = 0;
    cin = 0;
    add_b(B,A,cin,&cout,&s);
    printf("VA : %d %d VO : %d %d\n",0,1,cout,s);    
    A = 1;
    B = 0;
    cin = 1;
    add_b(B,A,cin,&cout,&s);
    printf("VA : %d %d VO : %d %d\n",1,0,cout,s);    
    A = 1;
    B = 1;
    cin = 0;
    add_b(B,A,cin,&cout,&s);
    printf("VA : %d %d VO : %d %d\n",1,0,cout,s);    
    A = 1;
    B = 1;
    cin = 1;
    add_b(B,A,cin,&cout,&s);
    printf("VA : %d %d VO : %d %d\n",1,1,cout,s);    
}

int ET(int nb1, int nb2)
{
    return nb1*nb2;
}

int OU(int nb1, int nb2)
{
    return (nb1+nb2)-(nb1*nb2);
}

int OUEX(int nb1, int nb2)
{
    return (nb1+nb2)-2*(nb1*nb2);
}

void testOperateur()
{
    // ET
    printf("valeur attendue : %d valeur obtenue : %d\n",1,ET(1,1));
    printf("valeur attendue : %d valeur obtenue : %d\n",0,ET(1,0));
    printf("valeur attendue : %d valeur obtenue : %d\n",0,ET(0,1));
    printf("valeur attendue : %d valeur obtenue : %d\n",0,ET(0,0));
    // OU
    printf("valeur attendue : %d valeur obtenue : %d\n",1,OU(0,1));
    printf("valeur attendue : %d valeur obtenue : %d\n",1,OU(1,0));
    printf("valeur attendue : %d valeur obtenue : %d\n",1,OU(1,1));
    printf("valeur attendue : %d valeur obtenue : %d\n",0,OU(0,0));
    // OUEX
    printf("valeur attendue : %d valeur obtenue : %d\n",1,OUEX(0,1));
    printf("valeur attendue : %d valeur obtenue : %d\n",1,OUEX(1,0));
    printf("valeur attendue : %d valeur obtenue : %d\n",0,OUEX(1,1));
    printf("valeur attendue : %d valeur obtenue : %d\n",0,OUEX(0,0));
}