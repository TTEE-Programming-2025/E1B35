#include<stdio.h>
#include<stdlib.h>
int main(){
int num;//�K�X���ܼ� 
char ch;//�r�����ܼ� 
//�L�X�ӤH�S�� 
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
printf("$$                E1B35���ɧ����@�~1                $$\n");
printf("$$                    2025/03/29                    $$\n");
printf("$$                                                  $$\n");
printf("$$                     {\\__/}                       $$\n");
printf("$$                     ( �E-�E)                       $$\n");
printf("$$                   c /> 35<\\                      $$\n");
printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
system("pause");//�����N�����~�� 
system("CLS");//�M�ŵe�� 

printf("�п�J 4 �ӼƦr���K�X\n");
scanf("%d",&num);//��J�K�X 
if (num==2025){//�P�_�O�_=2025 
  system("CLS");//�M�ŵe�� 
//�L�X�D��� 
printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("$$                           $$\n");
printf("$$ ��A��...��Z�� : Uppercase     $$\n");
printf("$$ ��a��...��z�� : Lowercase     $$\n");
printf("$$ ��0��...��9�� : Digit         $$\n");
printf("$$ Otherwise : Your name     $$\n");
printf("$$                           $$\n");
printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
}
else{//�p�G������2025 
printf("��J���~\n");
system("pause");//�����N�����~��
system("CLS");//�M�ŵe��
return 0;//�����{�� 
}
printf("�п�J�@�Ӧr��:");
fflush(stdin);//�M���w�İ� 
scanf("%ch",&ch);//��J�@�Ӧr��
if (ch>='A'&&ch<='Z'){//�p�G�O�j�g�^��r 
	printf("Uppercase\n");//�L�X Uppercase 
}
else if (ch>='a'&&ch<='z'){//�p�G�O�p�g�^��r 
	printf("Lowercase\n");//�L�X Lowercase
}
else if (ch>='0'&&ch<='9'){//�p�G�O�Ʀr 
	printf("Digit\n");//�L�X Digit
}
else{//�p�G�����O
    printf("E1B35���ɧ�\n");//�L�X Your name 
} 
system("pause");
return 0;
}
//�߱o:�o�����@�~���ھǨ�X�z�ϥβŸ��e���@�i�ϡA�H�βM�ŵe�����{���X�A�٦����ճ]�p�ݩ�ۤv����ءC�L�{���ܺôb�ҿת��ӤH�S��s���O����A�̫�M�w�e�X�ڳ̳��w����Ϩӧ@���ڪ��ӤH�S��C 
