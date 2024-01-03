#include "isogram.h"

#include <ctype.h>
#include <stddef.h>
#include <string.h>

bool is_isogram(const char phrase[]) {
  if (phrase == NULL) {
    return false;
  }

  size_t lth = strlen(phrase);
  char cpy[lth + 1];

  for (size_t i = 0; i < lth; i++) {
    char chr = tolower(phrase[i]);

    if (!isalnum(chr)) {
      continue;
    }

    if (strchr(cpy, chr)) {
      return false;
    }

    cpy[i] = chr;
  }

  return true;
}
