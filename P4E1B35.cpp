#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
struct data{
	    char name[100];
	    int num;
	    int math;
	    int physics;
	    int english;
	    float tot;
	    float avg;
	}student[10];
int n;
char yn;
void acase(void){
	while(1){ /* 輸入 n 值，以及判斷是否為 5~10 */ 
		system("cls");
	    n=0;
	    printf("請輸入學生個數(5~10):");
	    scanf(" %d",&n);
	    if (n>10||n<5){
	        printf("錯誤! 請重新輸入!\n\n");
	        printf("按下任意鍵重新輸入 . . . ");
	        getch();
	        continue;
	    }
	    break;
	}
	
	for(int i=0;i<n;i++){ /* 輸入 n 筆資料 */ 
	    system("cls");
		printf("第%d位學生姓名:",i+1);
	    scanf(" %s",&student[i].name); /* 輸入學生姓名 */
	    
		while (1){ /* 輸入學號，以及判斷是否為 100000~999999 */ 
			system("cls");
			printf("%s的學號（6 位整數）:",student[i].name);
	    	scanf(" %d",&student[i].num);
	    	if (student[i].num<100000||student[i].num>999999){
	    		printf("錯誤! 請重新輸入!\n\n");
	            printf("按下任意鍵重新輸入 . . . ");
	            getch();
	            continue;
			}
			break;
		}
		
		while (1){ /* 輸入數學成績，以及判斷是否為 0~100 */ 
			system("cls");
			printf("%s的數學成績（0 ~ 100）:",student[i].name);
	    	scanf(" %d",&student[i].math);
	    	if (student[i].math<0||student[i].math>100){
	    		printf("錯誤! 請重新輸入!\n\n");
	            printf("按下任意鍵重新輸入 . . . ");
	            getch();
	            continue;
			}
			break;
		}
		
		while (1){ /* 輸入物理成績，以及判斷是否為 0~100 */ 
			system("cls");
			printf("%s的物理成績（0 ~ 100）:",student[i].name);
	    	scanf(" %d",&student[i].physics);
	    	if (student[i].physics<0||student[i].physics>100){
	    		printf("錯誤! 請重新輸入!\n\n");
	            printf("按下任意鍵重新輸入 . . . ");
	            getch();
	            continue;
			}
			break;
		}
		
		while (1){ /* 輸入英文成績，以及判斷是否為 0~100 */ 
			system("cls");
			printf("%s的英文成績（0 ~ 100）:",student[i].name);
	    	scanf(" %d",&student[i].english);
	    	if (student[i].english<0||student[i].english>100){
	    		printf("錯誤! 請重新輸入!\n\n");
	            printf("按下任意鍵重新輸入 . . . ");
	            getch();
	            continue;
			}
			break;
		}
		student[i].tot=student[i].math+student[i].physics+student[i].english;
		student[i].avg=(student[i].tot)/3;
	}
	printf("\n按下任意鍵回到主選單 . . . ");
	getch();
}
void bcase(void){
	for(int i=0;i<n;i++){ /* 輸出 n 筆資料 */ 
		printf("學生姓名:%8s",student[i].name);
		printf("  學號:%d",student[i].num);
		printf("  數學:%3d",student[i].math);
		printf("  物理:%3d",student[i].physics);
		printf("  英文:%3d",student[i].english);
		printf("  平均:%5.1f",student[i].avg);
		printf("\n");
	}
	printf("\n按下任意鍵回到主選單 . . . ");
	getch();
}
void ccase(void){
	char findname[100];
	int check=0;
	printf("請輸入要搜尋的姓名:");
	scanf("%s",&findname);
	for(int i=0;i<n;i++){ /* 尋找 n 筆資料 */ 
		if(strcmp(findname,student[i].name)==0){
			printf("學生姓名:%8s",student[i].name);
			printf("  學號:%d",student[i].num);
			printf("  數學:%3d",student[i].math);
			printf("  物理:%3d",student[i].physics);
			printf("  英文:%3d",student[i].english);
			printf("  平均:%5.1f",student[i].avg);
			check=1;
			break;
		}
	}
	if(check==0){ /* 如果沒找到 */ 
		printf("查無此人");
	}
	printf("\n\n按下任意鍵回到主選單 . . . ");
	getch();
}
void dcase(void){
	struct ddata{ /* 用來比較大小的結構 */ 
	    char dname[100];
	    int dnum;
	    float davg;
	}dstudent[10];
	struct ddata change;
	for(int i=0;i<n;i++){ /* 轉換 n 筆資料 */ 
		strcpy(dstudent[i].dname,student[i].name);
		dstudent[i].dnum=student[i].num;
		dstudent[i].davg=student[i].avg;
	}
	
	for(int i=0;i<n-1;i++){ /* 比較 n 筆資料 */ 
		for(int j=0;j<n-i-1;j++){
			if(dstudent[j].davg<dstudent[j+1].davg){
				change=dstudent[j];
				dstudent[j]=dstudent[j+1];
				dstudent[j+1]=change;
			}
		}
	}
	for(int i=0;i<n;i++){ /* 輸出 n 筆資料 */ 
		printf("第%d名: 學生姓名:%8s",i+1,dstudent[i].dname);
		printf("  學號:%d",dstudent[i].dnum);
		printf("  平均:%5.1f",dstudent[i].davg);
		printf("\n");
	}
	printf("\n按下任意鍵回到主選單 . . . ");
	getch();
}

