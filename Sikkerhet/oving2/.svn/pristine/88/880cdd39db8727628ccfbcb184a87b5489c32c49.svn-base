#include <stdlib.h>
#include <stdio.h>
#include "fargeskrift.h"
int main()
{

  char array[16] = "Fargerik tekst\n";
  int tekstfarge = 1;
  int bakfarge = 0;

  for(int i = 0; i < sizeof(array); i++){
    tekstfarge = rand() % 9 + 1;
    farge_printf(tekstfarge, bakfarge, "%c", array[i],tekstfarge);

  }
  //setter tilbake tekstfargen og bakgrunnsfargen til default...
  tekstfarge = 9;
  bakfarge = 0;

  farge_printf(tekstfarge, bakfarge, "");

return 0;
} 

