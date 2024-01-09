# Implementarea traversarilor arborilor binari ordonati
Arborele binar ordonat este un tip special de arbore binar in car elementele sunt ordonate intr-un anumit mot.De obicei, intr-un arbore binar ordonat, elementele din subarborele stang sunt mai mici dau egale decat cele din nodul parinte, iar cel din subarborele drept sunt mai mari sau egale. Aceasta structura de date este utila pentru ca permite cautarea rapida a elementelor intr-o colectie ordonata, avand o complexitate a timpului redusa pentru operatii precum cautare, inserare si stergere. 
# Modul de implementare
  Proiectul implementeaza un program in limbajul C pentru traversarea unui arbore binar ordonat, populat cu elemente care sunt generate aleatoriu, ilustrand un exemplu practic al structurii si manipularii unui arbore binar ordonat.
Am definit o structura 'Nod' pentru a reprezenta un nod din arbore, cu un atribut pentru valoare si pointeri catre subarborii sai stang si drept.
  Functia 'creareNod' este folosita pentru a crea un nou nod in arbore si pentru a initializa valorile sale.
  Funcțiile preordine, inordine, postordine și nivelOrder implementează traversările specifice ale arborelui binar ordonat.
preordine: Realizează o traversare în preordine a arborelui (radacina-stânga-dreapta).
inordine: Efectuează o traversare în inordine a arborelui (stânga-radacina-dreapta), astfel încât valorile sunt afișate în ordine crescătoare în cazul unui arbore binar ordonat.
postordine: Realizează o traversare în postordine a arborelui (stânga-dreapta-radacina).
nivelOrder: Implementează traversarea pe nivele a arborelui, cunoscută și sub numele de nivel-order traversal.
#Mediul de dezvoltare
Limbaj: C 
IDE: Visual Studio Code
# Authors
Proiect realizat de Bejera Paula-Vanina
# Bibliografie
https://www.pbinfo.ro/articole/25641/arbori-binari
https://ocw.cs.pub.ro/courses/sd-ca/laboratoare/lab-08
