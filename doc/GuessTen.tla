------------------------- MODULE GuessTen ------------------------
(*****************************************************************

This is a very simple game: try to guess a number between 1 and 10.

******************************************************************)

EXTENDS Naturals

VARIABLE value,        \* value entered by the user
         tofind        \* number to be guessed by the user

TypeInvariant == value \in {0, 10}     \* value must stay between 0 and 10
                 /\ tofind \in {0, 10} \* and tofind as well

Init == value = 1                                    \* initaliazed != 0 to start
        /\ tofind = CHOOSE n \in {0, 10} : n > 0     \*  this is a random number

Guess == tofind' = tofind              \* at each step, tofind isn't changed
        /\ value' = value + 1          \* value is free to change, according to the user

Stop == value = 0                       \* if the value is 0, the user has decided to quit
        \/ value = tofind               \* if value=tofind, he has won

Next == Guess \/ Stop

Spec == Init /\ [][Next]_<<value,tofind>> 

====================================================================
THEOREM == Spec => []TypeInvariant
--------------------------------------------------------------------
