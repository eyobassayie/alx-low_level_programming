#ifndef HEADER_FILE
#define HEADER_FILE

int _putchar(char c);
void _puts(char *str);
int _atoi(const char *s);
void print_int(unsigned long int n);
int main(int argc, char const *argv[]);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
#endif
