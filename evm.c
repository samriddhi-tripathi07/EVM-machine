#include<stdio.h>
int bjp=0, congress=0, aap=0, bsp=0;
void electionResult()
{
	int wonByVote;
	if(bjp > congress && bjp > aap && bjp > bsp)
	{
		printf("\n ** BJP won the election**\n\n\n");
		printf("Total vote of BJP : %d\n",bjp);
		wonByVote=bjp-congress;
		printf("BJP won by %d votes to congress\n",wonByVote);
		wonByVote=bjp-aap;
		printf("BJP bywon  %d votes to AAP\n",wonByVote);
		wonByVote=bjp-bsp;
		printf("BJP won by %d votes to BSP\n",wonByVote);
	}
	else if(congress > aap && congress >bsp)
	{
		printf("\n*CONGRESS won by the eletion*\n\n\n");
		printf("Total vote of AAP : %d\n", congress);
		wonByVote==congress-bjp;
		printf("congress won by %d vote to BJP\n", wonByVote);
		wonByVote=aap-bjp;
		printf("congress won by %d votes to AAP\n",wonByVote);
		wonByVote=aap-bsp;
		printf("congress won by %d votes to BSP\n",wonByVote);
	}
	else if(aap>bsp)
	{
	
		printf("\n*AAP won the election*\n\n");
		printf("Total vote of AAP : %d\n",aap);
		wonByVote=aap-congress;
		printf("AAP won by %d votes to congress\n",wonByVote);
		wonByVote=aap-bjp;
		printf("AAP won by %d votes to BJP\n",wonByVote);
		wonByVote=aap-bsp;
		printf("AAP won by %d votes to BSP\n",wonByVote);
    }
    
	else if(bjp==congress && bjp==aap && bjp==bsp)
	{
		printf("\nNo one won the election\n\n");
		printf("            BJP-------CONGRESS-------AAP---------BSP\n");
		printf("Total Vote    %d     %d      %d         %d\n",bjp,congress,aap,bsp);
	}
	else
	{
		printf("\n*BSP won the election*\n\n");
		printf("Total vote of BSP : %d\n",bsp);
		wonByVote=bsp-congress;
		printf("BSP won by %d votes to congress\n",wonByVote);
		wonByVote=bsp-aap;
		printf("BSP won by %d vote to AAP\n",wonByVote);
		wonByVote=bsp-bjp;
		printf("BSP won by %d vote to BJP\n",wonByVote);
	}
}
void calculatorvote(int vote)
{
	switch(vote)
	{
	case 1:
		bjp+=1;
		break;
	case 2:
		congress+=1;
		break;
	case 3:
		aap+=1;
		break;
	case 4:
		bsp+=1;
		break;
		
	}
}
void main()
{
	int choose;
	
	
	
	
	    printf("\n**WELCOME TO THE VOTING SYSTEM PROJECT*\n\n\n");
    	printf("                               UP ELECTION                                \n\n\n");
     	printf("*\n\n");
    	printf("** |         1.BJP            ** |             2.CONGRESS          **|\n\n");
    	printf("*\n\n");
     	printf("** |         3.AAP            ** |             4.BSP               **|\n\n");
    	printf("*\n\n\n");
	do
	{
		printf("press 1 to vote BJP\n\n");
		printf("press 2 to vote CONGRESS\n\n");
		printf("press 3 to vote AAP\n\n");
		printf("press 4 to vote BSP\n\n");
		printf("press 5 to show the election result\n\n");
		printf("press 6 to show total votes in election\n");
		printf("please choose : ");
		scanf("%d", &choose);
		if (choose==5)
		{
			electionResult();
		}
	else
	{
	    calculatorvote(choose);
	} 
	    printf("\n\n");
	    
	}
	 while (choose != 5);
	
}