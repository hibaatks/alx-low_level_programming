#include <unistd.h>

int _putchar(char c) {
    return write(1, &c, 1);
}

void print_alphabet_x10(void) {
    char letter = 'a';
    int count = 0;

    while (count < 10) {
        for (letter = 'a'; letter <= 'z'; letter++) {
            _putchar(letter);
        }
        _putchar('\n');
        count++;
    }
}

int main(void) {
    print_alphabet_x10();
    return (0);
}
