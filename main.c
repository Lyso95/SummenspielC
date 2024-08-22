#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL)); // Seed für den Zufallszahlengenerator

    char choice;

    do {
        int randNum1 = (rand() % 201) - 100;
        int randNum2 = (rand() % 201) - 100;
        int sum = randNum1 + randNum2;
        int berechnung;

        printf("Bitte berechne die Summe von %d und %d\n\n", randNum1, randNum2);
        printf("Deine Antwort: ");
        	if (scanf("%d", &berechnung) != 1) {
         	   printf("Ungueltige Eingabe! Bitte gib eine Zahl ein.\n");
          	  // Eingabepuffer leeren
 	      	while (getchar() != '\n');
			continue;
        	}

        	if (sum == berechnung) {
         	   printf("Gratulation! Du hast richtig gerechnet!\n");
        	} else {
         	   printf("Leider verrechnet, das richtige Ergebnis lautet: %d\n", sum);
        	}

        	printf("Moechtest du eine weitere Aufgabe loesen? (j/n): ");
        	scanf(" %c", &choice);
    } 
	while (choice == 'j' || choice == 'J');

    printf("Vielen Dank fuers Spielen! Bis zum naechsten Mal.\n");

    return 0;
}
