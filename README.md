LCDFootball
===========

Utilizes the MSP430 microcontroller as well as the buttons and LCD in the GeekBox to implement a simple game.

The game was easy to start strait with B functionality. We didn't have to use interrupts for required, but we 
were not allowed to poll. so I'm not sure how the game was supposed to work if you couldn't poll and were not
using interrupts. The only issue I had was I was not returning my player back to my main after I moved him.
This allowed me to move one space, then get stuck. The other issue I had was my player running off the board. 
This was easily stopped by adding conditional statesments to check my wall conditions. If my player is on the 
wall, it simply does not allow him to move. 

Overall the lab was quite easy. The biggest issue was theorizing the concepts and implimenting them. Because
we were using all previously developed code, the important part was the concepts of using interrupts. Also, 
we had to impliment the actual game logic which was fairly simple.

FUNCTIONS
=================================

unsigned char initPlayer();
  *Initializes player to starting position on board.


void printPlayer(unsigned char player);
  * Prints the player marker (*) at the player location passed in.
  * clears the screen before it prints


unsigned char movePlayer(unsigned char player, unsigned char direction);
  *Given a player's current position and a direction, returns an updated player position.
  *clears the screen, updates the players position checking edge boundary, then updates the
    screen with the new position. 


char didPlayerWin(unsigned char player);
  *Returns true if the position passed in is the winning game position.
  *checks gameWon codition, then either does nothing if game is not won,
    or impliments gameWon logic which clears the screen, then prints a lovely
    message on your very own LCD
    
LISCENCEING
=================================

Dude, please use my code! Its totally free! It would be nice for some Kudos to come my way though. 

