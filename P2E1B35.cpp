#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
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
printf("$$                E1B35���ɧ����@�~2                $$\n");
printf("$$                    2025/04/27                    $$\n");
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
            printf("�K�X���~�C\n");
        }
        attempts++; // �W�[���~�p��  
    }

    if (success==0) { // �P�_���S����J���T  
        printf("�s����~�T���A�{�������C\n");
        return 0;
    }
    system("pause"); // ���ϥΪ̽T�w��J���T��A��D���  
    
    //(2) �D���  
    char choice;
    while (1) { // �L�a�j��A����X�����G�����^��D���  
        system("cls"); // �M���ù� 
        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
        printf("$$                           $$\n");
        printf("$$ a. �e�X�����T����         $$\n");
        printf("$$ b. ��ܭ��k��             $$\n");
        printf("$$ c. ����                   $$\n");
        printf("$$                           $$\n");
        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
        printf("�п�ܮĪG( a / b / c )");

        choice = getch(); // ��J�ĪG�A�åB���|�X�{�b�ù��W 
        system("cls");

        //(3) �e�����T����  
        if (choice=='a'||choice=='A') { // ���J a �� A �� 
            char ch;
            printf("�п�J a~n ���r���G");
            scanf(" %c",&ch);
            
            while(ch<'a'||ch>'n'){ // ���ƿ�J����O a~n 
            	printf("���~!\n\n�п�J a~n ���r���G");
                scanf(" %c",&ch);
			}
            printf("\n");
            int lines=ch-'a'+ 1; // �p��ch�O�ĴX�Ӧr��    

            for (int i=1;i<=lines;i++) { // �B��X��(�X��) 
                for (int s=1;s<=lines-i;s++) { // �L�X lines-i �X�ӪŮ����r���a�k��� 
                    printf("  ");
                }
                   
                for (char c=ch-i+1;c<=ch;c++) { // �q ch-i+1 �� ch �̧ǦL�X
                    printf("%c ",c);
                }
                printf("\n"); // �L���Ӧ�ᴫ��  
            }
            printf("\n�����N���^�D��� . . . ");
            getch();
        }
        
        //(4) ���k��  
        else if (choice=='b'||choice=='B') { // ���J b �� B �� 
            int n;
            printf("�п�J 1~9 ����ơG");
            scanf("%d", &n);
            
            while(n<1||n>9){ // ���ƿ�J����O 1~9 
            	printf("���~!\n\n�п�J 1~9 ����ơG");
                scanf(" %d",&n);
            }
            printf("\n");
            for (int i=1;i<=n;i++) { // �M�w�C�� 
                for (int j=1;j<=n;j++) { // �M�w���  
                    printf("%2d*%d=%3d  ",j,i,i*j); // �C�L �歼�C �H�Ψ䵪��  
                } 
                printf("\n"); // ����  
            }
            printf("\n�����N���^�D���...\n");
            getch();
        }
        
        // (5) �����T�{ 
        else if (choice=='c'||choice=='C') { // ���J c �� C �� 
            char yn;
            printf("Continue? (y/n)�G");
            scanf(" %c",&yn);
            
            while(yn!='y'&&yn!='n'){ // ���ƿ�J����O y �� n 
            	printf("���~!\n�п�J y �� n\n\nContinue? (y/n)�G");
            	fflush(stdin);
                scanf(" %c",&yn);
            }
			 
            if (yn=='n'||yn=='N') { // ���J n �� N �� 
                printf("�{������!\n");
                break; // ���X�L�a�j��  
            } 
        }
    } 
    return 0;
}
