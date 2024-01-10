# Implementarea traversărilor arborilor binari ordonați

Arborele binar ordonat este un tip special de arbore binar în care elementele sunt ordonate într-un anumit mod. De obicei, într-un arbore binar ordonat, elementele din subarborele stâng sunt mai mici sau egale decât cele din nodul părinte, iar cele din subarborele drept sunt mai mari sau egale. Această structură de date este utilă pentru că permite căutarea rapidă a elementelor într-o colecție ordonată, având o complexitate a timpului redusă pentru operații precum căutare, inserare și ștergere.

## Modul de implementare

Proiectul implementează un program în limbajul C pentru traversarea unui arbore binar ordonat, populat cu elemente generate aleatoriu, ilustrând un exemplu practic al structurii și manipulării unui arbore binar ordonat.

Am definit o structură 'Nod' pentru a reprezenta un nod din arbore, cu un atribut pentru valoare și pointeri către subarborii săi stâng și drept.

Functia 'creareNod' este folosită pentru a crea un nou nod în arbore și pentru a inițializa valorile sale.

Funcțiile preordine, inordine, postordine și nivelOrder implementează traversările specifice ale arborelui binar ordonat:

- preordine: Realizează o traversare în preordine a arborelui (rădăcină-stânga-dreapta).
- inordine: Efectuează o traversare în inordine a arborelui (stânga-rădăcină-dreapta), astfel încât valorile sunt afișate în ordine crescătoare în cazul unui arbore binar ordonat.
- postordine: Realizează o traversare în postordine a arborelui (stânga-dreapta-rădăcină).
- nivelOrder: Implementează traversarea pe nivele a arborelui, cunoscută și sub numele de nivel-order traversal.

## Mediul de dezvoltare

- Limbaj: C 
- IDE: Visual Studio Code

## Authors

Proiect realizat de Bejera Paula-Vanina

## Bibliografie

- [https://www.pbinfo.ro/articole/25641/arbori-binari](https://www.pbinfo.ro/articole/25641/arbori-binari)
- [https://ocw.cs.pub.ro/courses/sd-ca/laboratoare/lab-08](https://ocw.cs.pub.ro/courses/sd-ca/laboratoare/lab-08)

