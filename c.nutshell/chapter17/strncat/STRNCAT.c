/* STRNCAT.C */

#include <string.h>
#include <stdio.h>

void main( void )
{
   char string[80] = "This is the initial string!";
   char suffix[] = " extra text to add to the string...";
   /* Combine strings with no more than 19 characters of suffix: */
   printf( "Before: %s\n", string );
   strncat( string, suffix, 19 );
   printf( "After:  %s\n", string );
}
