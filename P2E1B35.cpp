#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    int input=0;             // 使用者輸入的密碼  
    int attempts=0;          // 輸入次數計數  
    int success=0;           // 是否登入成功  
    
    //(1)個人風格  
printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("$$                                                  $$\n");
printf("$$                            ______________________$$\n");
printf("$$                        ___/                      $$\n");
printf("$$                     __/                          $$\n");
printf("$$                    /                             $$\n");
printf("$$                   |                              $$\n");
printf("$$                  /                               $$\n");
printf("$$                 /         __         __          $$\n");
printf("$$                /         /  \\       /  \\         $$\n");
printf("$$               /          \\__/       \\__/         $$\n");
printf("$$               |                                  $$\n");
printf("$$    ___________|___           ________            $$\n");
printf("$$    |             |\\          \\      /            $$\n");
printf("$$    \\_____________/ \\          \\____/             $$\n");
printf("$$    \\             \\  \\                            $$\n");
printf("$$     \\   /     /   \\  \\                           $$\n");
printf("$$      \\ /      /____\\__\\                     _____$$\n");
printf("$$       /       /_____  \\____            ____/     $$\n");
printf("$$      /________/_____\\      \\__________/          $$\n");
printf("$$                                                  $$\n");
printf("$$                    薩卡班甲魚                    $$\n"); 
printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("$$                                                  $$\n");
printf("$$                                                  $$\n");
printf("$$                     程式設計                     $$\n");
printf("$$                E1B35郭宥宏的作業2                $$\n");
printf("$$                    2025/04/22                    $$\n");
printf("$$                                                  $$\n");
printf("$$                     {\\__/}                       $$\n");
printf("$$                     ( ‧-‧)                       $$\n");
printf("$$                   c /> 35<\\                      $$\n");
printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");

    // 密碼驗證，最多三次機會
    while (attempts<3) {
        printf("第 %d 次輸入：",attempts+1);
        scanf("%d",&input);

        if (input==2025) {
            printf("密碼正確，登入完成！\n");
            success=1;
            break;
        } else {
            printf("密碼錯誤。\n");
        }
        attempts++;
    }

    if (success==0) {
        printf("連續錯誤三次，程式結束。\n");
        return 0;
    }
     
    return 0;
}
