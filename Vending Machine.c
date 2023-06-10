#include<stdio.h>
void main(){
	int j; //stamp price
	int k; //Coin value
	int s25 = 2 , s15 = 3 , s10 = 8;
	int c50 = 4 , c25 = 4 , c10 = 4 , c5 = 6;
	int balance;
	int i; //contunue
	do{
		printf("\n...................................................................................................\n");
		printf("\t\t________  Hello  ________\n \t\t   ..__Buy Stamps__.. \n\n ");
		printf("\nAvailable Stamps -\n \t 25 stamps \n \t 15 stamps \n \t 10 stamps \n ");
		printf("\n...................................................................................................\n");
	    printf("\nHow much value stamp do you want? \n");
		scanf("%d",&j);
		if (j==25||j==15||j==10){
			printf("\nAvailable Coins -\n \t 50 coins \n \t 25 coins \n \t 10 coins \n \t 5 coins \n ");
		    printf("\n...................................................................................................\n");
			printf("\nEnter coin value...\n");
			scanf("%d",&k);
			if (k==50||k==25||k==10||k==5){
		    	switch (j){
				    case 25:
					    if (s25>0){
					    	if (k>=25 ){
					    		switch(k){
					    		    case 50:
					    		    	balance = 25;
					    		    	if (c25>0) {
					    		    		printf("\nStamp dispensed.\n \n Balance = %d \n \tGive 25 coin.\n Thank You ! ",balance);
					    		    		c25 = c25 - 1 ;
											c50 = c50 + 1 ;
											s25 = s25 - 1 ;  
										}
										else {
											printf("\nSorry not change available.\n Here your %d Coin.\n You can try Again !\n",k);
										}
					    		    	break;
					    			case 25:
					    			    printf("\nStamp dispensed.\n Thank You ! \n");
					    			    c25 = c25 + 1;
					    			    s25 = s25 - 1 ;
					    			    break;
								}
						    }
						    else{
						    	printf("\nNot accept coin.\nHere your %d coin.\nYou can try again.\n",k);
							}
						}
						else {
							printf("\nTry again ! \n Not available stamps.\n");
						}
						break;
				    case 15:
					    if (s15>0){
					    	if (k>=15 ){
					    		    switch(k){
					    		    	case 50:
					    		    		balance = 35;
					    		    		if (c25>0 && c10>0) {
					    		    			printf("\nStamp dispensed.\n \n Balance = %d \n \tGive 25 , 10 coins.\n Thank You ! ",balance);
					    		    			c25 = c25 - 1 ;
					    		    			c10 = c10 - 1 ;
					    		    			s15 = s15 - 1 ;
					    		    			c50 = c50 + 1 ;
											}
											else {
												printf("\nSorry not change available.\nHere your %d coin.\nYou can try again.\n",k);
											}
					    		    		break;
					    			    case 25:
					    			    	balance = 10;
					    			    		if (c10>0) {
					    		    			printf("\nStamp dispensed.\n \n Balance = %d \n \tGive 10 coin.\n Thank You ! ",balance);
					    		    			c10 = c10 - 1 ;
					    		    			s15 = s15 - 1 ;
					    		    			c25 = c25 + 1 ;
											}
											else {
												printf("\nSorry not change available.\nHere your %d coin.\nYou can try again.\n",k);
												}	
					    			    	break;
								        }
						    	}
						    else{
						    	printf("\nNot accept coin.\nHere your %d coin.\nYou can try again.\n",k);
							}
						}
						else {
							printf("\nTry again ! \nNot available stamps.\n ");
						}
					    break;
				    case 10:
					    if (s10>0){
					    	if (k>=10 ){
					    		    switch(k){
					    		    	case 50:
					    		    		balance = 40;
					    		    		if (c25>0 && c10>0 && c5>0) {
					    		    			printf("\nStamp dispensed.\n \n Balance = %d \n \tGive 25 , 10 , 5  coins.\n Thank You ! ",balance);
					    		    			c25 = c25 - 1 ;
					    		    			c10 = c10 - 1 ;
					    		    			c5 = c5 - 1 ;
					    		    			c50 = c50 + 1 ;
					    		    			s10 = s10 - 1 ;
											}
											else {
												printf("Sorry not change available.\nHere your %d coin.\nYou can try again.\n",k);
											}
					    		    		break;
					    			    case 25:
					    			    	balance = 15;
					    			    		if (c10>0 && c5>0) {
					    		    			printf("\nStamp dispensed.\n \n Balance = %d \n \tGive 10 , 5  coins.\n Thank You ! ",balance);
					    		    			c10 = c10 - 1 ;
					    		    			c5 = c5 - 1 ;
					    		    			s10 = s10 - 1 ;
											}
											else {
												printf("Sorry not change available.\nHere your %d coin.\nYou can try again.\n",k);
											}
					    			    	break;
					    			    case 10:
					    			    	printf("\nStamp dispensed.\n Thank You ! \n");
					    			    	c10 = c10 + 1 ;
					    			    	s10 = s10 - 1 ;
					    			    	break;	
								        }
						    	}
						    else{
						    	printf("Not accept coin.\nHere your %d coin.\nYou can try again.\n",k);
							}
						}
						else {
							printf("\nTry again !.\n Not available stamps.\n");
						}
						
					    break;
			   }
			   printf("\n...................................................................................................\n");
			   printf("\n\t____Available Stamps____");
			   printf("\nAvailable 25 stamps %d",s25);
	           printf("\nAvailable 15 stamps %d",s15);
	           printf("\nAvailable 10 stamps %d",s10);
	           printf("\n\t____Available Coins____");
	           printf("\nAvailable 50 coins %d",c50);
               printf("\nAvailable 25 coins %d",c25);
               printf("\nAvailable 10 coins %d",c10);
               printf("\nAvailable 5 coins %d\n",c5);
	   	    }
	   	    else {
	   	    	printf("\n...................................................................................................\n");
	   	    	if (s25<0||s15<0||s10){
	   	    		printf("\nNot available stamps and ");
				   }
			    printf("You Enter Wrong Coin.\nYou can try again.\n");
	        }
	    }
		    
		else {
			printf("Sorry no stamp available");
		}
	    
        printf("\n...................................................................................................\n\n");
        printf("\nAre you continue again ?\n If yes enter - 1 \n No enter - 0\n");
        scanf("%d",&i);
        printf("\n...................................................................................................\n");
    } 
	while (i==1);
	printf("\n\tThank You !\n\t Come Again !\n\n\n");
	printf("          O   O\n");
	printf("            |  \n");
	printf("          \\___/\n \n \n  ");
	printf("\n...................................................................................................\n\n");
}
