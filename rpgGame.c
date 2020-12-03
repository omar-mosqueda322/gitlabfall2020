//Contributors
//G. Poppe
//Shane Cortez
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stdbool.h>

void extraCredit(void);
void ignoreExtra(void);

int choice1(int number);
int choice2(char *ptr);
int choice3(int number1);

void gameRules(); //function to explain rules of room 12 game
void gameCraps(); //function to run room 12 game


int main(void)
{
	int x,y,z,i,h,g,k,choice=0;
	char decision; 
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
				int length = 0, num = 0, magicNum = 0;
				char word[40] = "sacramento";
				char *ptr;
				ptr = word;
								
				srand(time(NULL));	
				
				length = strlen(name);

				for(i = 0; i < length;i++)
				{
					if(isupper(name[i]))
					{
						name[i] = tolower(name[i]);
					}
				}
				
				name[0] = toupper(name[0]);	//Making sure the name is written correctly with uppercase first letter
				printf("Hello %s, you have entered the room 1.\n", name);
				puts("You have survived the first part of your adventure..the Drowning.\n");
				puts("You have 5 choices to make in order to escape this horror adventure. \n");

				printf(	"1. You have to solve a math problem for survival. \n"
					"2. You have to guess the word for survival. \n"
					"3. You have to find the magic number for survival. \n"
					"4. Guess the word for survival. \n"
					"5. Try to make a run for it. \n");

				while(choice != 99)
				{
					puts("Make a choice(99 to quit): ");
					scanf(" %d", &choice);

					switch(choice)
					{
						case 1:
						{
						puts("You have chosen to solve the math problem. Don't forget you have one chance. Now choose a number between 1-10: ");
						scanf(" %d", &num);
						choice1(num);
						return EXIT_SUCCESS;
						break;
						}
				
						case 2:
						{
						puts("You have chosen to guess the word. What is the capital of California?\n");
						choice2(ptr);
						return EXIT_SUCCESS;
						break;
						}
			
						case 3:
						{
						puts("Enter the magic number(between 1 - 20) from the following math problems: ");
						magicNum = 1 + rand() % 20;
						choice3(magicNum);
						return EXIT_SUCCESS; 	
						break;
						}

						case 4:
						{
						puts("Choice 4.");
						break;
						}

						case 5:
						{
						puts("This was the wrong choice to be made. Now you have ended up in a room with nowhere to go....");
						return EXIT_SUCCESS;
						break;
						}
					}

				}
				break;
			}
			case 2:
			{
					while(choice != 99)
					{
						puts("you open the door and find ........");
						printf("AN OGRE!!! *phew* ...oh good he's asleep but hey there's a lever behind him. You start to think maybe it will stop the water from filling up the main room. Now you must make a choice. (Hit Ctrl+C to exit the game at any time.)\n");
						printf("\n");
						puts("Carefully walk around the sleeping ogre and pull the lever. Enter 1.");
						puts("Explore the dark mysterious room quietly. Enter 2.");										puts("Wake up the ogre and see what happens. Enter 3.");
						
						choice = 0;
						while(choice < 1 || choice > 3)
						{
							scanf("%d",&choice);															if(choice < 1 || choice > 3)															puts("Sorry, I did not understand your choice. Try again.");
						}
						switch(choice)
						{
							case 1:
								puts("\nOh no...the ogre hears and feels you around him and starts to wake up. You quickly try and hide behind a box that's close to you. The ogre is confused and starts to search for you, and as he does, you sneak around and try and find a way out. You find a small door but it's locked, so you go back to sneaking around trying to stay hidden from the ogre in search for this key since there's no other way out. After a bit, the ogre momentarily gives up as you continue to search for the key. You finally come across a smaller box on the bottom of a shelf. You look inside and find a little key. You take the key in your hands and start to crawl back to the small door you found earlier. As you approach the door, you hear the ogre get back up from where he was sitting and start to search from you again. You start to crawl faster towards the door as you hear his footsteps getting closer. You manage to get to the small door and try the key that you found in the box earlier. It fits and you unlock the door. You quickly open it and squeeze your body into the opening and snut the door behind you as you hear the ogre just a few feet away. You're now in a room full of books, ahh it's a library, but you soon realize that there's no other door in sight. You try very hard to think on how you're supposed to get out of here and back home. You have your cell phone but it's at 20 percent and there's no wifi or service here. Then suddenly a thought pops into your head, what if somewhere in this library there's a hidden bookshelf door, like the ones you see in the movies. You quickly begin to start taking books off the shelves of this library. Two big piles of books later and still no luck. You start to break down and think you may never get out of here. You pull one last book before falling to the ground in exhaustion and you hear a click. You look up at the bookcase and see it begin to open. You get up with tears in your eyes and walk into this small empty room with one remaining door. You run to the door and open it and find yourself transported back to the library where you fell asleep reading a book. The other people around you are looking at you strangely. Well, that's the last time you ever read a fictional magic book, that was scary. THE END. Play again! \n");
								break;
							case 2:
								puts("\nAs you quietly explore the room, you come across a long box on a shelf.. You turn your head back to check if the ogre is still asleep, and he is. You carely open the box and find all kinds of packaging, so you move it out of the way and discover a sword! You try to pick it up with one hand and it's way too heavy, you think 'damn I need to hit the gym'. You try picking it up with both hands and manage to get it out of the box and hold it properly. Then suddenly, you feel a hot breath on the back of your neck and realize you no longer hear the ogre snoring. You quickly turn around and find yourself face to face with the ogre so you run to your left before he manages to grab you. Mid run you decide to turn back around and fight the ogre. You swing your sword and slice his hand off that was about to grab you. The ogre yells out in pain and frustration and tries to grab you again with his other hand and you manage to dodge him and slice at his knee cap, causing him to fell over and yell again. Out of breath, you back up in an attempt to get a running start. You charge at the ogre and stab him right in the heart, killing him instantly. You drop the sword and take a moment to catch your breath before rushing towards the lever on the wall switching it down. You run back to the door you came in and realize the water stopped filling the main room. You struggle to walk through the water, that is now at your waist. You use your hands to wash off the blood and sweat off your face, and suddenly you wake up in your bed back at home but your waist and legs are still wet. You peed the bed. THE END. Play again! \n");
								break;
							case 3:
								puts("\nThe ogre wakes up and discovers you standing in front of him. You quickly try and run away but too late, he grabs you in his right hand and bites your head off. You died. THE END. Play again! \n");
								break;															}
					}
					break;
			}
					
			case 3:
			{
					while(choice != 99)
					{
							printf("%s", "You open the door and find ........\n");
							printf("%s", "You see extra credit for CSC 251-01\n Do you chase it?\n");
							printf("%s%s%s", "1) To chase it\n","2) Ignore the tempations of passing the class!\n","99) If you don't want to play anymore\n");
							scanf("%d",&choice);
							
							switch(choice)
							{
								case 1:
									extraCredit();
									break;
								case 2:
									ignoreExtra();
									break;
								case 99:
									break;
								default:
									printf("%s", "Please follow the directions!\nYou're going to back to spawn!\n");
									break;			
							
							}
					break;
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
						puts("As your hand reaches for the 13th door you think about all the superstitions related to the number 13.");
                                                        puts("However, you open it anyways and you find yourself in a large dark room that is immedietly cold and nothing is visible.");
                                                        puts("Although the room is pitch black you cant even see your hands, you stop and look to your right when something catches your eye.");
                                                        puts("A samll bright light is floating in the distance, close enough to see but far enough to not be able to know what it is.");
                                                        puts("Do you walk towards the light or do you wak in the opposite direction.");
                                                        puts("1. Walk towards the light.");
                                                        puts("2. Walk in the other direction.");
                                                        scanf("%d",&choice);
                                                        if(choice == 1)
                                                                {
                                                                        puts("feeling curious you walk towards the light.");
                                                                        puts("As your walking, the light gets brighter and slowly getting closer until you feel a sudden rush of cold air on your left shoulder.");
                                                                        puts("You look over and see a ghost like hand resting on your shoulder");
                                                                        printf("It whispers into your ear with a low grungy voice \"%s turn around, I can give you anything you want \" \n",name);
                                                                        puts("Do you turn around or keep walking towards the light?");
                                                                        puts("1. Continue walking towards the light.");
                                                                        puts("2. Turn around and face this mysterious voice");
                                                                        scanf("%d", &choice);
                                                                        if(choice == 1)
                                                                        {
                                                                                puts("Overcoming your curiosity once more, you continue walking towards the light,");
                                                                                puts("As you get closer to the light you can now see a forest and wonder if this is the way out.");
                                                                                puts("However, you once more hear this voice different from before.");
                                                                        }

                                                                        break;
                                                                }
                                                        else if(choice == 2)
                                                                {
                                                                        puts("Not knowing what this light could be you decide to turn around and head deeper into the unknown darkness.");
                                                                        puts("...more to come...");


                                                                        break;
                                                                }
                                                        else
                                                        {
                                                                puts("Wrong choice");
                                                        }

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
                            printf("Mauro Badillo, the 1st test");
							scanf("%d",&choice);
					}
					break;
			}
			case 20:
			{
					int level = 0,attack = 0,magic = 0,health = 0,defense = 0,totalHP = 0;
					bool NEW = true;
					srand(time(NULL));
					
					while(choice != 99)
					{
							/*puts("you open the door and find ........");
							scanf("%d",&choice);*/
								
							bool gameLoop = false;
							int option = 0;
							int levelF = level;
							int healthPOT = 3;
							int damage = 0;

							bool magician = false;
							bool warrior = false;

							bool loss = false;

							int multiplier = 0;
							
							char goblin[10] = "Goblin";
							char zombie[10] = "Zombie";
							char giant[10] = "Giant";
							char highSumm[25] = "High Summoner";
							char quetzal[25] = "God Quetzalcoatl";

							char goblinATT[50] = "The Goblin takes his tiny shiv and cuts you.";
							char zombieATT[50] = "The Zombie lunges forward and bites you.";
							char giantATT[80] = "The Giant takes his club and strikes you in the chest";
							char highATT[100] = "The High Summoner casts a large cloud above you and calls down a bolt of lightning.";
							char quetzalATT[100] = "Quetzalcoatl, The Creator, blasts you with a blue stream of fire.";

							while(NEW)
							{
								puts("Pick your class.");
								puts("_________________________________________");
								puts("1. Warrior.");
								puts("2. Magician.");
								puts("3. Exit.");
								
								scanf(" %d",&option);

								switch(option)
								{
									case 1: level = 1;
											attack = 5;
											magic = 1;
											health = 15;
											defense = 2;
											totalHP = 15;
											warrior = true;
											puts("You have selected Warrior.");
											gameLoop = true;
											NEW = false;
											break;
											
									case 2: level = 1;
											attack = 1;
											magic = 10;
											health = 10;
											totalHP = 10;
											defense = 1;
											magician = true;
											puts("You have selected Magician.");
											gameLoop = true;
											NEW = false;
											break;

									case 3: gameLoop = false;
											puts("Heading back to the main menu!");
											NEW = false;
											break;

									default:
											puts("Please select a valid option");
											break;
								};
							}
							if(gameLoop==false)
								break;
							levelF = level;
							if(gameLoop == true)
								puts("You will be given 3 health potions that heal \"20%\" of your health.\nUse them wisely.");
							
							puts("_________________________________________");
							puts("");
							
							for(levelF; ((gameLoop == true)&&(levelF <= 5)); levelF++)
							{
								int monsterHP = 8;
								int monsterATT = 5;
								
								multiplier = levelF*3;
								
								if(warrior == true)
								{
									totalHP += multiplier;
									health += multiplier;
									attack += multiplier;
									defense += (multiplier/3);
								}
								else if(magician == true)
								{	
									totalHP +=(3*(multiplier/2));
									health +=(3*(multiplier/2));
									magic += (multiplier+8);
									defense += (multiplier/4);
								}
								else
									puts("Something went wrong with warrior/magician boolean");

								monsterHP+=(multiplier*2);
								monsterATT+=(multiplier*2);

								while(monsterHP > 0)
								{	
									if(levelF==1)
										printf("%s HP: %d DMG: %d \n", goblin,monsterHP,monsterATT);
									else if(levelF==2)
										printf("%s HP: %d DMG: %d \n", zombie,monsterHP,monsterATT);
									else if(levelF==3)
										printf("%s HP: %d DMG: %d \n", giant,monsterHP,monsterATT);
									else if(levelF==4)
										printf("%s HP: %d DMG: %d \n", highSumm,monsterHP,monsterATT);
									else if(levelF==5)
										printf("%s HP: %d DMG: %d \n", quetzal,monsterHP,monsterATT);
									else
										puts("Something went wrong calculating string name.");
									if(warrior == true)	
										printf("Warrior: %s HP: %d DMG: %d \n",name,health,attack);
									else
										printf("Magician: %s HP: %d DMG: %d \n",name,health,magic);
									puts("_________________________________________");
									puts("1. Attack.");
									puts("2. Magic.");
									puts("3. Health Potion.");

									scanf(" %d",&option);
									
									int charATT = (rand()%attack);
									int charMAG = (rand()%magic);
									
									switch(option)
									{
										case 1: printf("You've attacked for %d.\n",charATT);
											monsterHP -= charATT;
											break;
										case 2: printf("You've attacked for %d.\n",charMAG);
											monsterHP -= charMAG;
											break;
										case 3: if(healthPOT <= 0)
											{
												puts("You have no more potions left!");
												break;
											}
											else
											{
												health +=(.20*(totalHP));
												healthPOT--;
											}
											break;
										default:
											break;
									};

									if(monsterHP > 0)
									{
										damage = ((rand()%monsterATT) - defense);
										if(damage > 0)
										{
											if(levelF==1)
												printf("%s\n", goblinATT);
											else if(levelF==2)
												printf("%s\n", zombieATT);
											else if(levelF==3)
												printf("%s\n", giantATT);
											else if(levelF==4)
												printf("%s\n", highATT);
											else if(levelF==5)
												printf("%s\n", quetzalATT);
											else
												puts("Something went wrong calculating attack string.");

											health -= damage;
											printf("You took %d damage.\n",damage);
										}
										else
											puts("Their attempt to attack you has failed.");
									}

									else
									{
										if(levelF==1)
											printf("You have defeated the %s\n",goblin);
										else if(levelF==2)
											printf("You have defeated the %s\n",zombie);
										else if(levelF==3)
											printf("You have defeated the %s\n",giant);
										else if(levelF==4)
											printf("You have defeated the %s\n",highSumm);
										else if(levelF==5)
											printf("You have defeated the %s\n",quetzal);
										else
											puts("Something went wrong calculating the defeat string.");
									}

									if(health<=0)
									{
										puts("You lose.");
										loss=true;
										break;
									}
									puts("________________________________________________________________");
								}	
								if(loss == true)
									gameLoop=false;

								level = levelF;
							}
						if(level==5&&health>0)
							printf("Congratulations %s, you defeated all the bosses in Room 20!\n",name);
						puts("________________________________________________________________");
					}
					break;
			}
			case 21:  //Michael Morgan's room
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							puts("A penguin drinking a been");

							scanf("%d",&choice);
					}
					break;
			}
			case 22:
			{
					while(choice != 99)
					{
							puts("Entered Moises' room");
							puts("You open the door and see 5 doors which one do you choose?...");
							puts("Choose an option below (Enter 99 to quit)");	
							puts("Door 1 ");
							puts("Door 2 ");
							puts("Door 3 ");
							puts("Door 4");
							scanf("%d",&choice);
		 					switch (choice)
							{		
								case 1:
									puts("Door is cold to the touch");
									puts("What do you do first");
 									puts("1.Do you try and build a fire?");
									puts("2.Do you look for warm clothing?");
   									puts("3.Do you tough it out?");
									scanf("%d", &choice);
									switch (choice)
									{
										case 1:
											puts("Do you even know how to start a fire?");
	       										puts("Of course you don't, but luckily there is a lighter in front of you");
					       						puts("You find some dried up branches and leaves and light them");
						                                        puts("So now that the fire is started what do you do");
			  								puts("1. Look for food");
	 										puts("2. Find something to put on");
      											puts("3. Nothing, ill stay wasrm by the fire.");
		 									scanf("%d", &choice);
											break;		
										case 2:
    											puts("Smart move need to get some clothes luckily theres clothes right next to you");
											break;                                                                   
				   						case 3:
  											puts("I too like to live dangerously");
											puts("But you really shouldve chosen something else");
			 								break;
	   									default:
	   										puts("Try again");
		       									break;
									}
      									break;
      								case 2:
      									puts("Who left the heater on?");
									break;
     								case 3:
       									puts("You fall from the sky towards the ground");
						       			puts("Are you scared?");
  									puts("1. Yes 2. No");
				     					scanf("%d", &choice);
    									switch(choice)
									{
										case 1:
											puts("You shouldn't be you have a parachute");
			   								break;
      										case 2:
											puts("Kinda edgy of you, are you ok? Maybe you should talk to somebody");
							      				break;
			 							default:
		 									puts("You only really have two options");
	 										break;
									}
				     					break;
	 							case 4:
									puts("There is a strange man in front of you");
									puts("1.Do you approach him? or 2. Do you ignore him?");
	  								break;
       								default:
									printf("Door is locked cannot open \n");
									break;
							}
					}
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
				#include <time.h>


                                 int choice = 0,
                                     turn = 0,
                                     bananaAmount = 0,
                                     orangeAmount = 0;


                                 puts("As you open the door, you notice a sign reading: \"This is Phillip F. Aguilera's room\".\n"
                                      "You enter the room and close the door behind you, noticing the choice of more doors. There are three more doors to choose.\n"
                                      "A sheet of paper is lying on the floor. You pick it up and begin to read what has been written.\n"
                                      "It states:\n");
                                 printf("You have %d bananas and %d oranges.\n", bananaAmount, orangeAmount);
                                 puts("Enter the rooms and try to escape with the highest amount of bananas and oranges as possible!\n");
                                 puts("You must have XXX amount of bananas and oranges in XXX amount of turns or you lose!\n");


                                 for (turn = 0; turn < 4; turn++)
                                 {
                                         puts("Main Menu:\n"
                                              "1) Enter Room 1.\n"
                                              "2) Enter Room 2.\n"
                                              "3) Enter Room 3.\n");
                                         printf("Enter the Room you wish to enter: ");
                                         scanf("%d", &choice);

                                         switch(choice)
                                         {
                                                 case 1:
                                                         puts("You are in Room 1.\n");
                                                         break;
                                                 case 2:
                                                         puts("You are in Room 2.\n");
                                                         break;
                                                 case 3:
                                                         puts("You are in Room 3.\n");
                                         }

                                 }

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
					//Room #28 for Shane Cortez
				while (choice != 99)
				{
					srand(time(NULL));
					int randNum=rand()%2;

					puts("you enter the room marked 28");
					puts("As the panic of drowning subsides you look up to notice that the room is shaking and the ground splitting in half revealing a pit to nothingness you have to act fast or risk missing the jump across!");
					puts("What do you do:");
					puts("1. JUMP!");
					puts("2. Quickly look around and reassess the situation");
					puts("99. At any time to End Game");
					scanf("%d", &choice);
					if (choice == 1)
					{
						puts("in a panic you jump across the pit and make it safely to the other side.");
						puts("As you made your jump you noticed that there was a key dangling on a string over the midde of the pit, but missed your opportunity to grab it.");
						puts("As you look around you notice a door sealed shut by vines, and there is a locked chest right next to it");
						puts("You suspect that the key will open the chest, but you have to get it first...");
						puts("What do you do:");
						puts("1. Try to jump across and jump back to grab the key");
						puts("2. Check inventory");
						scanf("%d", &choice);
						if (choice == 1)
						{
							puts("You attempt the first jump and realize too late that the pit is far too wide to jump across, you fall into the darkness and are never seen again....");
							puts("Game Over");
							choice = 99;
							break;
						}
						else if (choice == 2)
						{
							puts("you check your inventory and notice that you packed your trusty hook attached to a long stick, you can use this to get the key.");
							puts("you reach across the pit with your hook and grab the key, unfortunatly in the action you drop the hook while just barely being able to hang onto the key");
							puts("You say your farewells to the hook and put the key in your inventory.");
							puts("Key added to inventory");
							puts("You are now faced with a locked chest and a vine covered door");
							puts("What do you do:");
							puts("1. inspect door.");
							puts("2. open chest with key");
							scanf("%d", &choice);
							if (choice == 1)
							{
								puts("upon further inspection you notice that the vines appear flamable...");
								puts("you then turn your attention to the chest, you pull out the key and unlock the chest, inside you find a scroll which reads:");
								puts("write a spell and this scroll will grant you power...");
								puts("Unfortunately you only studied one year of spellcasting in highschool and the only three spells you remember from back then are:");
								puts("1. fire");
								puts("2. water");
								puts("3. earth");
								puts("What will you write:");
								scanf("%d", &choice);
								if (choice == 1)
								{
									puts("you write the ancient runes of fire onto the page.");
									puts("The scroll flashes bright red with fiery power, suddenly your hands begin to feel hot, when suddenly they light ablaze! with this power you can shoot fire out of your hand!");
									puts("You strike an agressive pose and engulf the vine covered door in flames.");
									puts("As the fire and smoke subside, the door sits ajar with a light shining through.");
									puts("What will you do:");
									puts("1. walk through the door");
									puts("2. Turn around and jump into the pit");
									scanf("%d", &choice);

									if (choice == 1)
									{
										//Victory!
										puts("You open the door and are blinded by light, as your vision returns you realize you are in the middle of nowhere in the desert, and the door magically dissapears");
										puts("You escaped, but now what?");
										puts("Congrats you finished the game. Thank you for playing!");
										choice = 99;
										break;
									}
									else if (choice == 2)
									{
										puts("I'm not sure why you chose this, but you turn around and jump into the pit, you are never seen again....");
										puts("Game Over...");
										choice = 99;
										break;
									}
								}
								else if (choice == 2)
								{
									puts("You write down the ancient runes of water onto the page.");
									puts("the scroll glows a conforting blue color, suddenly your hands feel damp, you can now use this on the door.");
									puts("You ready yourself and shoot a powerful stream of water on the vines.");
									puts("You stare at the vines as they grow greener and stronger from the water, the vines then grow at a rapid rate engulfing the narrow walkway that you stand on.");
									puts("You find yourself losing balance on the decreasing surface, eventually falling into the pit...");
									puts("You are never seen again...");
									puts("Game Over");
									choice = 99;
									break;
								}
								else if (choice == 3)
								{
									puts("You write the ancient rune of earth.");
									puts("suddenly the scroll glows emerald green, as your hands begin to feel one with the earth, you can use this on the door.");
									puts("You ground yourself, and use your new powers on the vines.");
									puts("To your suprise, the earth spell you wrote only makes the vines stronger, so much so that they begin to grow wildly out of control!");
									puts("The vines begin to take up most of the surface you stand on...");
									puts("You find yourself losing balance on the decreasing space, eventually falling into the pit...");
									puts("You are never seen again...");
									puts("Game Over");
									choice = 99;
									break;
								}
							}
							else if (choice == 2)
							{
								puts("you turn your attention to the chest, you pull out the key and unlock the chest, inside you find a scroll which reads:");
								puts("write a spell and this scroll will grant you power...");
								puts("Unfortunately you only studied one year of spellcasting in highschool and the only three spells you remember from back then are:");
								puts("1. fire");
								puts("2. water");
								puts("3. earth");
								puts("What will you write:");
								scanf("%d", &choice);
								if (choice == 1)
								{
									puts("you write the ancient runes onto the page.");
									puts("The scroll flashes bright red with fiery power, suddenly your hands begin to feel hot, when suddenly they light ablaze! with this power you can shoot fire out of your hand!");
									puts("You strike an agressive pose and engulf the vine covered door in flames.");
									puts("As the fire and smoke subside, the door sits ajar with a light shining through.");
									puts("What will you do:");
									puts("1. walk through the door");
									puts("2. Turn around and jump into the pit");
									scanf("%d", &choice);

									if (choice == 1)
									{
										//Victory!
										puts("You open the door and are blinded by light, as your vision returns you realize you are in the middle of nowhere in the desert, and the door magically dissapears");
										puts("You escaped, but now what?");
										puts("Congrats you finished the game. Thank you for playing!");
										choice = 99;
										break;
									}
									else if (choice == 2)
									{
										puts("I'm not sure why you chose this, but you turn around and jump into the pit, you are never seen again....");
										puts("Game Over...");
										choice = 99;
										break;
									}
								}
								else if (choice == 2)
								{
									puts("You write down the ancient runes of water onto the page.");
									puts("the scroll glows a conforting blue color, suddenly your hands feel damp, you can now use this on the door.");
									puts("You ready yourself and shoot a powerful stream of water on the vines.");
									puts("You stare at the vines as they grow greener and stronger from the water, the vines then grow at a rapid rate engulfing the narrow walkway that you stand on.");
									puts("You find yourself losing balance on the decreasing surface, eventually falling into the pit...");
									puts("You are never seen again...");
									puts("Game Over");
									choice = 99;
									break;
								}
								else if (choice == 3)
								{
									puts("You write the ancient rune of earth.");
									puts("suddenly the scroll glows emerald green, as your hands begin to feel one with the earth, you can use this on the door.");
									puts("You ground yourself, and use your new powers on the vines.");
									puts("To your suprise, the earth spell you wrote only makes the vines stronger, so much so that they begin to grow wildly out of control!");
									puts("The vines begin to take up most of the surface you stand on...");
									puts("You find yourself losing balance on the decreasing space, eventually falling into the pit...");
									puts("You are never seen again...");
									puts("Game Over");
									choice = 99;
									break;
								}
							}
						}
					}
					else if (choice == 2)
					{
						puts("As you look around frantically you notice a chest on the other side next to a door and a key dangling over the ever growing death pit on a string.... now is the time to jump");
						puts("As you make your jump you take the time to aim for grabbing the key on the way over.... It's going to be close, lets see if you can make it.");
						if (randNum == 0)
						{
							puts("You leap through the air and grab the other side, when suddenly the ledge gives way, leaving you to fall into the darkness never to be seen again....");
							puts("Game Over");
							choice = 99;
							break;
						}
						else
						{
							puts("You jump with all your might, and land on the other side barely missing the fall by an inch.");
						}

						if (randNum == 1 && choice == 2)
						{
							puts("You made it across! now before you sits a door closed off by vines and a locked chest that you suspect will be unlocked by the key...");
							puts("What is your next move:");
							puts("1. Open the chest");
							puts("2. Further inspect the door");
							scanf("%d", &choice);
							if (choice == 1)
							{
								puts("upon further inspection you notice that the vines appear flamable...");
								puts("you then turn your attention to the chest, you pull out the key and unlock the chest, inside you find a scroll which reads:");
								puts("write a spell and this scroll will grant you power...");
								puts("Unfortunately you only studied one year of spellcasting in highschool and the only three spells you remember from back then are:");
								puts("1. fire");
								puts("2. water");
								puts("3. earth");
								puts("What will you write:");
								scanf("%d", &choice);
								if (choice == 1)
								{
									puts("you write the ancient runes of fire onto the page.");
									puts("The scroll flashes bright red with fiery power, suddenly your hands begin to feel hot, when suddenly they light ablaze! with this power you can shoot fire out of your hand!");
									puts("You strike an agressive pose and engulf the vine covered door in flames.");
									puts("As the fire and smoke subside, the door sits ajar with a light shining through.");
									puts("What will you do:");
									puts("1. walk through the door");
									puts("2. Turn around and jump into the pit");
									scanf("%d", &choice);

									if (choice == 1)
									{
										//Victory!
										puts("You open the door and are blinded by light, as your vision returns you realize you are in the middle of nowhere in the desert, and the door magically dissapears");
										puts("You escaped, but now what?");
										puts("Congrats you finished the game. Thank you for playing!");
										choice = 99;
										break;
									}
									else if (choice == 2)
									{
										puts("I'm not sure why you chose this, but you turn around and jump into the pit, you are never seen again....");
										puts("Game Over...");
										choice = 99;
										break;
									}
								}
								else if (choice == 2)
								{
									puts("You write down the ancient runes of water onto the page.");
									puts("the scroll glows a conforting blue color, suddenly your hands feel damp, you can now use this on the door.");
									puts("You ready yourself and shoot a powerful stream of water on the vines.");
									puts("You stare at the vines as they grow greener and stronger from the water, the vines then grow at a rapid rate engulfing the narrow walkway that you stand on.");
									puts("You find yourself losing balance on the decreasing surface, eventually falling into the pit...");
									puts("You are never seen again...");
									puts("Game Over");
									choice = 99;
									break;
								}
								else if (choice == 3)
								{
									puts("You write the ancient rune of earth.");
									puts("suddenly the scroll glows emerald green, as your hands begin to feel one with the earth, you can use this on the door.");
									puts("You ground yourself, and use your new powers on the vines.");
									puts("To your suprise, the earth spell you wrote only makes the vines stronger, so much so that they begin to grow wildly out of control!");
									puts("The vines begin to take up most of the surface you stand on...");
									puts("You find yourself losing balance on the decreasing space, eventually falling into the pit...");
									puts("You are never seen again...");
									puts("Game Over");
									choice = 99;
									break;
								}
							}
							else if (choice == 2)
							{
								puts("you turn your attention to the chest, you pull out the key and unlock the chest, inside you find a scroll which reads:");
								puts("write a spell and this scroll will grant you power...");
								puts("Unfortunately you only studied one year of spellcasting in highschool and the only three spells you remember from back then are:");
								puts("1. fire");
								puts("2. water");
								puts("3. earth");
								puts("What will you write:");
								scanf("%d", &choice);
								if (choice == 1)
								{
									puts("you write the ancient runes onto the page.");
									puts("The scroll flashes bright red with fiery power, suddenly your hands begin to feel hot, when suddenly they light ablaze! with this power you can shoot fire out of your hand!");
									puts("You strike an agressive pose and engulf the vine covered door in flames.");
									puts("As the fire and smoke subside, the door sits ajar with a light shining through.");
									puts("What will you do:");
									puts("1. walk through the door");
									puts("2. Turn around and jump into the pit");
									scanf("%d", &choice);

									if (choice == 1)
									{
										//Victory!
										puts("You open the door and are blinded by light, as your vision returns you realize you are in the middle of nowhere in the desert, and the door magically dissapears");
										puts("You escaped, but now what?");
										puts("Congrats you finished the game. Thank you for playing!");
										choice = 99;
										break;
									}
									else if (choice == 2)
									{
										puts("I'm not sure why you chose this, but you turn around and jump into the pit, you are never seen again....");
										puts("Game Over...");
										choice = 99;
										break;
									}
								}
								else if (choice == 2)
								{
									puts("You write down the ancient runes of water onto the page.");
									puts("the scroll glows a conforting blue color, suddenly your hands feel damp, you can now use this on the door.");
									puts("You ready yourself and shoot a powerful stream of water on the vines.");
									puts("You stare at the vines as they grow greener and stronger from the water, the vines then grow at a rapid rate engulfing the narrow walkway that you stand on.");
									puts("You find yourself losing balance on the decreasing surface, eventually falling into the pit...");
									puts("You are never seen again...");
									puts("Game Over");
									choice = 99;
									break;
								}
								else if (choice == 3)
								{
									puts("You write the ancient rune of earth.");
									puts("suddenly the scroll glows emerald green, as your hands begin to feel one with the earth, you can use this on the door.");
									puts("You ground yourself, and use your new powers on the vines.");
									puts("To your suprise, the earth spell you wrote only makes the vines stronger, so much so that they begin to grow wildly out of control!");
									puts("The vines begin to take up most of the surface you stand on...");
									puts("You find yourself losing balance on the decreasing space, eventually falling into the pit...");
									puts("You are never seen again...");
									puts("Game Over");
									choice = 99;
									break;
								}
							}
						}
					}
					choice = 99;
					break;
				}
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
						puts("Welcome to room 32 where I already know what is on your mind.");
						puts("I bet I can guess what number your thinking of with just a couple of instructions.");
						puts("Up for the challenge? y/n");
						scanf("%c", &decision);
						
						if(decision == 'y')
						{
							puts("Pick a number, any number and make sure you remember that number.");
							puts("Now double the number.");
							puts("Now add 10 to the new number.");
							puts("Divide it by 2");
							puts("Now subtract that by the original number.");
							puts("Your new number is now 5");
							break;
						}
						else if(decision == 'n')
							{
								puts("I see you're in no mood for a little fun");
								break;
							}
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

void extraCredit(void)
{
	printf("%s", "You have gained extra credit!\nIf you beat me in a duel!\n");

	printf("%s", "DUEL MECHANICS WILL BE IMPLEMENTED IN THE NEXT UPDATE\n\n");
}


void ignoreExtra(void)
{
	int counter = 0;

	printf("%s", "Take the extra credit, I'm not gonna ask you again!\n");

	int choice;
	printf("%s", "Please type 1 for extra credit\n or you will be kicked out of room THREE!\n");
	scanf("%d", &choice);
	
	switch(choice)
	{
		case 1:
			extraCredit();
			break;

		defualt:
			printf("%s", "You have been kicked!...LEAVE THIS ROOM AT ONCE!\n");
			break;

	}
}


int choice1(int number)
{
	int answer = 0;
	int guess = 0;

	printf(" %d + (%d^2) - (%d) = ?", number, 8, 6);
	scanf(" %d", &guess);

	answer = (number + (pow(8, 2)) - 6);
	
	if(answer == guess)
	{
		puts("\nYou have guessed the anwer correctly. You may get the map to get out of the mansion...Good Job!\n");
		return EXIT_SUCCESS;
	}
	else
	{
		printf("\nThe answer was %d. You guessed it wrong. You have failed...\n", answer);
		return EXIT_SUCCESS;
	}
}

int choice2(char *ptr)
{
	int size = 40, i, length = 0;

 	char copy[size];
	char guess[size];

	strcpy(copy, ptr);

	puts("Please enter your guess(one chance):");
	scanf(" %s", guess);
	
	length = strlen(guess);

	for(i = 0; i < length;i++)
	{
		if(isupper(guess[i]))
		{
			guess[i] = tolower(guess[i]);
		}
	}
	

	if(!strcmp(copy, guess))
	{
		puts("Guessed correctly!\n");
	}
	else
	{
		puts("Guess was incorrect!\n");
	}
	
	return EXIT_SUCCESS;

}

int choice3(int number1)
{
	int answer = 0;

	printf("magic number is : %d\n", number1);	
	
	printf("10 + magic number = %d\n", (10 + number1));
	printf("5 * magic number  = %d\n", (5 * number1));
	printf("20 - magic number = %d\n", (20 - number1));
	
	printf("What is your guess? ");
	scanf(" %d", &answer);
	
	if(answer == number1)
	{
	puts("You guessed it correctly!"); 
	return EXIT_SUCCESS;
	}
	else
	{
	puts("You guessed it wrong!");
	return EXIT_SUCCESS;
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

