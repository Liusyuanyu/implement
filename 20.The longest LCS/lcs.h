#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define N 20

enum dir{kinit =0,kleft ,kup,kleftup};
int LCS (char *str1,char *str2);
void print_lcs(int *LCS_direction,char * str1,char * str2,size_t row,size_t col);
