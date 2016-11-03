/* 
Dylan Kieran
C15321906
DT228/1
Compiler: Dev-C++ 5.11
Programming CA 
Program that creates a simple maths quiz which includes a main menu.
*/

#include <stdio.h>


main()
{
	//
	//variables
	int options = 0;
	int num_questions = 0;
	int ans_correct = 0;
	int ans_incorrect = 0;
	
	//do while loop to display menu after each option and allow continues rounds
	do
	{		
		//Menu
		printf("\nMain Menu \n");
		printf("Press 1 to enter number of questions for this round (maximum of 5)\n");
		printf("Press 2 to start quiz \n");
		printf("Press 3 to display last round stats \n");
		printf("Press 4 to exit maths quiz \n\n");
		scanf("%d",&options);
		
		//getchar() is here to stop the infinite loop of the default statement in the switch if a character variable is entered
		getchar();
		//switch statement for the options in the Menu
		switch (options)
			{
				//complete_1 makes it that you cant press option 2 before you press option 1 
				//Complete_2 makes it that you can't select option 3 before you complete option 2
				int complete_2 = 0;
				int complete_1 = 0;
				
				case 1:
					{
						//This option allows user to enter number of questions per round
						//do while loop to make sure number is between 1-5
						do
						{
							printf("\nQuestions ");
							scanf("%d",&num_questions);
							if(num_questions>0 && num_questions<6)
							{
								printf("\nYou will answer %d questions this round\n",num_questions);
								complete_1 = 2;
							}
							else
							{
								printf("Invalid number of rounds please try again\n");
							}
						}
						while(num_questions<0 && num_questions>6);
					}//end case
					
				case 2:
					{
						//this if only allows user to enter option 2 if they have completed option 1
						if (complete_1 == 2)
						{
							complete_2 = 2;
							
							//the following inner if statements are the questions that are going to be asked in the quiz
							//They allow for the user to enter in different number of questions
							if(num_questions>0)
								{
									//I have created multiple variables throughout the following if statements for the users answer and the correct answer
									ans_correct = 0;
									ans_incorrect = 0;
									int answer1 = 0;
									printf("\n5*5 = ");
									int correct1 =25;
									scanf("%d",&answer1);
									getchar();
									
									//the following if throughout the code checks for correct and incorrect answers and adds a tally for the round		
									if( correct1 == answer1)
									{
										printf("Correct\n");
										ans_correct = ans_correct + 1;
									}//end if
									else
									{
										printf("Incorrect the correct answer is %d\n",correct1);
										ans_incorrect = ans_incorrect + 1;
									}//end else
											
								}//end if
										
								if(num_questions>1)
								{
									int answer2 = 0;
									printf("\n10*5 = ");
									int correct2 =50;
									scanf("%d",&answer2);
									getchar();
											
									if( correct2 == answer2)
									{
										printf("Correct\n");
										ans_correct = ans_correct + 1;
									}//end if
									else
									{
										printf("Incorrect the correct answer is %d\n",correct2);
										ans_incorrect = ans_incorrect + 1;
									}//end else
								}
										
								if(num_questions>2)
								{
									int answer3 = 0;
									printf("\n10*2 = ");
									int correct3 =20;
									scanf("%d",&answer3);
									getchar();
											
									if( correct3 == answer3)
									{
										printf("Correct\n");
										ans_correct = ans_correct + 1;
									}//end if
									else
									{
										printf("Incorrect the correct answer is %d\n",correct3);
										ans_incorrect = ans_incorrect + 1;
									}//end else
								}
										
								if(num_questions>3)
								{
									int answer4 = 0;
									printf("\n4*4 = ");
									int correct4 =16;
									scanf("%d",&answer4);
									getchar();
											
									if( correct4 == answer4)
									{
										printf("Correct\n");
										ans_correct = ans_correct + 1;
									}//end if
									else
									{
										printf("Incorrect the correct answer is %d\n",correct4);
										ans_incorrect = ans_incorrect + 1;
									}//end else
								}
										
								if(num_questions>4)
								{
									int answer5 = 0;
									printf("\n6*6 = ");
									int correct5 =36;
									scanf("%d",&answer5);
									getchar();
											
									if( correct5 == answer5)
									{
										printf("Correct\n");
										ans_correct = ans_correct + 1;
									}//end if
									else
									{
										printf("Incorrect the correct answer is %d\n",correct5);
										ans_incorrect = ans_incorrect + 1;
									}//end else
									
								}//end inner if
								
							}//end outer if
							
						break;
					}//end case
					
				case 3:
					{
						//case 3 allows user to check their stats from the last round
						//the following if statement make sure user has completed option 2
						if(complete_2 == 2)
						{
							//prints number of correct and incorrect answers uses the tally we used in case 2
							printf("\nYou answered %d questions correctly \n",ans_correct);
							printf("You answered %d questions incorrectly \n",ans_incorrect);
						}
						else
						{
							//if user has not completed option 2 or a "round" then they recieve this error message
							printf("You have not completed a round yet");
						}
						
						break;	
					}//end case
					
				case 4:
					{
						//This case is not neccessary as if 4 is entered it exits the game 
						//But this displays a thank you for playing message when the user does exit
						printf("Thank you for playing");
						break;	
					}//end case	
				
				default:
				{
					//This default line makes sure the user enters a valid input between 1 and 5
					//The getchar() at the beginning makes sure this does not infinite loop
					printf("\nYou have entered an invalid character please try again \n ");
					break;
				}//end default
			
			}//end switch

	}	
	//the condition for this loop makes it so when the user wants to exit they press 4 and it does otherwise it remains in the loop	
	while(options != 4);
	
}//end main
