#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    while(1){ 
    srand( time(NULL) );
    
  	char seat[9][9];

        for(int i=0;i<9;i++){ //�N�y���ܦ��Ů�  
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
