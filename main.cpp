#include <stdio.h>
#include <string.h>

char *str1 = "Ala ";
char *str2 = " ma kota. ";
char *str3 = "";

int combine(char *result) {
    // Najpierw kopiujesz pierwszy łańcuch
    strcpy(result, str1);

    // Potem dołączasz drugi i trzeci
    strcat(result, str2);
    strcat(result, str3);

    return 0;
}

int main() {
    char result[100];  // Zmienna na wynik połączenia

    // Łączenie łańcuchów
    combine(result);

    // Wyświetlanie połączonego wyniku
    printf("Polaczony tekst: %s\n", result);

    return 0;
}

