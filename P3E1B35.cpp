#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
int main(){
    srand( time(NULL) );

    char seat[9][13];

        for(int i=0;i<9;i++){ //�N�y���ܦ�'*'  
		    for(int j=0;j<13;j++){
			    seat[i][j]='*';
		    }
	    } 
	    
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
    
    else if (choice=='b'||choice=='B') { // ���J b �� B �� 
            int n=0;
            printf("�п�J�ݭn�X�Ӯy��]1~4�^�G");
            scanf("%d", &n);
            
            while(n<1||n>4){ // ���ƿ�J����O 1~4 
            	printf("���~!\n\n�п�J 1~4 ����ơG");
                scanf(" %d",&n);
            }
            printf("\n");

            if (n==1) {
            	count=0;
                while(count!=1){
                    int x = rand() % 9;
                    int y = rand() % 9;
                    if(seat[x][y] != '*'){
                        seat[x][y] = '@';
                        
                        count++;
                    }
                } 
            }
            if (n==2) {
                count=0;
                while(count!=1){
                    int x = rand() % 8;
                    int y = rand() % 8;
                    if(seat[x][y] != '*'&&seat[x][y+1] != '*'){
                        seat[x][y] = '@';
                        seat[x][y+1] = '@';
                        count++;
                    }
                } 
            }
            if (n==3) {
                count=0;
                while(count!=1){
                    int x = rand() % 7;
                    int y = rand() % 7;
                    if(seat[x][y] != '*'&&seat[x][y+1] != '*'&&seat[x][y+2] != '*'){
                        seat[x][y] = '@';
                        seat[x][y+1] = '@';
                        seat[x][y+2] = '@';
                        count++;
                    }
                } 
            }
            if (n==4) {
                count=0;
                while(count!=1){
                    int x = rand() % 8;
                    int y = rand() % 8;
                    if(seat[x][y] != '*'&&seat[x][y+1] != '*'&&seat[x][y+2] != '*'&&seat[x][y+3] != '*'){
                        seat[x][y] = '@';
                        seat[x][y+1] = '@';
                        seat[x][y+2] = '@';
                        seat[x][y+3] = '@';
                        count++;
                    }
                    else if(seat[x][y] != '*'&&seat[x][y+1] != '*'&&seat[x+1][y] != '*'&&seat[x+1][y] != '*'){
                        seat[x][y] = '@';
                        seat[x][y+1] = '@';
                        seat[x+1][y] = '@';
                        seat[x+1][y+1] = '@';
                        count++;
                    }
                    
                } 
            }
            printf("\\ 1 2 3 4 5 6 7 8 9\n");
	       	for(int i=0;i<9;i++){ //�L�y���  
		        printf("%d ",9-i);
			    for(int j=0;j<9;j++){
			        printf("%c ",seat[i][j]);
		        }
		    printf("\n");
	        } 
	        
	        char yn;
	        printf("�A���N��?(y/n):");
	        scanf(" %c",&yn);
            
            while(yn!='y'&&yn!='n'){ // ���ƿ�J����O y �� n 
            	printf("���~!\n�п�J y �� n\n\n�A���N��?(y/n):");
            	fflush(stdin);
                scanf(" %c",&yn);
            }
			 
            if (yn=='y'||yn=='Y') { // ���J n �� N �� 
                for(int i=0;i<9;i++){ //�N @ ���� *   
		            for(int j=0;j<9;j++){
			            if(seat[i][j]=='@'){
				            seat[i][j] = '*';
			            }
		            }
	            }
	        }
	        if (yn=='n'||yn=='N') { // ���J n �� N �� 
                for(int i=0;i<9;i++){ //�N @ ���� -    
		            for(int j=0;j<9;j++){
			            if(seat[i][j]=='@'){
				            seat[i][j] = '-';
			            }
		            }
	            }
	        }
            printf("\n�����N���^�D���...\n");
            getch();
        }
    } 
    
}
