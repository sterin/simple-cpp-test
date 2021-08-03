#include <png.h>
#include <stdio.h>

void xxx()
{
   printf("libpng: (%lu):%s", (unsigned long)png_access_version_number(), png_get_header_version(NULL));
}
