#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
int main(){
    srand( time(NULL) );

    char seat[9][9];

        for(int i=0;i<9;i++){ //�N�y���ܦ�'-'  
		    for(int j=0;j<9;j++){
			    seat[i][j]='-';
		    }
	    }
	    
	    int count = 0;
        while(count < 10){ //�ͦ�10�Ӥw���m 
        int x = rand() % 9;
        int y = rand() % 9;
        if(seat[x][y] != '*'){
            seat[x][y] = '*';
            count++;
        }
    } 
	
	    
    while(1){ 
    system("cls");
    char choice;
    printf("�п�J�ĪG:"); 
	scanf(" %c",&choice);
	
	
	if (choice=='a'||choice=='A') { // ���J a �� A �� 
        printf("\\ 1 2 3 4 5 6 7 8 9\n");
		for(int i=0;i<9;i++){ //�L�y���  
		    printf("%d ",9-i);
			for(int j=0;j<9;j++){
			    printf("%c ",seat[i][j]);
		    }
		    printf("\n");
	    }
            printf("\n�����N���^�D���...\n");
            getch();
        } 
    } 
}
