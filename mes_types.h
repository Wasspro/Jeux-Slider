
struct slider {
	int L,H; // Largeur et hauteur de la grille
	int Px,Py; // Position slider
	int T[3][20]; //Tableaux pour stocker les infos des murs (x,y,(H,B,G,D)), on met une limite de 20 murs
};

typedef struct slider SLIDER;
