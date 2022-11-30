// ROULETTE HEADER FILE
// for american roulette (includes double 0)

##ifndef CASINOAPPLICATION_ROULETTE
#define CASINOAPPLICATION_ROULETTE
#include "imagepanel.h"
#include <vector>
#include <string>
#include <iostream>
#pragma once
using namespace std;

// FRAMEWORK CLASS
class RouletteFrame: public wxFrame {
	public:
	
	RouletteFrame();
	
// buttons
	// roulette table buttons
		// outside bets
		void OnBetDoubleZero(wxCommand &event);
		void OnBetZero(wxCommand &event);
		void OnBetLoThird(wxCommand &event);
		void OnBetMidThird(wxCommand &event);
		void OnBetHiThird(wxCommand &event);
		void OnBetLoHalf(wxCommand &event);
		void OnBetHiHalf(wxCommand &event);
		void OnBetEven(wxCommand &event);
		void OnBetOdd(wxCommand &event);
		void OnBetRed(wxCommand &event);
		void OnBetBlack(wxCommand &event);
		void OnBetColumnOne(wxCommand &event);
		void OnBetColumnTwo(wxCommand &event);
		void OnBetColumnThree(wxCommand &event);
		void OnBetStreet1(wxCommand &event);
		void OnBetStreet4(wxCommand &event);
		void OnBetStreet7(wxCommand &event);
		void OnBetStreet10(wxCommand &event);
		void OnBetStreet13(wxCommand &event);
		void OnBetStreet16(wxCommand &event);
		void OnBetStreet19(wxCommand &event);
		void OnBetStreet22(wxCommand &event);
		void OnBetStreet25(wxCommand &event);
		void OnBetStreet28(wxCommand &event);
		void OnBetStreet31(wxCommand &event);
		void OnBetStreet34(wxCommand &event);
		// inside bets
		void OnBet1(wxCommand &event);
		void OnBet2(wxCommand &event);
		void OnBet3(wxCommand &event);
		void OnBet4(wxCommand &event);
		void OnBet5(wxCommand &event);
		void OnBet6(wxCommand &event);
		void OnBet7(wxCommand &event);
		void OnBet8(wxCommand &event);
		void OnBet9(wxCommand &event);
		void OnBet10(wxCommand &event);
		void OnBet11(wxCommand &event);
		void OnBet12(wxCommand &event);
		void OnBet13(wxCommand &event);
		void OnBet14(wxCommand &event);
		void OnBet15(wxCommand &event);
		void OnBet16(wxCommand &event);
		void OnBet17(wxCommand &event);
		void OnBet18(wxCommand &event);
		void OnBet19(wxCommand &event);
		void OnBet20(wxCommand &event);
		void OnBet21(wxCommand &event);
		void OnBet22(wxCommand &event);
		void OnBet23(wxCommand &event);
		void OnBet24(wxCommand &event);
		void OnBet25(wxCommand &event);
		void OnBet26(wxCommand &event);
		void OnBet27(wxCommand &event);
		void OnBet28(wxCommand &event);
		void OnBet29(wxCommand &event);
		void OnBet30(wxCommand &event);
		void OnBet31(wxCommand &event);
		void OnBet32(wxCommand &event);
		void OnBet33(wxCommand &event);
		void OnBet34(wxCommand &event);
		void OnBet35(wxCommand &event);
		void OnBet36(wxCommand &event);
		
	// functional buttons
		void OnSubmitBet(wxCommand &event);
		void OnSpinWheel(wxCommand &event);
		void OnInformation(wxCommand &event);
		void OnPlayAgain(wxCommand &event);
		void OnExit(wxCommand &event);
};
		
// GAME CLASSES
class Table {
	public:
// gloabl variables 
	int minBet = 10;
	int maxBet = 10000;
	
