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
printf("$$                    2025/04/25                    $$\n");
printf("$$                                                  $$\n");
printf("$$                     {\\__/}                       $$\n");
printf("$$                     ( ‧-‧)                       $$\n");
printf("$$                   c /> 35<\\                      $$\n");
printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");

    // 密碼驗證，最多三次機會
    while (attempts<3) {
        printf("第 %d 次輸入(密碼預設為2025)：",attempts+1);
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
    system("pause");
    //(2)主選單  
    char choice;
    while (1) {
        system("cls");
        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
        printf("$$                           $$\n");
        printf("$$ a. 畫出直角三角形         $$\n");
        printf("$$ b. 顯示乘法表             $$\n");
        printf("$$ c. 結束                   $$\n");
        printf("$$                           $$\n");
        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
        printf("請選擇效果( a / b / c )");

        choice = getch();
        system("cls");

        //(3) 畫直角三角形  
        if (choice=='a'||choice=='A') { // 當輸入 a 或 A 時 
            char ch;
            printf("請輸入 a~n 的字元：");
            scanf(" %c",&ch);
            
            if (ch>='a'&&ch<='n') {
                int lines=ch-'a'+ 1; // 計算ch是第幾個字母    

                for (int i=1;i<=lines;i++) { //運行幾次(幾行) 
                    for (int s=1;s<=lines-i;s++) { // 印出 lines-i 幾個空格讓字母靠右對齊 
                        printf("  ");
                    }
                   
                    for (char c=ch-i+1;c<=ch;c++) { // 從 ch-i+1 到 ch 依序印出
                        printf("%c ",c);
                    }
                    printf("\n");//印完該行後換行  
                }
            } else {
                printf("錯誤：請輸入 a~n 的小寫字母！\n");
            }
        
            printf("\n按任意鍵返回主選單 . . . ");
            getch();
        }
    } 
    return 0;
}
