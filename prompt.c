#include <stdio.h>

static char input[2048];

int main(int argc, char** argv)
{

    /* Print Version program and Exit */
    puts("Lispy Version 0.0.0.0.1");
    puts("Press Ctrl+c to Exit\n");

    /* In inifnite loop */
    while(1) {
        fputs("lispy> ", stdout);

        /* Read the line with 2048 buffer */
        fgets(input, 2048 ,stdin);

        /* Echo input back to user */
        printf("No you're a %s", input);
    }

    return 0;

}