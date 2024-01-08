/*Traversarea arborilor binari ordonați – Se dă un arbore binar ordonat care se populează cu
elemente aleatorii. Să se afișeze elementele în urmă traversării arborelui în „pre-ordine”, „inordine”, „post-ordine” și pe „nivel” (level-order traversal).*/

#include <stdio.h>
#include <stdlib.h>
struct Nod {
	int val;
	struct Nod* st;
	struct Nod* dr;
};
//functie pentru crearea unui nou nod ina arbore
struct Nod* creareNod(int val) {
	struct Nod* nod = (struct Nod*)malloc(sizeof(struct Nod));
	nod->val = val;
	nod->st = nod->dr = NULL;
	return nod;
}
void preordine(struct Nod* radacina) {
	if (radacina != NULL) {
		printf("%d ", radacina->val);
		preordine(radacina->st);
		preordine(radacina->dr);
	}
}
void inordine(struct Nod* radacina) {
	if (radacina != NULL) {
		inordine(radacina->st);
		printf("%d ", radacina->val);
		inordine(radacina->dr);
	}
}
void postordine(struct Nod* radacina) {
	if (radacina != NULL) {
		postordine(radacina->st);
		postordine(radacina->dr);
		printf("%d ", radacina->val);
	}
}
int inaltime(struct Nod* radacina) {
	if (radacina == NULL)
		return 0;
	else {
		int stanga_inaltime = inaltime(radacina->st);
		int dreapta_inaltime = inaltime(radacina->dr);

		if (stanga_inaltime > dreapta_inaltime)
			return(stanga_inaltime + 1);
		else return(dreapta_inaltime + 1);
	}
}
void afisareNivel(struct Nod* radacina, int nivel) {
	if (radacina == NULL)
		return;
	if (nivel == 1)
		printf("%d ", radacina->val);
	else if (nivel > 1) {
		afisareNivel(radacina->st, nivel - 1);
		afisareNivel(radacina->dr, nivel - 1);
	}
}
void nivelOrder(struct Nod* radacina) {
	int h = inaltime(radacina);
	int i;
	for (i = 1; i <= h; i++)
		afisareNivel(radacina, i);
}

int main() {
	//crearea arborelui binar ordonat
	struct Nod* radacina = creareNod(5);
	radacina->st= creareNod(3);
	radacina->dr = creareNod(8);
	radacina->st->st = creareNod(1);
	radacina->st->dr = creareNod(4);
	radacina->dr->st = creareNod(7);
	radacina->dr->dr = creareNod(9);

	printf("Pre-ordine: ");
	preordine(radacina);
	printf("\nInordine: ");
	inordine(radacina);
	printf("\nPost-ordine: ");
	postordine(radacina);
	printf("\nNivel: ");
	nivelOrder(radacina);
	return 0;
}
