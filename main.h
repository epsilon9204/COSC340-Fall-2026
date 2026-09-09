#ifndef CODE_REVIEW_MAIN_H_
#define CODE_REVIEW_MAIN_H_

#include <stdio.h>

/* base64 functions */
char *Base64Encode(const void *, int);
char *Base64Decode(const char *);

/* uuencode functions */
void Encode(FILE *);

/* uudecode functions */
int Decode(char *, FILE *);

#endif  /* CODE_REVIEW_MAIN_H_ */
