#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 256

int main(void);

float avg_age(int age1, int age2);

void get_line(char *buffer, int size);

int main(void) {
  char buffer[BUFFER_SIZE];
  char name1[BUFFER_SIZE];
  char name2[BUFFER_SIZE];
  int age1, age2;

  printf("%d人目の名前を入力してください\n", 1);
  get_line(name1, BUFFER_SIZE);
  printf("%s さんの年齢を入力してください\n", name1);
  get_line(buffer, BUFFER_SIZE);
  age1 = atoi(buffer);
  printf("%d人目の名前を入力してください\n", 2);
  get_line(name2, BUFFER_SIZE);
  printf("%s さんの年齢を入力してください\n", name2);
  get_line(buffer, BUFFER_SIZE);
  age2 = atoi(buffer);
  printf("%s さんと %s さんの平均年齢は %0.1f歳です\n", name1, name2, avg_age(age1, age2));
  return 0;
}

float avg_age(int age1, int age2) {
  return (age1 + age2) / 2.0;
}

void get_line(char *buffer, int size) {
  if (fgets(buffer, size, stdin) == NULL) {
    buffer[0] = '\0';
    return;
  }

  for (int i = 0; i < size; i++) {
    if (buffer[i] == '\n') {
      buffer[i] = '\0';
      return;
    }
  }
}