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
	    struct data{
	    	char name[100];
	        int num;
	        int math;
	        int physics;
	        int english;
		}student[n];
	    
	    for(int i=0;i<n;i++){
	    	printf("�ǥͩm�W:");
	    	scanf("%s",&student[i].name);
	    	
	    	printf("�Ǹ��]6 ���ơ^:");
	    	scanf("%d",&student[i].num);
	    	if (student[i].num<0||student[i].num>999999){
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
