#include <stdio.h>
#include <string.h>

int main() {
    char s[11];
    fgets(s, sizeof(s), stdin);

    int hour = (s[0] - '0') * 10 + (s[1] - '0');

    if (s[8] == 'A') {
        if (hour == 12) {
            hour = 0;
        }
    } else if (s[8] == 'P') {
        if (hour != 12) {
            hour += 12;
        }
    }

    printf("%02d:%c%c:%c%c\n", hour, s[3], s[4], s[6], s[7]);

    return 0;
}
