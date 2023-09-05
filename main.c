#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int modulo(int ascii, int left, int right);
int shift(char mode, int ascii, int key);
char cipher(char mode, char letter, int key);

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("too low command-line arguments.");
        return 1;
    }
    else if (argc > 4) {
        printf("too much command-line arguments.");
        return 1;
    }

    char mode = *argv[1];
    long key = strtol(argv[2], NULL, 10);
    int length = strlen(argv[3]);

    if (mode == 'e') {
        printf("Encrypted text: ");
    }
    else if (mode == 'd') {
        printf("Decrypted text: ");
    }

    for (int i = 0; i < length; i++) {
        char letter = argv[3][i];
        printf("%c", cipher(mode, letter, key));
    }

    return 0;
}

char cipher(char mode, char letter, int key) {
    int ascii = (int) letter;

    if (ascii > 64 && ascii < 91) {
        ascii = shift(mode, ascii, key);
        ascii = modulo(ascii, 65, 90);

        return (char) ascii;
    }
    else if (ascii > 96 && ascii < 123) {
        ascii = shift(mode, ascii, key);
        ascii = modulo(ascii, 97, 122);

        return (char) ascii;
    }

    return letter;
}

int shift(char mode, int ascii, int key) {
    if (mode == 'e') {
        return ascii + key;
    }
    else if (mode == 'd'){
        return ascii - key;
    }
    return 1;
}

int modulo(int ascii, int left, int right) {
    if (ascii > right) {
        ascii = (ascii % right) + (left - 1);
        return ascii;
    }
    else if (ascii < left) {
        ascii = (right + 1) - (left - ascii);
        return ascii;
    }
}