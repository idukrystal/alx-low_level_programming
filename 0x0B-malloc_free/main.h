#ifndef MAIN_H
#define MAIN_H

int _strlen(char *s);
char *argstostr(int ac, char **av);
char *str_concat(char *s1, char *s2);
char *argstostr(int ac, char **av);
int insert_substring(char *string, char *substring,int sub_length, int from);
char **strtow(char *str);
unsigned int count_words(char *);

#endif /* MAIN_H */
