#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#define enter 13 
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
                	int set = rand() % 2;
                	
                	if(set==0){
                		int x = rand() % 6;
                        int y = rand() % 6;
                        if(seat[x][y] != '*'&&seat[x][y+1] != '*'&&seat[x][y+2] != '*'&&seat[x][y+3] != '*'){
                            seat[x][y] = '@';
                            seat[x][y+1] = '@';
                            seat[x][y+2] = '@';
                            seat[x][y+3] = '@';
                            count++;
                        }
					}
					
					if(set==1){
                		int x = rand() % 8;
                        int y = rand() % 8;
                        if(seat[x][y] != '*'&&seat[x][y+1] != '*'&&seat[x+1][y] != '*'&&seat[x+1][y] != '*'){
                            seat[x][y] = '@';
                            seat[x][y+1] = '@';
                            seat[x+1][y] = '@';
                            seat[x+1][y+1] = '@';
                            count++;
                        }
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
        
        else if (choice=='c'||choice=='C') { // ���J c �� C �� 
            char a[71],b[71],c[71],d[71];
	        int check=-1;
	        
			while (check==-1){
	        	int numa=0,numb=0,numc=0,numd=0;
				check=0;
	        	
	        	for (int i=0;i<71;i++){ //��l�� a �}�C  
	                a[i]=0;
	            } 
	        	for (int i=0;i<71;i++){ //��l�� b �}�C   
	                b[i]=0;
	            } 
	            for (int i=0;i<71;i++){ //��l�� c �}�C   
	                c[i]=0;
	            } 
	            for (int i=0;i<71;i++){ //��l�� d �}�C   
	                d[i]=0;
	            } 
	        	printf("\\ 1 2 3 4 5 6 7 8 9\n");
	       	    for(int i=0;i<9;i++){ //�L�y����ϥΪ̬D��y��   
		            printf("%d ",9-i);
			        for(int j=0;j<9;j++){
			            printf("%c ",seat[i][j]);
		            }
		            printf("\n");
	            } 
	            
                printf("�п�J�y��]����J�C�A��J��A�Ҧp:8-7,6-9...�^�G");
                for (int i=0;;i++){ 
	
	                a[i]=getche();
	                numa++;
	                if (a[i]==enter){
		                numa--;
	     	            break;		
    	            }
	
	                b[i]=getche();
	                numb++;
	                if (b[i]==enter){
		                numb--;
		                break;		
            	    }
	
	                c[i]=getche();
	                numc++;
	                if (c[i]==enter){
		                numc--;
		                break;
    	            }
	
	                d[i]=getche();
    	            numd++;
	                if (d[i]==enter){
		                numd--;
		                break;
	                }
	            }
                printf("\n");
	            for (int i=0;i<numa;i++){ 
	                if (a[i]<'1'||a[i]>'9'){
	    	            check++;
		            }
	            } 
	            for (int i=0;i<numb;i++){ 
	                if (b[i]!='-'){
	    	            check++;
		            }
          	    } 
	            for (int i=0;i<numc;i++){ 
	                if (c[i]<'1'||c[i]>'9'){
	    	            check++;
		            }
                } 
	            for (int i=0;i<numd-1;i++){ 
     	            if (d[i]!=','){
	    	            check++;
		            }
	            }
	            
	            if (check!=0||numa!=numb||numa!=numc||numa!=numd+1){
		            printf("���~! �榡���~\n");
		            check=-1;
		            system("pause");
		            system("cls");
		            continue;
	            }
	            for (int i=0;i<numa;i++){ 
	                if(seat[9-a[i]+'0'][c[i]-1-'0'] != '-'){
	                	printf("���~! ����\n");
		                check=-1;
		                for(int i=0;i<9;i++){ //�N @ ���^ -    
		                    for(int j=0;j<9;j++){
			                    if(seat[i][j]=='@'){
				                    seat[i][j] = '-';
			                    }
		                    }
	                    }
		                system("pause");
		                system("cls");
		                break;
					}
		            else if(seat[9-a[i]+'0'][c[i]-1-'0'] == '-'){
	                	seat[9-a[i]+'0'][c[i]-1-'0']='@';
					} 
	            } 
	        }
            system("cls");
            printf("\\ 1 2 3 4 5 6 7 8 9\n");
	       	for(int i=0;i<9;i++){ //�L�y���  
		        printf("%d ",9-i);
			    for(int j=0;j<9;j++){
			        printf("%c ",seat[i][j]);
		        }
		        printf("\n");
	        } 
	        
	        
            for(int i=0;i<9;i++){ //�N @ ���� *   
		        for(int j=0;j<9;j++){
			        if(seat[i][j]=='@'){
				        seat[i][j] = '*';
			        }
		        }
	        }
	        
            printf("\n�����N���^�D���...\n");
            getch();
        }
        else if (choice=='d'||choice=='D') { // ���J c �� C �� 
            char yn;
            printf("Continue? (y/n)�G");
            scanf(" %c",&yn);
            
            while(yn!='y'&&yn!='n'){ // ���ƿ�J����O y �� n 
            	printf("���~!\n�п�J y �� n\n\nContinue? (y/n)�G");
            	fflush(stdin);
                scanf(" %c",&yn);
            }
			 
            if (yn=='n'||yn=='N') { // ���J n �� N �� 
                printf("�{������!\n");
                break; // ���X�L�a�j��  
            } 
        }
    } 
    
}

