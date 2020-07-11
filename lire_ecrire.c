#include <stdio.h>
#include "mes_types.h"
#include "afficher.h"
#include "lire_ecrire.h"



SLIDER lire_fichier(char *nom) {

	printf("nom = %s\n",nom);
	SLIDER S;
	S.Px=25;
	S.Py=125;
	
	S.T[0][0] = 0;
	S.T[1][0] = 100;  // premier mur vers le haut
	S.T[2][0] = 0;
	
	S.T[0][1] = 50;
	S.T[1][1] = 50; // mur vers la droite
	S.T[2][1] = 3;
	
	return S;
}


void ecrire_fichier(SLIDER S, char*nom) {
}
