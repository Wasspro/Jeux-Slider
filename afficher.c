#include <uvsqgraphics.h>
#include "mes_types.h"


#define L 500 
#define H 300

void initialiser_affichage(SLIDER S) {
	init_graphics (L,H);
}

void afficher_grille(SLIDER S) {
	POINT p1,p2,p3,p4;
	p1.x=0;p1.y=0;
	p2.x=0;p2.y=500;
	p3.x=0;p3.y=0;
	p4.x=500;p4.y=0;
	
	int i;
	for(i=0;i<10;i++){
		p1.x=p1.x+50;p2.x=p1.x;
		p3.y=p3.y+50;p4.y=p3.y;
		draw_line(p1,p2,blanc);
		draw_line(p3,p4,blanc);
		}
}
	
void afficher_murs(SLIDER S) {
	
	//On travaille sur le cadran d'une montre : H=0,B=6,G=9,D=6
	//T[0]=x,T[1]=y,T[2]=H,B,G,D
	
	POINT p1,p2;
	for (int i=0;i<20;i++)
	{
		if (S.T[2][i]==0) // H
		{
			p1.x=S.T[0][i];
			p1.y=S.T[1][i]+ 50- 50/30;
			p2.x=S.T[0][i]+ 50;
			p2.y=S.T[1][i]+ 50+ 50/30;	
			draw_fill_rectangle(p1,p2,rouge);
		}
		
		if (S.T[2][i]==3) // D
		{
			p1.x=S.T[0][i]+150-50/30;
			p1.y=S.T[1][i];
			p2.x=S.T[0][i]+150+50/30;
			p2.y=S.T[1][i]+50;	
			draw_fill_rectangle(p1,p2,rouge);
		}
	 }
}

void afficher_le_slider(SLIDER S) {
	
	POINT p;
	p.x=S.Px,p.y=S.Py;
	draw_fill_circle(p,20,blanc);
}

void afficher_sortie(SLIDER S) {
	
	POINT p1,p2;
	p1.x=451,p1.y=0;
	p2.x=500,p2.y=49;
	draw_fill_rectangle(p1,p2,vert);
}

void afficher_slider (SLIDER S) {
	fill_screen(noir);
	afficher_grille(S);
	afficher_murs(S);
	afficher_le_slider(S);
	afficher_sortie(S);
}

void finir_affichage(SLIDER S) {
	wait_escape();
}
