#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    while(1){ 
    srand( time(NULL) );
    
  	char seat[9][9];

        for(int i=0;i<9;i++){ //將座位變成空格  
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
	
	for(int i=0;i<9;i++){ //印座位表  
		for(int j=0;j<9;j++){
			printf("%c ",seat[i][j]);
		}
		printf("\n");
	}
    system("pause");
    system("cls");
    } 
}
