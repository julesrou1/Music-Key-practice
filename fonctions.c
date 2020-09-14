#include "fonctions.h"

void rdnote(LISchar note,LIS shufflearray){
    LISchar NotesInOrder={'C','D','E','F','G','A','B'};
    int i;
    for(i=0;i<7;i++){
        note[i]=NotesInOrder[shufflearray[i]];
    } 
}

//cree la liste arr utilise pour forme la liste aléatoire ou non de char
void shuffle(LIS arr,int n,int shufflecondition){
    int k;
    for(k=0;k<n;k++){
        arr[k]=k;
    }
    if (n > 1 && shufflecondition==1) 
    {
        int i;
        for (i = 0; i < n - 1; i++) 
        {
          int j = i + rand() / (RAND_MAX / (n - i) + 1);
          int t = arr[j];
          arr[j] = arr[i];
          arr[i] = t;
        }
    }
}
//print la liste L correctement
void printLIS(LIS L){
    int i;
    for(i=0;i<7;i++){
       printf("%d\t",L[i]);
    }
    printf("\n");
}
//print la liste L correctement
void printLISchar(LISchar L){
    int i;
    for(i=0;i<7;i++){
       printf("%c\t",L[i]);
    }
    printf("\n");
}

//print la liste de char note avec major/minor ajoute + couleur pour le visu
void sequence(LISchar note,int n){
    int i;
    int rd;
    if(n==1){
        for(i=0;i<7;i++){
            
            printf("%c\t",note[i]);
            printf("\033[1;31m");
            printf("%s\n","Major");
            printf("\033[0m");
        }
    }
    if(n==2){
        for(i=0;i<7;i++){
            printf("%c\t",note[i]);
            printf("\033[1;34m");
            printf("%s\n","Minor");
            printf("\033[0m");
        }
    }
    if(n==3){
        for (i=0; i < 7; i++){
            rd=rand() % 2;
            if(rd==1){
                printf("%c\t",note[i]);
                printf("\033[1;34m");
                printf("%s\n","Minor");
                printf("\033[0m");
            }else{
                printf("%c\t",note[i]);
                printf("\033[1;31m");
                printf("%s\n","Major");
                printf("\033[0m");
            }
        }
    }
}