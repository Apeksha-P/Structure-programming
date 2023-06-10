#include<stdio.h>
//This is a created function
void printArray(colums_A,rows_A);


int main(){
	
	int rows_A,colums_A,i,j;
	
	printf("Enter you want to 'A' table rows count : ");
	scanf("%d",&rows_A);
	
	printf("\nEnter you want to 'A' table Colums count : ");
	scanf("%d",&colums_A);
	
	if(rows_A<0||colums_A<0){
		printf("\n\nYou Entered negative value. Please enter correct value.\n");
	}
	
	

	//printf("\n%d",rows_A);
	//printf("\n%d",colums_A);
	
	int A[rows_A][colums_A];
	int X[colums_A];
	int Y[rows_A];
	
	for(i=0; i < rows_A; i++){
			for(j=0; j < colums_A; j++){
				printf("\nEnter 'A' table value [%d] [%d] : ",i+1,j+1);
				scanf("%d",&A[i][j]);
			}	
		}
	
	printf("\n");
	printArray(rows_A,colums_A,A,NULL);
	
	printf("\n\t///////////////////////////////////////////");
	printf("\n\t/                                         /");
	printf("\n\t/");
	printf(" A table columns equals to X table rows. /");
	printf("\n\t/                                         /");
	printf("\n\t///////////////////////////////////////////");
	
	for(i=0 ; i<colums_A ; i++){
		printf("\n\nEnter you want to 'X' table value [%d] : ",i+1);
		scanf("%d",&X[i]);
	}
	printf("\n");
	printArray(colums_A,-1,NULL,X);
	
	///////////////////////////////////////////////////////////////////////////////////////////////////////
	
	for(i=0 ;i<rows_A;i++){
		int sum=0;
		for(j=0;j<colums_A;j++){
			sum+=A[i][j]*X[j];
		}
		Y[i]=sum;
	}
	printf("\n");
	printf("________EXPECTED NEW LIST________\n\n");
	for(i=0;i<rows_A;i++){
		printf("\t%d \n",Y[i]);
	}
	printf("\n ___________Success___________\n");
	return 0;
}


void printArray(int val1,int val2,int arry[val1][val2],int xArray[val1]){
	int i,j;
	if(val2==-1){	
		for(i=0 ; i<val1 ; i++){
			printf("\t%d\n ",xArray[i]);
		}
		printf("\n");	
	}else {	
		for(i=0 ; i<val1 ; i++){
	
			for(j=0 ; j<val2 ; j++){
				printf("\t%d ",arry[i][j]);
			}
			printf("\n");
		}	
	}
		
}
