/*Traversarea arborilor binari ordonați – Se dă un arbore binar ordonat care se populează cu
elemente aleatorii. Să se afișeze elementele în urmă traversării arborelui în „pre-ordine”, „inordine”, „post-ordine” și pe „nivel” (level-order traversal).*/

#include <stdio.h>
#include <stdlib.h>

struct Nod {
	int val;
	struct Nod* stanga;
	struct Nod* dreapta;
};
//functie pentru crearea unui nou nod ina arbore
struct Nod* creareNod(int val) {
	struct Nod* nod = (struct Nod*)malloc(sizeof(struct Nod));
	nod->val = val;
	nod->stanga = nod->dreapta = NULL;
	return nod;
}

void preordine(struct Nod* radacina) {
	if (radacina != NULL) {
		printf("%d ", radacina->val);
		preordine(radacina->stanga);
		preordine(radacina->dreapta);
	}
}

void inordine(struct Nod* radacina) {
	if (radacina != NULL) {
		inordine(radacina->stanga);
		printf("%d ", radacina->val);
		inordine(radacina->dreapta);
	}
}

void postordine(struct Nod* radacina) {
	if (radacina != NULL) {
		postordine(radacina->stanga);
		postordine(radacina->dreapta);
		printf("%d ", radacina->val);
	}
}

int inaltime(struct Nod* radacina) {
	if (radacina == NULL)
		return 0;
	else {
		int stanga_inaltime = inaltime(radacina->stanga);
		int dreapta_inaltime = inaltime(radacina->dreapta);

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
		afisareNivel(radacina->stanga, nivel - 1);
		afisareNivel(radacina->dreapta, nivel - 1);
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
	radacina->stanga = creareNod(3);
	radacina->dreapta = creareNod(8);
	radacina->stanga->stanga = creareNod(1);
	radacina->stanga->dreapta = creareNod(4);
	radacina->dreapta->stanga = creareNod(7);
	radacina->dreapta->dreapta = creareNod(9);

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
