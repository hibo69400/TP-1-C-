#include <stdio.h>

int main() {
    float note;

    printf("Entrez la note sur 20 : ");
    scanf("%f", &note);

    if (note < 0 || note > 20)
    {
        printf("Note invalide.\n");
    }
    else if (note < 10)
    {
        printf("Ajourné\n");
    }
    else if (note < 12)
    {
        printf("Passable\n");
    }
    else if (note < 14)
    {
        printf("Mention : Assez bien\n");
    }
    else if (note < 16)
    {
        printf("Mention : Bien\n");
    }
    else
    {
        printf("Mention : Très bien\n");
    }

    return 0;
}
