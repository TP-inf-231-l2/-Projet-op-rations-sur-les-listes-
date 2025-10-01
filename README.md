# -Projet-op-rations-sur-les-listes-
Bonjour à vous!!! Voici notre projet de INF231...portant en général sur les opérations sur les listes chaînées en C


Bonjour et Bienvenue à vous!!!
.....
----Projet C INF231 Manipulation de Listes Chaînées

Ce projet contient plusieurs fichiers C illustrant différentes opérations sur des listes chaînées (simples, doubles, circulaires, triées). Chaque fichier implémente une fonctionnalité spécifique de manipulation de listes, avec des insertions, suppressions, et maintien de l’ordre trié
------Fichiers inclus

1. insert_tete_liste_simple_triee.c
- Fonctionnalité : Insertion d’un élément dans une liste simplement chaînée triée tout en conservant l’ordre.
- Entrée : Valeur à insérer saisie par l'utilisateur.
- Sortie : Affichage de la liste mise à jour et triée.

2. suppression_occurences.c
- Fonctionnalité : Supprime toutes les occurrences d’un élément donné dans une liste simplement chaînée.
- Entrées :lise , Liste d’entiers et valeur cible à supprimer.
- Sortie : Liste nettoyée affichée après suppression.

3. insertion_liste_double_triee.c
- Fonctionnalité : Insertion d’un élément dans une liste doublement chaînée triée, en gardant l’ordre.
- Entrée : Valeurs saisies par l'utilisateur.
- Sortie : Liste doublement chaînée triée mise à jour.

4. insert_tete_liste_circulaire Fonctionnalité : Insertion en tête d'une liste simplement chaînée circulaire.
- Spécificité : Le dernier élément pointe vers le premier.

5. insert_queue_liste_simple_circulaire.c
- Fonctionnalité : Insertion en queue d’une liste simplement chaînée circulaire.
- But : Ajouter un élément tout en respectant la circularité de la structure.

6. insert_tete_liste_double_circulaire.c
- Fonctionnalité : Insertion en tête d’une liste doublement chaînée circulaire.
- Particularité : Double sens de parcours + circularité.

7. insert_queue_liste_double_circulaire.c
- Fonctionnalité : Insertion en queue d’une liste doublement chaînée circulaire.

----- Compilation
 
Utilisation de  gcc pour compiler chaque fichier individuellement. exemple :

bash
gcc insert_tete_liste_simple_triee.c -o insert_tete
./insert_tete

 Remarque---
Il est possible de regrouper ces fichiers dans un seul projet avec un menu global


Merci et bonne journée à vous!!!
