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
        for(int i=0;i<9;i++){ //�N�y���ܦ��Ů�  
		    for(int j=0;j<9;j++){
			    seat[i][j]='-';
		    }
	    }
	    for(int i=1;i<=10;i++){ //10�նü�  
            int x = rand() % 9;
            int y = rand() % 9;
		     seat[x][y]='*';
		
	    }
	    for(int i=0;i<9;i++){ //����O�_10�� *   
		    for(int j=0;j<9;j++){
			    if(seat[i][j]=='*'){
				    check++;
			    }
		    }
	    }
    }
	
	for(int i=0;i<9;i++){ //�L�y���  
		for(int j=0;j<9;j++){
			printf("%c ",seat[i][j]);
		}
		printf("\n");
	}
    system("pause");
    system("cls");
    } 
}
