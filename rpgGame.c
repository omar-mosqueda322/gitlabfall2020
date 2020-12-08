//Contributors
//G. Poppe
//Shane Cortez
//Michael VanCleave-Lopez

//Sergio Molina

//Richmond Laureta

#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

///////////Shanes room methods///////////

void shanesFileWriter(int choice);

///////////Shanes room methods end/////////

void extraCredit(void);
void ignoreExtra(void);

int choice1(int number);
int choice2(char *ptr);
int choice3(int number1);
int choice4(int *ptr1);
int choice5(void);

void gameRules(); //function to explain rules of room 12 game
void gameCraps(); //function to run room 12 game

char prompt(void);
void randomFill(int *ptr);
void room27Output(int z);

void oddDeviceShenanigans(void);  // Room #7
int drunkBehavior(void);  // Room #7

//Room 9 Functions

void bBlue(void);

void bCyan(void);

void bRed(void);

void bYellow(void);

void bGreen(void);

void reset(void);

void displayInputs(int c);

void displayStats(int c, int s);

void woman(void);

void congratulations(void);

// End of Room 9 Functions


void roomPrompt(int* userChoice);
void gorillaRoom(int* bananaAmount, int* orangeAmount);
void drawPicture(void);
void caseRandomizer(char *name, int *bananaAmount, int *orangeAmount);

void problem1(int math);
void problem2 (char *ptr);
int flip();


void oputmm21(int d1, int d2, int d3, int d4, int d5, int d6, int d7, int d8, int d9, int d10);
int rollsmm21();
int rollmm21();


void weaponPower(int p); //room 25 for RICHMOND LAURETA

void bullets(int arr[]); //ROOM 32 OMAR MOSQUEDA
void bandit(void);


