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

