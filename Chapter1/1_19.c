#include <stdio.h>

#define MAXLINE 1000

int get_line(char line[], int max_line_len);
void reverse(char line[], int length);

int main(void)
{
  int len;
  char line[MAXLINE];

  while ((len = get_line(line, MAXLINE)) > 0)
  {
    reverse(line, len);
    printf("Reverse String: %s", line);
  }

  return 0;
}

int get_line(char line[], int max_line_len)
{
  int c, i;

  for (i = 0; i < max_line_len - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
  {
    line[i] = c;
  }

  if (c == '\n')
  {
    line[i] = c;
    ++i;
  }

  line[i] = '\0';

  return i;
}

void reverse(char line[], int length)
{
  if (length < 2) return;
  int tmp;
  int left = 0, right = length - 2;
  while (left < right) {
    tmp = line[left];
    line[left] = line[right];
    line[right] = tmp;
    left++;
    right--;
  }
}