int main(void)
{
	int x,y,z,i,h,g,k,choice=0;
	char decision; 
	char gun;
	char name[256];
	int boxNum=0;
	int arr[6];

	int input,rando,rando2,score = 0,counter = 0;
	double timetaken;
	time_t begin,end;
	int oneusage = 0;

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
				srand(time(NULL));

				int length = 0, num = 0, magicNum = 0;
				char word[40] = "sacramento";
				char *ptr;
				ptr = word;

				int array[6] = {0};
				
				for(i = 0; i < 6; i++)
				{
					array[i] = 1 + rand() % 10;		
				}

				int *numptr;

				numptr = array;
				
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
				puts("You have survived the first part of your adventure..the Drowning.");
				puts("You are in a dark room and see a small blue light in the middle of the room on top of the table.");
				puts("You get close to it and realize that it is a laptop. You found a way to get out of the room.");
				puts("But only way you can access the laptop is solving one of the 5 choices.");
				puts("You have 5 choices to make in order to escape this horror adventure. \n");

				printf(	"1. You have to solve a math problem for survival. \n"
					"2. You have to guess the word for survival. \n"
					"3. You have to find the magic number for survival. \n"
					"4. Find the sum of a random integer array. \n"
					"5. It's a surprise!. \n");

				while(choice != 99)
				{
					puts("Make a choice(99 to quit): ");
					scanf(" %d", &choice);

					switch(choice)
					{
						case 1:
						{
						puts("You have chosen to solve the math problem. Don't forget you have one chance. Now choose a number between 1-10:");
						scanf(" %d", &num);
						choice1(num);
						return EXIT_SUCCESS;
						break;
						}
				
						case 2:
						{
						puts("You have chosen to guess the word. What is the capital of California?");
						choice2(ptr);
						return EXIT_SUCCESS;
						break;
						}
			
						case 3:
						{
						puts("Enter the magic number(between 1 - 20) by solving the  math problems:");
						magicNum = 1 + rand() % 20;
						choice3(magicNum);
						return EXIT_SUCCESS; 	
						break;
						}

						case 4:
						{
						puts("You have chosen to calculate the average:");
						choice4(numptr);
						return EXIT_SUCCESS;			
						break;
						}

						case 5:
						{
						puts("This was the wrong choice to be made. Now you have ended up in a room with nowhere to go....");
						choice5();							
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
							int decision4;
                                                        char lowerName4[20];
                                                        char tempLowerName4[20];
                                        /*              puts("*****************************************************************************************");
                                                        puts("In your adventure please make sure to enter your decision exactly as stated in the 'quote'.");
                                                        puts("\n");
                                        */              for(i=0; i<20; i++)
                                                        {
                                                                lowerName4[i] = tolower(name[i]);
                                                        }
                                                        puts("You open the door and find two more doors.");
                                                        puts("The left one is covered in dirt,moss, and other unknown substances.");
                                                        puts("The right one is sparkling clean and there seems to be white light leaking out from under.");
                                                        puts("Do you \n 1. go left? \n 2. go right?\n");
                                                        scanf("%d", &decision4);
                                                        if(decision4 == 1)
                                                        {
                                                                printf("\nYou open the door slowly, scared of what could be behind it. But to your surprise the door leads to a clean school classroom. You sigh in relief of what could have happen. But then you hear a scream of pain in the hallway.\n Do you\n 1. check it out?\n 2. hide in the classroom?\n\n");
                                                                scanf("%d", &decision4);
                                                                if(decision4 == 1)
                                                                {
                                                                        printf("\nYou walk over to the door connecting to the hallway.You open it and step a foot into the hallway. It seems clear until you look to the right see a man holding a woman up by her hair at the end of hallway.\n Do you\n 1. run to the left to try to escape the man?\n 2. approach him to try to save the woman?\n\n");
                                                                        scanf("%d", &decision4);
                                                                        if(decision4 == 1)
                                                                        {
                                                                                printf("\nYou run as quickly as can for the door hoping it's an exit. The man notices you and drops the women and starts chasing you. Luckily, the door does lead to outside but it appears you are in some kind of forest. There is a car running and long dirt road that you can't see the end of.\n Do you\n 1. get into the car?\n 2. do you hide on the side of the door and try to ambush him?\n\n");
                                                                                scanf("%d", &decision4);
                                                                                if(decision4 == 1)
                                                                                {
                                                                                        printf("\nYou get into the car. Put it into drive and make a U-turn for the road. The man exits the building and begins chasing the car. It's speeding up and you left him in the dust. It seems all clear but he starts shooting at you. You swerve left and right trying to dodge his bullets. You feel your shoulder burning and you look down at and notice you've been hit. You continue driving on the road and it finally leads to a paved road. You have been driving for a couple of miles now and tried your best to help your wound but you lost a lot of blood. You see a gas station in the distance but you still have half the tank left.\n Do you\n 1. stop at the gas station for help?\n 2. do you keep driving hoping you can get to a city?\n\n");
                                                                                        scanf("%d", &decision4);
                                                                                        if(decision4 == 1)
                                                                                        {
                                                                                                printf("\nYou pull over into the old gas station and notice two cars are parked infront of it. You head inside hoping to get some help. The cashier is minding his business as you enter. You tell him about your situation and he has a confused look on his face. \"Here you can use the phone.\" You pick up the phone. \n\n");
                                                                                                int phoneNumberGas4 = 911;
                                                                                                int phoneNumberGasDial4;
                                                                                        //      scanf("%d", phoneNumberGasDial4);

                                                                                                while(phoneNumberGasDial4 != phoneNumberGas4)
                                                                                                {
                                                                                                        printf("\nWho do you dial?\n");
                                                                                                        printf("Perhaps the cops?\n");
                                                                                                        scanf("%d", &phoneNumberGasDial4);
                                                                                                }
                                                                                        //      while(phoneNumberGasDial4 != phoneNumberGas4);

                                                                                                printf("\nIt rings for a couple of seconds . . . until a woman picks and asks \"911, What's your emergency?\". You tell her your situation and she tells you stay put since officers are on their way. The cashier asks if you want anything to eat or drink. But you decline, so he offers that you can rest in the breakroom while you wait for the police to come. You agree so he leads you to the back and you sit down on a small dirty couch. You take a sigh of relief knowing that everything is going to be okay but then you get hit in the head from behind and fall down. Everything is a blur but you are being tied to a chair. You then black out. You are awaken with cold water being splashed on you. You are tied to a chair in a dark room with two other people. They look as confused as you are and are struggling to unbound their hands. You see the cashier from earlier walking around the three of you. He says \"Let's play a small game, here is a revolver with three bullets. I'm going to give you guys 3 tries to gues a number 1 through 10 and if you fail well then you can figure out what's going to happen.\"\n\n");
                                                                                               printf("\nAll three of you guys are pleading for each others life but he responds \"Guess now or I'll just shoot you all.\"\n\n");
                                                                                               int gasNumberAnswer = 7;
                                                                                               int gasNumberGuess;
                                                                                               int gasTries = 0;
                                                                                               int gasTriesLimit =0;
                                                                                              // printf("What do you guys guess?\n");
                                                                                              // scanf("%d", &gasNumberGuess);
                                                                                              // while(gasNumberGuess != gasNumberAnswer)
                                                                                               while(gasNumberGuess != gasNumberAnswer && gasTriesLimit == 0)
                                                                                               {
                                                                                                       if(gasTries < 3)
                                                                                                       {
                                                                                                               printf("\nWhat do you guys guess?\n");
                                                                                                               scanf("%d", &gasNumberGuess);
                                                                                                               gasTries++;
                                                                                                               printf("You have %d guesses left.\n", 3 - gasTries);
                                                                                                       }
                                                                                                       else
                                                                                                               gasTriesLimit = 1;

                                                                                                      // printf("WRONG. GUESS AGAIN. \n");
                                                                                                      // printf("You have %d guesses left.\n", 3 - gasTries);
                                                                                               }

                                                                                                       if(gasTriesLimit != 0)
                                                                                                       {
                                                                                                               printf("\nThe cashier picks up his gun and shoots you all.\n\n GAME OVER.\n\n");
                                                                                                               exit(1);
                                                                                                       }
                                                                                                       else
                                                                                                       {
                                                                                                               printf("\nHe says \"Wow I'm surprised you guys actually got it. But did you really think I would let you off?\" He picks up his gun and cocks it back. You close your eyes awaiting death. But the sirens of a police car are heard outside. The cashier puts away his gun and whispers \"Y'all better not make any noise.\" He then goes through a door that leads to the main room of the gas station. You hear converstation going on between the police officers and cashier. You start screaming for help and then you can hear the cashier and police officers start raising their voices. A couple of shots go off. The gas station is dead silent. \n Then the two police officers appear through the door but seems wounded. They untie everyone and escort them outside. \n Backup is arriving and everything seems to finally be okay. \n\n You survived.\n\n");
                                                                                                               exit(1);
                                                                                                       }



                                                                                        }
                                                                                        else if(decision4 == 2)
                                                                                        {
                                                                                                printf("\nYou drive past the gas station and continue driving into the unknown. Quite some time has passed but in the horizon you can see buildings. You are happy knowing you are almost in civilization. *POP* Your front passenger tire has blew out. You pull over to the side to try to fix it. You step out of the car and notice a cop car is pulling off the highway behind you. Maybe he can help. You wave towards the officers and try to signal that the tire blew out. You see the police man talking into his radio.\n\nHe steps out of his car with gun pulled and aimed at you. You have a confused look on your face and try to ask the officer \"What's wrong?\" But he doesn't give you an answer. \"Get on the ground\" he yells. You get on the ground with fear. He walks slowly towards you and handcuffs you.\n\n\"We got him!\" he says into his radio. Confusion takes over you as you don't know what he is talking about. You try to explain your situation to him but he tells you \"Shutup and be silent.\" He walks to the driver seat and pops open the trunk. He looks into the trunk with disgust.\n\nYou try to catch a peek into the trunk but it's out of sight. \"We got a body and some weapons\" he says into his radio.\n\n Do you\n 1. stay on the ground?\n 2. try to get up and runaway?\n\n");
                                                                                                scanf("%d", &decision4);
                                                                                                if(decision4 == 1)
                                                                                                {
                                                                                                        printf("\nYou remain on the floor as more officers come to the area. You are found guilty of 1st degree murder due to the evidence found in the car and sentenced to death.\n\nThe last past weeks have been hell, sitting in a concrete room waiting for your death. Nothing you told them they would believe.\n\nTomorrow, is your last day.\n\nGAME OVER.\n\n");
                                                                                                          exit(1);

                                                        }
                                                                                                else if(decision4 == 2)
                                                                                                {
                                                                                                        printf("\nYou get an adrenaline rush, wiggle yourself up onto two feet and run full speed at the officer. He hits his head on the trunk and knocks him out. You find the handcuff keys and take off the handcuffs. You run off into the forest. You see buildings nearby after a couple of minutes of running. You made it into the city.\n\nYou survived.\n\n");
                                                                                                        exit(1);
                                                                                                }
                                                                                        }
                                                                                }
                                                                                else if(decision4 == 2)
                                                                                {
                                                                                        printf("\nYou stand to the side of the door. Getting ready to suprise attack the guy. He runs out a little but is confused on where you went. You lunge at him and tackle him to the floor. He is a equal match in strength and you are struggling to keep him down. You punch him in the face. He begins to try to reach for his hip and you notice he has a gun. You quickly try to stop his hand from grabbing it but it's too late, it's in his hands. You try your best to keep the gun pointed to the side but he gets a sudden burst of strength and overwhlems you. The gun is pointed at your face. BANG!\n\n");
                                                                                        printf("\nGAME OVER.\n\n");
                                                                                        exit(1);

                                                                //                      return EXIT_SUCCESS;
                                                                                }
                                                                        }
                                                                        else if(decision4 == 2)
                                                                        {
                                                                                printf("\n\"Let go of her!\" you yell. The man throws her head to the floor. \"Who even are you?\" he snarls. \"Just someone that doesn't want to see someone get hurt\" you respond. \"It's a little too late for that unless you want to reverse time and save all the people that came before her\" he says. \"What do you want in exchange for her life?\" you ask him. \"Your life\" he demands. The woman has now began to regain consciousness. Frighten is wrtitten all over her face. You think for a couple of seconds about the decision.\n\n Do you\n 1. give up your life for her's?\n 2. let him take her life?\n\n");
                                                                                scanf("%d", &decision4);
                                                                                if(decision4 == 1)
                                                                                {
                                                                                        printf("\n\"Wow how brave of you\" he chuckles. He picks her up and kicks her towards you. \"Scram! Tell anyone this and I'll hunt your whole linage down\" he screams. You walk towards him getting ready for your death. The woman is on the ground frozen in fear. You arrive infront of the man. You feel the cold metal of the pistol on your head. \"Your final words?\" he chuckles. You close your eyes embracing death knowing that you saved someone. You take a long breath in. The gun shot rings through the hallway. A body hits the floor. You open your eyes and see that the woman tackled the man down. They are now fighting each other strength to control the gun. You quickly jump in to help her. With her courage the both of you were able to take the gun off of the man. She takes the gun and shoots him once in each leg. The both of you leave the school out o breath. His car is parked in front and is running. The woman and you drive out of there to get help.\n\nYou survived.\n\n ");
                                                                                        exit(1);
                                                                                }
                                                                                else if(decision4 == 2)
                                                                                {
                                                                                        printf("\n\"I figured you would, who would throw their life away for a nobody\" he says. He shoots two bullets in her head and then points it at you. \"You really thought you would live through this?\" he ask. You hear the sound of the gun and then you fade into nothingness.\n\nGAME OVER.\n\n");
                                                                                        exit(1);
                                                                                }

                                                                        }
                                                                }
                                                                else if(decision4 == 2)
                                                                {
                                                                        printf("\nYou hide in the back of the classroom behind some desk. NOOO PLEASE DONT is heard from the hallway and then there is silence. You hear heavy footsteps from the hallway. You get ready for the situation if the door would swing open but it doesn't. The heavy footsteps get more distant then you hear the slam of a door.\n\n Do you\n 1. go out into the hallway since you believe it's safe?\n 2. do you continue to hide in the classroom.\n\n");
                                                                        scanf("%d", &decision4);
                                                                        if(decision4 == 1)
                                                                        {
                                                                                printf("\nYou walk into the hallway and see woman laying on the floor at the end of it. You run to her. You lay her onto her back and see that she is already dead. You immediately run towards the entrance of the school hoping to catch the person who did this to her. The door to the school is wide open. You peak out and see the man doing something in his trunk. His back is facing you. You decide to ambush him. You sneak up slowly and grab a rock while on your way to him. You swing with fury at his head. He hits the floor and blood begins to pour out from his head. You search his body for a phone and find one. You call 911. It takes awhile but they finally arrive.\n\nYou survived.\n\n");
                                                                                exit(1);
                                                                        }
                                                                        else if(decision4 == 2)
                                                                        {
                                                                                printf("\nYou decide to hide a bit more. Quite some time has passed now and it's getting dark. You decide it's time to step out and see what has happened. A couple of wolves are hunched over what use to be a body. You step on a branch and make a noise that alerts the wolves. They snarl at you and creep slowly towards you. You start walking backwards, keeping your eye on them. You stumble over some debris and fall down. The wolves jump at you and start picking at you. You are their dinner tonight.\n\nGAME OVER.\n\n");
                                                                                exit(1);
                                                                        }
                                                                }

                                                        }
                                                        else if(decision4 == 2)
                                                        {
                                                                printf("\nYou open the door hoping it will take you to back to where you came from. As you open the door you are greeted with angelic voices singing. It's so white you can't even see a couple of feet in front of you. You take a few steps out and it all changes. Fire and stone replace the white all around. The angelic voices are replaced with screaming. YOU FOOL! is heard in the distance.\n Do you\n 1. venture into the dark stone path infront of you?\n 2. do you stay where you are at?\n\n");
                                                                scanf("%d", &decision4);
                                                                if(decision4 == 1)
                                                                {
                                                                        printf("\nThe dark stone path is lit with fire scattered around it. Screaming and various noises can be heard in the distance but they seem to get closer with ever step taken. After about 10 mins of walking you arrive at a gate that reads WELCOME. It is wide open.\n\n Do you\n 1. enter?\n 2. do you go off the path and trying to find a different route?\n\n");
                                                                        scanf("%d", &decision4);
                                                                        if(decision4 == 1)
                                                                        {
                                                                                printf("\nYou see a huge castle infront of you. You walk towards it cautiously and feel like something is pulling you towards it. You get to the closed doors and knock. A man wearing a hoodie and sweatpants opens the door. \"Hello, would you like to come in?\" You agree and he guides you to the room on the left. He motions towards a big chair. You sit down and he sits in another chair across from you. \"What brings you here?\" he ask. \"I opened a door and was brought here\"you respond. \"Very well, I think I can get you back to where you came from\" he tells you. \"I would like that, how can you do that?\" you ask. \"Well, how lucky are you?\" he ask. \"Huh?\" you respond. \"Roll this dice\" he tells you. He hands you a black metal dice.\n\n Do you\n 1. roll the dice?\n 2. tell him no?\n\n" );
                                                                                scanf("%d", &decision4);
                                                                                if(decision4 == 1)
                                                                                {
                                                                                        printf("\n\"Roll me a 6 in 6 tries and I'll return you to your world. But if you don't then I guess you will find out what happens. The odds are in your favor\" he says.\n\n");
                                                                                        int devilDiceRoll4;
                                                                                        int devilDiceRollTry;

                                                                                        while(devilDiceRoll4 != 6 || devilDiceRollTry > 6)
                                                                                        {
                                                                                        //for(i=0; i<6; i++)
                                                                                        //{
                                                                                                printf("\nYou shake the die in your hand and throw it on the table\n");
                                                                                                devilDiceRoll4 = rand()%6 + 1;
                                                                                                devilDiceRollTry++;
                                                                                                switch(devilDiceRoll4)
                                                                                                {
                                                                                                        case 1:
                                                                                                                printf("\nYou rolled a 1.\n\"Try your luck again. Come on it's not that hard just roll a 6.\"\n");
                                                                                                                break;
                                                                                                        case 2:
                                                                                                                printf("\nYou rolled a 2\n\"Well maybe get two more twos and we got a deal.\"\n");
                                                                                                                break;
                                                                                                        case 3:
                                                                                                                printf("\nYou rolled a 3\n\"Halfway there.\"\n");
                                                                                                                break;
                                                                                                        case 4:
                                                                                                                printf("\nYou rolled a 4\n\"Yup that's a four.\"");
                                                                                                                break;
                                                                                                        case 5:
                                                                                                                printf("\nYou rolled a 5\n\"Damn, your luck sucks.\"\n");
                                                                                                                break;
                                                                                                        case 6:
                                                                                                                printf("\nYou rolled a 6\n\"Wow, you actually did it.\"");
                                                                                                                break;
                                                                                                }
                                                                                        //}
                                                                                        }
                                                                                        if(devilDiceRoll4 == 6)
                                                                                        {
                                                                                                printf("\n\"Well, a deal is a deal. I guess you could make a bet with the devil. Have fun in the other hell.\" he says.\n\nYou survived.\n\n");
                                                                                                exit(1);
                                                                                        }
                                                                                        else
                                                                                        {
                                                                                                printf("\n\"Well, a deal is a deal. Take him away\" he commands to the air. A guard then appears out of thin air and drags you out of the house and to a treadmill where you will have to run for eternity.\n\nGAME OVER.\n\n");
                                                                                                exit(1);
                                                                                        }
                                                                                }
                                                                                else if(decision4 == 2)
                                                                                {
                                                                                        printf("\n\"Hmmm well if you do not want to then we shall not. Take him away\" he commmands to the air. A guard then appears out of thin air and drags you out of the house and to a treadmill where you will have to run for eternity.\n\nGAME OVER.\n\n");
                                                                                }
                                                                        }
                                                                        else if(decision4 == 2)
                                                                        {
                                                                                printf("\nYou decide to go off the path into the unknown. You walk cautiously into the darkness. The screaming is louder now. A very large person appears infront of you out of the darkness. You are frozen in terror as he towers over you. You decide to try to make a run for it but he grabs your arm before you can make your second step. He lifts you in the air by your arm. He begins to tear you limb by limb. You scream for help but no one is there to save you. You slowly start to fade out of conscious.\n\n");
                                                                                printf("\nGAME OVER.\n");
                                                                                exit(1);
                                                                //              return EXIT_SUCCESS;
                                                                        }
                                                                }
                                                                else if(decision4 == 2)
                                                                {
                                                                        printf("\nYou decide to stay and sit in the area you arrived. Quite some time has passed and you are feeling exhausted. You decide to close your eyes and catch some sleep and hopefully you will have a solution to this when you awake.\n\n");
                                                                        printf("\n\"*psssst* Wake up\" someone says in a whisper. You spring up, ready to take on whatever is around. You see a small person hunched over to the right of you. His face is slightly mangled and his clothes are tattered. \"Sorry, did not mean to frighten you.\" it says. \"Ah yes I apolgize. My name is Gevin\" it tells you. \"What brings you here?\" Gevin asks? \"A door. Not sure how it leads here but I just want to go back.\" you respond. \"Ahhhh-ha, another doorman. Well good thing I got the experience but it's quite the journey. Let's get going\" he tells you. Gevin motions to follow him as he hops forward. You follow him.\n\nYou have been following him for quite some time. He suddenly stops and turns around and tells you to be quiet. You see two large figures in the distance. They are guarding a portal that sparks with electricity every second.\n\n\"We aregoing to have to try to distract them and then you will into the portal which will get you back where you came from or some other place. I'm not sure I have not been through it.\" Gevin tells you. \"Well how are we going to distract them?\" you ask. \"Well I do not know but I got some stuff in my sack that can help\" he says as he opens a sack the size of a hand. He begins reaching in and starts pulling out weapons and various things. \"Pick your poison but do not pick the poison\" he tells you.\n\n");
                                                                        printf("\n Do you\n 1. take the wood stick that has a crystal on the end of it?\n 2. take the sword and shield?\n 3. take the crystal clear ball?\n 4. take the bg rock?\n 5. take the poison\n 6. take the staff with a huge eye\n 7. throw Gevin out in the open and use him for distraction?\n\n");
                                                                        scanf("%d", &decision4);
                                                                        if(decision4 == 1)
                                                                        {
                                                                                printf("\nYou grab the wood stick with a crystal. \"That one shoots fire\" he says. You take aim and shoot some fire on the right side front of the guards. They are not bothered by it at all. \"Maybe shoot them\" he recommends. You aim at the guards and shoot the fire at them. They are not affected at all. But they notice you and start running at you. \"Welp, it's over for us\" he says. The guards come and rips the both of you limb by limb.\n\nGAME OVER.\n\n");
                                                                                exit(1);
                                                                        }
                                                                        else if(decision4 == 2)
                                                                        {
                                                                                printf("\nYou grab the sword and shield. Gevin somehow pulls another one out of his bag equips himself with it. You nod at him, ready to charge at them. You scream \"GOOOO!\" and the both of you run full speed at the guards. There is a spark on the sword and shield and it transform Gevin and you into large warriors that easily tower over the guards. The guards prepare for the attack but yourguy's strength is too strong for them. You slice them in half with no effort. You can now enter the portal.\n\nYou survived.\n\n");
                                                                                exit(1);
                                                                        }
                                                                        else if(decision4 == 3)
                                                                        {
                                                                                printf("\nYou grab the crystal clear ball. \"Just throw it and watch the show\" says Gevin. You throw the ball as far you can. It cracks on impact and a Chimera appears out of thin air. The guards are frightened by the creature but they run straight at it hoping to take it down. The portal is wide open to enter. Gevin says \"Farewell, doorman.\" You run to the portal while the guards are struggling to keep up with the Chimera\n\nYou survived.\n\n");
                                                                                exit(1);
                                                                        }
                                                                        else if(decision4 == 4)
                                                                        {
                                                                                printf("\nYou grab the big rock. \"Well, goodluck with that\" he says. You throw it but it does not land that far infront of you. The guards notice that you threw the rock and begin running at you. \"Yeah, someone told me it did something. I guess they lied\" says Gevin. The guards grab the both of you and throw you into an eternal fire pit, where you will burn forever.\n\nGAME OVER.\n\n");
                                                                                exit(1);
                                                                        }
                                                                        else if(decision4 == 5)
                                                                        {
                                                                                printf("\nYou grab the poison. \"Wait! Hold on.\" he tries to say. But you begin to melt due to coming in contact with the poison. You are now a puddle of liquid.\n\nGAME OVER.\n\n");
                                                                                exit(1);
                                                                        }
                                                                        else if(decision4 == 6)
                                                                        {
                                                                                printf("\nYou grab the staff with a huge eye. \"Oh yeah that is a good one, hit the ground with it\" he tells you. You hit the ground with the staff and bubble forms around the both of you. You begin walking towards the guards and they notice and charge to attack you. They blow up instantly upon touching the bubble. \"This bubble pops you\" he says. You say your goodbye and enter through the portal.\n\nYou survived.\n\n");
                                                                                exit(1);
                                                                        }
                                                                        else if(decision4 == 7)
                                                                        {
                                                                                printf("\nYou grab Gevin and throw him out in the open. \"Come on that is not cool!\" he screams. The guards charge at him. \"Damn it\" is his last words. The guards are distracted turning Gevin into mush, so you enter through the portal.\n\nYou survived.\n\n");
                                                                                exit(1);
                                                                        }
                                                                }
							}	
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

					/* Edwin Figueroa (RM #7)
					 * 
					 * Scoped the variables locally to avoid conflicts with merge requests.
					 * I anticipated the potential other students would add/remove/revise key
					 * variables.
					 *	
					 * I did however add the srand(time(NULL)) function in main.
					*/
				
					int enteredRoom = 0;
					int chestLocked = 0; // 0 is locked, 1 is open.
					char chestInventory[4][25] = {"a dead cricket", "an odd device", "a broken compass"};
					char playerInventory[4][25] = {"", "", "", ""};
					int count = 0;  
					char key[10] = {"an old key"};
					int bottle = 3;
					int arrLength = 0;
					int oddDevice = 0;

					while(oddDevice != 1)
					{ 
							if(enteredRoom == 0) {
								puts("");
								puts("You quickly grab the handle and open the 7th door.  The water causes you to fall and forces you into the room. You immediately get to your feet and grab the door nob from the inside and turn it. It's jammed!  Clearly the water must be forcing it closed.");
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
							else if(bottle > 0) { 
								puts("2. Have another swig of that bottle on the small table.  Hell, you don't even notice the book right next to it at this point.");
							}
							else if (bottle == 0) {
								puts("2. Approach the small table and examine the book.");
							}

							puts("3. Take a nap.");

							puts("***********************************************");
							puts("What do you choose?");

							scanf("%d",&choice);
							if(choice == 1)
							{
								if(chestLocked == 0) {
									puts("");
									puts("You walk over to the dark end of the room and approach the chest near the foot of the bed.  It is made mostly of oak with broad iron bands reinforcing it.  You jiggle the clasp but it appears to be locked.");
									puts("");
								}
								else {
									
									while(choice != 5) {
										count = 0;
										puts("");
										puts("You unlock the chest with the old key and find the following within:");
										puts("");
										puts("***********************************************");
										for(count; count < 3; count++) {
										printf("%d. %s \n", count +1, chestInventory[count]);
										}

										puts("5. Close the chest.");
										puts("Select an item in the chest to add it to your inventory, or simply close the chest [5].");

										count = 0;

										puts("");
										puts("You have the following items in your personal inventory:");
										for(count; count < 4; count++) {
											printf(">  %s \n", playerInventory[count]);
										}
										puts("***********************************************");
										
										scanf("%d",&choice);

										count = 0;
										
										if(choice == 1) {
											arrLength = strlen(chestInventory[0]);
											for(count; count < arrLength; count++) {
												playerInventory[0][count] = chestInventory[0][count];
												chestInventory[0][count] = ' ';
											}
										}
										else if(choice == 2) {
											arrLength = strlen(chestInventory[1]);
											for(count; count < arrLength; count++) {
												playerInventory[1][count] = chestInventory[1][count];
												chestInventory[1][count] = ' ';
											}
											
											oddDeviceShenanigans();
											oddDevice = 1;
											break;
										}
										else if(choice == 3) {
											arrLength = strlen(chestInventory[2]);
											for(count; count < arrLength; count++) {
												playerInventory[2][count] = chestInventory[2][count];
												chestInventory[2][count] = ' ';
											}
										}
									}
									
																	}
							}
							else if(choice == 2)
							{
								if(bottle == 3) {
									puts("");
									puts("You approach the small table near the bed and pick up the book.  It's a bit dusty with faded red lettering accross the cover.  The title of the book is, 'Diary'.");
									puts("");
									puts("You open the book, and sift through the crumpled pages.  It appears to be giberish full of what looks like complex equations and symbols.  You turn to the last page and you see a sketch, maybe a schematic, of an odd looking device.  At the header, the page reads, 'Odd Device!'.  In the print below is a cryptic message:");
									puts("");
									puts("'Only this 'odd device' will get you out of here.  But there is huge risk in using it, so I locked it away.'");
									puts("");
									puts("After reading the book, you grab the bottle of rum, pop the cork and take a huge swig!  Cuz, why not.");
									puts("");
								}

								else {
									puts("");
								}

								if (chestLocked == 1) {
									puts("");
									puts("Other than the old book you've already read, there's nothing else here of interest.");
									puts("");
								}

								else {
									puts("");
								}
					
								// Random drunk behavior!
								x = drunkBehavior();

								if(bottle > 0) {
										
									if(bottle == 3) {
										puts("Ahhh! Good stuff.  You have a compelling desire for another drink.  Maybe you have a problem. Have another!");
										bottle--;
									}
									else if(bottle == 2) {
										puts("Mmm, this must be spiced rum.  You can't resist another drink.");
										bottle--;
									}
									else if(bottle == 1) {
										puts("That was good! *hiccup* Take another!");
										bottle--;
									}
									else {
										puts("The bottle is empty.");
									}
								}

								if (bottle != 0 && x <= 3) {

									puts("The booze is definately hitting you.");
									puts("");
									puts("You stuble around the room a bit...  *Now* it's a party!");

								}

								else if ((bottle != 0) && ((x == 4) || (x == 5) || (x == 6))) {

									puts("");
									puts("*hiccup* You dance around the room a bit, stumble to the floor.  You dust yourself off and begin singing a song.");
									puts("");
									puts("You contemplate your drinking problem.  BAH!  Take another swig!");
									puts("");

								}

								else if ((bottle != 0) && (x > 6)) {

									puts("");
									puts("Woah, you struggle to maintain your balance.  You begin to see double.  Hey wait, is that a second door?!?!");
									puts("");
									puts("Nah, it can't be...  You are seriously drunk.");
									puts("");

								}
									
								else if (bottle == 0) {

									puts("");
									puts("Damn!  The rum is powerful stuff.  You begin to feel dizzy.  Things begin to get really fuzzy, you mumble, 'barteeeender *hicuup* make it a double'.");
									puts("");
									puts("....a day passes....");
									puts("");
									puts("Your eyes slowly open.  Wow, what a headache!  Slowly things come into focus.  You realize you are laying on the floor near the side of the bed.  Under the bed you can see the empty bottle tipped over.  Something near it catches your eye.");
									puts("");
									puts("Next to the bottle you see a small rusted looking key.");
									puts("");

									bottle = 0;

									count = 0;
									arrLength = 10;
									for(count; count < arrLength; count++) {
										playerInventory[3][count] = key[count];
									}
									chestLocked = 1; //unlocked

								}
					
							}
							else if(choice == 3)
							{
								puts("");
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
					break;

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
							sleep(1);
							puts("A small control room of some sort.");	
							sleep(1);
							puts("Two doors on opposite ends of the room.");
							sleep(1);
							puts("The lights are dim, going off and on spontaneously.");
							sleep(1);
							puts("Several monitors broken and smashed in.");
							sleep(1);
							puts("You see a particular monitor that catches your eye.");
							sleep(1);
							woman();
							sleep(2);
							puts("!!!");
							sleep(1);
							puts("A young woman?");
							sleep(1);
							puts("Looks as if she's been in containment for a long time.");
							sleep(1);
							bYellow();
							puts("*SLAM*");
							reset();
							sleep(1);
							puts("A security door emerges and closes behind you.");
							sleep(1);
							puts("It's locked.");
							sleep(1);
							bRed();
							puts("\nEMERGENCY EMERGENCY");
							sleep(1);
							puts("BOMB HAS BEEN SET OFF");
							sleep(1);
							puts("WARNING EXTREMELY SENSITIVE!");
							sleep(2);
							reset();
							puts("Theres a giant piece of machinery with a big screen above.");
							sleep(2);
							puts("\t [ ] [2] [3] [4] [5] [6] [ / [8] [9]");
							sleep(2);
							puts("The 1 and 7 keys seem non functional.");
							sleep(2);
							puts("Theres a note next to the machine.");
							sleep(2);
							puts("Input 9 numbers, they must add to exactly 37.");
							sleep(3);
							bYellow();
							puts("You have 45 seconds.");
							reset();

							begin = time(NULL);

							while(counter < 9 )
							{
								scanf("%d",&choice);

								if(choice < 1 || choice > 9)
								{
									puts("That button doesn't exist.");
								}
								else
								{
									if(choice == 1)
									{
										if(oneusage == 0)
										{		
											rando = 29 + rand()%10;
											rando2 = 5 + rand()%30;
											rando = rando - rando2;
											bYellow();
											printf("%d\n",rando);
											score = rando;
											puts("The number is flashing on screen.");
											puts("Seems it replaced my current score.");
											counter++;
											displayInputs(counter);
											oneusage++;
											reset();
										}
										else
										{
											reset();
											puts("The [1] button appears to be broken.");
											puts("It doesn't work.");
											puts("It doesn't appear to have read any input.");
										}
									}
									else if(choice == 7)
									{
										if(oneusage == 0)
										{
											displayStats(counter,score);
											reset();
											puts("Seems no input has been added from this button");
											reset();
											oneusage++;
										}
										else
										{
											reset();
											puts("Nothing happened.");
										}
									}
									else
									{
										bGreen();
										puts("Ding");
										reset();
										score = score + choice;
										counter++;
									}
								}
							}
							end = time(NULL);
							timetaken = (double)(end - begin);
							bYellow();
							printf("Time Took %ld seconds \n",(end - begin));
							displayStats(counter, score);
							reset();
							if(timetaken < 45)
							{
								if(score == 37)
								{
									bGreen();
									puts("Bomb Deactivated.");
									bBlue();
									sleep(1);
									puts("*sigh*.");
									sleep(2);
									puts("I live to see another day...");
									sleep(1);
									reset();
									puts("The woman has a relieved expression on her face.");
									sleep(1);
									puts("You see a release latch to unlock her cell door.");
									sleep(1);
									puts("Release Latch? (1)Yes (2)No");
									choice = 0;

									while(choice < 1 || choice > 2)
										scanf("%d",&choice);
									if(choice == 1)
									{
										puts("You released the latch.");
										sleep(2);
										bBlue();
										puts("We have to go NOW! she exclaims!");
										sleep(2);
										reset();
										puts("The other door opened, its an elevator.");
										sleep(1);
										puts("You go in with the young lady and immediately the Elevator goes straight down really fast.");
										sleep(2);
										puts("It's stopped.");
										sleep(1);
										puts("The doors open, we see civilization.");
										sleep(1);
										puts("What the hell was that place?");
										sleep(1);
										puts("Ask her what was that place?(1) Say Goodbye(2)");
										choice = 0;

										while(choice < 1 || choice > 2)
											scanf("%d",&choice);
										if(choice == 1)
										{
											puts("What Happened?");
											sleep(1);
											bBlue();
											puts("I was a hostage, a ransom that my family couldn't pay.");
											sleep(1);
											puts("They were going to blow me up along with that whole lab.");
											sleep(1);
											puts("You just happened to stumble by at the right time.");
											sleep(1);
											puts("Talk about dumb luck haha.");
											reset();
											sleep(2);
											puts("Who's they?");
											sleep(2);
											puts("She immediately put her face to my ear and whispered.");
											sleep(2);
											bBlue();
											printf("\nt");
											printf("h");
											printf("e");
											printf(" ");
											sleep(1);
											printf("c");
											sleep(1);
											printf("u");
											sleep(1);
											printf("l");
											sleep(1);
											printf("t\n");
											sleep(2);
											puts("My family were members and I wanted out and..");
											sleep(2);
											reset();
											puts("I decided to help her get out of town.");
											sleep(1);
											puts("After a long process of hiding and changing ID's and a few cosmetic surgeries.");
											sleep(1);
											puts("I got her a plane ticket outside of the state where cult activity was most prominent.");
											sleep(1);
											puts("It was time for her to go.");
											sleep(1);
											puts("I waved bye at the airport.");
											sleep(1);
											puts("She turns to me.");
											congratulations();
											puts("END");
										}
										else if(choice == 2)
										{
											puts("You wave bye as you leave.");
											sleep(2);
											puts("You think to yourself it's not worth the trouble to know or get involved any further.");
											sleep(2);
											puts("You go home and take a nice long nap.");
											sleep(1);
											puts("END");
										}
									}
									else if(choice == 2)
									{

										puts("You decided not to release the latch but instead only unlock the other door.");
										sleep(2);
										bBlue();
										puts("NOOO!!");
										sleep(1);
										puts("LET ME OUT PLEASE!!");
										sleep(2);
										reset();
										puts("The door opens, it's an elevator.");
										sleep(1);
										puts("You go in.");
										sleep(2);
										puts("You go down and exit outside a building.");
										sleep(1);
										puts("What was that place? you ponder.");
										sleep(2);
										puts("You think, it doesn't matter as long as I'm free.");
										sleep(2);
										puts("Along the way home you justify your actions.");
										sleep(2);
										puts("What if she was dangerous? I couldn't put myself at risk for a stranger. I'm glad I left her.");
										sleep(2);
										puts("You make it home safe.");
										sleep(2);
										puts("But can't shake the feeling you were being followed.");
										sleep(1);
										puts("END");
									}
									choice = 99;
								}
								else
								{
									reset();
									puts("BOOM!");
									sleep(1);
									bRed();
									puts("You Are Dead.");
									choice = 99;
								}
							}
							else
							{
								reset();
								puts("Took too long.");
								sleep(1);
								puts("The bomb was set off.");
								sleep(1);
								bRed();
								puts("You are Dead.");
								choice = 99;
							}

					}
					break;
			}
			case 10:
			{
					while(choice != 99)
					{
						char ans = 'Y';
						int count=0;						
						int total=0;
						int prize[4]={1000000,1000,100,10};
						srand(time(NULL));
							
						do
						{
							int myNum[3];
							int winNum[3]= {rand()%10,rand()%10,rand()%10};
							int die = 1 + rand()%6; 
							int death = 1 + rand()%6;
							int roll;
							bool checkNum1;
							bool checkNum2;
							bool checkNum3;
							puts("\nYou open the door and find ...");
							puts("A lottery machine?");
							puts("Welcome to Fabian's room");							
							printf("Enter the lottery by entering three numbers. Each 1 digit\n");
							scanf(" %d %d %d",&myNum[0],&myNum[1],&myNum[2]);
							printf("Your numbers are: %d, %d, %d\n",myNum[0],myNum[1],myNum[2]);
							printf("The winning lottery numbers are: %d, %d, %d\n",winNum[0],winNum[1],winNum[2]);
		
							if(myNum[0]==winNum[0] || myNum[0]==winNum[1] || myNum[0]==winNum[2])
							{
								checkNum1= true;
							}
							else
							{
								checkNum1=false;
							}
							if(checkNum1)
							{
								if (myNum[0]==winNum[0])
								{
									winNum[0]=420;
								}
								else if (myNum[0]==winNum[1])
								{
									winNum[1]=420;
								}
								else
								{
									winNum[2]=420;
								}
							}
							if(myNum[1]==winNum[0] || myNum[1]==winNum[1] || myNum[1]==winNum[2])
							{
								checkNum2= true;
							}
							else
							{
								checkNum2=false;
							}
							if(checkNum2)
							{
								if (myNum[1]==winNum[0])
								{
									winNum[0]=420;
								}
								else if (myNum[1]==winNum[1])
								{
									winNum[1]=420;
								}
								else
								{
									winNum[2]=420;
								}
							}
							if(myNum[2]==winNum[0] || myNum[2]==winNum[1] || myNum[2]==winNum[2])
							{
								checkNum3= true;
							}
							else
							{
								checkNum3=false;
							}
							if(checkNum3)
							{
								if (myNum[2]==winNum[0])
								{
									winNum[0]=420;
								}
								else if (myNum[2]==winNum[1])
								{
									winNum[1]=420;
								}
								else
								{
									winNum[2]=420;
								}
							}
							if(checkNum1 && checkNum2 && checkNum3)
							{
								if(myNum[0]==winNum[0] && myNum[1]==winNum[1] && myNum[2]==winNum[2])
								{
									puts(" #####    #         ###     ###     ###         ###     ###     ###      ### ### ### ");
									puts("#  #  #  ##        #   #   #   #   #   #       #   #   #   #   #   #     ### ### ### ");
									puts("#  #    # #       #     # #     # #     #     #     # #     # #     #    ### ### ### ");
									puts(" #####    #       #     # #     # #     #     #     # #     # #     #     #   #   #  ");
									puts("   #  #   #   ### #     # #     # #     # ### #     # #     # #     #                ");
									puts("#  #  #   #   ###  #   #   #   #   #   #  ###  #   #   #   #   #   #     ### ### ### ");
									puts(" #####  #####  #    ###     ###     ###    #    ###     ###     ###      ### ### ### ");
									puts("              #                           #                                          ");
									puts("");
									printf("You've hit the jackpot of 1,000,000!\n");
									puts("WOW! incredible luck there buddy!");
									total = total + prize[0];
								}
								else 
								{
									printf("You won $1,000\n");
									puts("Go pay some bills of now!");
									total = total + prize[1];
								}
							}
							else if ((checkNum1 && checkNum2 || checkNum1 && checkNum3) || (checkNum2 && checkNum3))
							{
								printf("You've won $100\n");
								printf("Go treat your mom to some lunch.");
								total = total + prize[2];
							}
							else if (checkNum1 || checkNum2 || checkNum3) 
							{
								puts("You won $10");
								puts("You won a little bit of money but at least it's something right?");
								total = total + prize[3];
							}
							else
							{
								printf("You won nothing...\n");
								puts("Because you won nothing, you now have to roll a die to determine your fate...");
								puts("Please choose a number from 1-6.If you roll your chosen number you are safe");
								puts("if you don't there's a 1 in 6 chance you will die.");
								puts("Please choose a number within the limits or it's automatic death");
								scanf(" %d",&roll);
								
								if (die==roll)
								{	
									puts("\"You precede to roll your die in hopes you get a number in your favor\"");
									printf("You rolled a %d\n",die);
									printf("You are safe to live!");
								}
								else if(die== death || roll>6)
								{          
									if(die==death)
									{
										puts("\"You precede to roll your die in hopes you get a number in your favor\"");
										printf("You rolled a %d\n",die);
									}					                    
									puts(" ______   _______  _______  _______  __   __ ");
									puts("|      | |       ||   _   ||       ||  | |  |");
									puts("|  _    ||    ___||  |_|  ||_     _||  |_|  |");
									puts("| | |   ||   |___ |       |  |   |  |       |");
									puts("| |_|   ||    ___||       |  |   |  |       |");
									puts("|       ||   |___ |   _   |  |   |  |   _   |");
									puts("|______| |_______||__| |__|  |___|  |__| |__|");
									puts("");
                                               			puts(""); 
									puts(" ██████╗  █████╗ ███╗   ███╗███████╗     ██████╗ ██╗   ██╗███████╗██████╗     ██╗");
									puts("██╔════╝ ██╔══██╗████╗ ████║██╔════╝    ██╔═══██╗██║   ██║██╔════╝██╔══██╗    ██║");
									puts("██║  ███╗███████║██╔████╔██║█████╗      ██║   ██║██║   ██║█████╗  ██████╔╝    ██║");
									puts("██║   ██║██╔══██║██║╚██╔╝██║██╔══╝      ██║   ██║╚██╗ ██╔╝██╔══╝  ██╔══██╗    ╚═╝");
									puts("╚██████╔╝██║  ██║██║ ╚═╝ ██║███████╗    ╚██████╔╝ ╚████╔╝ ███████╗██║  ██║    ██╗");
									puts(" ╚═════╝ ╚═╝  ╚═╝╚═╝     ╚═╝╚══════╝     ╚═════╝   ╚═══╝  ╚══════╝╚═╝  ╚═╝    ╚═╝");
                                                             	puts("\nThe game will now exit. Better luck next time!");                          
                                                              	if(roll>6||roll<1)
                                                              	{
                                                              		puts("I warned you about not choosing a number within the limits");
                                                              	}
                                                           		choice = 99;
                                                           		count++;
                                                           		break;                   
								}
								
								else
								{
									puts("\"You precede to roll your die in hopes you get a number in your favor\"");
									printf("You rolled a %d\n",die);
									puts("");
									puts("Oof, that was a close one. You may not have one the lottery, ");
									puts("but you at least get to leave with your life.");							
								}													
							}
							printf("You have earned a total of %d so far\n",total);
							printf("Would you like to try again at the lotto? Maybe you can win more money(Y/N)\n");
							scanf(" %c",&ans);	
							ans=toupper(ans);					
						}
					while (ans=='Y');
					if(count<=0)
					{
						printf("Okay, go into the elevator and choose a new room\n");
						scanf("%d",&choice);
					}	
					}			
			}
			case 11:
			{
					while(choice != 99)
					{
							puts("you open the door and find 3 more doors.");
							puts("On the left there is a door with a Skull and Bones. In the middle the door has an Angel. On the right it has no symbol.\n");
							puts("1. Open the Skull and Bones door. \n2. Open the Angel door. \n3. Open the no symbol door.\n");
							scanf("%d", &choice);
							if(choice == 1){
								puts("You proceed to open the door with Skull and Bones on it.\n");
								printf("A skeleton stands before you. \n'Hello %s would you like to play a game?'\nThe door behind you disappears so its not like you have a choice to say no...so you agree to play without knowing what kind of game.\n",name);
								puts("[Skeleton]: Wonderful! Choose a hand *Giant Grin on his face*\n");
								puts("1. Left \n2. Right\n");
								scanf("%d", &choice);
								if(choice == 1){
									puts("[Skeleton]: *Laughs* Excellent choice. If you chose the other hand your soul would have been mine\n");
									puts("[Skeleton]: Now lets play one final game. You can roll this 100 sided die and if you get anything higher than 55 you can leave here with a million dollars. Or you can walk through that door *Skeleton points to a new door as it rises from the ground*\n");
									puts("1. Roll the die. \n2. Open the door\n");
									scanf("%d", &choice);
									if(choice == 1){
										puts("[Skeleton]: *Evil Laughs* You have chosen the right path so far. However, I never told you what happens if you get anything below 55. If you land below 55 you have to stay here for the rest of your life guarding this door and I will finally be free! \n");
										puts("Ready to roll?\n1. Yes\n2. No");
										scanf("%d", &choice);
										puts("[Skeleton]: Ahh who cares not like you have a choice! *Rolls die*\n");
										srand(time(NULL));
										int roll = rand()%100;
										printf("%d\n",roll);
										if(roll>55){
											puts("Congrats you are free to exit out that door\n");
											puts("\n The door just leads you straight to where you started\n");
											break;
										}else{
											puts("[Skeleton]: Finally I'm free!");
											puts("You are not stuck in this room for eternity...");
											choice = 99;
											break;
										}
									}else if(choice == 2){
										puts("[Skeleton]: Did you really think I would let you live?");
										puts("You have died to a Skeleton \n");
										break;
									}

								}else if (choice == 2){
									puts("[Skeleton]: Thank you for playing. *He puts his hand over your head*\n");
									puts("You have died try again!\n");
									break;
								}
							}else if(choice == 2){
								puts("You proceed to open the door with an Angel on it.\n");
								puts("Welcome! You need to guess the following word or you can't come to heaven.\n");
								puts("You can not get 1 letter wrong or you lose \n");
								puts("What is yellow and can be found in water?\n");
								char answer[20] = {'d', 'u','c','k'};
								char guess[20];
								int x = 0;
								char letter;

								while (x < 6){
									scanf(" %c",&letter);

									if (letter == answer[x]){
										guess[x]= letter;
										printf("keep going\n");
										if(letter == 'k'){
											puts("Congrats you guess the correct word: DUCK!\n");
											break;
										}
									}else{
										printf("You failed sorry!\n");
										printf("\n");
										break;
									}      

									++x;
								}
								break;
							}else if(choice == 3){
								puts("You proceed to open the blank door.\n");
								puts("You enter the room and its filled with clocks. Every clock instantly stops ticking and your vision slowly fades to black. You close your eyes hoping you get your vision back, but you open them and you are no longer in the room. Instead you you are placed straight back to where you started with the option to choose any room.");
								break;
							}
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
						
       srand(time(NULL));
				
				int mn = 3;
				
				int response;
				
				int fish = 1 + rand()%10;
				int a,b,c,d,f;

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
                                                                                puts("You continue walking to what you believe to be a forest disregarding the voice behind you.");
										   puts("As you enter the light a bright white flash obscures your vision.");
										   puts("You can now see a small semi-transparent green orb on a tree stump.");
									 	   puts("Do you pick it up or smash it with a nearby plank of wood");
									 	   puts("1. Pick it up.");
										   puts("2. Smash it.");
										   scanf("%d", &choice);
										   if(choice == 1)
											{
											puts("You pick it up an begin to feel your body tense, this feeling of tiny needles around your entire body.");
											puts("Your vision goes dark.");
											puts("The feeling of rising water surrounds you and when you open your eyes you realize you are back in the first room you started.");
											break;
											}
											
										
									   
									   	  else if(choice == 2)
									   	  {
									   	  	puts("You grab a nearby plank of wood and step towards the orb.");
											puts("With a mighty swing, you manage to smash the orb into small shards of glass, and as you do.");
											puts("Your vision goes dark.");
                                                                                     puts("The feeling of rising water surrounds you and when you open your eyes you realize you are back in the first room you started.");

											}
											break;
									     }

                                                                	  else if(choice == 2)
                                                                	  {
                                                                	  	puts("as you turn around and face this unknown entity, the ghoslty figure is now facing you.");
                                                                                        puts("With the bit a of light the creature reveals its self and you see a hunched hooded humanoid figure.");
                                                                                        puts("It has a sad zombie like face with a large mouth hanging low to its chest.");
                                                                                        puts("This creature has no eyes and in its gaping mouth nothing but a void of darkness. As you stare at this creature your mind and body go blank unable to think or move.");
                                                                                        puts("This creature has now taken over your body and the fear of never getting out overtakes you. Your are Dead.");
                                                                                        
                                                                                        exit(0);
                                                                                        }
                                                                }
                                                                      

                                                        else if(choice == 2)
                                                                {
                                                                        puts("Not knowing what this light could be you decide to turn around and head deeper into the unknown darkness.");
                                                                        puts("You continue walking and stumble upon a conviently placed falsh light that can now help you see.");
                                                                        puts("As you continue walking to come across a monolith that speaks to you in a loud deep voice, it asks you to guess a number between 1 through 10 if you want to survive.");
                                                                        printf("Enter a number between 1 through 10\n");
                                                                        scanf("%d", &response);
						while(response < 1 || response > 10)
						{
							printf("NO!! A number between 1 through 10\n");
							scanf("%d",&response);
						}
						printf("%d + magic number = %d\n",response,(response + mn));
						printf("%d * magic number = %d\n",response,(response * mn));
						printf("%d - magic number = %d\n",response,(response - mn));
						printf("What is your guess? It says.\n");
						scanf("%d",&response);
						if(response == mn)
						{
							printf("You are correct! The monolith begins to glow with no issues.\n");
							
						} 
						else
						{
							printf("NO, wrong number inferior human\n");
							printf("A beam of light emits from the monolith which vaporizes you. \n");
							printf("Only your boots remain. You Are Dead.\n");
							exit(0);
						}
                                                 	puts("No you cant out smart me simple human");
                                                 	puts("Fine then, lets see if you can figure this out HAHAHA");
                                                 	printf("There is a tank of fish that can only hold 12 fish. At the moment it is empty\n");
                                                 	printf("for every red fish there can be only 1 blue fish\n");
                                                 	printf("but if there is more than 1 blue fish no yellow fish can be in the tank\n");
                                                 	printf("The number of green fish in the tank can be any number\n");
							printf("There are %d red fish\n", a = rand()%10);
							printf("There are %d blue fish\n", b = rand()%10);
							printf("There are %d green fish\n", c = rand()%10);
							printf("There are %d yellow fish\n", d = rand()%10);
							printf("How many fish will fit in this tank\n");
							scanf("%d",&response);
							if(response == (12))
							{
								puts("Dammit, you are smarter than you look human\n");
								puts("The room begins to shake as the monolith in front of you begins to open up. Revealing a secret tunnel.\n");
								puts("UGH FINE you win\n");
								puts("The monolith glows and turns in to a man in a black tuxedo and black sunglasses\n");
							        puts("He pulls out pen from his coat pocket and with out telling you he points it towards you and it flashes\n");
								puts("You now find your self back in your home sitting at your computer not knowing how you got there\n");
								puts("However this person sitting down looks familiar, ITS YOU.\n");
								puts("You only see yourself for a few minutes before that person is sucked into the computer\n");
								puts("It takes a moment for you to compose yourself but you sit back down on your chair close the game and never return to it.");
								puts("Although you cant shake the feeling of someone watching you, the presence of someone is always behind you but everytime you turn they are gone.");
								printf("At this point, the computer you shutdown turns back on and displays \"Thank you for playing %s, Good Bye................................for now\" \n",name);
							exit(0);	
							}
							else
							{
								printf("Haha The answer was 12, only 12 fish can fit in the tank, your nothing but a simple human\n");
								printf("A beam of light emits from the monolith which vaporizes you. \n");
								printf("Only your boots remain. You Are Dead.\n");
							exit(0);
							}                      
								  

                                                                        break;
                                                                }
                                                              
                                                                
                                                        else
                                                        {
                                                                puts("Wrong choice");
                                                        }
					}
					break;

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
					puts("you open the door and seem safe from the previous... ");
					puts("you find a kitten in the room, along with some cabinets, and another door\n");
					puts("With this you are left with some options, 3 to be exact:");
					puts("1. Pet the kitten");
					puts("2. Examine the room");
					puts("3. Open the next door");
					scanf("%d",&choice);
					switch (choice)
					{
						case 1:
							puts("you get closer to pet the kitten it enjoyed that");
							break;
						case 2:
							puts("you decide to examine the cabinets, but they're all empty... why is that?");
							break;
						case 3:
							puts("you decide to open the next door and see a long tunnel, you see a modified motorcycle aligned to a track with some pickaxes...");
							puts("your curiosity is leaving you with 2 more choices");
							puts("1. Walk and see where the tunnel leads");
	                                                puts("2. Go back inside the room");
							scanf("%d", &choice);
							if(choice==1)
							{
								puts("you decide to journey along the tunnels path, you hear a faint meow behind you... you feel a bit empty...");
								puts("\nEnter 99");
								break;
							}
							else if(choice==2)
							{
								puts("you decided to investigate the room first before leaving");
								break;
							}

						default:
							puts("");
					}
				}
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
					bool realLooplmao = true;
				
				while(realLooplmao)
				{
					int level = 0,attack = 0,magic = 0,health = 0,defense = 0,totalHP = 0;
					bool NEW = true;
					srand(time(NULL));
					int i = 0;
puts("");			
puts("                                      /|");
puts("                                     |\\|");
puts("                                     |||");
puts("                                     |||");
puts("                                     |||");
puts("                                     |||");
puts("                                     |||");
puts("                                     |||");
puts("                                  ~-[{o}]-~");
puts("                                     |/|");
puts("                                     |/|");
puts("             ///~`     |\\_           `0'         =\\\\         . .");
puts("            ,  |='  ,))\\_| ~-_                    _)  \\      _/_/|");
puts("           / ,    ((((((    ~ \\                   ~~~\\-~-_ /~ _   |");
puts("         /' -~/~)))))))'\\_   _/'                      \\_  /'  D   |");
puts("        (       (((((( ~-/ ~-/                          ~-;  /    \\--_");
puts("         ~~--|   ))''    ')  `                            `~~\\_    \\   )");
puts("             :        (_  ~\\           ,                    /~~-     ./");
puts("              \\        \\_   )--__  /(_/)                   |    )    )|");
puts("    ___       |_     \\__/~-__    ~~   ,'      /,_;,   __--(   _/      |");
puts("  //~~\\`\\    /' ~~~----|     ~~~~~~~~'        \\-  ((~~    __-~        |");
puts("((()   `\\`\\_(_     _-~~-\\                      ``~~ ~~~~~~   \\_      /");
puts(" )))     ~----'   /      \\                                   )       )");
puts("  (         ;`~--'        :                                _-    ,;;(");
puts("            |    `\\       |                             _-~    ,;;;;)");
puts("            |    /'`\\     ;                          _-~          _/");
puts("           /~   /    |    )                         /;;;''  ,;;:-~");
puts("          |    /     / | /                         |;;'   ,''");
puts("          /   /     |  \\|                         |   ,;(    -Tua Xiong");
puts("        _/  /'       \\  \\_)                   .---__\\_    \\,--._______");
puts("       ( )|'         (~-_|                   (;;'  ;;;~~~ ' `;;|   ;;; ");
puts("        ) `|_         |-_;;--__               ~~~----__/'    /'_______/");
puts("        `----'       (   `~--_ ~~~;;------------~~~~~ ;;;'_ '");
puts("                     `~~~~~~~~'~~~-----....___;;;____---~~");
puts("Here you will face a series of trials, make sure every choice counts.");
puts("");
puts("");
					
					bool askNameCAPS=true;
					while(askNameCAPS)
					{
					int nameCAPS = 0;
					puts("Would you like your name to be in all caps? 1:Yes 2:No");
					scanf(" %d",&nameCAPS);
					switch(nameCAPS)
					{
						case 1:
							for(i; name[i]!='\0';i++)
							{
								name[i]=toupper(name[i]);
							}
							askNameCAPS=false;
							break;
							
						case 2:
							if(islower(name[0]))
								name[0]=toupper(name[0]);
							for(i=1; name[i]!='\0';i++)
							{
								name[i]=tolower(name[i]);
							}
							askNameCAPS=false;
							break;
							
						default:
							puts("Wrong entry, continuing.");
							break;
						
						
					};
					}
					
					
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
								puts("________________________________________________________________");
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
							
							puts("________________________________________________________________");
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
									defense += (multiplier/2);
								}
								else if(magician == true)
								{	
									totalHP +=(3*(multiplier/2));
									health +=(3*(multiplier/2));
									magic += (multiplier+8);
									defense += (multiplier/3);
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
									puts("________________________________________________________________");
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
										int lossCont = 0;
										puts("You lose.");
										loss=true;
										bool lossChoice = true;
										while(lossChoice)
										{
											puts("Would you like to continue? 1: Yes 2: No");
											scanf(" %d",&lossCont);
											switch(lossCont)
											{
												case 1:
													puts("Continuing...");
													lossChoice = false;
													break;
												case 2:
													puts("Closing...");
													lossChoice = false;
													realLooplmao = false;
													break;
												default:
													puts("Wrong choice, please enter 1 or 2.");
													break;
											};
										}
										break;
									}
									puts("________________________________________________________________");
								}	
								if(loss == true)
									gameLoop=false;

								level = levelF;
							}
						if(level==5&&health>0)
						{
							char line[30];
							printf("Congratulations %s, you defeated all the bosses in Room 20!\n",name);
							//int number;
							printf("%s's stats were\n_______________\n",name);
							printf("Level: %d\n",level);
							printf("Attack: %d\n",attack);
							printf("Magic: %d\n",magic);
							printf("Health: %d\n",health);
							printf("Defense: %d\n",defense);
							printf("TotalHP: %d\n",totalHP);
							int option = 0;
							//int level = 0, attack = 0, magic = 0, health = 0, defense = 0,totalHP = 0;
							//srand(time(NULL));
							
							FILE *rptr, *wptr;
							bool inMenu = true;
							while(inMenu)
							{
								puts("______________________________________");
								puts("1. Start New Game");
								puts("2. Save to Hall of Fame -stats.txt-");
								puts("3. Read the Hall of Fame -stats.txt-");
								puts("4. Exit Room 20");
								
								scanf(" %d", &option);
								
								switch(option)
								{
									case 1: //gameLoop(&level, &attack, &magic, &health, &defense,&totalHP,true);
										inMenu = false;
										
										break;
									case 2: puts("Saving stats to stats.txt...");
										wptr = fopen("stats.txt","a");
										fprintf(wptr,"Name: %s\n",name);
										fprintf(wptr,"Level: %d\n",level);
										fprintf(wptr,"Attack: %d\n",attack);
										fprintf(wptr,"Magic: %d\n",magic);
										fprintf(wptr,"Health: %d\n",health);
										fprintf(wptr,"Defense: %d\n",defense);
										fprintf(wptr,"TotalHP: %d\n",totalHP);
										fprintf(wptr,"___________________\n");
										fclose(wptr);
										break;
									case 3: puts("Reading stats from stats.txt...");
										rptr = fopen("stats.txt","r");
										
										while(!feof(rptr))
										{
											fscanf(rptr,"%s",line);
											printf("%s\n",line);			
										}
										fclose(rptr);
										break;
									case 4: puts("Thank you for playing, goodbye.");
											inMenu = false;	
											realLooplmao = false;
										break;
									default: puts("Wrong entry.");
										 break;
								};
							}
						}
						puts("________________________________________________________________");
					}
				}
					break;
			}
			case 21:  //Michael Morgan's room
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							puts("A penguin drinking a beer");
							puts("To enter you must guess how many beers the peguin had drunk");
							int j = 7;
							int x = 0;
							int l;
							printf("Please enter a number between 1 and 10 \n");
							scanf("%d",&y);
								
							x = j + y;
							printf("%d + number of beers = %d \n",y,x);
							x = j * y;
							printf("%d * number of beers = %d \n",y,x);
							x = y - j;
							printf("%d - number of beers = %d \n",y,x);
							printf("Guess the number of beers: \n");
							scanf("%d",&z);
							if(z == j)
								{
								printf("YOU WIN!! \n");
								printf("Hi %s my names is Bob \n", name);
								}
								else
									{
									printf("you lose \n");
									choice = 99;
									break;
									}
								
							puts("that's right I had seven lol");
							puts("I just finished my classes and I can't figure out my GPA.");
							puts("I found a program to tell me I can't enter my grades cause of the wings.");
							puts("Can you put them in i got two A's one B two C's");
							int A = 0, B = 0, C = 0, D = 0, F = 0, y = 0, i =0; //%d
		double avg = 0, total = 0;          //%lf
	float h;     //%f
	char grade;
	while(grade != 'z')
	{
		printf("enter the letter grade A-F (press z to finish):");
		scanf(" %c", &grade);
		
		switch(grade)
		{
			case 'a':
			case 'A':
				puts("You entered A");
				A++;
				total += 4;
				i++;
				break;
			case 'b':
			case 'B':
			        puts("You entered B");
				B++;
				total += 3;
				i++;
				break;
			case 'c':
			case 'C':
				puts("You entered C");
				C++;
				total += 2;
				i++;
				break;
			case 'd':
			case 'D':
				puts("You entered D");
				D++;
				total += 1;
				i++;
				break;
			case 'f':
			case 'F':
				puts("You entered F");
				F++;
				i++;
				break;
			default:
				puts("You entered an invalid letter grade");

		}
	}

	avg = total /  i;
	printf("The gredes entered were: \n A = %d, B = %d, C = %d, D = %d, F = %d \n", A, B, C, D, F);
	printf("The average was %.1lf.\n", avg);
	
	puts("YESH I GET TO KEEP MY SCHOLOROSHIP");
	
	puts("'This penguin seems really drunk', do you tell him.");
	puts("1. Yes 2. No");
	scanf("%d", &choice);
	if(choice == 1)
	{
		puts("IM nto DRNUK YOU R!!!");
	}
	printf("%s, DO YOU WANT TO PLAY A GAME?\n", name);
	puts("1. YES 2. NO");
	scanf("%d",&choice);
	puts("Great!!!");
	puts("Okay you pick a number 1-10 and I'll pick a number I pick 7");
	printf("%s you pick how many times we roll the dice.\n", name);
	int die1 = 0, die2 = 0, die3 = 0, die4 = 0, die5 = 0, die6 = 0, die7 = 0,
	    die8 = 0, die9 = 0, die10 = 0;


	srand(time(NULL));

	l = rollsmm21();
	
	for(i = 0; i < l ; i++)
	{
		x = rollmm21();

		switch(x)
		{
			case 1:
				++die1;
				break;
			case 2:
				++die2;
				break;

			case 3:
				++die3;
				break;

			case 4:
				++die4;
				break;

			case 5:
				++die5;
				break;

			case 6:
				++die6;
				break;
			case 7:
				++die7;
				break;
			case 8:
				++die8;
				break;
			case 9:
				++die9;
				break;
			case 10:
				++die10;
				break;

		}
	}
	oputmm21(die1, die2, die3, die4, die5, die6, die7, die8, die9, die10);
	
	puts("Did I win? I can't see.");
	puts("1. YES 1. NO");
	scanf("%d",&choice);
	
		puts("The penguin pulls out a thumb drive and waves it menacingly at you.");
		puts("DID I WIN?");
		puts("1. YES 2. NO");
		scanf("%d", &choice);
		puts("fine. I need you back accout info so I can pay you for testing my homework.");
		
	
		int account;
	double balance;
	char name[30];
	
	FILE *fptr;

	fptr = fopen("mmbank.txt", "w");
	
	if(fptr == NULL)
	{
		puts("could not open file");
	}
	else
	{
		
			
			printf("Enter accont number: ");
			scanf("%d", &account);
			printf("Enter name: ");
			scanf("%s", name);
			printf("Enter price for checking Bob's work: ");
			scanf("%lf", &balance);
			
			
			fprintf(fptr,"%d %s %.lf \n", account, name, balance);
			puts("thanks that's all I needed good bye");

		
	}


	fclose(fptr);
			
	puts("You wake up in the bar and everyone is singing about the beer on the wall.");
	printf("%s how long have you been out? your friend asks.\n", name);
	puts("you suddenly get a message on you phone a download has started, you open it");
	int c = 0;
	FILE *fptr1;
	fptr1 = fopen("mmbank.txt", "r"); 
    if (fptr == NULL) 
    { 
        printf("Cannot open file \n"); 
        exit(0); 
    } 
  
    // Read contents from file 
    c = fgetc(fptr1); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(fptr1); 
    } 
  
    fclose(fptr1); 
 

