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

void acase(void){
	while(1){ /*輸入 n 值，以及判斷是否為 5~10*/ 
		system("cls");
	    n=0;
	    printf("請輸入學生個數(5~10):");
	    scanf(" %d",&n);
	    if (n>10||n<1){ /* !!!!! 記得改回 5~10 !!!!! */ 
	        printf("錯誤! 請重新輸入!\n\n");
	        printf("按下任意鍵重新輸入 . . . ");
	        getch();
	        continue;
	    }
	    break;
	}
	
	for(int i=0;i<n;i++){ /*輸入 n 筆資料*/ 
	    system("cls");
		printf("第%d位學生姓名:",i+1);
	    scanf(" %s",&student[i].name); /*輸入學生姓名*/
	    
		while (1){ /*輸入學號，以及判斷是否為 100000~999999*/ 
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
		
		while (1){ /*輸入數學成績，以及判斷是否為 0~100*/ 
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
		
		while (1){ /*輸入物理成績，以及判斷是否為 0~100*/ 
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
		
		while (1){ /*輸入英文成績，以及判斷是否為 0~100*/ 
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
	for(int i=0;i<n;i++){ /*輸出 n 筆資料*/ 
		printf("學生姓名:%s",student[i].name);
		printf("  學號:%d",student[i].num);
		printf("  數學:%d",student[i].math);
		printf("  物理:%d",student[i].physics);
		printf("  英文:%d",student[i].english);
		printf("  平均:%3.1f",student[i].avg);
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
	for(int i=0;i<n;i++){ /*尋找 n 筆資料*/ 
		if(strcmp(findname,student[i].name)==0){
			printf("學生姓名:%s",student[i].name);
			printf("  學號:%d",student[i].num);
			printf("  數學:%d",student[i].math);
			printf("  物理:%d",student[i].physics);
			printf("  英文:%d",student[i].english);
			printf("  平均:%3.1f",student[i].avg);
			check=1;
			break;
		}
	}
	if(check==0){
		printf("查無此人");
	}
	printf("\n\n按下任意鍵回到主選單 . . . ");
	getch();
}
int main(void){
	while (1){
		char chiose;
		system("cls");
	    printf("請輸入效果:");
	    scanf(" %c",&chiose);
	    system("cls");
	    if(chiose=='a'){
		    acase();
	    }
	    else if(chiose=='b'){
		    bcase();
	    }
	    else if(chiose=='c'){
		    ccase();
	    }
	}
	
}
