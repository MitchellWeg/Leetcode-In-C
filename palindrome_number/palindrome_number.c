#include <stdio.h>
#include <stdbool.h>
#include <string.h>

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


int main() {
  bool x = is_palindrome(121);
  bool y = is_palindrome(123123);
  
  printf("%d", y);

  return 0;
}