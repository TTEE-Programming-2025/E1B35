#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void acase(void){
	int n;
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
	    system("cls");
		printf("��%d��ǥͩm�W:",i+1);
	    scanf("%s",&*student[i].name); /*��J�ǥͩm�W*/
	    
		while (1){ /*��J�Ǹ��A�H�ΧP�_�O�_�� 100000~999999*/ 
			system("cls");
			printf("%s���Ǹ��]6 ���ơ^:",student[i].name);
	    	scanf("%d",&student[i].num);
	    	if (student[i].num<100000||student[i].num>999999){
	    		printf("���~! �Э��s��J!\n\n");
	            printf("���U���N�䭫�s��J . . . ");
	            getch();
	            continue;
			}
			break;
		}
		
		while (1){ /*��J�ƾǦ��Z�A�H�ΧP�_�O�_�� 0~100*/ 
			system("cls");
			printf("%s���ƾǦ��Z�]0 ~ 100�^:",student[i].name);
	    	scanf("%d",&student[i].math);
	    	if (student[i].math<0||student[i].math>100){
	    		printf("���~! �Э��s��J!\n\n");
	            printf("���U���N�䭫�s��J . . . ");
	            getch();
	            continue;
			}
			break;
		}
		
		while (1){ /*��J���z���Z�A�H�ΧP�_�O�_�� 0~100*/ 
			system("cls");
			printf("%s�����z���Z�]0 ~ 100�^:",student[i].name);
	    	scanf("%d",&student[i].physics);
	    	if (student[i].physics<0||student[i].physics>100){
	    		printf("���~! �Э��s��J!\n\n");
	            printf("���U���N�䭫�s��J . . . ");
	            getch();
	            continue;
			}
			break;
		}
		
		while (1){ /*��J�^�妨�Z�A�H�ΧP�_�O�_�� 0~100*/ 
			system("cls");
			printf("%s���^�妨�Z�]0 ~ 100�^:",student[i].name);
	    	scanf("%d",&student[i].english);
	    	if (student[i].english<0||student[i].english>100){
	    		printf("���~! �Э��s��J!\n\n");
	            printf("���U���N�䭫�s��J . . . ");
	            getch();
	            continue;
			}
			break;
		}
	}
	
	printf("\n���U���N��^��D��� . . . ");
	getch();
}
int main(){
	while (1){
		char chiose;
	    printf("�п�J�ĪG");
	    scanf("%c",&chiose);
	    if(chiose=='a'){
		    acase();
	    }
	}
	
}
