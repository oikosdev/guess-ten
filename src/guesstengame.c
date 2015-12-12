#include "guessten.h"

int main(int argc, char* argv[]) 
{
 guessten_t *guess = guessten_new ();
 guessten_play (guess);
 printf ("Quit !");
 return 0;
}
