#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    int input=0;             // �ϥΪ̿�J���K�X  
    int attempts=0;          // ��J���ƭp��  
    int success=0;           // �O�_�n�J���\  
    
    //(1)�ӤH����  
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
printf("$$                    2025/04/25                    $$\n");
printf("$$                                                  $$\n");
printf("$$                     {\\__/}                       $$\n");
printf("$$                     ( �E-�E)                       $$\n");
printf("$$                   c /> 35<\\                      $$\n");
printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");

    // �K�X���ҡA�̦h�T�����|
    while (attempts<3) {
        printf("�� %d ����J(�K�X�w�]��2025)�G",attempts+1);
        scanf("%d",&input);

        if (input==2025) {
            printf("�K�X���T�A�n�J�����I\n");
            success=1;
            break;
        } else {
            printf("�K�X���~�C\n");
        }
        attempts++;
    }

    if (success==0) {
        printf("�s����~�T���A�{�������C\n");
        return 0;
    }
    system("pause");
    //(2)�D���  
    char choice;
    while (1) {
        system("cls");
        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
        printf("$$                           $$\n");
        printf("$$ a. �e�X�����T����         $$\n");
        printf("$$ b. ��ܭ��k��             $$\n");
        printf("$$ c. ����                   $$\n");
        printf("$$                           $$\n");
        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
        printf("�п�ܮĪG( a / b / c )");

        choice = getch();
        system("cls");

        //(3) �e�����T����  
        if (choice=='a'||choice=='A') { // ���J a �� A �� 
            char ch;
            printf("�п�J a~n ���r���G");
            scanf(" %c",&ch);
            
            if (ch>='a'&&ch<='n') {
                int lines=ch-'a'+ 1; // �p��ch�O�ĴX�Ӧr��    

                for (int i=1;i<=lines;i++) { //�B��X��(�X��) 
                    for (int s=1;s<=lines-i;s++) { // �L�X lines-i �X�ӪŮ����r���a�k��� 
                        printf("  ");
                    }
                   
                    for (char c=ch-i+1;c<=ch;c++) { // �q ch-i+1 �� ch �̧ǦL�X
                        printf("%c ",c);
                    }
                    printf("\n");//�L���Ӧ�ᴫ��  
                }
            } else {
                printf("���~�G�п�J a~n ���p�g�r���I\n");
            }
        
            printf("\n�����N���^�D��� . . . ");
            getch();
        }
    } 
    return 0;
}
