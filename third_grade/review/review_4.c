#include <stdio.h>

char decode_char(char source);

int main(const int argc, const char *argv[]) {
  if (argc != 2) {
    printf("引数の数が正しくありません\n");
    return 1;
  }

  const char *file_name = argv[1];
  FILE *fp;
  if ((fp = fopen(file_name, "r")) == NULL) {
    printf("ファイルが開けません\n");
    return 1;
  }

  char c;
  while ((c = fgetc(fp)) != EOF) {
    printf("%c", decode_char(c));
  }

  fclose(fp);
  return 0;
}

char decode_char(char source) {
  if (source >= 'a' && source <= 'z') {
    return (source - 'a' + 3) % 26 + 'a';
  } else if (source >= 'A' && source <= 'Z') {
    return (source - 'A' + 21) % 26 + 'A';
  } else if (source >= '0' && source <= '9') {
    return ('9' - source) + '0';
  }
  return source;
}

/*
$ ./a.out message01.txt
Watashi ha Kimemashita.
Anata mo Kimete Kudasai.
5/31 made Machimasu.

$ ./a.out message02.txt
Mou Anata shika Miemasen.
Anata no Koto wo 24 Jikan Mitsumete Imasu.
*/
