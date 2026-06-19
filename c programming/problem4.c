#include<stdio.h>
main()

{
int l1,l2,w1,w2,area_of_the_room,area_of_tiles;
float tiles_needed;
printf("ID:23103406\n");
l1=24;
w1=13;
l2=1;
w2=1    ;
area_of_the_room=(l1*w1);
printf("area of the room:%d\n",area_of_the_room);
area_of_tiles=(l2*w2);
printf("area of tiles:%d\n",area_of_tiles);
tiles_needed=((float)area_of_the_room/area_of_tiles);
printf("tiles needed=%.3f\n",tiles_needed);}