puts("'How did that peguin get my back info and my phone number");
			return EXIT_SUCCESS;
			}
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
				int charCounter = 0,
					userChoice = 0,
					turn = 0,
					randomAlignment = 0,
					bananaAmount = 0,
					orangeAmount = 0;

				for (charCounter = 0; charCounter < 256; charCounter++)
				{
					if (islower(name[charCounter]))
					{
						name[charCounter] = toupper(name[charCounter]);
					}
				}

				puts("As you open the door, you notice a sign reading: \"This is Phillip F. Aguilera's room\".\n"
					"You enter the room and close the door behind you, noticing the choice of more doors. There are three more doors to choose.\n"
					"A sheet of paper is lying on the floor. You pick it up and begin to read what has been written.\n"
					"It states:");
				printf("%s, enter the rooms and try to escape with the highest amount of bananas and oranges as possible!\n", name);
				puts("You must have at least 5 bananas and at least 5 oranges in 5 turns to win this game or you lose!\n");


				for (turn = 0; turn < 5; turn++)
				{
					printf("You have %d bananas and %d oranges!\n", bananaAmount, orangeAmount);
					roomPrompt(&userChoice);

					randomAlignment = rand() % 2;

					if (randomAlignment == 0)
					{
						switch (userChoice)
						{
							case 1:
								gorillaRoom(&bananaAmount, &orangeAmount);
								break;
							case 2:
								drawPicture();
								break;
							case 3:
								caseRandomizer(name, &bananaAmount, &orangeAmount);
						}
					}
					else
					{
						switch (userChoice)
						{
							case 1:
								drawPicture();
								break;
							case 2:
								caseRandomizer(name, &bananaAmount, &orangeAmount);
								break;
							case 3:
								gorillaRoom(&bananaAmount, &orangeAmount);
						}
					}


				}

				printf("You have %d bananas and %d oranges!\n", bananaAmount, orangeAmount);

				if ((bananaAmount >= 5) && (orangeAmount >= 5))
				{
					puts("Congratulations! You win the game!\n");
				}
				else
				{
					puts("Sorry, you lose.\n");
				}

				break;
			}
			case 25:
			{
					while(choice != 99)
					{		printf("Room for Richmond Laureta AKA (rlaureta)\n");
							srand(time((NULL)));
	int choice;
	
	int powerWS = 0;
	int randomForInt; 
	randomForInt = 1 + rand()%4;

	printf("You are in a pod sleeping for over a thousand years, oblivious to everything, \nwhen all of a sudden, earthquake struck and collapsed the dungeon you are in. \nYour pod remains in tact and then a lightning hit your pod.\n You are awakened... you got out of your pod to a ruined dungeon.");
	printf("\n\nYou see two pathways with doors at the end: \n\n1. The left pathway: INTELLIGENCE eteched on the door(RANDOM POWER)). ");
	printf("\n2. The right pathway: STRENGTH etched on the door.");
	printf("\nWhich pathway you want to choose?(Press 0 to exit at anytime.) ");
	scanf("%d", &choice);
	while (choice != 0) {
		//Intelligence
		if (choice == 1) {
			printf("\nYou open the door and see three staffs, set on a table in the middle of the room. You walk over to the table to see the choices of staffs.\n\n");
			printf("1. This staff is red and can cast flame.\n");
			printf("2. This staff is blue and can cast water blast.\n");
			printf("You have to choose the elemental for your weapon: ");

				
					
			//RED
			if (choice == 1) {
				printf("\nYou picked up the fire staff and your outfit changed into a fire red wizard.\n");
				printf("You exit the collapsed dungeon and after exiting you see a woman being attacked by a goblin.\n\n");
				printf("1. Help the woman and cast flame on the goblin.\n");
				printf("2. Cast flame on both the goblin and the woman.\n");
				printf("Which action do you want to take? ");
				scanf("%d", &choice);
				
				printf("Power of the weapon: ");
				weaponPower(randomForInt);
			    //help the woman
				if (choice == 1){
					printf("\nYou run towards the goblin and cast your flame spell. The goblin attacked you, but also, the goblin died in flames.\n");
					printf("The woman thanked you and gave you a health potion for healing.\n");
					printf("The woman explained to you what happened to the village. The woman told you \nthat the village is being attacked by an evil sorcerer in the fortress castle.\n");
					printf("It is up to you if you want to save the village with your  fire staff.\n\n"); 
					printf("1. Face the evil sorcerer.\n");
					printf("2. Ignore the woman.\n");
					printf("What course of action would you like to take? ");
					scanf("%d", &choice);
					printf("Power of the weapon: ");
					weaponPower(randomForInt);		
					if (choice == 1){
						printf("\nYou journeyed to the castle and battled many enemy then you face the evil sorcerer.\n");
						printf("He wants to make a deal with you. If you can help him take over the village.\n\n");
						printf("1. Ignore him and defeat the evil sorcerer.\n");
						printf("2. Accept the deal and rule the village with him.\n");
						printf("What do you want to do? ");
						scanf("%d", &choice);
						printf("Power of the weapon: ");
						weaponPower(randomForInt);
						if (choice == 1) {
							printf("\nYou defeated the sorcerer and saved countless lives. \nThe village honored you and became the fire red KING WIZARD.\n");
							printf("Game Completed.");
							printf("Power of the weapon: ");
							weaponPower(randomForInt);
							break;
						}
						else if (choice == 2) {
							printf("\nYou defeated the sorcerer but suffered loses. \nThe village honored you and became the fire red KING WIZARD.\n");
							printf("Game Completed.");
							break;
							printf("Power of the weapon: ");
							weaponPower(randomForInt);
						}
					}
					else if (choice == 2) {
						printf("You ignored the woman and still went to the castle and face the evil sorcerer.");
						printf("He wants to make a deal with you. If you can help him take over the village.\n\n");
						printf("1. Ignore him and defeat the evil sorcerer.\n");
						printf("2. Accept the deal and rule the village with him.\n");
						printf("What do you want to do? ");
						scanf("%d", &choice);
						printf("Power of the weapon: ");
						weaponPower(randomForInt);
						if (choice == 1) {
							printf("\nYou defeated the sorcerer and ruled with iron fist. \nThe village honored you and became the fire red KING WIZARD.\n");
							printf("Game Completed.");
							break;
							printf("Power of the weapon: ");
							weaponPower(randomForInt);
						} 
						else if (choice == 2){
							printf("You ruled with the evil sorcerer with an iron fist.");
							break;
							printf("Power of the weapon: ");
							weaponPower(randomForInt);
						}
					}
				}
				//kill both
				else if (choice == 2){
					printf("You heartlessly cast the flame on the goblin and the woman killing them both.");
					printf("The woman's soul was released and haunts you telling you that you need \nto kill the evil sorcerer that is invading the village living in the fortress castle.");
					printf("It is up to you if you want to save the village with your fire staff.\n\n"); 
					printf("1. Face the evil sorcerer.\n");
					printf("2. Ignore the woman's soul\n");
					printf("What course of action would you like to take? ");
					scanf("%d", &choice);
					printf("Power of the weapon: ");
					weaponPower(randomForInt);
					if (choice == 1){
						printf("\nYou journeyed to the castle and battled many enemy then you face the evil sorcerer.\n");
						printf("He wants to make a deal with you. If you can help him take over the village.\n\n");
						printf("1. Ignore him and defeat the evil sorcerer.\n");
						printf("2. Accept the deal and rule the village with him.\n");
						printf("What do you want to do? ");
						scanf("%d", &choice);
						printf("Power of the weapon: ");
						weaponPower(randomForInt);
						if (choice == 1) {
							printf("\nYou defeated the sorcerer but lost a lot of lives and the woman you killed haunts your mind forever. \nThe village honored you and you became the fire red KING WIZARD.\n");
							printf("Game Completed.");
							break;
							printf("Power of the weapon: ");
							weaponPower(randomForInt);
						}
						else if (choice == 2) {
							printf("You made the pact with the evil sorcerer and ruled the village cruely for thousands of years."); 
							printf("Game Completed.");
							break;
							printf("Power of the weapon: ");
							weaponPower(randomForInt);
						}
					}
					else if (choice == 2) {
						printf("You ignored the soul and still went to the castle and face the evil sorcerer.");
						printf("He wants to make a deal with you. If you can help him take over the village.\n\n");
						printf("1. Ignore him and defeat the evil sorcerer.\n");
						printf("2. Accept the deal and rule the village with him.\n");
						printf("What do you want to do? ");
						scanf("%d", &choice);
						printf("Power of the weapon: ");
						weaponPower(randomForInt);
						if (choice == 1) {
							printf("\nYou defeated the sorcerer but lost a lot of lives and the woman you killed haunts your mind forever. \nThe village honored you and you became the fire red KING WIZARD.\n");
							printf("Game Completed.");
							break;
							printf("Power of the weapon: ");
							weaponPower(randomForInt);
						}
						else if (choice == 2) {
							printf("You made the pact with the evil sorcerer and ruled the village cruely for thousands of years."); 
							printf("Game Completed.");
							break;
							printf("Power of the weapon: ");
							weaponPower(randomForInt);
						}
					}
				}
			}
			//BLUE
			else if (choice == 2) {
				printf("\nYou picked up the blue staff and your outfit changed into a blue wizard.\n");
				printf("You exit the collapsed dungeon and after exiting you see a woman being attacked by a goblin.\n\n");
				printf("1. Help the woman and cast water blast on the goblin.\n");
				printf("2. Cast water blast on both the goblin and the woman to kill them.\n");
				printf("Which action do you want to take? ");
				scanf("%d", &choice);
				printf("Power of the weapon: ");
				weaponPower(randomForInt);
				//woman alive
				if (choice == 1){
					printf("\nYou run towards the goblin and cast your water blast spell. The goblin attacked you, but also, the goblin died with the water blast.\n");
					printf("The woman thanked you and gave you a health potion for healing.\n");
					printf("The woman explained to you what happened to the village. The woman told you \nthat the village is being attacked by an evil sorcerer in the fortress castle.\n");
					printf("\nIt is up to you if you want to save the village with your water staff.\n\n"); 
					printf("1. Face the evil sorcerer.\n");
					printf("2. Ignore the woman.\n");
					printf("What course of action would you like to take? ");
					scanf("%d", &choice);
					printf("Power of the weapon: ");
					weaponPower(randomForInt);
					if (choice == 1){
						printf("\nYou journeyed to the castle and battled many enemy then you face the evil sorcerer.\n");
						printf("He wants to make a deal with you. If you can help him take over the village.\n\n");
						printf("1. Ignore him and defeat the evil sorcerer.\n");
						printf("2. Accept the deal and rule the village with him.\n");
						printf("What do you want to do? ");
						scanf("%d", &choice);
						printf("Power of the weapon: ");
						weaponPower(randomForInt);
						if(choice == 1) {
							printf("\nYou defeated the sorcerer and saved countless lives. \nThe village honored you and became the water blue KING WIZARD.\n");
							printf("Game Completed.");
							break;
							printf("Power of the weapon: ");
							weaponPower(randomForInt);
						}
						else if (choice ==2 ){
							printf("You made the pact with the evil sorcerer and ruled the village with an iron fist.\n"); 
							printf("Game Completed.");
							break;
							printf("Power of the weapon: ");
							weaponPower(randomForInt);
						}
					}
					else if (choice == 2) {
						printf("You ignored the woman and still went to the castle and face the evil sorcerer.");
						printf("He wants to make a deal with you. If you can help him take over the village.\n\n");
						printf("1. Ignore him and defeat the evil sorcerer.\n");
						printf("2. Accept the deal and rule the village with him.\n");
						printf("What do you want to do? ");
						scanf("%d", &choice);
						printf("Power of the weapon: ");
						weaponPower(randomForInt);
						if(choice == 1) {
							printf("\nYou defeated the sorcerer and saved countless lives. \nThe village honored you and became the water blue KING WIZARD.\n");
							printf("Game Completed.");
							break;
							printf("Power of the weapon: ");
							weaponPower(randomForInt);
						}
						else if (choice ==2 ){
							printf("You made the pact with the evil sorcerer and ruled the village with an iron fist.\n"); 
							printf("Game Completed.");
							break;
							printf("Power of the weapon: ");
							weaponPower(randomForInt);
						}
					}
				}
				//woman killed
				else if (choice == 2) {
					printf("You heartlessly cast the water blast on the goblin and the woman killing them both.");
					printf("The woman's soul was released and haunts you telling you that you need \nto kill the evil sorcerer that is invading the village living in the fortress castle.");
					printf("It is up to you if you want to save the village with your water staff.\n\n"); 
					printf("1. Face the evil sorcerer.\n");
					printf("2. Ignore the woman's soul\n");
					printf("What course of action would you like to take? ");
					scanf("%d", &choice);
					printf("Power of the weapon: ");
					weaponPower(randomForInt);
					if (choice == 1){
						printf("\nYou journeyed to the castle and battled many enemy then you face the evil sorcerer.\n");
						printf("He wants to make a deal with you. If you can help him take over the village.\n\n");
						printf("1. Ignore him and defeat the evil sorcerer.\n");
						printf("2. Accept the deal and rule the village with him.\n");
						printf("What do you want to do? ");
						scanf("%d", &choice);
						printf("Power of the weapon: ");
						weaponPower(randomForInt);
						if (choice == 1) {
							printf("\nYou defeated the sorcerer but lost a lot of lives and the woman you killed haunts your mind forever. \nThe village honored you and you became the water blue KING WIZARD.\n");
							printf("Game Completed.");
							break;
							printf("Power of the weapon: ");
							weaponPower(randomForInt);
						}
						else if (choice == 2) {
							printf("You made the pact with the evil sorcerer and ruled the village cruely for thousands of years."); 
							printf("Game Completed.");
							break;
							printf("Power of the weapon: ");
							weaponPower(randomForInt);
						}
						
					}
					else if (choice == 2) {
						printf("You ignored the woman's soul and still went to the castle and face the evil sorcerer.");
						printf("He wants to make a deal with you. If you can help him take over the village.\n\n");
						printf("1. Ignore him and defeat the evil sorcerer.\n");
						printf("2. Accept the deal and rule the village with him.\n");
						printf("What do you want to do? ");
						scanf("%d", &choice);
						printf("Power of the weapon: ");
						weaponPower(randomForInt);
						if (choice == 1) {
							printf("\nYou defeated the sorcerer but lost a lot of lives and the woman you killed haunts your mind forever. \nThe village honored you and you became the water blue KING WIZARD.\n");
							printf("Game Completed.");
							break;
							printf("Power of the weapon: ");
							weaponPower(randomForInt);
						}
						else if (choice == 2) {
							printf("You made the pact with the evil sorcerer and ruled the village cruely for thousands of years."); 
							printf("Game Completed.");
							break;
							printf("Power of the weapon: ");
							weaponPower(randomForInt);
						}
					}
				}
			}
		}
		//STRENGTH
		else if (choice == 2) {
			printf("\nYou open the door and you see two weapons, set on a table in the middle of the room. You walk over to the table to see the choices of weapon.\n\n");
			printf("1. The first weapon is a katana\n");
			printf("2. The second weapon is a lance\n");
			printf("What is your weapon choice? ");
			scanf("%d", &choice);
			
			//Katana
			if (choice == 1) {
				printf("\nYou picked up the katana blade and your outfit changed into a samurai warrior.\n");
				printf("You exit the collapsed dungeon and after exiting you see a woman being attacked by a goblin.\n\n");
				printf("1. Help the woman and attack the goblin with the katana.\n");
				printf("2. Use the katana on both the goblin and the woman to kill them.\n");
				printf("Which action do you want to take? ");
				scanf("%d", &choice);
				powerWS++;
				printf("Weapon powered up: ");
				weaponPower(powerWS);
				//help the woman
				if(choice == 1) {
					printf("\nYou run towards the goblin and use your katana. The goblin attacked you, but also, the goblin died.\n");
					printf("The woman thanked you and gave you a health potion for healing.\n");
					printf("The woman explained to you what happened to the village. The woman told you \nthat the village is being attacked by an evil sorcerer in the fortress castle.\n");
					printf("It is up to you if you want to save the village with your katana.\n\n"); 
					printf("1. Face the evil sorcerer.\n");
					printf("2. Ignore the woman.\n");
					printf("What course of action would you like to take? ");
					scanf("%d", &choice);	
					powerWS++;
					printf("Weapon powered up: ");
					weaponPower(powerWS);
					if (choice == 1) {
						printf("\nYou journeyed to the castle and battled many enemy then you face the evil sorcerer.\n");
						printf("He wants to make a deal with you. If you can help him take over the village.\n\n");
						printf("1. Ignore him and defeat the evil sorcerer.\n");
						printf("2. Accept the deal and rule the village with him.\n");
						printf("What do you want to do? ");
						scanf("%d", &choice);
						powerWS++;
						printf("Weapon powered up: ");
						weaponPower(powerWS);
						if (choice == 1) {
							printf("You defeated the evil sorcerer saved countless lives. You were honored by the villagers and became an emperor shogun.\n");
							printf("Game complete.");
							break;
							powerWS++;
							printf("Weapon powered up: ");
							weaponPower(powerWS);
						}
						else if (choice == 2) {
							printf("You ruled the village with the evil with an iron fist.\n");
							printf("Game complete.");
							break;
							powerWS++;
							printf("Weapon powered up: ");
							weaponPower(powerWS);
						}
					}
					else if (choice == 2) {
						printf("You ignored the woman and still went to the castle and face the evil sorcerer.");
						printf("He wants to make a deal with you. If you can help him take over the village.\n\n");
						printf("1. Ignore him and defeat the evil sorcerer.\n");
						printf("2. Accept the deal and rule the village with him.\n");
						printf("What do you want to do? ");
						scanf("%d", &choice);
						powerWS++;
						printf("Weapon powered up: ");
						weaponPower(powerWS);
						if (choice == 1) {
							printf("You defeated the evil sorcerer saved countless lives. You were honored by the villagers and became an emperor shogun.\n");
							printf("Game complete.");
							break;
							powerWS++;
							printf("Weapon powered up: ");
							weaponPower(powerWS);
						}
						else if (choice == 2) {
							printf("You ruled the village with the evil with an iron fist.\n");
							printf("Game complete.");
							break;
							powerWS++;
							printf("Weapon powered up: ");
							weaponPower(powerWS);
						}
					}
				}
				//kill both
				else if (choice == 2) {
					printf("You heartlessly use the katana on the goblin and the woman killing them both.");
					printf("The woman's soul was released and haunts you telling you that you need \nto kill the evil sorcerer that is invading the village living in the fortress castle.\n");
					printf("It is up to you if you want to save the village with your katana.\n\n"); 
					printf("1. Face the evil sorcerer.\n");
					printf("2. Ignore the woman's soul\n");
					printf("What course of action would you like to take? ");
					scanf("%d", &choice);
					powerWS++;
					printf("Weapon powered up: ");
					weaponPower(powerWS);
					if (choice == 1) {
						printf("\nYou journeyed to the castle and battled many enemy then you face the evil sorcerer.\n");
						printf("He wants to make a deal with you. If you can help him take over the village.\n\n");
						printf("1. Ignore him and defeat the evil sorcerer.\n");
						printf("2. Accept the deal and rule the village with him.\n");
						printf("What do you want to do? ");
						scanf("%d", &choice);
						powerWS++;
						printf("Weapon powered up: ");
						weaponPower(powerWS);
						if (choice == 1) {
							printf("You defeated the evil sorcerer but lost a lot of lives. You were honored by the villagers and became an emperor shogun.");
							printf("Game complete.");
							break;
							powerWS++;
							printf("Weapon powered up: ");
							weaponPower(powerWS);
						}
						else if (choice == 2) {
							printf("You ruled the village with the evil sorcerer and become tyranical.\n");
							printf("Game complete.");
							break;
							powerWS++;
							printf("Weapon powered up: ");
							weaponPower(powerWS);
						}
					}
					else if (choice == 2) {
						printf("You ignored the woman's soul and still went to the castle and face the evil sorcerer.");
						printf("He wants to make a deal with you. If you can help him take over the village.\n\n");
						printf("1. Ignore him and defeat the evil sorcerer.\n");
						printf("2. Accept the deal and rule the village with him.\n");
						printf("What do you want to do? ");
						scanf("%d", &choice);
						powerWS++;
						printf("Weapon powered up: ");
						weaponPower(powerWS);
						if (choice == 1) {
							printf("You defeated the evil sorcerer but lost a lot of lives. You were honored by the villagers and became an emperor shogun.");
							printf("Game complete.");
							break;
							powerWS++;
							printf("Weapon powered up: ");
							weaponPower(powerWS);
						}
						else if (choice == 2) {
							printf("You ruled the village with the evil sorcerer and become tyranical.\n");
							printf("Game complete.");
							break;
							powerWS++;
							printf("Weapon powered up: ");
							weaponPower(powerWS);
						}
						
					}

				}
			}
			//Lance
			else if (choice == 2) {
				
				printf("\nYou picked up the lance and your costume changed to a Knight.\n");
				printf("You exit the collapsed dungeon and after exiting you see a woman being attacked by a goblin.\n\n");
				printf("1. Help the woman and use the lance on the goblin.\n");
				printf("2. Use the lance on both the goblin and the woman to kill them.\n");
				printf("Which action do you want to take? ");
				scanf("%d", &choice);
				
				//help the woman
				if(choice == 1) {
					printf("\nYou run towards the goblin and use your lance. The goblin attacked you, but also, the goblin died.\n");
					printf("The woman thanked you and gave you a health potion for healing.\n");
					printf("The woman explained to you what happened to the village. The woman told you \nthat the village is being attacked by an evil sorcerer in the fortress castle.\n");
					printf("It is up to you if you want to save the village with your lance.\n\n"); 
					printf("1. Face the evil sorcerer.\n");
					printf("2. Ignore the woman.\n");
					printf("What course of action would you like to take? ");
					scanf("%d", &choice);
					powerWS++;
					printf("Weapon powered up: ");
					weaponPower(powerWS);	
					if(choice == 1) {
						printf("\nYou journeyed to the castle and battled many enemy then you face the evil sorcerer.\n");
						printf("He wants to make a deal with you. If you can help him take over the village.\n\n");
						printf("1. Ignore him and defeat the evil sorcerer.\n");
						printf("2. Accept the deal and rule the village with him.\n");
						printf("What do you want to do? ");
						scanf("%d", &choice);
						powerWS++;
						printf("Weapon powered up: ");
						weaponPower(powerWS);
						if (choice == 1) {
							printf("You defeated the evil sorcerer. The villager honored you and you became the knight KING.\n");
							printf("Game complete.");
							break;
							powerWS++;
							printf("Weapon powered up: ");
							weaponPower(powerWS);
						}
						else if (choice == 2) {
							printf("You ruled the land with the evil sorcerer with an iron fist.\n");
							printf("Game complete.");
							break;
							powerWS++;
							printf("Weapon powered up: ");
							weaponPower(powerWS);
						}
						
					}
					else if (choice ==2 ){
						printf("You ignored the woman and still went to the castle and face the evil sorcerer.");
						printf("He wants to make a deal with you. If you can help him take over the village.\n\n");
						printf("1. Ignore him and defeat the evil sorcerer.\n");
						printf("2. Accept the deal and rule the village with him.\n");
						printf("What do you want to do? ");
						scanf("%d", &choice);
						powerWS++;
						printf("Weapon powered up: ");
						weaponPower(powerWS);
						if (choice == 1) {
							printf("You defeated the evil sorcerer. The villager honored you and you became the knight KING.\n");
							printf("Game complete.");
							break;
							powerWS++;
							printf("Weapon powered up: ");
							weaponPower(powerWS);
						}
						else if (choice == 2) {
							printf("You ruled the land with the evil sorcerer with an iron fist.\n");
							printf("Game complete.");
							break;
							powerWS++;
							printf("Weapon powered up: ");
							weaponPower(powerWS);
						}
					}
				}
				//kill both
				else if (choice == 2) {
					printf("You heartlessly use the lance on the goblin and the woman killing them both.");
					printf("The woman's soul was released and haunts you telling you that you need \nto kill the evil sorcerer that is invading the village living in the fortress castle.");
					printf("It is up to you if you want to save the village with your water staff.\n\n"); 
					printf("1. Face the evil sorcerer.\n");
					printf("2. Ignore the woman's soul\n");
					printf("What course of action would you like to take? ");
					scanf("%d", &choice);
					powerWS++;
					printf("Weapon powered up: ");
					weaponPower(powerWS);
					if(choice == 1) {
						printf("\nYou journeyed to the castle and battled many enemy then you face the evil sorcerer.\n");
						printf("He wants to make a deal with you. If you can help him take over the village.\n\n");
						printf("1. Ignore him and defeat the evil sorcerer.\n");
						printf("2. Accept the deal and rule the village with him.\n");
						printf("What do you want to do? ");
						scanf("%d", &choice);
						powerWS++;
						printf("Weapon powered up: ");
						weaponPower(powerWS);
						if (choice == 1) {
							printf("You defeated the evil sorcerer but lost a lot of lives. The villager honored you and you became the knight KING.\n");
							printf("Game complete.");
							break;
							powerWS++;
							printf("Weapon powered up: ");
							weaponPower(powerWS);
						}
						else if (choice == 2) {
							printf("You ruled the village with the evil sorcerer and became tyranical.\n");
							printf("Game complete.");
							break;
							powerWS++;
							printf("Weapon powered up: ");
							weaponPower(powerWS);
						}
						
					}
					else if (choice ==2 ){
						printf("You ignored the woman's soul and still went to the castle and face the evil sorcerer.");
						printf("He wants to make a deal with you. If you can help him take over the village.\n\n");
						printf("1. Ignore him and defeat the evil sorcerer.\n");
						printf("2. Accept the deal and rule the village with him.\n");
						printf("What do you want to do? ");
						scanf("%d", &choice);
						powerWS++;
						printf("Weapon powered up: ");
						weaponPower(powerWS);
					}
						if (choice == 1) {
							printf("You defeated the evil sorcerer but lost a lot of lives. The villager honored you and you became the knight KING.\n");
							printf("Game complete.");
							break;
							powerWS++;
							printf("Weapon powered up: ");
							weaponPower(powerWS);
							
						}
						else if (choice == 2) {
							printf("You ruled the village with the evil sorcerer and became tyranical.\n");
							printf("Game complete.");
							break;
							powerWS++;
							printf("Weapon powered up: ");
							weaponPower(powerWS);
						}

				}
			}
		}
	
	}
int i; 
printf("\nENDING CREDITS: \n");
for(i = 0; i < 20; i++){
	
	printf("-");
}
char creatorName[8] = {"RICHMOND"};

for (i = 0; i < strlen(creatorName); i++){
	printf("\n%c", creatorName[i]);
}



FILE *writeToFile;
FILE *writeToFile2;
writeToFile = fopen("output25.txt", "w");
writeToFile2 = fopen("output25.txt", "a");
printf("\nCredits is written and saved on the output25.txt\n");
fprintf(writeToFile2, "THIS game is created By RICHMOND LAURETA for CSC 251 for Garrett Poppe. Thank YOU PROFESSOR for this semester.");
fclose(writeToFile2);
fclose(writeToFile);
break;
					}
					break;

			}
			case 26:
			{
					//Room created by Saad Khan ©
				while(choice != 99)
				{
					char riddleoptions[9][25] = {"The Kingdom of Kush", "The Kingdom of Aksum",
					"The Land of Punt", "Harla Kingdom", "Kingdom of D'mt", "Kingdom of Numidia",
					"Mali", "Kindom of Kerma", "Kindom of Makuria"};
					int i, size, num;
					double sqnum;
					FILE *wptr;

					printf("\nYou open the door...It's oddly heavy...Nonetheless it's open.\n");
					puts("Upon entering the room, there's a riddle at the wall.....Behold:");
					puts("1. Read the riddle.");
					puts("2. Turn back.");
					puts("3. Wipe the riddle off.");

					scanf("%d", &choice);

					if(choice == 1)
					{
						while(choice != 99)
						{
							printf("\nThe riddle reads:\n");
							puts("In the \"kingdom\" of gold where the red and yellow banner is hoisted.");
							puts("There inneth lies a mighty murky stream 4570720 yards long.");
							puts("Resources never forsaken. Never squandered. Never disregarded.");
							puts("What is this place?:");

							size = sizeof(riddleoptions)/sizeof(riddleoptions[0]);

							for(i = 0; i < size; i++)
							{
								printf("%d. %s\n", i + 1, riddleoptions[i]);
							}

							scanf("%d", &choice);

							if(choice == 7)
							{
								puts("You are a individual of wisdom...Duly please...");
								printf("Continue on...\n\n");
							}
							else
							{
								puts("Curse be upon thee...");
								puts("Thou shalt pass... but with blighted charm!!!");
								printf("Zaaaaaapppppp!!!!!!\n\n");
							}
							break;
						}
						break;
					}
					else if(choice == 2)
					{
						wptr = fopen("thefileoflife.txt", "w");
						fprintf(wptr, "This \"lucky\" egg won't assist you. You must think harder.\n");
			
						puts("You attempt to turn back...");
						puts("There is no where to turn back!!! Door does not exist anymore!!!");
						puts("You must do something else!");
					}
					else if(choice == 3)
					{
						while(choice != 99)
						{
							puts("You wipe the riddle off with your hand...");
							puts("It comes off like butter...");
							puts("...but another riddle appears on the wall!!!");
							puts("It reads:");

							srand(time(NULL));
							num = (rand() % 10) + 1;
							sqnum = sqrt(num);

							printf("Please select the square root of %d:\n", num);
							printf("1. %f\n", sqrt(sqnum));
							printf("2. %f\n", pow(sqnum, 2));
							printf("3. %f\n", sqnum + 3.14);
							printf("4. %f\n", sqnum);

							scanf("%d", &choice);

							if(choice != 4)
							{
								puts("Absoutely incorrect!!! Incorrect calculations!!!");
								puts("A hole opens beneth the \"floor()\"");
								printf("You fall swiftly into it.\n\n");
							}
							else
							{
								puts("Hmmm...That answer is accurate");
								puts("...But not seemingly satisfying...");
								printf("You are allowed to proceed into an unknown place.\n\n");
							}
							break;
						}
						break;
					}
				}
				break;
			}
			case 27:
			{
				
				int i,num,enterNum,missingNum=27, total;
				char choose, letters;
				int arr[5] = {0};				//array1 for random numbers
				int arr2[5] = {0};				//array2 for user input
				int *ptr;				
				ptr = arr;
				srand(time(NULL));
				puts("\nRoom 27 (SM)");
				puts("You have entered room 27");
				puts("The room is empty, you turn back....");
				puts("The door has magically disappeared");
				puts("Suddenly you hear something fall");

				while(choice != 99)
				{
					puts("what do you do?");
					puts("1. Stop?");
					puts("2. Look around the room?");
					puts("3. Find out what made the noise?");
					scanf("%d",&choice);
					if(choice == 1)
					{
						puts("\nWhy did you stop?");
						puts("Keep going");
						puts("You are still in Room 27");
					}
					else if(choice == 2)
					{
						puts("\nYou see numbers on the wall");
						randomFill(ptr);			//gets random num from function prototype
						for(i = 0; i < 5; i++)			//prints out numbers in array1
						{
							printf("%d",*ptr);
							ptr++;
						}
						puts("\n\nYou find a keypad, do you?");
						puts("1. Enter numbers? ");			//gives user choice to enter or not enter num
						puts("2. Dont do anything");
						scanf("%d", &choice);
						if(choice == 1)
						{
							puts("\nEnter code");
							for(i = 0; i < 5; i++)
							{
								scanf("%d", &arr2[i]);		//user enters num
							}
							for(i = 0; i < 5; i++)
							{
								if(arr[i] != arr2[i])		//checks if num are equal to each other
								{
									puts("\nYou didnt enter the correct numbers");
									puts("The keypad breaks");
									puts("There is no escape\n");
									break;
								}
								else 
								{
									puts("\nYou entered the numbers from the wall");
									puts("A door opens up\nyou walk through the door");
									puts("Room 27");
									puts("You're in Room 27 again");
									puts("There is a computer in the middle of the room");
									puts("You sit down in front of the computer ");
									puts("1. turn on computer");
									puts("2. walk away");
									scanf("%d", &choice);
									if(choice == 1)
									{
										puts("The computer turns on\n");
										puts("Hello");
										puts("Enter a number > 0 ");
										scanf("%d", &enterNum);
										if(enterNum<1)
										{
											puts("This number is not in range");
											puts("You have to start at the beginning for not following instructions");
											break;	
										}
										else
										{
											total = enterNum * missingNum;
											printf("%d * ? = %d\n", enterNum,total);
											puts("what is the missing number");
											scanf("%d", &enterNum);
											if(enterNum == missingNum)
											{
												puts("Congratulations you can walk into the next room");
												puts("Welcome to Room 27");
												break;
											}
											else
											{
												puts("You failed");
												puts("Room 27");
												break;
											}
										}
									}
									else
									{
										puts("You get up");
										puts("You are still in Room 27");
										break;
									}
								}
							}	
						}
						
						else
						{
							letters = prompt();
							if(letters == 'y')
							{
								puts("\nYou have entered another room\n");
								break;
							}
							else
							{
								puts("\nYou are still in Room 27");
							}
						}
					}
					else 
					{
						puts("\nThe item on the floor is a flashlight?");
						puts("The lights go out.....");
						puts("Do you....");
						puts("1.Turn on flashlight?\n2.Do nothing");
						scanf("%d", &choice);

						room27Output(choice);
						break;
					}	
				}	
					
				break;
			}
			case 28:
			{

				//Room #28 for Shane Cortez
				while (choice != 99)
				{
					srand(time(NULL));
					int randNum = rand() % 2;

					puts("you enter the room marked 28");
					puts("As the panic of drowning subsides you look up to notice that the room is shaking and the ground splitting in half revealing a pit to nothingness you have to act fast or risk missing the jump across!");
					puts("What do you do:");
					puts("1. JUMP!");
					puts("2. Quickly look around and reassess the situation");
					puts("99. At any time to End Game");
					scanf("%d", &choice);
					while (choice > 2 || choice < 1)
					{
						puts("enter 1, 2 or 99");
						scanf("%d", &choice);
					}

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
						while (choice > 2 || choice < 1)
						{
							puts("enter 1, 2 or 99");
							scanf("%d", &choice);
						}
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
							while (choice > 2 || choice < 1)
							{
								puts("enter 1, 2 or 99");
								scanf("%d", &choice);
							}
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
								shanesFileWriter(choice);
								if (choice == 1) //fire choice
								{
									puts("you write the ancient runes of fire onto the page.");
									puts("you must now read the writings properly or it will not work. (Hint:try using the rm28-scroll.txt for guidance)");
									puts("What will you mutter:");
									puts("1. I harness the power of Fire!");
									puts("2. Aprovecho el poder de Fuego!");
									puts("3. Jeg utnytter kraften til Eldur!");
									scanf("%d", &choice);
									while (choice > 3 || choice < 1)
									{
										puts("enter 1, 2, 3 or 99");
										scanf("%d", &choice);
									}
									while (choice != 3)
									{
										puts("nothing seems to happen... maybe another word...");
										scanf("%d", &choice);
									}
									if (choice == 3)
									{
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
								}
								else if (choice == 2) //water choice
								{
									puts("You write down the ancient runes of water onto the page.");
									puts("you must now read the writings properly or it will not work. (Hint:try using the rm28-scroll.txt for guidance)");
									puts("What will you mutter:");
									puts("1. I harness the power of Water!");
									puts("2. Jeg utnytter kraften til Laguz!");
									puts("3. Aprovecho el poder de Aqua!");
									scanf("%d", &choice);
									while (choice > 3 || choice < 1)
									{
										puts("enter 1, 2, 3 or 99");
										scanf("%d", &choice);
									}
									while (choice != 2)
									{
										puts("nothing seems to happen... maybe another word...");
										scanf("%d", &choice);
									}

									puts("the scroll glows a conforting blue color, suddenly your hands feel damp, you can now use this on the door.");
									puts("You ready yourself and shoot a powerful stream of water on the vines.");
									puts("You stare at the vines as they grow greener and stronger from the water, the vines then grow at a rapid rate engulfing the narrow walkway that you stand on.");
									puts("You find yourself losing balance on the decreasing surface, eventually falling into the pit...");
									puts("You are never seen again...");
									puts("Game Over");
									choice = 99;
									break;
								}
								else if (choice == 3) //earth choice
								{
									puts("You write the ancient rune of earth.");
									puts("you must now read the writings properly or it will not work. (Hint:try using the rm28-scroll.txt for guidance)");
									puts("What will you mutter:");
									puts("1. Jeg utnytter kraften til Midgard!");
									puts("2. I harness the power of Earth!");
									puts("3. Aprovecho el poder de Tierra!");
									scanf("%d", &choice);
									while (choice > 3 || choice < 1)
									{
										puts("enter 1, 2, 3 or 99");
										scanf("%d", &choice);
									}
									while (choice != 1)
									{
										puts("nothing seems to happen... maybe another word...");
										scanf("%d", &choice);
									}

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
								shanesFileWriter(choice);
								if (choice == 1) //fire choice
								{
									puts("you write the ancient runes of fire onto the page.");
									puts("you must now read the writings properly or it will not work. (Hint:try using the rm28-scroll.txt for guidance)");
									puts("What will you mutter:");
									puts("1. I harness the power of Fire!");
									puts("2. Aprovecho el poder de Fuego!");
									puts("3. Jeg utnytter kraften til Eldur!");
									scanf("%d", &choice);
									while (choice > 3 || choice < 1)
									{
										puts("enter 1, 2, 3 or 99");
										scanf("%d", &choice);
									}
									while (choice != 3)
									{
										puts("nothing seems to happen... maybe another word...");
										scanf("%d", &choice);
									}
									puts("The scroll flashes bright red with fiery power, suddenly your hands begin to feel hot, when suddenly they light ablaze! with this power you can shoot fire out of your hand!");
									puts("You strike an agressive pose and engulf the vine covered door in flames.");
									puts("As the fire and smoke subside, the door sits ajar with a light shining through.");
									puts("What will you do:");
									puts("1. walk through the door");
									puts("2. Turn around and jump into the pit");
									scanf("%d", &choice);
									while (choice > 2 || choice < 1)
									{
										puts("enter 1, 2 or 99");
										scanf("%d", &choice);
									}

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
								else if (choice == 2) //water choice
								{
									puts("You write down the ancient runes of water onto the page.");
									puts("you must now read the writings properly or it will not work. (Hint:try using the rm28-scroll.txt for guidance)");
									puts("What will you mutter:");
									puts("1. I harness the power of Water!");
									puts("2. Jeg utnytter kraften til Laguz!");
									puts("3. Aprovecho el poder de Aqua!");
									scanf("%d", &choice);
									while (choice > 3 || choice < 1)
									{
										puts("enter 1, 2, 3 or 99");
										scanf("%d", &choice);
									}
									while (choice != 2)
									{
										puts("nothing seems to happen... maybe another word...");
										scanf("%d", &choice);
									}

									puts("the scroll glows a conforting blue color, suddenly your hands feel damp, you can now use this on the door.");
									puts("You ready yourself and shoot a powerful stream of water on the vines.");
									puts("You stare at the vines as they grow greener and stronger from the water, the vines then grow at a rapid rate engulfing the narrow walkway that you stand on.");
									puts("You find yourself losing balance on the decreasing surface, eventually falling into the pit...");
									puts("You are never seen again...");
									puts("Game Over");
									choice = 99;
									break;
								}
								else if (choice == 3) //earth choice
								{
									puts("You write the ancient rune of earth.");
									puts("you must now read the writings properly or it will not work. (Hint:try using the rm28-scroll.txt for guidance)");
									puts("What will you mutter:");
									puts("1. Jeg utnytter kraften til Midgard!");
									puts("2. I harness the power of Earth!");
									puts("3. Aprovecho el poder de Tierra!");
									scanf("%d", &choice);
									while (choice > 3 || choice < 1 || choice == 99)
									{
										puts("enter 1, 2, 3 or 99");
										scanf("%d", &choice);
									}
									while (choice != 1)
									{
										puts("nothing seems to happen... maybe another word...");
										scanf("%d", &choice);
									}

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
							while (choice > 2 || choice < 1)
							{
								puts("enter 1, 2 or 99");
								scanf("%d", &choice);
							}
							if (choice == 1)
							{

								puts("you turn your attention to the chest, you pull out the key and unlock the chest, inside you find a scroll which reads:");
								puts("write a spell and this scroll will grant you power...");
								puts("Unfortunately you only studied one year of spellcasting in highschool and the only three spells you remember from back then are:");
								puts("1. fire");
								puts("2. water");
								puts("3. earth");
								puts("What will you write:");
								scanf("%d", &choice);
								shanesFileWriter(choice);
								if (choice == 1) //fire choice
								{
									puts("you write the ancient runes of fire onto the page.");
									puts("you must now read the writings properly or it will not work. (Hint:try using the rm28-scroll.txt for guidance)");
									puts("What will you mutter:");
									puts("1. I harness the power of Fire!");
									puts("2. Aprovecho el poder de Fuego!");
									puts("3. Jeg utnytter kraften til Eldur!");
									scanf("%d", &choice);
									while (choice > 3 || choice < 1)
									{
										puts("enter 1, 2, 3 or 99");
										scanf("%d", &choice);
									}
									while (choice != 3)
									{
										puts("nothing seems to happen... maybe another word...");
										scanf("%d", &choice);
									}
									puts("The scroll flashes bright red with fiery power, suddenly your hands begin to feel hot, when suddenly they light ablaze! with this power you can shoot fire out of your hand!");
									puts("You strike an agressive pose and engulf the vine covered door in flames.");
									puts("As the fire and smoke subside, the door sits ajar with a light shining through.");
									puts("What will you do:");
									puts("1. walk through the door");
									puts("2. Turn around and jump into the pit");
									scanf("%d", &choice);
									while (choice > 2 || choice < 1)
									{
										puts("enter 1, 2 or 99");
										scanf("%d", &choice);
									}

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
								else if (choice == 2) //water choice
								{
									puts("You write down the ancient runes of water onto the page.");
									puts("you must now read the writings properly or it will not work. (Hint:try using the rm28-scroll.txt for guidance)");
									puts("What will you mutter:");
									puts("1. I harness the power of Water!");
									puts("2. Jeg utnytter kraften til Laguz!");
									puts("3. Aprovecho el poder de Aqua!");
									scanf("%d", &choice);
									while (choice > 3 || choice < 1)
									{
										puts("enter 1, 2, 3 or 99");
										scanf("%d", &choice);
									}
									while (choice != 2)
									{
										puts("nothing seems to happen... maybe another word...");
										scanf("%d", &choice);
									}
									puts("the scroll glows a conforting blue color, suddenly your hands feel damp, you can now use this on the door.");
									puts("You ready yourself and shoot a powerful stream of water on the vines.");
									puts("You stare at the vines as they grow greener and stronger from the water, the vines then grow at a rapid rate engulfing the narrow walkway that you stand on.");
									puts("You find yourself losing balance on the decreasing surface, eventually falling into the pit...");
									puts("You are never seen again...");
									puts("Game Over");
									choice = 99;
									break;
								}
								else if (choice == 3) //earth choice
								{
									puts("You write the ancient rune of earth.");
									puts("you must now read the writings properly or it will not work. (Hint:try using the rm28-scroll.txt for guidance)");
									puts("What will you mutter:");
									puts("1. Jeg utnytter kraften til Midgard!");
									puts("2. I harness the power of Earth!");
									puts("3. Aprovecho el poder de Tierra!");
									scanf("%d", &choice);
									while (choice > 3 || choice < 1 || choice == 99)
									{
										puts("enter 1, 2, 3 or 99");
										scanf("%d", &choice);
									}
									while (choice != 1)
									{
										puts("nothing seems to happen... maybe another word...");
										scanf("%d", &choice);
									}
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
								shanesFileWriter(choice);
								if (choice == 1) //fire choice
								{
									puts("you write the ancient runes of fire onto the page.");
									puts("you must now read the writings properly or it will not work. (Hint:try using the rm28-scroll.txt for guidance)");
									puts("What will you mutter:");
									puts("1. I harness the power of Fire!");
									puts("2. Aprovecho el poder de Fuego!");
									puts("3. Jeg utnytter kraften til Eldur!");
									scanf("%d", &choice);
									while (choice > 3 || choice < 1)
									{
										puts("enter 1, 2, 3 or 99");
										scanf("%d", &choice);
									}
									while (choice != 3)
									{
										puts("nothing seems to happen... maybe another word...");
										scanf("%d", &choice);
									}
									puts("The scroll flashes bright red with fiery power, suddenly your hands begin to feel hot, when suddenly they light ablaze! with this power you can shoot fire out of your hand!");
									puts("You strike an agressive pose and engulf the vine covered door in flames.");
									puts("As the fire and smoke subside, the door sits ajar with a light shining through.");
									puts("What will you do:");
									puts("1. walk through the door");
									puts("2. Turn around and jump into the pit");
									scanf("%d", &choice);
									while (choice > 2 || choice < 1)
									{
										puts("enter 1, 2 or 99");
										scanf("%d", &choice);
									}

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
								else if (choice == 2) //water choice
								{
									puts("You write down the ancient runes of water onto the page.");
									puts("you must now read the writings properly or it will not work. (Hint:try using the rm28-scroll.txt for guidance)");
									puts("What will you mutter:");
									puts("1. I harness the power of Water!");
									puts("2. Jeg utnytter kraften til Laguz!");
									puts("3. Aprovecho el poder de Aqua!");
									scanf("%d", &choice);
									while (choice > 3 || choice < 1)
									{
										puts("enter 1, 2, 3 or 99");
										scanf("%d", &choice);
									}
									while (choice != 2)
									{
										puts("nothing seems to happen... maybe another word...");
										scanf("%d", &choice);
									}
									puts("the scroll glows a conforting blue color, suddenly your hands feel damp, you can now use this on the door.");
									puts("You ready yourself and shoot a powerful stream of water on the vines.");
									puts("You stare at the vines as they grow greener and stronger from the water, the vines then grow at a rapid rate engulfing the narrow walkway that you stand on.");
									puts("You find yourself losing balance on the decreasing surface, eventually falling into the pit...");
									puts("You are never seen again...");
									puts("Game Over");
									choice = 99;
									break;
								}
								else if (choice == 3) //earth choice
								{
									puts("You write the ancient rune of earth.");
									puts("you must now read the writings properly or it will not work. (Hint:try using the rm28-scroll.txt for guidance)");
									puts("What will you mutter:");
									puts("1. Jeg utnytter kraften til Midgard!");
									puts("2. I harness the power of Earth!");
									puts("3. Aprovecho el poder de Tierra!");
									scanf("%d", &choice);
									while (choice > 3 || choice < 1 || choice == 99)
									{
										puts("enter 1, 2, 3 or 99");
										scanf("%d", &choice);
									}
									while (choice != 1)
									{
										puts("nothing seems to happen... maybe another word...");
										scanf("%d", &choice);
									}
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
				printf("'Welcome to room 32 %s' a mysterious voice says.\n",name);
				puts("Shivers run down your spine you look to your left, nothing there.");
				puts("You look to your right, again nothing there.");
				puts("Something taps your back and you turn around");
				puts("Its a zombie ready to munch on some of your delicious brains.");
				puts("You say to yourself 'Now is time to use my super quick reactions'.");
				puts("There is a box to your left and inside there is a gun to kill the zombie.");
				printf("What do you do grab the gun with 'g' or run with 'r'\n");
				scanf("%c",&gun);

				if(gun == 'g')
				{
					printf("\n. \n. \n.\nNice choice you shot and killed the zombie, *phew* that was close\n\n");
				printf("\n\n\n'Nice shot someone says', you look and you find a girl sitting with her 48 revolver around her waist chewing on a piece of wheat, wait where did she get the wheat nevermind that, she says\n");
				printf("'Well well well if it isnt the all talked about %s you're quite famous around these parts'\n",name);
				puts("You look at her with a blank stare");
				puts("She says 'well haven't you ever seen a pretty lady before you look so confused'");
				puts("You stutter your words 'w w w well you sure are pretty but have we met before?'");
				printf("'Sure we have' she says my name is Alicia\n");
				printf("You let her know that you noticed the gun around her waist.\n");
				puts("She shows you her gun and her ammo and this doesn't look like regular ammo, its silver and they're numbered");
				puts("You ask her why they are numbered and she says that each bullet she carries are specific to a certain monster she kills today she is set to carry and kill numbers");
				bullets(arr);
				printf("\n\n\n");
				puts("You continue to walk and talk with Alicia and she decides to ask you if you want to join her bandit, monster killing, crew.");
				bandit();
				break;
				}
		
				else if(gun == 'r')
				{
				printf("\n. \n. \n. \nYou chose to run so you turn and start running full speed away from the zombie but you trip on your shoelace and the zombie gets to you and eats your brains, GG!!\n");
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
					int flag = 0; 
					while(choice != 99 && flag !=1) 
					{
							int userchoice;//local variable to store user input. 

							/*Introduction of the game*/
							printf("\n"); 
							printf("Welcome to Mythical Island Adventure: you will face certain situations where your character has to make right decision to complete the game. Use your wits to survive the Mythical Island. Good Luck!\n");
						       printf("Choose the response between entering 1 or 2 whichever will take you further the game. Enter 99 to exit the room 34.\n");

					/*game starts*/
					/*get valid input from user for decision _1_ and take action based on decision. */

					do{
						printf("\n");//seperator 
						
						printf("You start on the journey to come back home to your family for Christmass holiday. Your magical wand transform into a broom stick and fly to the skies. In the middle of the ocean, storm came and broke your broom-stick. You find your self in the middle of the island or so called Mythical Island. What do you do?\n");
						printf("1: You make a boat using coconut leaves and try to escape to the ocean.\n");
					        printf("2: You find and built a shelter using woods and stones.\n");

					/*seperator*/ 
						printf("\n");

						printf("Your choice: ");
						scanf(" %d", &userchoice);
						
						flag = 1; 

						choice = userchoice;//choice set to userchoice if the user decides to exit _99_. 

					if(userchoice==1)
						{
						 printf("\n");//seperator
						 printf("The boat is not strong enough and destroyed your journey going to your family celebration in Christmass holiday.\n");//return
					 	 printf("\n"); 

						 printf("Game Over!\n");
						 printf("\n"); 	 
						}
					
					else if(userchoice == 2)
						{
						printf("\n");
					        printf("Your shelter is built. You start exploring the island...\n"); 	
						}

					else if(userchoice != 1 && userchoice != 2 && choice != 99)
						{
						printf("Invalid input! Please enter 1 or 2 only.\n"); 	
						}
					}	       
					while(userchoice != 1 && userchoice != 2 &&choice != 99);//to make sure choice isn't _99_. 

					if(choice == 99)
						break; 

					if(choice != 1)//if they didn't choose _1_, then continue. 
						{
						do{ //get valid input from the user for decision _2_ and take action based on decision. 
						printf("\n");//separator

						printf("You see cyclops with their weapons while exploring the forest inside of the island. What do you do?\n"); 	
						printf("1: You try to fight and kill the monster using a wood.\n");
					        printf("2: You quickly hide and secretely go to the other side of the island.\n");

						printf("\n");//separator

						printf("Your choice: ");
						scanf(" %d", &userchoice);

						choice = userchoice;//set choice to userchoice if _99_ was read in to exit. 

						if(userchoice==1)
						{
						printf("\n"); 
						printf("You became cyclops lunch, they said you are yummy and thank you for the meal.\n");
						printf("\n");
							
						printf("Game Over!\n");
						printf("\n"); 	
					       	break;//I am using my void main to exit in the game only. 	
						}

						else if(userchoice==2)
						{
						printf("\n");
					        printf("You found fruits and coconut juice. You go back to your shelter and ate them to fight another day...\n"); 	
						}
						
						else if(userchoice != 1 && userchoice != 2 && choice != 99)
						{
						printf("Invalid input! Please enter 1 or 2 only.\n");
						}

						 }	while(userchoice !=1 && userchoice !=2 && choice != 99); 

						if(choice == 99)
						break;

					/*if choice wasn't _1_, they are still in the game. */
						if(choice != 1)
						{
						do{ //get valid input from user for decision _3_ and take action based on decision. 
						
						printf("\n"); //separator

						printf("By exploring yesterday, you found out cyclops looks big and strong, and trolls looks small and weak. What do you do?\n"); 
						printf("1: You approach the friendly trolls.\n");
						printf("2: You approach cyclops to align yourself with powerful forces not sure their instention though.\n");

						printf("\n"); 

						printf("Your choice: ");
						scanf(" %d", &userchoice);

						choice = userchoice; //set choice to userchoice to see if _99_ was read in to exit. 

						if(userchoice==1)
						{
							printf("\n"); 
							printf("The trolls are indeed friendly they invite you to their home, so your not alone anymore.\n"); 
						}	

						else if(userchoice==2)
						{
						printf("\n"); //separator
						printf("You try to communicate with cyclops. They get angry and attack you because their hunting prey got escape.\n");
						printf("\n"); 

						printf("Game Over!\n");
					        printf("\n"); 	
					        break; //break instead of return _0_ because I'm using a void main, and want to exit my game not the whole program. 	
						}

						else if(userchoice != 1 && userchoice != 2 && choice != 99)
						{
						printf("Invalid input! Please enter 1 or 2 only.\n"); 
						}

						}	while(userchoice !=1 && userchoice != 2 && choice != 99); 

						if(choice == 99)
						break; 

						/*if choice wasn't _2_, they are still in the game*/
						if(choice != 2)
						{
						do{/*get valid input from user for decision _4_ and take action based on decision. */
						printf("\n");//separator

						printf("The grandpa troll tells you a story the enemies of the island of them are the pirates and other are cyclops. The next day you help trolls to catch fishes on the sea. However, you see a pirate ship on the other side of the island. What do you do?\n");
						printf("1: You try to befriend them and use the opportunity to get away from the island.\n");
					        printf("2: You hide and run to tell the trolls about the arriving pirates on the island...\n");

						printf("\n");//separator
						
						printf("Your choice: "); 
						scanf(" %d", &userchoice);
						
						choice = userchoice; //to set choice to userchoice to see if _99_ was read in to exit. 
						
						if(userchoice==1)
						{
						printf("\n");//separator

						printf("You are surrounded by pirates, and make you their slave. You are taken away from the island but stuck with pirates forever.\n");
						printf("\n"); 

						printf("Game Over!\n");
					       	printf("\n"); 	
						break; //break instead of return _0_ because I'm using my void main and want to exit to my game only. 
						}	

						else if(userchoice == 2)
						{
						printf("\n"); 
						printf("The trolls are happy you told them about the pirates are exploring the beach. The trolls create an invisible barrier to keep you and other trolls safe away from the  pirates.\n"); 
						}

						else if(userchoice != 1 && userchoice != 2 && choice != 99)
						{
						printf("Invalid input! Please enter 1 or 2 only.\n"); 
						}
						  }	while(userchoice != 1 && userchoice !=2 && choice != 99);

						if(choice == 99)
						break;

						if(choice != 1)
						{
						
							do{ /*get valid input from user for decision _5_ and take action based on decision.*/
								printf("\n"); 

								printf("The pirates did not find any interesting on the island, they leave. Trolls and you gather and celebrate. However, the celebration is too loud, the cyclops came, break the barrier, and attacked the trolls home. The grandfather troll try to combat the cyclops but failed. He hand you down his magical pendant What do you do?\n");
							        printf("1: Take the magical pendant to fix your broken flying broom stick, save your self and ran away.\n");
								printf("2: Take the pendant, fix your magical wand, summon fairies alliances to save trolls including the grandfather from evil cyclops.\n");								
								printf("\n");//separator
								
								printf("Your choice: ");
								scanf(" %d", &userchoice);

							choice = userchoice;//to set choice to userchoice to see if _ 99_ was read in to exit.
							
							if(userchoice==1)
							{
							printf("\n");//separator

							printf("Because of your selfishness, your flying broomstick broke, you trip over a cliff pluging to inevitable death.\n");
							printf("\n"); 

							printf("Game Over!\n");
						       	printf("\n"); 	
						        break;//break instead of return _0_ because I'm using a void main and only want to exit my game.  	
							}	

							else if(userchoice==2)
							{
							printf("\n");//separator
						       	
							printf("The grandfather troll let you keep his magical pendant as a present, teach you to summon door a shorcut passage way going to your family home. Everyone surprise to welcome you warmly to celebrate Christmass holiday with them.\n ");
							printf("\n"); 
							printf("You win the game. The End!\n"); 	
							printf("\n");//separator 
							}

							else if(userchoice != 1 && userchoice != 2 && choice != 99)
							{
							printf("Invalid input! Please enter 1 or 2 only.\n"); 
							}
							
							}	while(userchoice !=1 && userchoice !=2 && choice !=99); 

							if(choice == 99)
							break; 
							  }
					 	       	  }	
						          }
						          }
					
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

					char riddle[5] = { 'j','o','k','e','\0' };
					char guess[6];
					int math = 7;
					char* ptr;
					ptr = riddle;



					while (choice != 99)
					{
						puts("You entered Room 36");
						puts("you are now entering an Arena, Where you can see the Ruler telling you to step into the middle.");
						puts("You can see three shadows walking to you, the Ruler askes you to choose one of the to fight them.");
						puts(" What will you do?");
						puts("1. Fight one of the Shadows");
						puts("2. Try and talk to the Ruler");
						puts("3. Try and run for your life");
						scanf("%d", &choice);


						switch (choice)
						{
						case 1:
							puts("You chose to fight one of the shadows. Now chose with whom you will fight");
							puts("1. shadow #1");
							puts("2. shadow #2");
							puts("3. shadow #3");
							scanf("%d", &choice);

							if (choice == 1)
							{
								puts(" You Chose Shadow 1, Shadow 1 is Albert Einstein");
								puts("You are infront of Einstein stonished that you forgot ur fighting him.");
								puts("Einstein: Instead of fighting with your hands lets fight with our brains. You need to solve this problem to beat me.");
								problem1(math);
								return EXIT_SUCCESS;
								break;

							}

							if (choice == 2)
							{
								puts(" You Chose to fight Shadow #2.");
								puts(" Shadow #2 is Thanos.");
								puts(" Now you have done it. It's your time to try and fight the most powerful villain in the MCU. You are thinking 'how can i defeat him without any powers like the other Avengers?'");
								puts(" A mysterious Person appers and tosses you a flask and tells you to drink it......");
								puts("Will you drink it????");
								puts(".......");
								puts(".....");
								puts("...");
								puts("It was water it didnt do much for you.....  ");
								puts("You died");
								return EXIT_SUCCESS;
								break;
							}

							if (choice == 3)
							{
								puts("You chose to fight Shadow #3");
								puts("Shadow #3 is Yoda.");
								puts(" Star wars Theme starts to play in the background");
								puts(" before the fight starts Yoda speaks.");
								puts("Yoda: In trouble you are, May the force be with you");
								puts(" flip a coin we will, to see the force with whom it is.");
								flip();

								if (flip() == 0)
								{
									puts("Win the game I did, die you will");
									return EXIT_SUCCESS;
									break;
								}
								else
								{
									puts("Lose the game i did, reward you will get now.");
									return EXIT_SUCCESS;
									break;
								}

								break;

							}

							else
							{
								puts("Please try again");

								break;
							}


						case 2:
							puts("You tried to talk to the Ruler");
							puts("He only wants entertainment and He tells you that if you solve this riddle you are free to go but if you fail you are dead.");
							puts("I can be cracked, I can be made. I can be told, I can be played. What am I?");
							problem2(ptr);
							return EXIT_SUCCESS;
							break;



						case 3:
							puts("You try to run");
							puts("You start to run to the arc you came in once inside you lock the doorbehind you,after taking your breath back you notice that there are two alley ways and you dont remember which path you took.");
							puts("Choose path 1 or path 2");
							scanf("%d", &choice);

							if (choice == 1)
							{
								puts("You chose poorly and got caught by the guards and they killed you.");
								return EXIT_SUCCESS;
								break;
							}
							if (choice == 2)
							{
								puts("A strange flying light guided you throughout the passage and you are now outside the cave");
								puts(" You are outside and ran as far as you could from the cave to never return....");
								return EXIT_SUCCESS;
								break;
							}
							else
								puts("please try again");

							break;


						}
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
		puts("\nYou have guessed the anwer correctly. You may access the laptop to get out of the mansion...Good Job!\n");
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
		puts("You guessed correctly! You may have access to the laptop!\n");
	}
	else
	{
		puts("Your guess was incorrect! Better luck next time!\n");
	}
	
	return EXIT_SUCCESS;

}

int choice3(int number1)
{
	int answer = 0;

//	printf("magic number is : %d\n", number1);	
	
	printf("10 + magic number = %d\n", (10 + number1));
	printf("5 * magic number  = %d\n", (5 * number1));
	printf("20 - magic number = %d\n", (20 - number1));
	printf("(4^2) + magic Number = %.2f\n", ((pow(4, 2) + number1)));
	
	printf("What is your guess? ");
	scanf(" %d", &answer);
	
	if(answer == number1)
	{
	printf("You guessed it correctly! Now you have access to the laptop!\n"); 
	return EXIT_SUCCESS;
	}
	else
	{
	puts("You guessed it wrong! You are stuck in the room. \n");
	return EXIT_SUCCESS;
	}	
	
}	

int choice4(int *ptr1)
{
	int i, j, k;
	int sum = 0, guess = 0;

	for(k = 0; k < 6; k++)
	{
		printf("Array[%d]= %d ",k+1, *ptr1);
		sum += *ptr1;
		ptr1++;
	}
	
	printf("What is your guess: ");
	scanf(" %d", &guess);
		
	if(guess == sum)
	{
	printf("\nSum: %d\n. You guessed it right! You have access to the laptop!\n", sum);
	return EXIT_SUCCESS;
	}
	else
	{
	printf("\nSum: %d\n. You guessed it wrong! You are stuck in the room!\n", sum);
	return EXIT_SUCCESS;
	}
}

int choice5(void)
{
	printf("************************************\n");
	printf("***************YOU******************\n");
	printf("***************ARE******************\n");
	printf("************FINISHED!***************\n");
	printf("************************************\n");
	
	return EXIT_SUCCESS;
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



char prompt(void)
{
	char choose;
	puts("\nYou turn around and see a door that wasnt there before");
	puts("Do you walk in?");
	puts("y/n?");
	scanf(" %c", &choose);			//gets choice from use
	
	return choose;

}
void randomFill(int *ptr)		//function definition to fill array1 with random int 0-9:wq
{
	int i;
	for(i = 0; i < 5; i++)
	{
		ptr[i] = rand()%10;
	}
}
void room27Output(int z)
{
	if(z == 1)
	{
		puts("\nYou are trapped in here with us");
		puts("Game Over");
	}
	else
	{
		puts("\nYou are sitting in the dark");
		puts("Having fun?");
		puts("Bye\n");
	}
	
}



void oddDeviceShenanigans(void) {
	puts("");
	puts("As you you make contact with the odd device, your vision goes grey and then you black out.");
	puts("");
	puts("In a dream like state you feel yourself falling...and falling....");
	puts("");
	puts("You find yourself back in the room where you started!!!!!");
	puts("");										
}

int drunkBehavior(void) {
	int x = 0;
	x = 1 + rand()%10;
	return x;
}


void bRed(void)
{
	printf("\033[1;31m");
}
void bYellow(void)
{
	printf("\033[01;33m");
}
void bBlue(void)
{
	printf("\033[1;34m");
}
void bCyan(void)
{
	printf("\033[0;36m");
}
void bGreen(void)
{
	printf("\033[1;32m");
}
void reset (void)
{
	printf("\033[0m");
}

void displayInputs(int c)
{
	bYellow(
	       );
	printf("Inputs: %d / 9\n", c);
	reset(
	     );
}
void displayStats(int c, int s)
{
	bYellow(
	       );
	printf("Inputs: %d / 9\n", c);
	printf("Score: %d / 37\n", s);
	reset(
	     );
}

void woman(void)
{
	bBlue();

	puts("                    __.    ");
	puts("                .qd$$$$bp.");
	puts("              .q$$$$$$$$$n.");
	puts("            .$$$$$$$$$$$$$$");
	puts("           .q$$$$$$$$$$$$$$$");
	puts("          .$$$$$$$$$$$Y ####;");
	puts("        .q$$$$$$$$P^\"_.`;#### ");
	puts("       q$$$$$$;}    ,   /####P   ");
	puts("     .$$$P^::Y$/`  _   .:.$$/");
	puts("    .L.;..    \\ `.__-:.. \\$P");
	puts("     $':.  __.. :   :..    :");
	puts("");
	reset();
}

void congratulations(void)
{
	bBlue();
	puts("\n");
	puts("                   __.");
	puts("               .qd$$$$bp.");
	puts("             .q$$$$$$$$$$n.");
	puts("            .$$$$$$$$$$$$$$");
	puts("          .q$$$$$$$$$$$$$$$");
	puts("         .$$$$$$$$Y  ######;");
	puts("         .q$$$$PP^/   _`\\;###"); 
	puts("         &$$$$;}/-    -  \\;##");
	puts("       .2$$$$$/`    .   /####P");
	puts("      q$$$$$$$$\\   __. .##$$#");
	puts("    .$$...... ;  .   ./####\\$$P");	
	puts("   .L;;-------  }  `` {########");
	puts("    $'\":$$ ___)       (___    ");
	puts("        ````   --     --   ````");
	puts("   		   V");
	puts("");
	puts(" _____ _                 _     __   __            __  ");
	puts("|_   _| |               | |    \\ \\ / /            \\ \\");
	puts("  | | | |__   __ _ _ __ | | __  \\ V /___  _   _  (_) |");
	puts("  | | | '_ \\ / _` | '_ \\| |/ /   \\ // _ \\| | | |   | |");
	puts("  | | | | | | (_| | | | |   <    | | (_) | |_| |  _| |");
	puts("  \\_/ |_| |_|\\__,_|_| |_|_|\\_\\   \\_/\\___/ \\__,_| (_) |");
	puts("                                                  /_/ ");
	reset();
}



///////////Shanes room methods///////////

void shanesFileWriter(int choice)
{
	FILE *write;
	char plaintext[256];
	char fire[50];
	char water[50];
	char earth[50];

	if (choice != 1 && choice != 2 && choice != 3 && choice != 99)
	{
		puts("Incorrect input try typing 1.Fire, 2.Water, or 3.Earth");
		scanf("%d", &choice);
	}else
	{
	write = fopen("rm28-scroll.txt","w");
	char plaintext[256] = "write a spell and this scroll will grant you power...";
	char fire[50] = "Jeg utnytter kraften til Eldur";
	char water[50] = "Jeg utnytter kraften til Laguz";
	char earth[50] = "Jeg utnytter kraften til Midgard";
	}
	
	
	switch (choice)
	{
	case 1:
		//fire
		puts("fire puts");
		fprintf(write, "%s\n%s" ,plaintext,fire);

		break;
	case 2:
		//water

		fprintf(write, "%s\n%s", plaintext, water);

		break;
	case 3:
		//earth

		fprintf(write, "%s\n%s", plaintext, earth);
		
		break;
	case 99:
		return;
	default:
		shanesFileWriter(choice);
		break;
	}
	fclose(write);
}

///////////Shanes room methods end/////////


void caseRandomizer(char* name, int* bananaAmount, int* orangeAmount)
{
	int charCounter = 0,
		randomCase = 0,
		lowerAmount = 0,
		upperAmount = 0,
	    winLoseAmount = 0;
	
	puts("You have entered the case randomizer room ...\n"
		 "Your name's letters' cases are randomized. If there are more capital letters, you are rewarded!\n"
		 "Otherwise, there will be punishment ... ");



	for (charCounter = 0; charCounter < 256; charCounter++)
	{
		randomCase = rand() % 2;

		if (randomCase == 0)
		{
			name[charCounter] = toupper(name[charCounter]);
		}
		else
		{
			name[charCounter] = tolower(name[charCounter]);
		}
	}

	for (charCounter = 0; charCounter < 256; charCounter++)
	{
		if (islower(name[charCounter]))
		{
			lowerAmount++;
		}
		else if (isupper(name[charCounter]))
		{
			upperAmount++;
		}
	}

	if (upperAmount > lowerAmount)
	{
		winLoseAmount = 1 + rand() % 7;
		*bananaAmount += winLoseAmount;
		*orangeAmount += winLoseAmount;

		printf("Congratulations! You have won %d bananas and oranges!\n", winLoseAmount);
	}
	else
	{
		winLoseAmount = 1 + rand() % 3;
		*bananaAmount -= winLoseAmount;
		*orangeAmount -= winLoseAmount;

		printf("Unfortunately, you lost and lose %d bananas and oranges ... \n\n", winLoseAmount);
	}
}

void drawPicture(void)
{
	puts("You enter the room and can faintly see a picture at the distance. As you walk closer to the image, you see ... \n");

	puts("        _--~~--_");
	puts("      /~/_|  |_\\~\\");
	puts("     |____________|");
	puts("     |[][][][][][]|");
	puts("   __| __         |__");
	puts("  |  ||. |   ==   |  |");
	puts(" (|  ||__|   ==   |  |)");
	puts("  |  |[] []  ==   |  |");
	puts("  |  |____________|  |");
	puts("  /__\\           /__\\");
	puts("   ~~              ~~ ");
	puts("");
}

void roomPrompt(int* userChoice)
{
	do
	{
		puts("Main Menu:\n"
			"1) Enter Room 1.\n"
			"2) Enter Room 2.\n"
			"3) Enter Room 3.\n");
		printf("Enter the Room you wish to enter: ");
		scanf("%d", userChoice);
	} while ((*userChoice < 1) || (*userChoice > 3));
}

void gorillaRoom(int* bananaAmount, int* orangeAmount)
{
	int userChoice = 0,
		winLoseAmount = 0,
		chanceToSteal = 0;

	printf("You enter the room and on the far end of the room, your eyes easily catch a very large gorilla sleeping soundly.\n"
		"Behind the gorilla, you see a large pile of bananas.\n"
		"If you wish to steal the bananas from the gorilla, enter 1. Otherwise, enter 0 to exit: ");

	scanf("%d", &userChoice);

	userChoice = toupper(userChoice);

	if (userChoice == 0)
	{
		puts("Better safe than sorry ...");
	}
	else if (userChoice == 1)
	{
		chanceToSteal = 1 + rand() % 100;
		winLoseAmount = 1 + rand() % 10;

		puts("You decide to attempt to steal the bananas from the gorilla ...");

		if (chanceToSteal >= 60)
		{
			*bananaAmount += winLoseAmount;
			printf("Success! You were able to successfully steal %d bananas from the gorilla and made a hasty escape back into the main room.\n\n", winLoseAmount);
		}
		else
		{
			*bananaAmount -= winLoseAmount;
			printf("As you make your way to the other side of the room, you slip on a banana ...\n"
				"In doing so, you fall and the imapact with the ground made a large enough noise to wake the gorilla!\n"
				"Not daring to fight him, he steals %d bananas!\n"
				"You make your way back to the Main Room ... \n\n", winLoseAmount);
		}

		chanceToSteal = 1 + rand() % 100;
		
		if (chanceToSteal > 85)
		{
			winLoseAmount = 1 + rand() & 5;

			*orangeAmount += winLoseAmount;

			puts("As you leave the room back into the Main Room, you notice some oranges in the dark corner!\n"
				 "Before the gorilla can notice, you are able to snatch some and quickly leave through the door.\n");
		}

	}
	else
	{
		puts("Incorrect input! You are returning to the Main Room ...\n");
	}

}



void problem1(int math)
{

	int guess;


	
	printf("What is x in this equation? \n");

	printf("5x + 6 = 3x - 8 \n");
	puts("X is?");
	scanf("%d", &guess);
	if (guess == math)
	{
		puts("You are correct!");
		puts("You win the challenge against Einstein, now you can ask the ruler to let you go.");
												
	}

	else
	{
		puts("Your answer was wrong, better luck next time");										
		
	}
}


void problem2 (char *ptr)
{
	int size = 30;
       char prob[size];
	char guess[size];


	strcpy(prob, ptr);


	puts("Your Guess is?");
	
	scanf("%s", guess);

	for (int i = 0; i < 0; i++)
	{
		if(isupper(guess[i]))
		{
			guess[i] = tolower(guess[i]);
		}
	}


	if(!strcmp(prob, guess))
	{	
		puts(" Congratulations you have guessed Correctly");
		
	}
	else
	{
		puts("Awwwwww You guessed Poorly");
		puts("As promised Its time to die");
	}
	
	
}



int flip()
{
	int i = rand() %2;

	if(i ==0)
		return 0;
	else 
		return 1;
}
int rollsmm21()
{

	int p =0;
	puts("How many times would you like to roll the dice? ");
	scanf("%d", &p);
	return p;
}
int rollmm21()
{
	int p = 0;
	p = 1 + rand() % 10;
	printf("%d \n", p);

	return p;
}
void oputmm21(int d1, int d2, int d3, int d4, int d5, int d6, int d7, int d8, int d9, int d10)
{
	printf("The resaults of the throes are ");
	printf("1: %d, 2: %d, 3: %d, ", d1, d2, d3);
	printf("4:  %d, 5: %d,", d4, d5);
	printf("6: %d, 7: %d, 8: %d, ", d6, d7 +7, d8); 
	printf("9: %d, 10: %d \n", d9, d10);
}
		
void weaponPower(int p){
	
	printf("%d\n", p); //ROOM 25
}


void bullets(int arr[]) //ROOM 32 OMAR MOSQUEDA 
{
	int i;
	for(i=0;i<6;i++)
	{
		arr[i] = rand () % 100+1;
	}

	for(i=0;i<6;i++)
	{
		printf("%d \n",arr[i]);
	}

}
void bandit(void)
{

	int join;
	puts("Type '1' to join or '2' to not join");
	scanf("%d",&join);
				
	switch(join)
	{
		case 1:
			printf("\n\nWelcome to the crew cowboy.\n");
			printf("..Too be countinued\n\n\n");
				break;
		case 2:
			printf("\n\nFarewell then loser\n\nGAMEOVER\n");
				break;
		default:	
			printf("\n\nType 'y' or 'n'.\n");
	}

}