void ecase(void){
    printf("確定離開？(y/n)：");
    scanf(" %c",&yn);
            
    while(yn!='y'&&yn!='n'){ /* 重複輸入直到是 y 或 n */
        printf("錯誤!\n請輸入 y 或 n\n\nContinue? (y/n)：");
        fflush(stdin);
        scanf(" %c",&yn);
    }
			 
    if (yn=='y') { /* 當輸入 y 時 */
        printf("程式結束!\n");
    }
    else if (yn=='n') { /* 當輸入 n 時 */
        printf("\n按下任意鍵回到主選單 . . . ");
        getch();
    }
}


int main(void){
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
printf("$$                E1B35郭宥宏的作業4                $$\n");
printf("$$                    2025/05/18                    $$\n");
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
            printf("密碼錯誤。\n\n");
        }
        attempts++; // 增加錯誤計數  
    }

    if (success==0) { // 判斷有沒有輸入正確  
        printf("連續錯誤三次，程式結束。\n");
        return 0;
    }
	printf("\n按下任意鍵回到主選單 . . . "); // 讓使用者確定輸入正確後再到主選單  
    getch();
    
    //(2) 主選單 
	while (1){
		system("cls");
		printf("$$$$$$$$$$$[Grade System]$$$$$$$$$$$\n");
        printf("$$                                $$\n");
        printf("$$ a. Enter student grades        $$\n");
        printf("$$ b. Display student grades      $$\n");
        printf("$$ c. Search for student grades   $$\n");
        printf("$$ d. Grade ranking               $$\n");
        printf("$$ e. Exit system                 $$\n");
        printf("$$                                $$\n");
        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
        char chiose;
	    printf("請輸入效果:");
	    scanf(" %c",&chiose);
	    system("cls");
	    //(3) 輸入資料 
	    if(chiose=='a'){ /* 當輸入 a 時 */
		    acase();
	    }
	    //(4) 查看資料 
	    else if(chiose=='b'){ /* 當輸入 b 時 */
		    bcase();
	    }
	    //(5) 尋找資料 
	    else if(chiose=='c'){ /* 當輸入 c 時 */
		    ccase();
	    }
	    //(6) 排列資料 
	    else if(chiose=='d'){ /* 當輸入 d 時 */
		    dcase();
	    }
	    //(7) 結束確認 
	    else if(chiose=='e'){ /* 當輸入 e 時 */
		    ecase();
		    if (yn=='y') { /* 當在 d 輸入 y 時 */ 
                return 0;
            }
	    }
	}
}
