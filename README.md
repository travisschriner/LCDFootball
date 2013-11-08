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
we were using all previously developed code, the important part was 
