#include<stdio.h>
#include<string.h>

typedef struct batsmen
{
	char name[10],role[10];
	int matches,cent,hcent,four,six,runs,not_out,dismmisal;
 
}bat;
typedef struct bowler
{
	char name[10],role[10];
	int wickets,fw ,matches;
}bow;
void storebat(bat*, int);
void displaybat(bat*, int);
void highest(bat*, int);
void storebow(bow*, int);
void displaybow(bow*, int);
void most_hc(bat*,int);
void most_cent(bat*,int);
void most_four(bat*,int);
void most_six(bat*, int);
void most_wickets(bow*, int);
void most_fw(bow*,int);


void main()
{
	int n,choice=10;
	printf("\nEnter the number of players ");
	scanf("%d",&n);
	bat c1[n];
	bow b1[n];
	storebat(c1,n);
	displaybat(c1,n);
	storebow(b1, n);
	displaybow(b1, n);
	
	
	while(choice!=8)
	{
	
	printf("\nEnter the Choice : \n1)Highest Run scorer \n2) Most half Centuries \n3)Most  centuries \n4)most 4s \n5)most 6s \n6)Most Wickets \n7)Most Five Wickets haul\n--->");
	scanf("%d",&choice);
	
	switch(choice)
	{
		
		case 1:
			highest(c1,n);
			break;	
		case 2:
			most_hc(c1,n);
			break;
		case 3:
			most_cent(c1,n);
			break;
		case 4:
			most_four(c1,n);
			break;
		case 5:
			most_six(c1,n);
			break;
		case 6:
			most_wickets(b1,n);
			break;
		case 7:
			most_fw(b1,n);
			break;
 		case 8:
 			printf("\n End of the programme ");
 			break;
			
		default:
			printf("\n Enter the correct choice ");
			break;	
	}
}
/*storebat(c1,3);
	displaybat(c1,3);
	storebow(b1, 2);
	displaybow(b1, 2);
	highest(c1,3);
	most_hc(c1,3);
	most_cent(c1,3);
	most_four(c1,3);
	most_six(c1,3);*/
}

void storebat(bat* c1, int s)

{
	
	int i;
	printf("\n\n\t\t\t\t*Enter the info of the batsmen*\n\n\n\n");
	
	for(i=0;i<s;i++)
	{
		printf("\tEnter name of the player = ");
		scanf("%s",&c1[i].name);
		printf("\tEnter the role of the player = ");
		scanf("%s",&c1[i].role);
		printf("\tEnter the number of matches played by the player = ");
		scanf("%d",&c1[i].matches);
		printf("\tEnter the runs of the player = ");
		scanf("%d",&c1[i].runs);
		printf("\tEntert the half centuary of the player = ");
		scanf("%d",&c1[i].hcent);
		printf("\tEnter the centuries of the player = ");
		scanf("%d",&c1[i].cent);
		printf("\tEnter the total fours = ");
		scanf("%d",&c1[i].four);
		printf("\tEnter the total sixes = ");
		scanf("%d",&c1[i].six);
		printf("\tEnter how many times batsmen are Not out = ");
		scanf("%d",&c1[i].not_out);
	
		printf("\n\n-------------------------------------------------------------------------------------\n\n");
			
	}
		
		printf("\n\n\n\n---------------------------------------------------------------------------------\n\n");
	
	} 
	
	void storebow(bow* b1, int s)
	{
			int i;
			printf("\n\n\t\t\t\tEnter the info of the bwolers only\n\n");
			for(i=0;i<s;i++)
	{
		printf("Enter name of the player = ");
		scanf("%s",&b1[i].name);
		printf("Enter the role of the player = ");
		scanf("%s",&b1[i].role);
		printf("Enter the number of matches played by the player = ");
		scanf("%d",&b1[i].matches);
		printf("Enter the Wickets of the player = ");
		scanf("%d",&b1[i].wickets);
		printf("Enter the 5 wickets haul of the bowler = ");
		scanf("%d",&b1[i].fw);
		printf("\n\n--------------------------------------------------------------------------------------\n\n");
		
	}	
		printf("\n\n\n\n---------------------------------------------------------------------------------\n\n");
	}

