// Chapter_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <random>
#include <string>
#include <Windows.h>
using namespace std;


int main()
{
	//(Windows.h) SetConsoleAtt. Handler
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	//Console Title (req. windows.h)
	SetConsoleTitle(_T("Chapter 1 Project Book Exercises"));

	while (true) {

		//Main Switch Selector
		cout << "Which Project Would You Like Displayed?\n" << endl;
		cout << "Please Select: \n" << endl;
		cout << "1: [Project 1.1] - Game Menu \n";
		cout << "2: [Project 1.2] - Alien Invasion\n";
		cout << "3: [Project 1.3] - Accurate Sports Simulator\n";
		cout << "4: [Project 1.4] - Card Distribution Calculator\n";
		cout << "5: [Project 1.5] - The Wizard's Training Fortress\n";
		cout << "6: Exit Program\n";
		cout << "\nSelection: ";
		int game;
		cin >> game;
		system("CLS");
		if (game != 1 && game != 2 && game != 3 && game != 4 && game != 5 && game != 6) {
			system("CLS");
			SetConsoleTextAttribute(h, 0x40);
			cout << "\nSorry, you must make a valid selection\n\n";
			SetConsoleTextAttribute(h, 0x0F);
		}
		else if (game == 6) {
			break;
		}

		// Main Switch
		switch (game)
		{
			//Project 1.1
		case 1:
			int choice;

			//Porject 1.1 Loop
			while (true) {
				cout << "\n          Game Menu" << endl;
				cout << "1. One player\n2. Two players\n3. Quit" << endl;
				cout << "Enter Choice: ";
				cin >> choice;
				system("CLS");
				if (choice != 1 && choice != 2 && choice != 3) {
					system("CLS");
					cout << "\nGive a valid answer, dumbass.";
				}
				else if (choice == 1 || choice == 2) {
					system("CLS");
					cout << "\nYou chose: " << choice << "\n";
					system("pause");
					system("CLS");
				}
				else {
					cout << "You chose to leave. Thanks for using my program!\n-Morgoth\n\n";
					system("pause");
					system("CLS");
					break;
				}
			} break;

			//Project 1.2
		case 2:

			//Project 1.2 Loop
			while (true) {

				//Declare 'type' for points and hardcode points
				typedef const unsigned int point;
				point pointSave = 100;
				point pointKill = 50;

				//Rand Num Engine (Mersenne Twister)
				random_device rd{};
				mt19937 engine{ rd() };
				uniform_real_distribution<double> num{ 0, 2000 };

				//Generate Random Numbers
				int pSave = num(engine);
				int aKill = num(engine);

				//Get Points 
				int tpKill = aKill * pointKill;
				int tpSave = pSave * pointSave;

				// ! DEBUG !
				cout << "People Saved: " << pSave << endl;
				cout << "Aliens Killed: " << aKill << endl;

				//Begin Main Sequence
				system("CLS");
				SetConsoleTextAttribute(h, 0x80);
				cout << "Welcome to...\n\nMORGOTH'S ";
				SetConsoleTextAttribute(h, 0x82);
				cout << "RANDOM - GEN ";
				SetConsoleTextAttribute(h, 0x80);
				cout <<"ALIEN BLASTER / SPACE PERSON SAVER - ESQUE GAME\n\n";
				SetConsoleTextAttribute(h, 0x0F);
				cout << "What is your name, brave Astro Soldier!?" << endl;
				cout << "Uh... my name is ";
				string name;
				SetConsoleTextAttribute(h, 0x24);
				cin.get();
				getline(cin, name);
				SetConsoleTextAttribute(h, 0x0F);
				system("CLS");
				cout << "Welcome, ";
				SetConsoleTextAttribute(h, 0x02);
				cout << name;
				SetConsoleTextAttribute(h, 0x0F);
				cout << ", to the SPACE CORPS.\n" << endl;
				cout << "There is no time for bootcamp, grab a rifle and head out immediately to";
				SetConsoleTextAttribute(h, 0x04);
				cout << "\nALPHALFA PRIIMMMEEEEE";
				SetConsoleTextAttribute(h, 0x0F);
				cout << "(Actual name)" << endl;
				cout << "\nWe are fighting a losing battle, take out as many aliens and recover as many of the fallen as you can\n\n";
				system("pause");
				system("CLS");
				string nName;
				int tpT = tpKill + tpSave;
				if (aKill > 1500) {
					nName = "Xenobane";
				}
				else if (aKill > 1000) {
					nName = "Longshot";
				}
				else if (aKill > 500) {
					nName = "Sprinklechef";
				}
				else if (aKill <= 500) {
					nName = "Spray and Pray";
				}
				SetConsoleTextAttribute(h, 0x1F);
				cout << "\nAfter a long and exhuasting battle on planet "; 
				SetConsoleTextAttribute(h, 0x1D);
				cout << "ALPHALFA PRIIMMMEEEEE: \n\n" << endl; 
				SetConsoleTextAttribute(h, 0x0F);
				cout << "You managed to kill ";
				SetConsoleTextAttribute(h, 0x40);
				cout << aKill << " aliens";
				SetConsoleTextAttribute(h, 0x0F);
				cout << ", earning the nickname ";
				SetConsoleTextAttribute(h, 0x0C);
				cout << nName << endl;
				SetConsoleTextAttribute(h, 0x0F);
				cout << "Through your incredible bravery, you managed to selflessly save ";
				SetConsoleTextAttribute(h, 0x20);
				cout << pSave << " civilians\n" << endl;
				SetConsoleTextAttribute(h, 0x02);
				if (pSave > aKill) {
					cout << "Saving people meant more to you on the battlefield than killing the enemy.\n\n";
				}
				else if (pSave < aKill) {
					SetConsoleTextAttribute(h, 0x04);
					cout << "You lived for the kill, opting more to face the enemy than to save civilians\n\n";
				}
				else if (pSave == aKill) {
					cout << "You are one of the most extremely rare soldiers. Without bias or hesitation you equally dispatched the enemy and saved civilians with perfect tactical regard.\n\n";
				}
				SetConsoleTextAttribute(h, 0x0F);
				cout << "Here at SPACE CORPS we give points for each feat of bravery and selflessness\nWe have taken the liberty to meticulously calculate your merits of honor.\n " << endl;
				cout << "Points Gained from Enemy Kills: " << aKill << " x " << pointKill << "= " << tpKill << endl;
				cout << "Points Gained from Saving Civilians: " << pSave << " x " << pointSave << "= " << tpSave << endl;
				cout << "Total Points Earned: " << tpKill << " + " << tpSave << " = " << tpKill + tpSave << endl;
				string merit;
				if (tpT > 190000) {
					cout << "\nYou have earned The '"; 
					SetConsoleTextAttribute(h, 0x06);
					cout << "Presidential Purple Heart"; 
					SetConsoleTextAttribute(h, 0x0F);
					cout << "' medal of honor.\n";
				}
				else if (tpT > 100000) {
					cout << "\nYou have earned The '";
					SetConsoleTextAttribute(h, 0x06);
					cout << "Templar's Shield";
					SetConsoleTextAttribute(h, 0x0F);
					cout << "' medal of honor.\n";
				}
				else if(tpT > 70000) {
					cout << "\nYou have earned The '";
					SetConsoleTextAttribute(h, 0x06);
					cout << "Congressmen's Napkin";
					SetConsoleTextAttribute(h, 0x0F);
					cout << "' medal of honor.\n";
				}
				else if (tpT <= 70000) {
					SetConsoleTextAttribute(h, 0x64);
					cout << "\nYou did not stand out enough to warrant any medals or honors.\n";
					SetConsoleTextAttribute(h, 0x0F);
				}
				cout << "\nPress a key to return to the project menu\n";
				system("pause");
				system("CLS");
				break;
			}break;

			//Project 1.3
		case 3:
			//Project 1.3 Loop
			while (true) {

				//Rand Num Engine (Mersenne Twister)
				random_device rd{};
				mt19937 engine{ rd() };
				uniform_real_distribution<double> num{ 0, 200 };

				//Generate Random Numbers
				float pSocc = num(engine);
				float pBase = num(engine);
				float pHoc = num(engine);

				//User Input for Sports
				int Socc;
				int Base;
				int Hoc;

				//Main Game Intro
				SetConsoleTextAttribute(h, 0x60);
				cout << "\nWelcome to Morgoth's Psudo-Sport Simulator!\n" << endl;
				SetConsoleTextAttribute(h, 0x0F);
				cout << "You are now a 'Professional Athlete'. \n\nFor the following three sports provide a rating from 1-10\nBased on how much you actually enjoy them\n" << endl;
				cout << "(1-10) Soccor: ";
				cin >> Socc;
				if (Socc > 10) {
					cout << "Please rate from 1-10";
				}
				cout << "(1-10) Baseball: ";
				cin >> Base;
				if (Base > 10) {
					cout << "Please rate from 1-10";
				}
				cout << "(1-10) Hockey: ";
				cin >> Hoc;
				if (Hoc > 10) {
					cout << "Please rate from 1-10";
				}

				//Outputs for 'Score'
				float tSocc = pSocc * Socc;
				float tBase = pBase * Base;
				float tHoc = pHoc * Hoc;

				cout << "\n Thanks for your input!\n We will now calculate your Simulated Score in each field..\n";
				cout << "\nOur patented Accurate Sports Skill (A.S.S.) calculator is top-end technology,\nand will accurately represent your real skill\n\n";
				system("pause");
				system("CLS");
				cout << "Your score in Soccor: ";
				SetConsoleTextAttribute(h, 0x06);
				cout << tSocc << endl;
				SetConsoleTextAttribute(h, 0x0F);
				cout << "Your score in Baseball: ";
				SetConsoleTextAttribute(h, 0x06); 
				cout << tBase << endl;
				SetConsoleTextAttribute(h, 0x0F);
				cout << "Your score in Hockey: ";
				SetConsoleTextAttribute(h, 0x06); 
				cout << tHoc << endl;
				SetConsoleTextAttribute(h, 0x0F);
				cout << "\nYour Accurate Sports Skill (A.S.S.): ";
				SetConsoleTextAttribute(h, 0x02); 
				cout << (tHoc + tBase + tSocc) / 3 << endl;
				SetConsoleTextAttribute(h, 0x08);
				cout << "\nThanks for using Morgoth's Psudo-Sports Simulator! " << endl;
				SetConsoleTextAttribute(h, 0x0F);
				system("pause");
				system("CLS");
				break;
			}break;
			
			//Project 1.4
		case 4:

			//Project 1.4 Loop
			while (true) {

				//Title
				SetConsoleTextAttribute(h, 0x1F);
				cout << "\tWelcome to Morgoth's Card Game Calculator!\n\n";
				SetConsoleTextAttribute(h, 0x0F);
				
				//Declare deck [constant], player number [int]
				const int deck = 52;
				int playerCount;

				//Outputs & player input
				cout << "\nHow many people are playing today?\n";
				cout << "Players: ";
				cin >> playerCount;

				//Distribute and Remainder
				float dist = deck / playerCount;
				cout << "\nEach player gets " << dist << " cards." << endl;
				float r = deck % playerCount;
				cout << "\nThe number of cards left over is " << r << "\n\n" << endl;
				system("pause");
				
				//Reset Prompt
				char resp;
				while (true) {
					cout << "\n\tWould you like to use the calculator again? (y/n)" << endl;
					cout << "Response: ";
					cin >> resp;
					system("CLS");
					if (resp != 'y' && resp != 'Y' && resp != 'n' && resp != 'N') {
						SetConsoleTextAttribute(h, 0x04);
						cout << "\n\tPlease enter a valid response: y/n\n";
						SetConsoleTextAttribute(h, 0x0F);
					}
					if (resp == 'n' || resp == 'N' || resp == 'y' || resp == 'Y') {
						break;
					}
				}
				if (resp == 'n' || resp == 'N') {
					break;
				}
			}break;
		//Project 1.5
		case 5:
			//Project 1.5 Loop
			while (true) {
				
				//Title Opening
				cout << "\t\t\tWelcome to Morgoth's\n";
				SetConsoleTextAttribute(h, 0x02);
				cout <<"\t\t    Wizard Training Fortress!\n" << endl;
				SetConsoleTextAttribute(h, 0x0F);
				
				//User Input Vars
				string sName;
				int spells;
				int hSpell;
				string fruit;

				//Output for Game (Page 1)[sName]
				cout << "\nPlease answer the following questions: \n" << endl;
				cout << "Question the First: What...Is your name?\n" << endl;
				cout << "Response: ";
				SetConsoleTextAttribute(h, 0x02);
				cin.get();
				getline(cin,sName);
				SetConsoleTextAttribute(h, 0x0F);
				cout << "\nA fine name indeed. Oh, wait...\nDid you say '" << sName << "'!?\n";
				cout << "\n(Press Enter to Continue)\n";
				cin.ignore();
				SetConsoleTextAttribute(h, 0x06);
				cout << "*sigh*..I guess it'll have to do.\n" << endl;
				SetConsoleTextAttribute(h, 0x0F);
				system("pause");
				system("CLS");
				
				//(Page 2) [spells]
				while (true) {
					cout << "\nQuestion The Second:\n\n" << sName << ", on a scale of 1-100:\nHow likely are you to risk your life in the pursuit of knowledge?\n";
					cout << "Response: ";
					SetConsoleTextAttribute(h, 0x02);
					cin >> spells;
					SetConsoleTextAttribute(h, 0x0F);
					if (spells > 100) {
						system("CLS");
						cout << "Your ability to comprehend instructions is also being tested.\n Let me ask you again.." << endl;
					}
					else if (spells <= 100) {
						break;
					}
				}
				if (spells >= 75) {
					cout << "\nBrave, are we? Good. You will need that." << endl;
				}
				if (spells >= 50) {
					cout << "\nYou have heart. Let us hope that is enough." << endl;
				}
				if (spells < 50) {
					cout << "\nAre you sure that you can stand the pressures of The Fortress??\nIf you want to make it, you'll need more resolve than that." << endl;
				}
				system("pause");
				system("CLS");

				//(Page 3) [hSpell]
				while (true) {
					cout << "\nQuestion The Third:\n\n" << sName << ", how many";
					SetConsoleTextAttribute(h, 0x06);
					cout << " hours a week ";
					SetConsoleTextAttribute(h, 0x0F);
					cout << "would you spend reading if you could ? \n" << endl;
					cout << "Response: ";
					cin >> hSpell;
					if (hSpell > 168) {
						system("CLS");
						cout << "If you don't have any use for math, we don't have a use for you.\nLet me ask again, and this time think about the answer.\n";
					}
					else if (hSpell <= 168) {
						break;
					}

				}
				if (hSpell >= 150) {
					cout << "\nYour devotion is admirable. You will do just fine here.\n" << endl;
				}
				else if (hSpell >= 50) {
					cout << "\nYou have a reasonable grasp of the requirements.\nBut can you apply them, " << sName << "?\n" << endl;
				}
				else if (hSpell < 50) {
					cout << "\nWell... I suppose even the laziest of people could, somehow...\nNah. I have no words of false encouragement\n" << endl;
				}
				system("pause");
				system("CLS");

				//(Page 4) [fruit]
				cout << "\nQuestion The Fourth & Final:\n\nBefore we let you enter The \nWizard's Training Fortress (W.T.F.)\nWe must ask:\n";
				SetConsoleTextAttribute(h, 0x06);
				cout << "Keep in mind.. \nWe may already know the answer. \nThis question is make-it or break-it for you.\n" << endl;
				SetConsoleTextAttribute(h, 0x0F);
				system("pause");
				while (true) {
					SetConsoleTextAttribute(h, 0x04);
					cout << "\t\tWHAT....is your favourite fruit??\n" << endl;
					SetConsoleTextAttribute(h, 0x02);
					cout << "\t\tResponse: ";
					SetConsoleTextAttribute(h, 0x0F);
					cin.get();
					getline(cin, fruit);
					system("CLS");
					if (fruit == "") {
						system("CLS");
						cout << "\nYou MUST enter the name of your favourite fruit.\n";
						system("pause");
						
					}
					if (fruit != "") {
						break;
					}
				}
				//(Page 5) The Story and Conclusion
				cout << "\nAfter 2.5 minutes of assessment, we have concluded that...\n\nYou may enter The Wizard's Training Fortress.";
				cout << "\nYes.. You're a Wizard, " << sName << "!" << endl;
				cout << "\nGood luck in there!\n";
				cout << "\nPress Enter to Begin\n";
				cin.ignore();
				system("CLS");
				cout << "\t\tYou set off to begin your new life, \n\t\tAs a Wizard of the Training Fortress.\n\n";
				SetConsoleTextAttribute(h, 0x09);
				cout << "(Press 'Enter' to proceed along the break points of the story!)\n\n";
				SetConsoleTextAttribute(h, 0x0F);
				cout << "Studies are difficult, \nBut because you spend ";
				if (hSpell < 50) {
					cout << "so little time actually doing work, \nyou don't understand most of the " << spells << " spells that you have been taught so far\n";
				}
				else if (hSpell >= 100) {
					cout << "every waking minute encompassed in your work, \nyou totally understand the " << spells << " spells you have been taught so far\n";
				}
				else if (hSpell >= 50) {
					cout << "a decent amount of time focused in your work, \nyou mostly understand the " << spells << " or so spells you have been taught so far\n";
				}
				int tSpell = spells * hSpell;
				cin.ignore();
				cout << "Within a few short months, \nyou have commited " << tSpell << " hours to the study of your spellcraft.\n";
				cin.ignore();
				cout << "One day, as you were gathering herbs for the alchemy class,\nyou were set upon by a giant ogre!\n";
				cin.ignore();
				if (tSpell < 1000) {
					cout << "You tried your best, frantically casting the " << spells << " spells you knew\nBut for all the " << hSpell << " hours you put in to learn them, it wasn't enough." << endl;
					cin.ignore();
					cout << "\nAfter a semi-valiant fight, you accidentally turned yourself into a "<< fruit <<". \nThe ogre then ate you.\n\n";
					SetConsoleTextAttribute(h, 0x04);
					cout << "\t\t\t\tYOU DIED";
					SetConsoleTextAttribute(h, 0x0F);
					cin.ignore();
					}
				else {
					cout << "You were trained for this! You cast the " << spells << " spells you knew expertly.\nSparks flew and nearby trees exploded into fire as the ferocity \nof the battle waged on\n";
					cin.ignore();
					cout << "The ogre fought hard, \nBut you have been studying for " << tSpell << " hours, and weren't going to let it end here.\n";
					cin.ignore();
					cout << "With a final wave of your wand, a bright flash engolfed the ogre.\nWhen the blinding light faded back into the world, \nyou saw that your spell was successful\n\n";
					cin.ignore();
					cout << "The ogre, was now a ";
					SetConsoleTextAttribute(h, 0x06);
					cout << fruit << endl;
					SetConsoleTextAttribute(h, 0x02);
					cout << "\t\tWELL DONE! YOU SURVIVED!\n";
					SetConsoleTextAttribute(h, 0x0F);
					cin.ignore();
					system("CLS");
				}
				char quit;
				while (true) {
					SetConsoleTextAttribute(h, 0x04);
					cout << "\t\tThanks for playing!\n\nWould you like to play again? (y/n)" << endl;
					SetConsoleTextAttribute(h, 0x02);
					cout << "Response: ";
					SetConsoleTextAttribute(h, 0x06);
					cin >> quit;
					system("CLS");
					SetConsoleTextAttribute(h, 0x0F);
					if (quit != 'y' && quit != 'Y' && quit != 'n' && quit != 'N') {
						SetConsoleTextAttribute(h, 0x4F);
						system("CLS");
						cout << "Please enter a valid response: (y/n)\n";
						SetConsoleTextAttribute(h, 0x0F);
					}
					else {
						break;
					}
				}
				if (quit == 'N' || quit == 'n') {
					break;
				}
			}
			break;
		}
		//IF RESP = QUIT
		//break;
	}
	//debug
	system("pause");
	return 0;
}