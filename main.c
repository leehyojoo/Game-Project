#include "main.h"

int main() {
    while(1){
        displayEscape();
        int menuCode = menuDraw();
        if(menuCode == 0) {
            // 게임 시작
        }
        else if(menuCode == 1){
            // 게임 정보
            infoDraw();
        }
        else if(menuCode == 2){
            // 종료
            return 0; 
        }
        system("cls");
    }    
    return 0;
}





