#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp; 
    int ch;
    if ((fp = fopen("ssu_text.txt", "r")) == NULL) {
        fprintf(stderr, "fopen error for ssu_text.txt\n");
        exit(1);
    }
    while (!feof(fp)) {
        ch = fgetc(fp);
        printf("First character read: %c\n", ch);
        // 특정 조건: 만약 읽은 문자가 'A'이면 다시 스트림에 되돌리기.
        if (ch == 'A') {
            if (ungetc(ch, fp) == EOF) {
                // ungetc 실패 시 에러 메시지
                fprintf(stderr, "ungetc error\n");
                fclose(fp);
                exit(1);
            } else {
                // ungetc 성공 시 메시지
                printf("Character '%c' returned to stream\n", ch);
                // 다음 문자 읽기 (되돌려진 문자가 다시 읽힘)
                ch = fgetc(fp);
                printf("Character read after ungetc: %c\n", ch);
            }
        }
    }
    fclose(fp);
    exit(0); 
}
