
#ifndef HOTEL_H
#define HOTEL_H

#include <iostream>
#include <fstream>

class HOTEL
{
    char array[100];
    struct bill_restaurant_bar
    {
        long brestaurant, bbar;
    } b[100];
    struct booking_data
    {
        long charge, roomno;
        char name[25], address[75], telno[10], date[11], roomtype[15];
    } d;
    struct check_out_data
    {
        char name[25], address[75], telno[10], date[11], odate[11], otime[6];
        int roomno;
    } C;
    struct cancellation_data
    {
        char name[25], address[75], telno[10];
    } D;
    struct member_swimming_pool_data
    {
        char name[25], address[75], telno[10], date[11];
        int memno;
    } ms;
    struct member_gym_data
    {
        char name[25], address[75], telno[10], date[11];
        int memno;
    } mg;
public:
    void booking();
    void check_in();
    void check_out();
    void cancellation();
    void taxi_service();
    void restaurant();
    void bar();
    void swimming_pool();
    void gymnasium();
    void games();
    void view_data();
};

#endif // HOTEL_H
