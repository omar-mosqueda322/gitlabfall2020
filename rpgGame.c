//Contributors
//G. Poppe
//
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>


void main(void)
{
	int x,y,z,i,h,g,k,choice=0;
	char name[256];
	int boxNum=0;

	printf("Please enter your name: "); //Input any number of array inputs
	scanf("%s",name);

	printf("Hello %s welcome to the rpgGame!\n",name);

	while(choice != 99)
	{
		puts("You find yourself in a dark room and you are not sure how you got here.");
        	puts("As you look around you see the room has 25 doors, each labeled with a number. You are not sure how such a small room can have 25 doors, sooo magic...");
        	puts("The room starts filling with water and you must choose a door to open or you will likely drown. you may quit anytime by selecting option 99");
        	puts("What door do you choose?");
        	scanf("%d",&choice);

		switch(choice)
		{
			case 1:
			{
				while(choice != 99)
				{
					printf("hello you have entered room 1 \n");
					printf("Room for Sheron\n");
					scanf("%d",&choice);
				}
				break;
			}
			case 2:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 3:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 4:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 5:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 6:
			{
					while(choice != 99)
					{
					}
					break;
			}
			case 7:
			{
					while(choice != 99)
				{ 
				}
					break;
			}
			case 8:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 9:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 10:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 11:
			{
					while(choice != 99)
					{
					}
					break;
			}
			case 12:
			{
					while(choice != 99)
					{
					}
					break;
			}
			case 13:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 14:
			{//Velasco,Jesse
				srand(time(NULL));
				//Room 1
				//Magic Number
				int mn = 7;
				//Universal Response variable
				int response;
				//Room 2
				int ClassScores = 1 + rand()%10;
				int a,b,c,d,f;
				//Room 3
				int counter = 0;
				int one,two,three,four,five,six;
				int number = 0;
				int guess = 0;
					while(choice != 99)
					{
						printf("Desperately.You push door 14 open\n");
						printf("Once inside you bear your entire weight against the door to slam it shut.\n");
						printf("Recuperated you look around to find a door with an inscription attached to it via a wooden tablet fixated above the archway\n");
						printf("Its a game.\n");
						printf("Guess the magic number and you'll be allowed passage. Fail.Passage to the underworld will be granted instead\n");
						printf("Welp.Time to take your shot.Good luck.\n");
						printf("Enter a number between 1 and 10\n");
						scanf("%d", &response);
						while(response < 1 || response > 10)
						{
							printf("Please enter a number between 1 and 10 inclusively\n");
							scanf("%d",&response);
						}
						printf("%d + magic number = %d\n",response,(response + mn));
						printf("%d * magic number = %d\n",response,(response * mn));
						printf("%d - magic number = %d\n",response,(response - mn));
						printf("What is your guess? It states.\n");
						scanf("%d",&response);
						if(response == mn)
						{
							printf("You are correct! The door opens. You pass through with no issues.\n");
						} 
						else
						{
							printf("Oh no. You guessed wrong.\n");
							printf("The ceiling begins to lower. Looks like its game over.\n");
							printf("Thanks for playing!\n");
							exit(0);
						}
						//Room 2
							printf("You enter an empty classroom.\n");
							printf("A monitor begins to lower from the ceiling.\n");
							printf("\"Samsung\" you notice. Nice.\n");
							printf("On the screen a grading scale is shown.\n");
							printf("A = 4.0, B = 3.0, C = 2.0, D = 1.0,F = 0\n");
							printf("There are %d A's\n", a = 1 + rand()%10);
							printf("There are %d B's\n", b = 1 + rand()%10);
							printf("There are %d C's\n", c = 1 + rand()%10);
							printf("There are %d D's\n", d = 1 + rand()%10);
							printf("What is the average?\n");
							scanf("%d",&response);
							if(response == ((a*4) + (b*3) + (c*2) + (d*1) + (f*0)))
							{
								printf("Like a teacher you graded it! Nice job!\n");
								printf("The room walls begin to shake as the one in front of you begins to open up. Revealing a secret tunnel.\n");
								printf("You push on.\n");
							}
							else
							{
								printf("Looks like this is where you dropout.\n");
								printf("Thanks for playing!\n");
								exit(0);
							}
								//Room 3 HAS BUG
								printf("As you exit the tunnel you find yourself in a casino\n");
								printf("Oddly enough there is only one table with a single seat directly ahead of you.\n");
								printf("You approach the table cautiously. The dealer says \"Do not be afraid. I will only take what you are willing to give\" he laughs. Try your luck.\n");
								printf("The game is simple. Pick a number and guess the number of times that number will be rolled. The die will be rolled 10 times.\n");
								printf("\"What are you willing to bet?\" asks the dealer.\n");
								printf("Having nothing of value you bet what you have. Your life. A true gambler at heart.\n");
								printf("\"Very well. I accept your bet. \"\n");
								for(int i = 0 ; i < 10 ; i++)
								{
									counter = 1 + rand()%6;
									switch(counter)
									{
										case 1:
										one += 1;
										break;
										case 2:
										two += 1;
										break;
										case 3:
										three += 1;
										break;
										case 4:
										four += 1;
										break;
										case 5:
										five += 1;
										break;
										case 6:
										six += 1;
										break;
									}
								}
								printf("Now state the number you would like to bet on between 1 and 6.\n");
								scanf("%d",&number);
								if(number < 1 || number >6)
								{
									printf("Please pick a number between 1 and 6 for your bet.\n");
									scanf("%d",&number);
								}
								switch(number)
								{
									case 1:
									printf(" Now guess how many times that number has been rolled. You have a rage of 1 above and below the number. Good luck!\n");
									scanf("%d",&guess);
									if(guess >= (one - 1) || guess <= (one + 1))
									{
										printf("Your guess: %d\n", guess);
										printf("# of rolls: %d\n",one);
										printf("You win! You get to keep your life ,and get passage on.\n");
									}
									else
									{
										printf("I'm afraid you'll be cashing out now.\n");
										printf("Thanks for playing!\n");
										exit(0);
									}
									case 2:
										printf(" Now guess how many times that number has been rolled. You have a rage of 1 above and below the number. Good luck!\n");
									scanf("%d",&guess);
									if(guess >= (two - 1) || guess <= (two + 1))
									{
										printf("Your guess: %d\n", guess);
										printf("# of rolls: %d\n",two);
										printf("You win! You get to keep your life ,and get passage on.\n");
									}
									else
									{
										printf("I'm afraid you'll be cashing out now.\n");
										printf("Thanks for playing!\n");
										exit(0);
									}
									case 3:
										printf(" Now guess how many times that number has been rolled. You have a rage of 1 above and below the number. Good luck!\n");
									scanf("%d",&guess);
									if(guess >= (three - 1) || guess <= (three + 1))
									{
										printf("Your guess: %d\n", guess);
										printf("# of rolls: %d\n",three);
										printf("You win! You get to keep your life ,and get passage on.\n");
									}
									else
									{
										printf("I'm afraid you'll be cashing out now.\n");
										printf("Thanks for playing!\n");
										exit(0);
									}
									case 4:
										printf(" Now guess how many times that number has been rolled. You have a rage of 1 above and below the number. Good luck!\n");
									scanf("%d",&guess);
									if(guess >= (four - 1) || guess <= (four + 1))
									{
										printf("Your guess: %d\n", guess);
										printf("# of rolls: %d\n",four);
										printf("You win! You get to keep your life ,and get passage on.\n");
									}
									else
									{
										printf("I'm afraid you'll be cashing out now.\n");
										printf("Thanks for playing!\n");
										exit(0);
									}
									case 5:
										printf(" Now guess how many times that number has been rolled. You have a rage of 1 above and below the number. Good luck!\n");
									scanf("%d",&guess);
									if(guess >= (five - 1) || guess <= (five + 1))
									{
										printf("Your guess: %d\n", guess);
										printf("# of rolls: %d\n",five);
										printf("You win! You get to keep your life ,and get passage on.\n");
									}
									else
									{
										printf("I'm afraid you'll be cashing out now.\n");
										printf("Thanks for playing!\n");
										exit(0);
									}
									case 6:
										printf(" Now guess how many times that number has been rolled. You have a rage of 1 above and below the number. Good luck!\n");
									scanf("%d",&guess);
									if(guess >= (six - 1) || guess <= (six + 1))
									{
										printf("Your guess: %d\n", guess);
										printf("# of rolls: %d\n",six);
										printf("You win! You get to keep your life ,and get passage on.\n");
									}
									else
									{
										printf("I'm afraid you'll be cashing out now.\n");
										printf("Thanks for playing!\n");
										exit(0);
									}
								}
								printf("To be cont.\n" );
					}
					break;
			}
			
			case 15:
			{
					while(choice != 99)
					{

					}
					break;
			}
			case 16:
			{
					while(choice != 99)
					{

					}
					break;
			}
			case 17:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 18:			
			{
					while(choice != 99)
					{
					}
					break;
			}
			case 19:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 20:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 21:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 22:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 23:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 24:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 25:
			{
					while(choice != 99)
					{
							puts("You open the door and close it behind you.");
							puts("After you overcome the panic from almost drowning, you look around and You find yourself in a cave, the air is damp and you smell mold.");
							puts("You notice a skeleton at your feet with it's right hand clenched around something. The cave ahead leads to a tunnel and you see a door to your right.");
							puts("At this point you have 3 choices:");
							puts("1. Examine the skeleton.");
							puts("2. Proceed further ahead in the cave.");
							puts("3. Enter the door to your right.");
							scanf("%d",&choice);
							if(choice == 1)
							{
								puts("You reach down and pry open the skeleton's hand, a finger breaks loose and you place it in your pocket. Once you pry the opject free you look at it closely in the light and see it is a live grenade and the pin springs free. You drop the grenade and dash through the cave. You can hear the grenade explode, collapsing the tunnel behind you.");
								puts("To be continued...");
								break;
							}
							else if(choice == 2)
							{
								puts("You find yourself further ahead in the cave.");
								puts("To be continued....");
								break;
							}
							else if(choice == 3)
							{
								puts("You enter the and close the door behind you.");
								printf("You hear an loud voice \" %s why do you disturb me? \" \n",name);
                                                                puts("To be continued....");
								break;
							}
							else
							{
								puts("wrong choice");
							}
					}
					break;

			}
			case 26:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 27:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 28:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 29:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 30:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 31:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 32:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 33:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 34:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 35:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 36:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 37:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
		}	
	}
}

