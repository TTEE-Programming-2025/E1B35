#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void acase(void){
	int n=0;
	while(1){ /*輸入 n 值，以及判斷是否為 5~10*/ 
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
	struct data{
	    char name[100];
	    int num;
	    int math;
	    int physics;
	    int english;
	}student[n];
	    
	for(int i=0;i<n;i++){ /*輸入 n 筆資料*/ 
	    
		printf("學生姓名:");
	    scanf("%s",&student[i].name); /*輸入學生姓名*/
	    
		while (1){ /*輸入學號，以及判斷是否為 100000~999999*/ 
			printf("學號（6 位整數）:");
	    	scanf("%d",&student[i].num);
	    	if (student[i].num<100000||student[i].num>999999){
	    		printf("錯誤! 請重新輸入!\n\n");
	            printf("按下任意鍵重新輸入 . . . ");
	            getch();
	            continue;
			}
			break;
		}
	}
	
}
int main(){
	char chiose;
	printf("請輸入效果");
	scanf("%c",&chiose);
	if(chiose=='a'){
		acase();
	}
}
