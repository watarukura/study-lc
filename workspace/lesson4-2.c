#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 256

int main(void);

void get_line(char *buffer, int size);

int main(void) {
  char buffer[BUFFER_SIZE];
  int time;

  printf("時刻を入力してください\n");
  get_line(buffer, BUFFER_SIZE);
  time = atoi(buffer);

  if (time >= 0 && time <= 11) {
    printf("おはようございます\n");
  } else if (time == 12) {
    printf("お昼です\n");
  } else if (time >= 13 && time <= 18) {
    printf("こんにちは\n");
  } else if (time >= 19 && time <= 23) {
    printf("こんばんは\n");
  } else {
    printf("時刻の範囲を超えています\n");
  }
  return 0;
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