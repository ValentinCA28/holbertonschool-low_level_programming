# Pointers, Arrays and Strings — Holberton School

Ce projet a pour objectif de te faire maîtriser la manipulation des pointeurs, des tableaux (1D et 2D) ainsi que plusieurs fonctions classiques de manipulation de chaînes en C.

Toutes les fonctions de ce projet sont des ré-implémentations de fonctions standard de la librairie C, mais **sans utiliser** la libc (printf, puts, memcpy, memset, etc.).  
Seule la fonction `_putchar` est autorisée.

---

## 📌 Objectifs pédagogiques

À la fin de ce projet, tu dois être capable d’expliquer :

### ✅ Pointeurs
- Ce qu’est un pointeur sur pointeur (`int **p`)
- Comment fonctionne l’arithmétique des pointeurs
- Comment les chaînes sont stockées en mémoire

### ✅ Tableaux
- Organisation mémoire d’un tableau multidimensionnel
- Utilisation d’un tableau 2D avec des pointeurs
- Différence entre `char *s` et `char s[]`

### ✅ Fonctions standard ré-implémentées
- `_memset` → remplir une zone mémoire  
- `_memcpy` → copier une zone mémoire  
- `_strchr` → trouver un caractère  
- `_strspn` → longueur d’un segment valide  
- `_strpbrk` → première occurrence d’un set de caractères  
- `_strstr` → trouver une sous-chaîne  
- `print_chessboard` → afficher un tableau 8×8  
- `print_diagsums` → somme des diagonales d’une matrice

---

## 📁 Structure du projet

pointers_arrays_strings/
│
├── 0-memset.c
├── 1-memcpy.c
├── 2-strchr.c
├── 3-strspn.c
├── 4-strpbrk.c
├── 5-strstr.c
├── 7-print_chessboard.c
├── 8-print_diagsums.c
│
└── main.h
