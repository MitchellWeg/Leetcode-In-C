#include <stdio.h>
#include <string.h>
#include <assert.h>

#include "roman.h"

typedef enum Values {
   I = 1,
   V = 5,
   X = 10,
   L = 50,
   C = 100,
   D = 500,
   M = 1000,
} values;

int strToValue(char s) {
  switch(s) {
    case 'I':
        return I;
    case 'V':
        return V;
    case 'X':
        return X;     
    case 'L':
        return L;    
    case 'C':
        return C;    
    case 'D':
        return D;            
    case 'M':
        return M;            
  }

  return -1;  
}

int romanToInt(char* s) {
    int acc = 0;
    size_t strLen = strlen(s);
    
    for(int i = 0; i < strLen; i++) {
        int value = strToValue(s[i]);

        int nextIdx = i + 1;
        int nextValue = 0;

        if(!(nextIdx > strLen)) {
            nextValue = strToValue(s[nextIdx]);
        }
        
        int difference = value;
        
        if(nextValue > value) {
          difference = nextValue - value;
          i = i + 1; // increment by one, otherwise it will eval the next char again.
        }

        acc = acc + difference;
    }

 
    return acc;
}

