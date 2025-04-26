#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    int input=0;             // 使用者輸入的密碼  
    int attempts=0;          // 輸入次數計數  
    int success=0;           // 是否登入成功  
    
    //(1) 個人風格  
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
printf("$$                    2025/04/27                    $$\n");
printf("$$                                                  $$\n");
printf("$$                     {\\__/}                       $$\n");
printf("$$                     ( ‧-‧)                       $$\n");
printf("$$                   c /> 35<\\                      $$\n");
printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");

    // 密碼驗證，最多三次機會
    while (attempts<3) {
        printf("第 %d 次輸入(密碼預設為2025)：",attempts+1);
        scanf("%d",&input);

        if (input==2025) { // 如果輸入2025  
            printf("密碼正確，登入完成！\n\n"); // 印出密碼正確  
            success=1; // 使後續可以依據success判斷有沒有輸入正確  
            break; // 跳出迴圈  
        } 
		else {
            printf("密碼錯誤。\n");
        }
        attempts++; // 增加錯誤計數  
    }

    if (success==0) { // 判斷有沒有輸入正確  
        printf("連續錯誤三次，程式結束。\n");
        return 0;
    }
    system("pause"); // 讓使用者確定輸入正確後再到主選單  
    
    //(2) 主選單  
    char choice;
    while (1) { // 無窮迴圈，讓輸出完成果後能夠回到主選單  
        system("cls"); // 清除螢幕 
        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
        printf("$$                           $$\n");
        printf("$$ a. 畫出直角三角形         $$\n");
        printf("$$ b. 顯示乘法表             $$\n");
        printf("$$ c. 結束                   $$\n");
        printf("$$                           $$\n");
        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
        printf("請選擇效果( a / b / c )");

        choice = getch(); // 輸入效果，並且不會出現在螢幕上 
        system("cls");

        //(3) 畫直角三角形  
        if (choice=='a'||choice=='A') { // 當輸入 a 或 A 時 
            char ch;
            printf("請輸入 a~n 的字元：");
            scanf(" %c",&ch);
            
            while(ch<'a'||ch>'n'){ // 重複輸入直到是 a~n 
            	printf("錯誤!\n\n請輸入 a~n 的字元：");
                scanf(" %c",&ch);
			}
            printf("\n");
            int lines=ch-'a'+ 1; // 計算ch是第幾個字母    

            for (int i=1;i<=lines;i++) { // 運行幾次(幾行) 
                for (int s=1;s<=lines-i;s++) { // 印出 lines-i 幾個空格讓字母靠右對齊 
                    printf("  ");
                }
                   
                for (char c=ch-i+1;c<=ch;c++) { // 從 ch-i+1 到 ch 依序印出
                    printf("%c ",c);
                }
                printf("\n"); // 印完該行後換行  
            }
            printf("\n按任意鍵返回主選單 . . . ");
            getch();
        }
        
        //(4) 乘法表  
        else if (choice=='b'||choice=='B') { // 當輸入 b 或 B 時 
            int n;
            printf("請輸入 1~9 的整數：");
            scanf("%d", &n);
            
            while(n<1||n>9){ // 重複輸入直到是 1~9 
            	printf("錯誤!\n\n請輸入 1~9 的整數：");
                scanf(" %d",&n);
            }
            printf("\n");
            for (int i=1;i<=n;i++) { // 決定列值 
                for (int j=1;j<=n;j++) { // 決定行值  
                    printf("%2d*%d=%3d  ",j,i,i*j); // 列印 行乘列 以及其答案  
                } 
                printf("\n"); // 換行  
            }
            printf("\n按任意鍵返回主選單...\n");
            getch();
        }
        
        // (5) 結束確認 
        else if (choice=='c'||choice=='C') { // 當輸入 c 或 C 時 
            char yn;
            printf("Continue? (y/n)：");
            scanf(" %c",&yn);
            
            while(yn!='y'&&yn!='n'){ // 重複輸入直到是 y 或 n 
            	printf("錯誤!\n請輸入 y 或 n\n\nContinue? (y/n)：");
            	fflush(stdin);
                scanf(" %c",&yn);
            }
			 
            if (yn=='n'||yn=='N') { // 當輸入 n 或 N 時 
                printf("程式結束!\n");
                break; // 跳出無窮迴圈  
            } 
        }
    } 
    return 0;
}
