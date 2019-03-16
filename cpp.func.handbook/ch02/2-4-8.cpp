#include <string.h>
#define MONO_BASE 0xB000

int main(void)
{
   char buf[80*25*2];
   movedata(MONO_BASE, 0, _DS, (unsigned) buf, 80*25*2);
   return 0;
}
