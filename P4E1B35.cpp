#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void acase(void){
	int check=0;
	while(check==0){
		system("cls");
	    int n=0;
	    printf("請輸入學生個數(5~10):");
	    scanf(" %d",&n);
	    if (n>10||n<5){
	        printf("錯誤! 請重新輸入!\n\n");
	        printf("按下任意鍵重新輸入 . . . ");
	        getch();
	        continue;
	    }
	    char name[n][100]={'0'};
	    int num[n]={0};
	    for(int i=0;i<n;i++){
	    	printf("學生姓名:");
	    	scanf("%s",&name[i]);
	    	
	    	printf("學號（6 位整數）:");
	    	scanf("%d",&num[i]);
	    	if (num[i]<0||num[i]>999999){
	    		printf("錯誤! 請重新輸入!\n\n");
	            printf("按下任意鍵重新輸入 . . . ");
	            getch();
	            break;
			}
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
