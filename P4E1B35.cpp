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
	while(1){ /*��J n �ȡA�H�ΧP�_�O�_�� 5~10*/ 
		system("cls");
	    n=0;
	    printf("�п�J�ǥͭӼ�(5~10):");
	    scanf(" %d",&n);
	    if (n>10||n<1){ /* !!!!! �O�o��^ 5~10 !!!!! */ 
	        printf("���~! �Э��s��J!\n\n");
	        printf("���U���N�䭫�s��J . . . ");
	        getch();
	        continue;
	    }
	    break;
	}
	
	for(int i=0;i<n;i++){ /*��J n �����*/ 
	    system("cls");
		printf("��%d��ǥͩm�W:",i+1);
	    scanf(" %s",&student[i].name); /*��J�ǥͩm�W*/
	    
		while (1){ /*��J�Ǹ��A�H�ΧP�_�O�_�� 100000~999999*/ 
			system("cls");
			printf("%s���Ǹ��]6 ���ơ^:",student[i].name);
	    	scanf(" %d",&student[i].num);
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
	    	scanf(" %d",&student[i].math);
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
	    	scanf(" %d",&student[i].physics);
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
	    	scanf(" %d",&student[i].english);
	    	if (student[i].english<0||student[i].english>100){
	    		printf("���~! �Э��s��J!\n\n");
	            printf("���U���N�䭫�s��J . . . ");
	            getch();
	            continue;
			}
			break;
		}
		student[i].tot=student[i].math+student[i].physics+student[i].english;
		student[i].avg=(student[i].tot)/3;
	}
	printf("\n���U���N��^��D��� . . . ");
	getch();
}
void bcase(void){
	for(int i=0;i<n;i++){ /*��X n �����*/ 
		printf("�ǥͩm�W:%s",student[i].name);
		printf("  �Ǹ�:%d",student[i].num);
		printf("  �ƾ�:%d",student[i].math);
		printf("  ���z:%d",student[i].physics);
		printf("  �^��:%d",student[i].english);
		printf("  ����:%3.1f",student[i].avg);
		printf("\n");
	}
	printf("\n���U���N��^��D��� . . . ");
	getch();
}
void ccase(void){
	char findname[100];
	int check=0;
	printf("�п�J�n�j�M���m�W:");
	scanf("%s",&findname);
	for(int i=0;i<n;i++){ /*�M�� n �����*/ 
		if(strcmp(findname,student[i].name)==0){
			printf("�ǥͩm�W:%s",student[i].name);
			printf("  �Ǹ�:%d",student[i].num);
			printf("  �ƾ�:%3d",student[i].math);
			printf("  ���z:%3d",student[i].physics);
			printf("  �^��:%3d",student[i].english);
			printf("  ����:%3.1f",student[i].avg);
			check=1;
			break;
		}
	}
	if(check==0){
		printf("�d�L���H");
	}
	printf("\n\n���U���N��^��D��� . . . ");
	getch();
}
void dcase(void){
	struct ddata{
	    char dname[100];
	    int dnum;
	    float davg;
	}dstudent[10];
	struct ddata change;
	for(int i=0;i<n;i++){ /*�ഫ n �����*/ 
		strcpy(dstudent[i].dname,student[i].name);
		dstudent[i].dnum=student[i].num;
		dstudent[i].davg=student[i].avg;
	}
	
	for(int i=0;i<n-1;i++){ /*��� n �����*/ 
		for(int j=0;j<n-i-1;j++){
			if(dstudent[j].davg<dstudent[j+1].davg){
				change=dstudent[j];
				dstudent[j]=dstudent[j+1];
				dstudent[j+1]=change;
			}
		}
	}
	for(int i=0;i<n;i++){ /*��X n �����*/ 
		printf("��%d�W: �ǥͩm�W:%s",i+1,dstudent[i].dname);
		printf("  �Ǹ�:%d",dstudent[i].dnum);
		printf("  ����:%3.1f",dstudent[i].davg);
		printf("\n");
	}
	printf("\n���U���N��^��D��� . . . ");
	getch();
}

void ecase(void){
    printf("�T�w���}�H(y/n)�G");
    scanf(" %c",&yn);
            
    while(yn!='y'&&yn!='n'){ // ���ƿ�J����O y �� n 
        printf("���~!\n�п�J y �� n\n\nContinue? (y/n)�G");
        fflush(stdin);
        scanf(" %c",&yn);
    }
			 
    if (yn=='y'||yn=='Y') { // ���J y �� Y ��  
        printf("�{������!\n");
    }
    else if (yn=='n'||yn=='N') { // ���J n �� N ��  
        printf("\n���U���N��^��D��� . . . ");
        getch();
    }
}


int main(void){
	while (1){
		char chiose;
		system("cls");
	    printf("�п�J�ĪG:");
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
	    else if(chiose=='d'){
		    dcase();
	    }
	    else if(chiose=='e'){
		    ecase();
		    if (yn=='y'||yn=='Y') { // ���J y �� Y ��  
                return 0;
            }
	    }
	}
}
