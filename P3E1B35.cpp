#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#define enter 13 
int main(){
    srand( time(NULL) );     // Generate a different random number sequence each time the program runs.  
    
    int input=0;             // The password entered by the user. 
    int attempts=0;          // Input attempt counter. 
    int success=0;           // Whether the login was successful. 
    
    //(1) A personalized interface.  
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
printf("$$                  Sacabambaspis                   $$\n"); 
printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("$$                                                  $$\n");
printf("$$                                                  $$\n");
printf("$$                   programming                    $$\n");
printf("$$            E1B35郭宥宏's howework 3              $$\n");
printf("$$                   2025/05/13                     $$\n");
printf("$$                                                  $$\n");
printf("$$                     {\\__/}                       $$\n");
printf("$$                     ( ‧-‧)                       $$\n");
printf("$$                   c /> 35<\\                      $$\n");
printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");

const char *str[]={"st","nd","rd"};

    // Password verification with a maximum of three attempts.
    while (attempts<3) {
        printf("  %d%s input (default password is 2025)：",attempts+1,str[attempts]);
        scanf("%d",&input);

        if (input==2025) { // If the input is 2025.
            printf("  Correct password, login successful!\n\n"); // Print "Password is correct." 
            success=1; // Allow subsequent operations to determine whether the input was correct based on the variable "success".
            break; // Exit the loop. 
        } 
		else {
            printf("  Incorrect password.\n\n");
        }
        attempts++; // Increase the error count. 
    }

    if (success==0) { // Check whether the input is correct.
        printf("  Three consecutive incorrect attempts. Program terminated.\n");
        return 0;
    }
    printf("\n  Press any key to enter the main menu . . . "); // Let the user confirm the correct input before proceeding to the main menu. 
    getch();


    char seat[9][9];

		for(int i=0;i<9;i++){ // Set the seats to '-' 
		    for(int j=0;j<9;j++){
			    seat[i][j]='-';
		    }
	    }
	    
	    int count = 0;
        while(count < 10){ // Generate 10 pre-selected seats.
        int x = rand() % 9;
        int y = rand() % 9;
        if(seat[x][y] != '*'){
            seat[x][y] = '*';
            count++;
        }
    } 
	
	//(2) Main menu.
    while(1){ // Infinite loop so program can return to the main menu after executing.  
        system("cls"); // Clear screen.  
    
        printf("$$$$$$$[Booking System]$$$$$$$$\n");
        printf("$$                           $$\n");
        printf("$$ a. Available seats        $$\n");
        printf("$$ b. Arrange for you        $$\n");
        printf("$$ c. Choose by yourself     $$\n");
        printf("$$ d. Exit                   $$\n");
        printf("$$                           $$\n");
        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
        char choice;
        printf("Enter your choice:"); 
	    scanf(" %c",&choice); // Enter your choice.  
	    system("cls");
	
	    //(3) Print seat map.  
	    if (choice=='a'||choice=='A') { // If user enters 'a' or 'A'  
            printf("\\ 1 2 3 4 5 6 7 8 9\n"); // Print seat map.  
		    for(int i=0;i<9;i++){
		        printf("%d ",9-i);
			    for(int j=0;j<9;j++){
			        printf("%c ",seat[i][j]);
		        }
		        printf("\n");
	        }
            printf("\nPress any key to return to the main menu . . . ");
            getch();
        } 
        //(4) Auto seat selection.  
        else if (choice=='b'||choice=='B') { // If user enters 'b' or 'B'
            int n=0;
            printf("Enter number of seats needed（1~4）：");
            scanf("%d", &n); // Enter number of seats needed.
            
            while(n<1||n>4){ // Repeat until the number is 1~4.
            	printf("Error!\n\nPlease enter an integer is 1~4:");
                scanf(" %d",&n);
            }
            printf("\n");

            if (n==1) { // Enter 1 person.  
            	count=0;
                while(count!=1){ /* Check if random position is available; repeat until successful selection. */ 
                    int x = rand() % 9;
                    int y = rand() % 9;
                    if(seat[x][y] != '*'){
                        seat[x][y] = '@';
                        count++;
                    }
                } 
            }
            if (n==2) { // Enter 2 person.
                count=0;
                while(count!=1){ /*  Check if a random seat and one adjacent seat in the same row are available; repeat until successful. */ 
                    int x = rand() % 9;
                    int y = rand() % 8;
                    if(seat[x][y] != '*'&&seat[x][y+1] != '*'){
                        seat[x][y] = '@';
                        seat[x][y+1] = '@';
                        count++;
                    }
                } 
            }
            if (n==3) { // Enter 3 person.
                count=0;
                while(count!=1){ /* Check if a random seat and two adjacent seats in the same row are available; repeat until successful. */ 
                    int x = rand() % 9;
                    int y = rand() % 7;
                    if(seat[x][y] != '*'&&seat[x][y+1] != '*'&&seat[x][y+2] != '*'){
                        seat[x][y] = '@';
                        seat[x][y+1] = '@';
                        seat[x][y+2] = '@';
                        count++;
                    }
                } 
            }
            if (n==4) { // Enter 4 person.
                count=0;
                while(count!=1){
                	int set = rand() % 2; // Randomly choose from two seating layout options.
                	
                	if(set==0){ /* Check if a random seat and three adjacent seats in the same row are available; repeat until successful. */ 
                		int x = rand() % 9;
                        int y = rand() % 6;
                        if(seat[x][y] != '*'&&seat[x][y+1] != '*'&&seat[x][y+2] != '*'&&seat[x][y+3] != '*'){
                            seat[x][y] = '@';
                            seat[x][y+1] = '@';
                            seat[x][y+2] = '@';
                            seat[x][y+3] = '@';
                            count++;
                        }
					}
					
					if(set==1){ /* Check if a random seat, one adjacent seat in the same row, and two seats in the next row are available; repeat until successful. */ 
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
            printf("\\ 1 2 3 4 5 6 7 8 9\n"); // Print the seat map after new seats are added. 
	       	for(int i=0;i<9;i++){
		        printf("%d ",9-i);
			    for(int j=0;j<9;j++){
			        printf("%c ",seat[i][j]);
		        }
		    printf("\n");
	        } 
	        
	        char yn;
	        printf("Are you satisfied? (y/n):");
	        scanf(" %c",&yn);
            
            while(yn!='y'&&yn!='n'){ // Repeat input until it is y or n.
            	printf("Error!\nPlease enter y or n\n\nAre you satisfied? (y/n):");
            	fflush(stdin);
                scanf(" %c",&yn);
            }
			 
            if (yn=='y'||yn=='Y') { // If user enters 'y' or 'Y'
                for(int i=0;i<9;i++){ // Convert '@' to '*'.   
		            for(int j=0;j<9;j++){
			            if(seat[i][j]=='@'){
				            seat[i][j] = '*';
			            }
		            }
	            }
	        }
	        if (yn=='n'||yn=='N') { // If user enters 'n' or 'N'
                for(int i=0;i<9;i++){ // Revert '@' to '-'.    
		            for(int j=0;j<9;j++){
			            if(seat[i][j]=='@'){
				            seat[i][j] = '-';
			            }
		            }
	            }
	        }
            printf("\nPress any key to return to the main menu . . . ");
            getch();
        }
        //(5) Manual seat selection.  
        else if (choice=='c'||choice=='C') { // If user enters 'c' or 'C'
            char a[71],b[71],c[71],d[71];
	        int check=-1;
	        
			while (check==-1){
	        	int numa=0,numb=0,numc=0,numd=0;
				check=0;
	        	
	        	for (int i=0;i<71;i++){ // Initialize array a. 
	                a[i]=0;
	            } 
	        	for (int i=0;i<71;i++){ // Initialize array b. 
	                b[i]=0;
	            } 
	            for (int i=0;i<71;i++){ // Initialize array c.  
	                c[i]=0;
	            } 
	            for (int i=0;i<71;i++){ // Initialize array d.
	                d[i]=0;
	            } 
	        	printf("\\ 1 2 3 4 5 6 7 8 9\n"); // Print seat map for user to choose seats. 
	       	    for(int i=0;i<9;i++){  
		            printf("%d ",9-i);
			        for(int j=0;j<9;j++){
			            printf("%c ",seat[i][j]);
		            }
		            printf("\n");
	            } 
	            
                printf("Please enter seats (row first, then column, ex: 8-7,6-9...):");
                for (int i=0;;i++){ // Input seat positions.
	                
					a[i]=getche();
	                numa++; // Record how many times a was entered. 
	                if (a[i]==enter){ // End input when 'enter' is pressed for a. 
		                numa--;
	     	            break;		
    	            }
	
	                b[i]=getche();
	                numb++; // Record how many times b was entered.
	                if (b[i]==enter){ // End input when 'enter' is pressed for b.
		                numb--;
		                break;		
            	    }
	
	                c[i]=getche();
	                numc++; // Record how many times c was entered.
	                if (c[i]==enter){ // End input when 'enter' is pressed for c.
		                numc--;
		                break;
    	            }
	
	                d[i]=getche();
    	            numd++; // Record how many times d was entered.
	                if (d[i]==enter){ // End input when 'enter' is pressed for d.
		                numd--;
		                break;
	                }
	            }
                printf("\n");
	            for (int i=0;i<numa;i++){ // Check if all elements in array a are between 1 and 9.  
	                if (a[i]<'1'||a[i]>'9'){
	    	            check++;
		            }
	            } 
	            for (int i=0;i<numb;i++){ // Check if all elements in array b are '-'.
	                if (b[i]!='-'){ 
	    	            check++;
		            }
          	    } 
	            for (int i=0;i<numc;i++){ // Check if all elements in array c are between 1 and 9.
	                if (c[i]<'1'||c[i]>'9'){
	    	            check++;
		            }
                } 
	            for (int i=0;i<numd-1;i++){ // Check if all elements in array d are ','.
     	            if (d[i]!=','){
	    	            check++;
		            }
	            }
	            
	            if (check!=0||numa!=numb||numa!=numc||numa!=numd+1){ // If input format is invalid or the counts of a, b, c, d do not match (d needs +1 due to previously excluding final enter for printing).
		            printf("Error! Invalid format!\n");
		            check=-1;
		            printf("\nPress any key to re-enter . . . ");
                    getch();
		            system("cls");
		            continue; // Jump back to the while loop.
	            }
	            for (int i=0;i<numa;i++){ 
	                if(seat[9-a[i]+'0'][c[i]-1-'0'] != '-'){ // If the seat is not available.  
	                	printf("Error! Seat already taken!\n");
		                check=-1;
		                for(int i=0;i<9;i++){ // Revert '@' to '-'.  
		                    for(int j=0;j<9;j++){
			                    if(seat[i][j]=='@'){
				                    seat[i][j] = '-';
			                    }
		                    }
	                    }
		                printf("\nPress any key to re-enter . . . ");
                        getch();
		                system("cls");
		                break; // Break out of the for loop.
					}
		            else if(seat[9-a[i]+'0'][c[i]-1-'0'] == '-'){
	                	seat[9-a[i]+'0'][c[i]-1-'0']='@';
					} 
	            } 
	        }
            system("cls");
            printf("\\ 1 2 3 4 5 6 7 8 9\n"); // Print the seat map after new seats are added. 
	       	for(int i=0;i<9;i++){
		        printf("%d ",9-i);
			    for(int j=0;j<9;j++){
			        printf("%c ",seat[i][j]);
		        }
		        printf("\n");
	        } 
	        
	        
            for(int i=0;i<9;i++){ // Convert '@' to '*'.  
		        for(int j=0;j<9;j++){
			        if(seat[i][j]=='@'){
				        seat[i][j] = '*';
			        }
		        }
	        }
	        
            printf("\nPress any key to return to the main menu . . . ");
            getch();
        }
        //(6) Exit confirmation.
        else if (choice=='d'||choice=='D') { // If user enters 'd' or 'D'
            char yn;
            printf("Continue? (y/n)：");
            scanf(" %c",&yn);
            
            while(yn!='y'&&yn!='n'){ // Repeat input until it is y or n.
            	printf("Error!\nPlease enter y or n\n\nContinue? (y/n)：");
            	fflush(stdin);
                scanf(" %c",&yn);
            }
			 
            if (yn=='n'||yn=='N') { // If user enters 'n' or 'N'
                printf("Program terminated!\n");
                break;  // Exit infinite loop.  
            } 
        }
    } 
}
/*心得:我覺得這次的東西有點超出範圍，像是需要生成亂數的 rand 還有 c部分的一次輸入全部座位的程式碼，雖然後者我以一種很 
       簡單粗暴的方法做出來了，但我對於 rand 實在是沒什麼印象。另外，這次嘗試更多次的 commit，想說做一點就傳一點，結果
	   發現在其中又發現了不少錯誤，不知不覺就 14次了。這次最難的還得是 c部分的一次輸入全部座位的程式碼，就是因為要這個
	   效果，導致試圖重現的時間太久，要不是上上個禮拜就開始做，我還不確定我能不能靠自己做完全部。另外翻成英文也是挺煩人
	   的，原本以為跟上次一樣做中文的就好，結果要全英文，只好一句一句丟給 google翻譯，儘管我知道英文是國際語言，但我覺
	   得還是有點麻煩。 */ 
