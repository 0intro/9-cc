#include <u.h>
#include <libc.h>


void
f(void)
{
   struct{
     int twobit:2;
     int       :1;
     int threebit:3;
     int onebit:1;
   } s3;
   struct{
     uint twobit:2;
     uint       :1;
     uint threebit:3;
     uint onebit:1;
   } s4;

	s3.threebit = 7;
	s3.twobit = s3.threebit;
//	s3.threebit = s3.twobit;
	print("%d %d\n", s3.threebit, s3.twobit);

	s4.threebit = 7;
	s4.twobit = s4.threebit;
//	s4.threebit = s4.twobit;
	print("%d %d\n", s4.threebit, s4.twobit);
}

void
main(int, char**)
{
	f();
}
