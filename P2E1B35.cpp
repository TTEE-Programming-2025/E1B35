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
printf("$$                    2025/04/22                    $$\n");
printf("$$                                                  $$\n");
printf("$$                     {\\__/}                       $$\n");
printf("$$                     ( �E-�E)                       $$\n");
printf("$$                   c /> 35<\\                      $$\n");
printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");

    // �K�X���ҡA�̦h�T�����|
    while (attempts<3) {
        printf("�� %d ����J�G",attempts+1);
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
     
    return 0;
}
