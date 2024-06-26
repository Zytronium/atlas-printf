gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c Tests/main.c -o testRun
./testRun
rm testRun
