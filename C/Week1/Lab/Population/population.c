#include <stdio.h>
#include <stdlib.h> // Include the necessary library for the `atoi` function

int main(void) {
    int start_size; // initial population of llamas

    do
    {
        printf("Start size: "); // Corrected the use of `int` and `printf`
        scanf("%d", &start_size); // Read the input from the user
    }
    while (start_size < 9);

    int end_size; // ending population of llamas

    do
    {
        printf("End size: "); // Corrected the use of `int` and `printf`
        scanf("%d", &end_size); // Read the input from the user
    }
    while (end_size < start_size);

    // calculate years
    int years = 0;

    while (start_size < end_size)
    {
        int born = start_size / 3;
        int passed_away = start_size / 4;
        start_size = start_size + born - passed_away;
        years++;
    }

    printf("Years: %d\n", years);
}

