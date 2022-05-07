#include <stdio.h>
#include <string.h>
char *s21_strcpy(char *dest, const char *src);
char *my_strcpy(char *dest, const char *src);
char *my_strcpy1(char *dest, const char *src);
char *my_strcpy2(char *dest, const char *src);
char *my_strcpy3(char *dest, const char *src);
char *my_strcpy4(char *dest, const char *src);
char *my_strcpy5(char *deest, const char *src);
char *my_strcpy6(char *dest, const char *src);
int main() {
    char str1[20] = "", str2[20] = "programiz.com";
    char str3[20] = "", str4[20] = "programiz.com";
    my_strcpy(str1, str2);
    strcpy(str3, str4);
    puts(str1);
    printf("%ld\n", strlen(str1));
    puts(str3);
    printf("%ld\n", strlen(str3));
    return 0;
}

char *s21_strcpy(char *dest, const char *src) {
    while((*dest++ = *src++) != '\0');
    return dest;
}
char *my_strcpy(char *dest, const char *src) {
    int i = 0;
    while(src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    return dest;
}

char *my_strcpy1(char *dest, const char *src) {
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    return dest;
}
char *my_strcpy2(char *dest, const char *src){
    int i = 0;
    for(; src[i] != '\0';i++) {
        dest[i] = src[i];
    }
    return dest;
}
char *my_strcpy3(char *dest, const char *src){
    for(;*src;) {
        *dest++ = *src++;
    }
    return dest;
}

char *my_strcpy4(char *dest, const char *src) {
    while(*src) {
        *dest++ = *src++;
    }
    return dest;
}

char *my_strcpy5(char *dest, const char *src) {
  unsigned long i;
  unsigned long len = strlen(src);
  for (i = 0; i < len; i++) {
    dest[i] = src[i];
  }
  return dest;
}

char *my_strcpy6(char *dest, const char *src) {
    do {
        *dest++ = *src++;
    } while(*src);
    return dest;
}