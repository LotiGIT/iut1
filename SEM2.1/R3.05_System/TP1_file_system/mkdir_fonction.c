#include <stdio.h>
#include <errno.h>
#include <sys/stat.h>

int main(){
    int ret;
    ret = mkdir("toto", 0777);
    if(ret == -1){
        if(errno == EEXIST){
            printf("Le dossier existe deja\n");
        }else{
            perror("Erreur inconnue\n");
        }
    }else{
        chmod("toto", 0111);
        printf("Le dossier a ete cree\n");
    }
}

