//Contributors
//G. Poppe
//
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>


void main(void)
{
	int x,y,z,i,h,g,k,choice=0;
	char name[256];
	int boxNum=0;

	// NEEDED FOR ROOM 7:
	srand(time(NULL));

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
					int enteredRoom = 0;
					int chestLocked = 0;
					char chestInventory[4][25] = {"bottle of rum", "dead cricket", "odd device"};
					char playerInventory[4][25] = {"", "", "", ""};
					int count = 0;  // 0 is locked, 1 is open.
					char item[25];
					int bottle = 3;

					while(choice != 99)
				{ 
							if(enteredRoom == 0) {
								puts("You quickly grab the door knob and open the 7th door.  The water causes you to fall and forces you into the room. You immediately get to your feet and grab the door nob from the inside and turn it. It's jammed!  Clearly the water must be forcing it closed.");
								enteredRoom++;
							}

							
							if(bottle == 3) {
								puts("You scan the room and find a large chest at the foot of an old bed.  You also find a small table near the right side of the bed with a dusty old book and a bottle of rum. ");
							}
							else { 
								puts("You scan the room and find a large chest at the foot of an old bed.  You also find a small table near the right side of the bed with a dusty old book. ");
							}

							puts("***********************************************");
							puts("At this point you have 3 choices:");
							puts("");
							puts("1. Examine the chest.");

							if(bottle == 3) {
								puts("2. Approach the small table and examine the book next to the bottle of rum.");
							}
							else if((bottle > 0)) { 
								puts("2. Have another swig of that bottle on the small table.  Hell, you don't even notice the book right next to it at this point.");
							}
							else {
								puts("2. Approach the small table and examine the book.");
							}

							puts("3. Take a nap.");
							puts("");
							puts("What do you choose?");

							scanf("%d",&choice);
							if(choice == 1)
							{
								if(chestLocked == 0) {
									puts("***********************************************");
									puts("You walk over to the dark end of the room and approach the chest near the foot of the bed.  It is made mostly of oak with broad iron bands reinforcing it.  You jiggle the clasp but it appears to be locked.");
									puts("");
								}
								else {
									puts("***********************************************");
									puts("You open the chest and see the following:");
									for(count; count < 3; count++) {
										printf("%d. %s \n", count +1, chestInventory[count]);
									}
									puts("4. Close the chest.");
									puts("Select an item number to add it to your inventory, or simply close the chest.");
									scanf("%d",&choice);

									/*

									Insert code for moving item from the chest to the players inventory.  (if logic)

									*/
																	}
							}
							else if(choice == 2)
							{
								if(bottle == 3) {
									puts("***********************************************");
									puts("You approach the small table near the bed and pick up the book.  It's a bit dusty with faded red lettering accross the cover.  The title of the book is, 'Diary'.");
									puts("");
									puts("You open the book, and sift through the crumpled pages.  It appears to be giberish full of what looks like complex equations and symbols.  You move to the last page and you see a sketch for an odd looking device.  At the header, the page reads, 'Odd Device!'.  In the print below the sketch is a somewhat cryptic statement:'");
									puts("");
									puts("'Only this 'odd device' will get you out of this room.  But there is huge risk in using it, so I locked it away.'");
									puts("");
									puts("After reading the book, you grab the bottle of rum, pop the cork and take a huge swig!");
									puts("");
								}

								else {
									puts("");
								}
					
								// Random drunk behavior!
								x = 1 + rand()%10;

								if((x <= 5) && (bottle > 0)) {

									if(bottle != 3) {
										puts("***********************************************");
									}
										
									if(bottle == 3) {
										puts("Ahhh! Good stuff.  You have a compelling desire for another drink.  Maybe you have a problem.");
										bottle--;
									}
									else {
										puts("Mmm, this must be spiced rum.  You can't resist another drink.");
										bottle--;
									}
								}

								else if (((x > 5) && (x < 10)) && (bottle > 0)) {
									if(bottle != 3) {
										puts("***********************************************");
									}
									else {
										puts("");
									}
									puts("The rum is already starting to hit you.  You begin to feel light headed.");
									bottle--;
								}
									
								else if ((x == 10) || (bottle == 0)) {
									if(bottle != 3) {
										puts("***********************************************");
									}
									else {
										puts("");
									}
										puts("Damn!  The rum is powerful stuff.  You begin to feel dizzy.  You find yourself having a difficult time standing.  You have a compelling desire to sing.  As you contemplate what the words are to that song vaguely in your head.  You stumble, fall, knocking your head on the edge of the table.");
										puts("");
										puts("....a day passes....");
										puts("");
										puts("Your eyes slowly open.  Wow, what a headache!  Slowly your eyes begin to come into focus.  You realize you are laying on the floor on the side of the bed.  Under the bed you can see the empty bottle tipped over.  Something near it catches your eye.");
										puts("");
										puts("Next to the bottle you see a small rusted looking key.");

										bottle = 0;

										playerInventory[0] == "key";

								}
								else {
									puts("There's really nothing more for you at this table.  Move on...");
								}
					
							}
							else if(choice == 3)
							{
								puts("***********************************************");
								puts("It's been a long day. *yawn* After an hour or so of sleep, something wakes you up!  Oh yes!  There's an unexplained flood in the room outside of your jammed door.");
								puts("");
								puts("You jump out of bed, with a clearer mind.  The rest did you well.  You vaguely recall a dream about having read the dusty old book on the table next to you.");
								puts("");
							}
							else
							{
								puts("wrong choice");
								puts("");
							}
					}

					// Need to code an exit out of the loop for room 7

			}
			 case 8:
                        {
                                        while(choice != 99)
                                        {
                                                        puts("Erick Vargas' Door\n"); //I'll remove this once we submit the final product, it's just a reminder for me
                                                        puts("You enter door 8 and you find yourself on a tropical island. You see a small group of people running around collecting materials, what do you do?\n");
                                                        printf("1) Introduce yourself 2) Ask where you are 3) Just watch them 4) Ignore them 5) Try to avoid them\n");
                                                        scanf("%d",&choice);
                                                        switch(choice)
                                                        {
                                                                case 1:
                                                                {
                                                                        while(choice != 99)
                                                                        {
                                                                                puts("You walk up to them and introduce yourself to them, they happily greet you and introduce themselves to you. They ask where you are from, how do you respond?\n");
                                                                                printf(" choose \n"); //prompt choices about how to answer.
                                                                                scanf("%d",&choice);
                                                                        }
                                                                        break;
                                                                }
                                                                case 2:
                                                                {
                                                                        while(choice != 99)
                                                                        {
                                                                                puts("You walk up to them and ask where you are, they look at you confusingly and tell you that the island your on is named Destiny Island. Still looking confused they ask where you came from, how do you respond?");
                                                                                printf(" choose \n"); //prompt choices about how to answer.
                                                                                scanf("%d",&choice);
                                                                        }
                                                                        break;
                                                                }
                                                                case 3:
                                                                {
                                                                        while(choice != 99)
                                                                        {
                                                                                puts("From a distance you stay watching them, you just see that they continue running around collecting materials for some reason. As you keep watching them you notice that once they huddled up the girl of the group starts marking off on a checklist. You start to wonder more what they're trying to do, what do you do?");
                                                                                printf(" choose \n"); //prompt choices about what to do.
                                                                                scanf("%d",&choice);
                                                                        }
                                                                        break;
                                                                }
                                                                case 4:
                                                                {
                                                                        while(choice != 99)
                                                                        {
                                                                                puts("You decide to just ignore them, what do you do instead?");
                                                                                printf(" choose \n"); //prompt choices about what to do instead
                                                                                scanf("%d",&choice);
                                                                        }
                                                                        break;
                                                                }
                                                                case 5:
                                                                {
                                                                        while(choice != 99)
                                                                        {
                                                                                puts("Panicked, you decide to hide from them. Where do you choose to hide?");
                                                                                printf(" choose \n"); //prompt choices of where to hide
                                                                                scanf("%d",&choice);
                                                                        }
                                                                        break;
                                                                }
                                                        }
                                                        break;
                                        }
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
							puts("A lottery machine?");
							puts("Welcome to Fabian's room");
							int n1,n2,n3,newrn1,newrn2,newrn3;
							bool checkNum1;
							bool checkNum2;
							bool checkNum3;
							srand(time(NULL));
	
							printf("Enter the lottery by entering three numbers. Each 1 digit\n");
							scanf(" %d %d %d",&n1,&n2,&n3);
							newrn1 = rand()%10;
							newrn2 = rand()%10;
							newrn3 = rand()%10;
							printf("Your numbers are: %d, %d, %d\n",n1,n2,n3);
							printf("The winning lottery numbers are: %d, %d, %d\n",newrn1,newrn2,newrn3);
		
							if(n1==newrn1 || n1==newrn2 || n1==newrn3)
							{
								checkNum1= true;
							}
							else
							{
								checkNum1=false;
							}
		
							if(checkNum1)
							{
								if (n1==newrn1)
								{
									newrn1=420;
								}
								else if (n1==newrn2)
								{
									newrn2=420;
								}
								else
								{
									newrn3=420;
								}
							}
							if(n2==newrn1 || n2==newrn2 || n2==newrn3)
							{
								checkNum2= true;
							}
							else
							{
								checkNum2=false;
							}
							if(checkNum2)
							{
								if (n2==newrn1)
								{
									newrn1=420;
								}
								else if (n2==newrn2)
								{
									newrn2=420;
								}
								else
								{
									newrn3=420;
								}
							}
							if(n3==newrn1 || n3==newrn2 || n3==newrn3)
							{
								checkNum3= true;
							}
							else
							{
								checkNum3=false;
							}
							if(checkNum3)
							{
								if (n3==newrn1)
								{
									newrn1=420;
								}
								else if (n3==newrn2)
								{
									newrn2=420;
								}
								else
								{
									newrn3=420;
								}
							}
							if(checkNum1 && checkNum2 && checkNum3)
							{
								if(n1==newrn1 && n2==newrn2 && n3==newrn3)
								{
									printf("You've hit the jackpot of 1,000,000\n");
								}
								else 
								{
									printf("You wont 1,000\n");
								}
							}
							else if ((checkNum1 && checkNum2 || checkNum1 && checkNum3) || (checkNum2 && checkNum3))
							{
								printf("You've won $100\n");
							}
							else if (checkNum1 || checkNum2 || checkNum3) 
							{
								printf("You won $10\n");
							}
							else
							{
								printf("You won nothing sorry!\n");
							}
							puts("choose a new room now if you dare... \n");
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
					{		printf("Room for Richmond Laureta AKA (rlaureta)\n");
							/*ROUGH DRAFT OF MY GAME:
							The title of my game is: "The King's Tyrant"
							I will create an rpg game that will start in a 
							ruined dungeon and you wake up from your sleep.
						       	You then go and pick your class and weapon.
							You can either be a warrior or mage class. 
							Then you pick your weapon and your path.
							You will also have skills and you will spend 
							points to level them up when you gain experience.
							My game will have a karma effect for good and bad. 
							The more you choose to be bad the choices will 
							be more bad. If you choose to be good then your path 
							will be more good. Its up to you who you want to be.
							At the end of the game you will see what you become.*/

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
							puts("You open the door and find yourself trapped in another room.");
							puts("In front of you are three buttons: blue, red, yellow.");
							puts("Lets play a game :)");
							
							puts("Pick a button:");
							puts("1.Blue");
							puts("2.Red");
							puts("3.Yellow");
							scanf("%d", &choice);
							while((choice != 1)&&(choice != 2)&&(choice != 3)&&(choice != 99))
							{
								puts("Enter '1' '2' '3'.");
								scanf("%d", &choice);
							}
							if(choice == 1)
							{
								puts("Room 1");
								puts("Water starts pouring out from the cieling, this room is starting to flood too!");
								puts("You must find a way to stop the water or you will drown, time is running out!");
								
							}
							if(choice == 2)
							{
								puts("Room 2");
								puts("Your hear a loud crank, the walls slowly start to close in");
								puts("You must find a way to stop the walls, time is running out!");
							}
							if(choice == 3)
							{
								puts("A generator turns on, the air begins to get vaccumed out of the room");
								printf("You must find a way to stop from suffocating, time is running out!");
							}
							int x=10;
							while(x!=0)
							{
								printf("Timer %d minutes left\n", x);
								puts("1.Look Around");
								puts("2.Use Laptop");
								puts("3.Use Tools");
								puts("4.Open Door");
								scanf("%d", &y);
								switch(y)
								{
									case 1:
										puts("You look around the room.");
										puts("The lights in the room are flickering.");
										puts("In the middle is a big metal crate and ontop is a laptop and small box on it.");
										puts("One wall has a lot of light switches with a calander next to it.");
										puts("The calander has the last day circled on the month of december.");
										puts("The other wall has a lever with a stickynote next to it saying 'hex: FF'.");
										puts("There is another door in front of you but its locked.");
										x--;
										break;
									case 2:
										puts("You go up to the laptop and open it up to a terminal");
										puts("Please enter code:");
										scanf("%d", &z);
										if(z==1515)
										{
											puts("You hear a loud clank, the water stops pouring from the cieling");
										}
										if(z==1231)
										{
											puts("A vent opens up in the cieling:");
										}
										if((z!=1515)&&(z!=1231))
										{
											puts("Nothing happened.");
										}
										x--;
										break;
									case 3:
										x--;
										break;
									case 4:
										if(y==0)
										{
											puts("You have survived and escaped!!");
											choice=99;
										}
										puts("Door is locked.");
										x--;
										break;
								}	
							}
							puts("Sorry time ran out and you died");
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

