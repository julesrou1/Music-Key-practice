#include "fonctions.h"

int main(void){
	LIS Num;
	LISchar Notes;
	int type;
	int randcondition;
	int Back;
	//Fonction utilise pour les nombre aleatoire NE PAS TOUCHE
	srand(time(NULL));
    while(1==1){
		printf ("Affichage rand(1), Affichage ordonnais(2): ");
		scanf("%d",&randcondition);
		
		Back=0;

		while(Back==0){
			shuffle(Num,7,randcondition);
			//printLIS(Num);
			rdnote(Notes,Num);
			//printLISchar(Notes);
			printf ("Major(1), Minor(2), Mix(3), Back(4): ");
			scanf("%d",&type);
			if(type==4){Back=1;}
			sequence(Notes,type);
			//sequence(Notes,2);
		}
	}
	return 0;

}
