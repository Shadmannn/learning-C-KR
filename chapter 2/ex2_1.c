#include <stdio.h>
#include <limits.h>
#include <float.h>
int main(){

        printf("\n\nVALUES THROUGH HEADERS\n\n");

        printf("char: %d\n", CHAR_BIT);
        printf("char max: %d\n", CHAR_MAX);
        printf("char min: %d\n", CHAR_MIN);
        printf("int max: %d\n ", INT_MAX);
        printf("int min: %d\n", INT_MIN);
        printf("long max: %ld\n ", LONG_MAX);
        printf("long min: %ld\n", LONG_MIN);
        printf("signed char max: %d\n", SCHAR_MAX);
        printf("signed char min: %d\n", SCHAR_MIN);
        printf("short max: %d\n", SHRT_MAX);
        printf("short min: %d\n", SHRT_MIN);
        printf("unsigned char max: %d\n", UCHAR_MAX);
        printf("unsigned int max: %u\n", UINT_MAX);
        printf("unsigned long max: %lu\n", ULONG_MAX);
        printf("unsigned short max: %d\n", USHRT_MAX);
        printf("float max: %e\n", FLT_MAX);
        printf("float min: %e\n", FLT_MIN);

        printf("\n\nVALUES THROUGH DIRECT COMPUTATION\n\n");

        unsigned char u_max = (unsigned char) ~0;
        printf("computed unsigned char max: %u\n", u_max);

        signed char s_max = (unsigned char) ~0 >> 1;
        signed char s_min = -s_max - 1;
        printf("computed signed char: %d to %d\n", s_min, s_max);

        unsigned int uint_max = (unsigned int) ~0;
        printf("computed unsigned int max: %u\n", uint_max);

        return 0;
}
