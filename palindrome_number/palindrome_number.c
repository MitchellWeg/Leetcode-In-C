#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#include "palindrome_number.h"

char *strrev(char *s)
{
    if (s && *s) {
        char *b = s, *e = s + strlen(s) - 1;
        while (b < e) {
            char t = *b;
            *b++ = *e;
            *e-- = t;
        }
    }
    return s;
}

bool is_palindrome(int x) {
  int size = 5;
  char str[size];
  char rev[size];
  sprintf(str, "%d", x);
  strcpy(rev, str);
  strrev(rev);

  
  return !strcmp(str, rev);
}
