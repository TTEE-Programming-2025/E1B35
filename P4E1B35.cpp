#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void acase(void){
	int check=0;
	while(check==0){
		system("cls");
	    int n=0;
	    printf("�п�J�ǥͭӼ�(5~10):");
	    scanf(" %d",&n);
	    if (n>10||n<5){
	        printf("���~! �Э��s��J!\n\n");
	        printf("���U���N�䭫�s��J . . . ");
	        getch();
	        continue;
	    }
	    char name[n][100]={'0'};
	    int num[n]={0};
	    for(int i=0;i<n;i++){
	    	printf("�ǥͩm�W:");
	    	scanf("%s",&name[i]);
	    	
	    	printf("�Ǹ��]6 ���ơ^:");
	    	scanf("%d",&num[i]);
	    	if (num[i]<0||num[i]>999999){
	    		printf("���~! �Э��s��J!\n\n");
	            printf("���U���N�䭫�s��J . . . ");
	            getch();
	            break;
			}
		}
	}
	
}
int main(){
	char chiose;
	printf("�п�J�ĪG");
	scanf("%c",&chiose);
	if(chiose=='a'){
		acase();
	}
}
