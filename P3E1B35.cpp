#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
int main(){
    srand( time(NULL) );

    char seat[9][13];

        for(int i=0;i<9;i++){ //將座位變成'*'  
		    for(int j=0;j<13;j++){
			    seat[i][j]='*';
		    }
	    } 
	    
		for(int i=0;i<9;i++){ //將座位變成'-'  
		    for(int j=0;j<9;j++){
			    seat[i][j]='-';
		    }
	    }
	    
	    int count = 0;
        while(count < 10){ //生成10個已選位置 
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
    printf("請輸入效果:"); 
	scanf(" %c",&choice);
	
	
	if (choice=='a'||choice=='A') { // 當輸入 a 或 A 時 
        printf("\\ 1 2 3 4 5 6 7 8 9\n");
		for(int i=0;i<9;i++){ //印座位表  
		    printf("%d ",9-i);
			for(int j=0;j<9;j++){
			    printf("%c ",seat[i][j]);
		    }
		    printf("\n");
	    }
            printf("\n按任意鍵返回主選單...\n");
            getch();
    } 
    
    else if (choice=='b'||choice=='B') { // 當輸入 b 或 B 時 
            int n=0;
            printf("請輸入需要幾個座位（1~4）：");
            scanf("%d", &n);
            
            while(n<1||n>4){ // 重複輸入直到是 1~4 
            	printf("錯誤!\n\n請輸入 1~4 的整數：");
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
	       	for(int i=0;i<9;i++){ //印座位表  
		        printf("%d ",9-i);
			    for(int j=0;j<9;j++){
			        printf("%c ",seat[i][j]);
		        }
		    printf("\n");
	        } 
	        
	        char yn;
	        printf("你滿意嗎?(y/n):");
	        scanf(" %c",&yn);
            
            while(yn!='y'&&yn!='n'){ // 重複輸入直到是 y 或 n 
            	printf("錯誤!\n請輸入 y 或 n\n\n你滿意嗎?(y/n):");
            	fflush(stdin);
                scanf(" %c",&yn);
            }
			 
            if (yn=='y'||yn=='Y') { // 當輸入 n 或 N 時 
                for(int i=0;i<9;i++){ //將 @ 換成 *   
		            for(int j=0;j<9;j++){
			            if(seat[i][j]=='@'){
				            seat[i][j] = '*';
			            }
		            }
	            }
	        }
	        if (yn=='n'||yn=='N') { // 當輸入 n 或 N 時 
                for(int i=0;i<9;i++){ //將 @ 換成 -    
		            for(int j=0;j<9;j++){
			            if(seat[i][j]=='@'){
				            seat[i][j] = '-';
			            }
		            }
	            }
	        }
            printf("\n按任意鍵返回主選單...\n");
            getch();
        }
    } 
    
}
