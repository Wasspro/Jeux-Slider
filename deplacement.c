#include <stdio.h>
#include "mes_types.h"
#include "afficher.h"

#define L 500 
#define H 300

int murhaut(SLIDER S,int i)
{
	if ( (S.T[0][i]==S.Px-25) && (S.T[1][i]==S.Py-25) && (S.T[2][i]==0)) { 
		return 1;		
	}
	return 0;
}

int mur(SLIDER S){ // Si il y'a un mur
	
	for (int i=0;i<20;i++)
	{
		if (murhaut(S,i)){
			return 1;
		}
	}
}

void deplacement(SLIDER S){
	
	//Les touches : H=273,B=274,G=276,D=275,UNDO=117
	//D = get_key();
	//if (D!=-1)
	//printf("%d\n",D);

while(S.Px<450 || S.Py>50){
		int D;
		D=get_key(); 
		
		if(D == 273){
			while (S.Py<H-25 && mur(S)!=1){ //
			S.Py = S.Py+50;
			afficher_slider(S);
			attendre(50);
		}
			}
			
		else if(D == 274){
			while (S.Py>25){
			S.Py = S.Py-50;
			afficher_slider(S);
			attendre(50);
		}
			}
			
		else if(D == 276){
			while (S.Px>25){
			S.Px = S.Px-50;
			afficher_slider(S);
			attendre(50);
		}
			}
			
		else if(D == 275){
			while (S.Px<L-25){
			S.Px = S.Px+50;
			afficher_slider(S);
			attendre(50);
		}
			}
	}
}
