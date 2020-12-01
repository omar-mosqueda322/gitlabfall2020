//Contributors
//G. Poppe
//
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>

void gameRules(); //function to explain rules of room 12 game
void gameCraps(); //function to run room 12 game

int main(void)
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
						puts("you open the door and find you've entered room 12........\n");

						char response, temp; //char variables needed for game to work
						{
							printf("Since you're here and brave, will you take a chance and play a game of cards? Enter 'y' twice for yes or '99' to leave at any time...\n");
							response = getchar(); //set response to equal user's input
							temp = getchar(); //set temp value to equal user's input

							if(response == 'y' || response == 'Y') //if answer is equal to letter 'y' or 'Y'...
							{
								gameRules(); //simple function that prints game rules for user before game begins
								gameCraps(); //calls main game function
							}
							else if(response == 99) //had issues modifying this code to run no...using escape 99 for now to to exit game...
							{
								puts("You don't want to play, but you'll be back. Goodbye for now... >:D");
								break;
							}
						}

						scanf("%d", &choice); //scan in user's input for choice...
						
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
			{
					while(choice != 99)
					{
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

void gameRules() //simple function that prints rules of game to user...
{
	puts("\nThe rules of this card game - craps - are simple...");
	puts("If you roll a 7 or 11 immediately...you win!");
	puts("If you roll a 2, 3, or 12 immediately...you lose!");
	puts("If you roll anything besides those numbers, you want to roll that number again before you roll a 7 to win!\n");
}


void gameCraps() //function play craps that does the logic for the game...
{
    int randomint(int x, int y); //function to call random integer...
    srand(time(NULL)); //random seed set to clock time

    int die1, die2, die3, die4, rollcount, rollcount2; //4 die and 2 roll ints

    die1 = randomint(1,6); //setting first die to equal random int from 1-6
    die2 = randomint(1,6); //same as above with second die
    rollcount = die1 + die2; //roll function equals die 1 and die 2....
    printf("You rolled a %i\n",rollcount); //print statement letting user know their roll

    if(rollcount == 7 || rollcount == 11)//if roll is equal to 7 or 11...player wins game
    	{
    		printf("You Win!\n"); //let user know they won game
		printf("Enter 'y' or 'Y' to roll again. Enter '99' to exit program.\n");
        	return;
    	}
    else if(rollcount == 2 || rollcount == 3 || rollcount == 12) //if roll is equal to a 2, 3, or 12....player loses game
    	{
		printf("You Lose :(\n"); //let user know they lost game
		printf("Enter 'y' or 'Y' to roll again. Enter '99' to exit program.\n");
        	return;
    	}
    else // otherwise on every other number roll...
        {
            do //run this command at least once...while conditions above aren't met...
            {
                die3 = randomint(1,6); //similar to above, set die3 to equal a random int between 1-6
                die4 = randomint(1,6); //same as above w/4th die
                rollcount2 = die3 + die4; //our 2nd roll equals die 3 + die 4
                printf("You rolled a %d\n", rollcount2); //let user know what they rolled w/2nd roll...

                if(rollcount == rollcount2) //if our 2nd roll is equal to our first roll...
                 {
                     printf("You Win\n"); //let user know they won game
		     printf("Enter 'y' or 'Y' twice to roll again. Enter '99' to exit program.\n");
                     return;
                 }
            }

	    while(rollcount != 7); //while our 2nd roll is not equal to 7...
	    printf("You Lose :(\n"); //let user know they lost game...
	    printf("Enter 'y' or 'Y' twice to roll again. Enter '99' to exit program.\n");

        }

}

int randomint(int x, int y) //random integer function to work craps game
{

	return rand()%(y - x + 1); //ensures random number is generated
}
