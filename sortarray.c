#include <stdio.h>
#include <stdlib.h>

#define SIZE 32

#Source: https://stackoverflow.com/questions/29662971/java-faster-than-c

int main()
{
    FILE* file = fopen("bigarray.txt", "r");
    int arraySize = 100000;
    int array[100000] = {};
    int i, j, temp;
    char inputBuffer[SIZE];
    for (i = 0; i < arraySize; i++) {
        fgets(inputBuffer, SIZE, file);
        array[i] = strtod(inputBuffer, NULL);
    }

    for (i = 0; i < arraySize; i++)
        for (j = i + 1; j < arraySize; j++)
            if (array[i] > array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }

    for (i = 0; i < arraySize; i++)
        printf("%d, ", array[i]);

    return 0;
}
