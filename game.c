#include "game.h"

/* 키보드 이벤트 */
int keyControl() {
    char temp = getch();

    if (temp == 'w' || temp == 'W') return UP;
    if (temp == 's' || temp == 'S') return DOWN;
    if (temp == 'a' || temp == 'A') return LEFT;
    if (temp == 'd' || temp == 'D') return RIGHT;
    if (temp == '\r' || temp == ' ') return SELECT; // Enter key
    return -1; // Invalid key
}

/* ESCAPE 화면 표시 */
void displayEscape(){
    printf(" *****   *****   *****     *      *****   ***** \n");
    printf(" *       *       *        * *     *   *   *     \n");
    printf(" *****   *****   *       *****    *****   ***** \n");
    printf(" *           *   *       *   *    *       *     \n");
    printf(" *****   *****   *****   *   *    *       ***** \n");
}

/* MENU 화면 표시 */
int menuDraw() {
    int x = 18;  // x 좌표
    int y = 8;  // y 좌표 시작점

    gotoxy(x-2, y);
    printf("> Game Start ");  // 문자열 뒤 공백 추가로 정렬
    gotoxy(x, y + 1);          // y + 3 간격으로 아래로 이동
    printf(" Game Info "); // 정렬 맞춤
    gotoxy(x, y + 2);          // y + 6 간격으로 아래로 이동
    printf("    End    ");

    while(1){
        int n = keyControl();
        switch(n){
            case UP: {
                if(y>8){
                    gotoxy(x-2, y);
                    printf (" ");
                    gotoxy(x-2, --y);
                    printf(">");
                }
                break;
            }

            case DOWN: {
                if(y<10){
                    gotoxy(x-2, y);
                    printf (" ");
                    gotoxy(x-2, ++y);
                    printf(">");
                }
                break;
            }

            case SELECT: {
                return y-8; // 0은 게임시작, 1은 게임정보, 2는 종료
            }
        }
    }
}

/* MENU 1 : 게임 정보 표시 */
void infoDraw(){
    system("cls");
    printf("\n\n");
    printf("                   [How to operate]               \n");
    printf("                    MOVE: W A S D                 \n");
    printf("              SELECT: SPACE / ENTER KEY      \n\n\n");
    printf("                     [Developer]                  \n");
    printf("             https://github.com/leehyojoo         \n");
    printf("     ** Press the space bar to return to the main screen. \n");

    while(1){
        if(keyControl()  == SELECT){
            break;
        }
    }
}
