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
	while(1){ /* ��J n �ȡA�H�ΧP�_�O�_�� 5~10 */ 
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
	
	for(int i=0;i<n;i++){ /* ��J n ����� */ 
	    system("cls");
		printf("��%d��ǥͩm�W:",i+1);
	    scanf(" %s",&student[i].name); /* ��J�ǥͩm�W */
	    
		while (1){ /* ��J�Ǹ��A�H�ΧP�_�O�_�� 100000~999999 */ 
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
		
		while (1){ /* ��J�ƾǦ��Z�A�H�ΧP�_�O�_�� 0~100 */ 
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
		
		while (1){ /* ��J���z���Z�A�H�ΧP�_�O�_�� 0~100 */ 
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
		
		while (1){ /* ��J�^�妨�Z�A�H�ΧP�_�O�_�� 0~100 */ 
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
	for(int i=0;i<n;i++){ /* ��X n ����� */ 
		printf("�ǥͩm�W:%8s",student[i].name);
		printf("  �Ǹ�:%d",student[i].num);
		printf("  �ƾ�:%3d",student[i].math);
		printf("  ���z:%3d",student[i].physics);
		printf("  �^��:%3d",student[i].english);
		printf("  ����:%5.1f",student[i].avg);
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
	for(int i=0;i<n;i++){ /* �M�� n ����� */ 
		if(strcmp(findname,student[i].name)==0){
			printf("�ǥͩm�W:%8s",student[i].name);
			printf("  �Ǹ�:%d",student[i].num);
			printf("  �ƾ�:%3d",student[i].math);
			printf("  ���z:%3d",student[i].physics);
			printf("  �^��:%3d",student[i].english);
			printf("  ����:%5.1f",student[i].avg);
			check=1;
			break;
		}
	}
	if(check==0){ /* �p�G�S��� */ 
		printf("�d�L���H");
	}
	printf("\n\n���U���N��^��D��� . . . ");
	getch();
}
void dcase(void){
	struct ddata{ /* �ΨӤ���j�p�����c */ 
	    char dname[100];
	    int dnum;
	    float davg;
	}dstudent[10];
	struct ddata change;
	for(int i=0;i<n;i++){ /* �ഫ n ����� */ 
		strcpy(dstudent[i].dname,student[i].name);
		dstudent[i].dnum=student[i].num;
		dstudent[i].davg=student[i].avg;
	}
	
	for(int i=0;i<n-1;i++){ /* ��� n ����� */ 
		for(int j=0;j<n-i-1;j++){
			if(dstudent[j].davg<dstudent[j+1].davg){
				change=dstudent[j];
				dstudent[j]=dstudent[j+1];
				dstudent[j+1]=change;
			}
		}
	}
	for(int i=0;i<n;i++){ /* ��X n ����� */ 
		printf("��%d�W: �ǥͩm�W:%8s",i+1,dstudent[i].dname);
		printf("  �Ǹ�:%d",dstudent[i].dnum);
		printf("  ����:%5.1f",dstudent[i].davg);
		printf("\n");
	}
	printf("\n���U���N��^��D��� . . . ");
	getch();
}

void ecase(void){
    printf("�T�w���}�H(y/n)�G");
    scanf(" %c",&yn);
            
    while(yn!='y'&&yn!='n'){ /* ���ƿ�J����O y �� n */
        printf("���~!\n�п�J y �� n\n\nContinue? (y/n)�G");
        fflush(stdin);
        scanf(" %c",&yn);
    }
			 
    if (yn=='y') { /* ���J y �� */
        printf("�{������!\n");
    }
    else if (yn=='n') { /* ���J n �� */
        printf("\n���U���N��^��D��� . . . ");
        getch();
    }
}


int main(void){
	int input=0;             // �ϥΪ̿�J���K�X  
    int attempts=0;          // ��J���ƭp��  
    int success=0;           // �O�_�n�J���\  
    
    //(1) �ӤH����  
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
printf("$$                    �ĥd�Z�ҳ�                    $$\n"); 
printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("$$                                                  $$\n");
printf("$$                                                  $$\n");
printf("$$                     �{���]�p                     $$\n");
printf("$$                E1B35���ɧ����@�~4                $$\n");
printf("$$                    2025/05/18                    $$\n");
printf("$$                                                  $$\n");
printf("$$                     {\\__/}                       $$\n");
printf("$$                     ( �E-�E)                       $$\n");
printf("$$                   c /> 35<\\                      $$\n");
printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");

    // �K�X���ҡA�̦h�T�����|
    while (attempts<3) {
        printf("�� %d ����J(�K�X�w�]��2025)�G",attempts+1);
        scanf("%d",&input);

        if (input==2025) { // �p�G��J2025  
            printf("�K�X���T�A�n�J�����I\n\n"); // �L�X�K�X���T  
            success=1; // �ϫ���i�H�̾�success�P�_���S����J���T  
            break; // ���X�j��  
        } 
		else {
            printf("�K�X���~�C\n\n");
        }
        attempts++; // �W�[���~�p��  
    }

    if (success==0) { // �P�_���S����J���T  
        printf("�s����~�T���A�{�������C\n");
        return 0;
    }
	printf("\n���U���N��^��D��� . . . "); // ���ϥΪ̽T�w��J���T��A��D���  
    getch();
    
    //(2) �D��� 
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
	    printf("�п�J�ĪG:");
	    scanf(" %c",&chiose);
	    system("cls");
	    //(3) ��J��� 
	    if(chiose=='a'){ /* ���J a �� */
		    acase();
	    }
	    //(4) �d�ݸ�� 
	    else if(chiose=='b'){ /* ���J b �� */
		    bcase();
	    }
	    //(5) �M���� 
	    else if(chiose=='c'){ /* ���J c �� */
		    ccase();
	    }
	    //(6) �ƦC��� 
	    else if(chiose=='d'){ /* ���J d �� */
		    dcase();
	    }
	    //(7) �����T�{ 
	    else if(chiose=='e'){ /* ���J e �� */
		    ecase();
		    if (yn=='y') { /* ��b d ��J y �� */ 
                return 0;
            }
	    }
	}
}
