
#include "hotel.h"
#include <cstring>
#include <conio.h>
#include <dos.h>
#include <iomanip.h>
#include <graphics.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <process.h>

void HOTEL::booking()
{
    textcolor(2);
    clrscr();
    int c=0;
    f.open("ARRAY.DAT",ios::in|ios::binary);
    f.read((char *)&array, sizeof(array));
    while(array[c] != 'e') c++;
    array[c] = 'o';
    f.close();
    f.open("ARRAY.DAT", ios::out|ios::binary);
    f.write((char *)&array, sizeof(array));
    f.close();
    f1.open("HOT.EL", ios::app|ios::binary);
    d.roomno = c + 1;
    cout << "ENTER THE REQUIRED DATA\n"
         << "NAME :: ";
    gets(d.name);
    int l = strlen(d.name);
    // Add the rest of the booking function implementation here
}

void HOTEL::check_in() { /* Implementation here */ }
void HOTEL::check_out() { /* Implementation here */ }
void HOTEL::cancellation() { /* Implementation here */ }
void HOTEL::taxi_service() { /* Implementation here */ }
void HOTEL::restaurant() { /* Implementation here */ }
void HOTEL::bar() { /* Implementation here */ }
void HOTEL::swimming_pool() { /* Implementation here */ }
void HOTEL::gymnasium() { /* Implementation here */ }
void HOTEL::games() { /* Implementation here */ }
void HOTEL::view_data() { /* Implementation here */ }
