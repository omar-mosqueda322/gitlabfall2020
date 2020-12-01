//Contributors
//G. Poppe
//Shane Cortez
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

