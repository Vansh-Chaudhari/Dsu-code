#include<stdio.h>
#define MAX 10
int main()
{
	int a[MAX],i,no,ch,ele,pos;
	
	printf("\n\nEnter a size of array: ");
	scanf("%d",&no);
	
	printf("\n\nEnter a %d element : ",no);
	for(i=0;i<no;i++)
		scanf("%d",&a[i]);

	
	printf("\n\nMENU");
	printf("\n1. Insert");
	printf("\n2. Delete");
	
	printf("\n\nEnter a choise: ");
	scanf("%d",&ch);
	
	printf("\nBefor perform a operation: ");
	for(i=0;i<no;i++)
		printf("%d,",a[i]);
		
	
	
				
	switch(ch)
	{
		case 1:
			printf("\n\nEnter new  element & position: ");
			scanf("%d%d",&ele,&pos);
		
			for(i=no;i>=pos-1;i--)
				a[i+1]=a[i];
			
			a[i]=ele;
			no++;
			
			printf("\n\nElement is inserted: ");
			break;
			
		case 2:
			printf("\n\nEnter delete  element : ");
			scanf("%d%d",&ele);
		
			for(i=0;i<no;i++)
			{
				if(a[i]==ele)
					pos=i;
			}
			
			
			for(i=pos;i<no;i++)
				a[i]=a[i+1];
					
			no--;
			
			printf("\n\nElement is deleted: ");
			break;
								
	}
	
	printf("\n\nArray: ");
		for(i=0;i<no;i++)
			printf("%d,",a[i]);

return 0;
}
