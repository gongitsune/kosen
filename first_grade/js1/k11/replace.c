
#include <stdio.h>
#include <string.h>

// 文字列を置換する関数
void replaceString(char *source, const char *target, const char *replacement) {
  int targetLen = strlen(target);
  int replacementLen = strlen(replacement);

  char *occurrence = strstr(source, target);

  while (occurrence != NULL) {
    // 見つかった位置に置換文字列をコピー
    memmove(occurrence + replacementLen, occurrence + targetLen,
            strlen(occurrence + targetLen) + 1);
    memcpy(occurrence, replacement, replacementLen);

    occurrence = strstr(occurrence + replacementLen, target);
  }
}

int main() {
  char inputString[1000];
  char targetString[100];
  char replacementString[100];

  printf("文字列を入力してください: ");
  fgets(inputString, sizeof(inputString), stdin);
  inputString[strcspn(inputString, "\n")] = '\0'; // 改行文字の削除

  printf("置換したい文字列を入力してください: ");
  scanf("%s", targetString);

  printf("置換後の文字列を入力してください: ");
  scanf("%s", replacementString);

  replaceString(inputString, targetString, replacementString);

  printf("置換後の文字列: %s\n", inputString);

  return 0;
}
