#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void acase(void){
	int n=0;
	while(1){ /*��J n �ȡA�H�ΧP�_�O�_�� 5~10*/ 
		system("cls");
	    n=0;
	    printf("�п�J�ǥͭӼ�(5~10):");
	    scanf(" %d",&n);
	    if (n>10||n<5){
	        printf("���~! �Э��s��J!\n\n");
	        printf("���U���N�䭫�s��J . . . ");
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
	    
	for(int i=0;i<n;i++){ /*��J n �����*/ 
	    
		printf("�ǥͩm�W:");
	    scanf("%s",&student[i].name); /*��J�ǥͩm�W*/
	    
		while (1){ /*��J�Ǹ��A�H�ΧP�_�O�_�� 100000~999999*/ 
			printf("�Ǹ��]6 ���ơ^:");
	    	scanf("%d",&student[i].num);
	    	if (student[i].num<100000||student[i].num>999999){
	    		printf("���~! �Э��s��J!\n\n");
	            printf("���U���N�䭫�s��J . . . ");
	            getch();
	            continue;
			}
			break;
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
