#include<stdio.h>
#include<stdlib.h>
int main(){
int num;//密碼的變數 
char ch;//字元的變數 
//印出個人特色 
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
printf("$$                E1B35郭宥宏的作業1                $$\n");
printf("$$                    2025/03/29                    $$\n");
printf("$$                                                  $$\n");
printf("$$                     {\\__/}                       $$\n");
printf("$$                     ( ‧-‧)                       $$\n");
printf("$$                   c /> 35<\\                      $$\n");
printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
system("pause");//按任意按鍵繼續 
system("CLS");//清空畫面 

printf("請輸入 4 個數字的密碼\n");
scanf("%d",&num);//輸入密碼 
if (num==2025){//判斷是否=2025 
  system("CLS");//清空畫面 
//印出主選單 
printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("$$                           $$\n");
printf("$$ ‘A’...‘Z’ : Uppercase     $$\n");
printf("$$ ‘a’...‘z’ : Lowercase     $$\n");
printf("$$ ‘0’...‘9’ : Digit         $$\n");
printf("$$ Otherwise : Your name     $$\n");
printf("$$                           $$\n");
printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
}
else{//如果不等於2025 
printf("輸入錯誤\n");
system("pause");//按任意按鍵繼續
system("CLS");//清空畫面
return 0;//結束程式 
}
printf("請輸入一個字元:");
fflush(stdin);//清除緩衝區 
scanf("%ch",&ch);//輸入一個字元
if (ch>='A'&&ch<='Z'){//如果是大寫英文字 
	printf("Uppercase\n");//印出 Uppercase 
}
else if (ch>='a'&&ch<='z'){//如果是小寫英文字 
	printf("Lowercase\n");//印出 Lowercase
}
else if (ch>='0'&&ch<='9'){//如果是數字 
	printf("Digit\n");//印出 Digit
}
else{//如果都不是
    printf("E1B35郭宥宏\n");//印出 Your name 
} 
system("pause");
return 0;
}
//心得:這次的作業讓我學到合理使用符號畫成一張圖，以及清空畫面的程式碼，還有嘗試設計屬於自己的邊框。過程中很疑惑所謂的個人特色究竟是什麼，最後決定畫出我最喜歡的梗圖來作為我的個人特色。 
