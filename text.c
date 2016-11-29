
/* my name */

#include <stdio.h>
#include <stdlib.h>
int main()
{
 char a[20] = "vishnu_deepak";
 char *p;
 p = (char *)malloc(sizeof(a));
 p = (char *) &a;

 printf("%s\r\n",(char *)p);

// free(p);
 return 0;
}