void displaybat(bat* c1, int s)
{
	int i;
	printf("\nBatsmen Info : ");
	for(i=0;i<s;i++)
	{
		printf("\nName                    =%s " ,c1[i].name);
		printf("\nRole                    =%s " ,c1[i].role);
		printf("\nTotal matches           =%d " ,c1[i].matches);
		printf("\nTotal runs              =%d" ,c1[i].runs);
		printf("\nTotal half centuries    =%d " ,c1[i].hcent);
		printf("\nTotal centuries         =%d " ,c1[i].cent);
		printf("\nTotal fours             =%d " ,c1[i].four);
		printf("\nTotal sixes			  =%d " ,c1[i].six);
		printf("\nBatsmen are not out     =%d " ,c1[i].not_out);
		
	
		printf("\n\n\n--------------------------------------------------------------------------------------\n\n");
	}
}
void displaybow( bow* b1, int s)
{
	
	int i;
	printf("\nBowlers Info : ");
	for(i=0;i<s;i++)
	{
		printf("\nName                    =%s " ,b1[i].name);
		printf("\nRole                    =%s " ,b1[i].role);
		printf("\nTotal matches           =%d " ,b1[i].matches);
		printf("\nTotal wickets           =%d" ,b1[i].wickets);
		printf("\nTotal five wickets haul =%d " ,b1[i].fw);
		printf("\n\n\n--------------------------------------------------------------------------------------\n\n");
	}
	
}
void highest(bat* c1, int s)
{
	int i;
	int max,j=0;
	max=c1[0].runs;
	for(i=0;i<s;i++)
	{
		if(max<c1[i].runs)
		{
		max=c1[i].runs;
		j=i;
}
	}
	
	printf("\n\n----------------------Highest run scorer------------------------------------\n\n\n\n ");
	printf("\n Most runs 				: %d",c1[j].runs);
	printf("\n Name            			: %s",c1[j].name);
	printf("\n\n=======================================================================================");
	
	
}
void most_hc(bat* c1, int s)
{	int i;
	int max,k=0;
	max=c1[0].hcent;
	for(i=0;i<s;i++)
	{
		if(max<c1[i].hcent)
		{
		max=c1[i].hcent;
		k=i;
}
}
	printf("\n\n----------------------Most half centuries------------------------------------\n\n\n\n ");
	printf("\n Most half centuries  =%d",c1[k].hcent);
	printf("\n Name					=%s",c1[k].name);
		printf("\n\n=======================================================================================");
	
}
void most_cent(bat* c1, int s)
{	int i;
	int max,k=0;
	max=c1[0].cent;
	for(i=0;i<s;i++)
	{
		if(max<c1[i].cent)
		{
		max=c1[i].cent;
		k=i;
}
}
	printf("\n\n----------------------Most  centuries------------------------------------\n\n\n\n ");
	printf("\n Most  centuries  =%d",c1[k].cent);
	printf("\n Name            	=%s",c1[k].name);
		printf("\n\n=======================================================================================");
}
void most_four(bat* c1, int s)
{	int i;
	int max,k=0;
	max=c1[0].four;
	for(i=0;i<s;i++)
	{
		if(max<c1[i].four)
		{
		max=c1[i].four;
		k=i;
}
}
	printf("\n\n----------------------Most  4S------------------------------------\n\n\n\n ");
	printf("\n Most 4S  =%d",c1[k].four);
	printf("\n Name     =%s",c1[k].name);
		printf("\n\n=======================================================================================");
}
void most_six(bat* c1, int s)
{	int i;
	int max,k=0;
	max=c1[0].six;
	for(i=0;i<s;i++)
	{
		if(max<c1[i].six)
		{
		max=c1[i].six;
		k=i;
}
}
	printf("\n\n----------------------Most  6S------------------------------------\n\n\n\n ");
	printf("\n Most 6S =%d",c1[k].six);
	printf("\n Name    =%s",c1[k].name);
		printf("\n\n=======================================================================================");
}
void most_wickets(bow* b1, int s)
{	int i;
	int max,k=0;
	max=b1[0].wickets;
	for(i=0;i<s;i++)
	{
		if(max<b1[i].wickets)
		{
		max=b1[i].wickets;
		k=i;
}
}
	printf("\n\n----------------------Most  Wickets------------------------------------\n\n\n\n ");
	printf("\n Most Wickets     =%d",b1[k].wickets);
	printf("\n Name         	=%s",b1[k].name);
	printf("\n\n=======================================================================================");
}

void most_fw(bow* b1, int s)
{	int i;
	int max,k=0;
	max=b1[0].fw;
	for(i=0;i<s;i++)
	{
		if(max<b1[i].fw)
		{
		max=b1[i].fw;
		k=i;
}
}
	printf("\n\n----------------------Most  Five Haul------------------------------------\n\n\n\n ");
	printf("\n Most Five Haul   =%d",b1[k].fw);
	printf("\n Name         	=%s",b1[k].name);
	printf("\n\n=======================================================================================");
}


