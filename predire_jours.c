/* Un programme pour montrer l'utilité de l'operateur modulo
 * Pour l'année 2024 le premier jour etait un lundi
 * donc le septieme jour c'est un Dimanche (7 modulo 7 = 0)
 * et le mois de fevrier à 29 jours.
*/

#include <stdio.h>


int main()
{
	char *joursSemaine [] = {"Dimanche", "Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi"};
	int moisAnnee[]       = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int jour, mois;

	printf("Entrez le jour: ");
	scanf("%d", &jour);
	printf("Entrez le mois: ");
	scanf("%d", &mois);

	int nombreJours = 0;

	for(int id = 0; id < mois; id++)
		nombreJours += moisAnnee[id];

	nombreJours += jour;
	printf("C'est un %s\n", joursSemaine[nombreJours % 7]);
	return 0;
}
