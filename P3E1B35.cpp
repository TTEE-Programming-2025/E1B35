#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    while(1){ 
    srand( time(NULL) );
    
    char seat[9][9];
    
  	int check=0;
	while(check!=10){ 
	    check=0;
        for(int i=0;i<9;i++){ //將座位變成空格  
		    for(int j=0;j<9;j++){
			    seat[i][j]='-';
		    }
	    }
	    for(int i=1;i<=10;i++){ //10組亂數  
            int x = rand() % 9;
            int y = rand() % 9;
		     seat[x][y]='*';
		
	    }
	    for(int i=0;i<9;i++){ //檢驗是否10個 *   
		    for(int j=0;j<9;j++){
			    if(seat[i][j]=='*'){
				    check++;
			    }
		    }
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
