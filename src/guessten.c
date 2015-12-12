/*  =========================================================================
    guessten - 
        Represents a Book 
        
        

    Copyright (c) the Contributors as noted in the AUTHORS file.       
    This file is part of CZMQ, the high-level C binding for 0MQ:       
    http://czmq.zeromq.org.                                            
                                                                       
    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.           
    =========================================================================
*/

/*
@header
    guessten - 
        Represents a Book 
        
        
@discuss
@end
*/

#include "../include/guessten.h"
#include "time.h"

//  Structure of our class

struct _guessten_t {
    int filler;     //  TODO: Declare properties
};


//  --------------------------------------------------------------------------
//  Create a new guessten.

guessten_t *
guessten_new ()
{
    guessten_t *self = (guessten_t *) zmalloc (sizeof (guessten_t));
    assert (self);

    //  TODO: Initialize properties
    // initialize here random numbers generator
    srand (time(NULL));
    return self;
}

//  --------------------------------------------------------------------------
//  Destroy the guessten.

void
guessten_destroy (guessten_t **self_p)
{
    assert (self_p);
    if (*self_p) {
        guessten_t *self = *self_p;

        //  TODO: Free class properties

        //  Free object itself
        free (self);
        *self_p = NULL;
    }
}


//  --------------------------------------------------------------------------
//  

void
guessten_play (guessten_t *self)
{
    assert (self);
    int value=1;
    int res;
    printf ("Find a number between 1 and 10 !\n");
    int tofind = rand()%10+1;
    while (value!=0)
    {
     printf ("Enter a value (0 to quit):");
     res = scanf ("%d", &value);      
     if (res==1) 
      {
       printf ("You have entered: %d\n", value);
       if (value<tofind)
       {
        printf ("More !\n");
       }
       if (value>tofind) 
       {
        printf ("Less !\n");
       }
       if (value==tofind)
       {
        printf ("Yes !\n");
        value = 0;
       }
      }
    }
}

//  --------------------------------------------------------------------------
//  Print properties of the guessten object.

void
guessten_print (guessten_t *self)
{
    assert (self);
}


//  --------------------------------------------------------------------------
//  Self test of this class.

void
guessten_test (bool verbose)
{
    printf (" * guessten: ");

    //  @selftest
    //  Simple create/destroy test
    guessten_t *self = guessten_new ();
    assert (self);
    guessten_destroy (&self);
    //  @end

    printf ("OK\n");
}
