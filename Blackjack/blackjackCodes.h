/*
Jackson T. Napier
2/11/2025
blackjackErrors.h
- This file contains all of the success codes for the blackjack game. 
* This file is HEAVILY copyrighted, do not use without permission of the owner.
*/
#ifndef BLACKJACK_CODES_H
#define BLACKJACK_CODES_H


// => Game codes to define.
#define WIN 0 // Player won.
#define DEALER_WIN 1 // The dealer won.
#define PLAYER_BLACKJACK 2 // The game code for blackjack given when a player reaches 21.
#define DEALER_BLACKJACK 3 // The game code for blackjack given when the dealer reaches 21.
#define PLAYER_BUST 4 // The player has went over 21.
#define DEALER_BUST 5 // The dealer has went over 21.
#define END_GAME 6 // The code that will terminate the game.
#define CHIP_AWARD 7 // The code for awarding chips [FUTURE UPDATE.]
#define CHIP_DEDUCTION 8 // The code for deducting chips. [FUTURE UPDATE.]
#define CHIP_GAIN 9 // The code for adding chips. [FUTURE UPDATE].

// => Error codes to define.
#define INVALID_MOVE_CHARACTER -1 // The user entered an incorrect move, not (H) or (S).
#define GAME_ERROR -2 // The game failed somewhere.
#define LOGIC_ERROR -3 // There is something wrong with the game logic.
#define MATH_ERROR -4 // Invalid mathematics done.
#define INVALID_PLAY_CHARACTER -5 // Wrong play character.
#define PROGRAM_ERROR -6 // There is something in the code going wrong.
#define NEGATIVE_CHIP_AMOUNT -7 // The chip amount is a negative.
#define INVALID_CHIP_AMOUNT -8 // The chip amount is too big.
#define SENTINEL_VALUE_CHAR_ENTERED -9 // The sentinel value character "Q" or "q" was entered.
#define SYSTEM_ENDED_GAME -10 // The system ended the game, not terminated by the player.

#endif