	// betting number combinations
		// inside bets 
			// includes straight and street. does not include split sixline, corner, trio, basket
			// https://www.roulettesites.org/rules/#:~:text=Basic%20Roulette%20Rules%201%20Place%20a%20bet%20on,winning%20number%20during%20any%20playing%20session.%20More%20items
	vector <int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36};
	
			// street (variable name "streetX" where X denotes the first number in the street)
	vector<int> street1 = {1, 2, 3};
	vector<int> street4 = {4, 5, 6};
	vector<int> street7 = {7, 8, 9};
	vector<int> street10 = {10, 11, 12};
	vector<int> street13 = {13, 14, 15};
	vector<int> street16 = {16, 17, 18};
	vector<int> street19 = {19, 20, 21};
	vector<int> street22 = {22, 23, 24};
	vector<int> street25 = {25, 26, 27};
	vector<int> street28 = {28, 29, 30};
	vector<int> street31 = {31, 32, 33};
	vector<int> street34 = {34, 35, 36};
	
		// outside bets
			// 1 to 19 and 19 to 36
	vector<int> loHalf = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18};
	vector<int> hiHalf = {19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36};
	
			// 1 to 11, 12 to 23 and 24 to 36
	vector<int> loThird = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
	vector<int> midThird = {12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23};
	vector<int> hiThird = {24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36};
	
			// odd and even
	vector<int> odd = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35);
	vector<int> even = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36};
	
			// column 1, column 2, column 3 (column number denotes first number in column)
	vector<int> col1 = {1, 4, 7, 10, 13, 16, 19, 22, 25, 28, 31, 34};
	vector<int> col2 = (2, 5, 8, 11, 14, 17, 20, 23, 26, 29, 32, 35};
	vector<int> col3 = {3, 6, 9, 12, 15, 18, 21, 24, 27, 30, 33, 36};
	
			// red and black
	vector<int> red = {1, 3, 5, 7, 9, 12, 14, 16, 18, 19, 21, 23, 25, 27, 30, 32, 34, 36};
	vector<int> black = {2, 4, 6, 8, 10, 11, 13, 15, 17, 20, 22, 24, 26, 28, 29, 31, 33, 35};
	
			// 0 and double 0
	vector<int> zero = {0};
			// 37 is used for 00 to be consistent with spinWheel() function
	vector<int> doubleZero = {37};
	
	// bet multipliers
	// https://www.casino.org/roulette/odds/
		// inside bets 
			// individual number 
	int oneNM = 35;
			// street
	int threeNM = 11;
		
			// outside bets
	int halfM = 1;
	int oeM = 1;
	int colourM = 1;
	int colM = 2;
	int thirdM = 2;
};

class Wheel {
	public:
// global variables
	// wheel values
	int doubleZero = -1;
	int zero = 0;
	int one = 1;
	int two = 2;
	int three = 3;
	int four = 4;
	int five = 5;
	int six = 6;
	int seven = 7;
	int eight = 8;
	int nine = 9;
	int ten = 10;
	int eleven = 11;
	int twelve = 12;
	int thirteen = 13;
	int fourteen = 14;
	int fifteen = 15;
	int sixteen = 16;
	int seventeen = 17;
	int eighteen = 18;
	int nineteen = 19;
	int twenty = 20;
	int twentyOne = 21;
	int twentyTwo = 22;
	int twentyThree = 23;
	int twentyFour = 24;
	int twentyFive = 25;
	int twentySix = 26;
	int twentySeven = 27;
	int twentyEight = 28;
	int twentyNine = 29;
	int thirty = 30;
	int thirtyOne = 31;
	int thirtyTwo = 32;
	int thirtyThree = 33;
	int thirtyFour = 34;
	int thirtyFive = 35;
	int thirtySix = 36;
	
};

class Chips {
	public:
// methods
	// remove chips
	void removeChips();

// accessors
	int currentChipTotal() const;
};

// structures
	// holds all bet information
	
		// a bet object will be created for each bet the player makes in a single betting session
		// EX. player bets $20 on even and $10 on numbers 1, and 19
		// 		bet objects will be created with the following fields: 
		//		for even bet: mul = 1, numbersBet[] = even[], moneyBet = 20
		//		for single num 1 bet: mul = 35, numbersBet[] = {1}, moneyBet = 10
		//		for single num 19 bet: nul = 35, numbersBet[] = {19}, moneyBet = 10
class Bet {
// fields
	int mul;
	vector<int> numbersBet;
	
	// money bet will be the cumulative total of tokens bet
	int moneyBet;
	
// constructor 
	// default
	Bet();
	// all bets
	Bet(int  multiplier, int money_bet, vector<int> numbers_bet);
};

class RouletteController {
	public:
// fields 
	vector<Bet> placedBets[];
	int rolledNumber;
	
// accessors
	// access fields of struct bet
	int multiplier() const;
	int numbersBet() const;
	int moneyBet() const;
	int getRolledNumber() const;
	
// functions
	// stores information for each individual bets in bet objects
		// would assign the information in the above structire EX.
	void storeBets();
	
	// returns randomly generated number
	void spinBall();
	
	// determines at what number wheel will stop spinning at given random number
		// positions ball at that number 
	void ballOnWheel();
	
	// checks all bets to see if any hit
		// checks all bet objects numbersBet[] field to see if random number is found in any bets
	void checkBets();
};

// exceptions
	// minimum bet excpetion
		// when player does not provide sufficient funds to meet minimum bet requirement
class MinimumBetException {
	public:
		MinimumBetException(const string& message);
		string& what();
	private:
		string message;
};

	// maximum bet exception
		// when player provides excesive funds for maximum bet requirement
class MaximumBetException {
	public:
		MaximumBetException(const string& message);
		string& what();
	private:
		string message;
};

	// insufficient funds exception
		// when player does not possess sufficient funds to play game
class InsufficientFundsException {
	public:
		InsufficientFundsException(const string& message);
		string& what();
	private:
		string message;
};
