# Hotel Management System

![HKajYeeDAOZJ-4Qs (3)](https://github.com/user-attachments/assets/88a900a1-b274-4fbd-8e77-4c63f8d3ea20)


## Table of Contents
- [Introduction](#introduction)
- [Features](#features)
- [Screenshots](#screenshots)
- [File Structure](#file-structure)
- [How To Build](#how-to-build)
- [How to Run](#how-to-run)
- [Functionality](#Functionality)
- [Notes](#Notes)

## Introduction
The Hotel Management System is a robust C++ application designed to simplify the complexities of managing a hotel. It includes modules for booking, check-in/check-out, restaurant and bar management, and more, ensuring smooth operations and customer satisfaction.

## Features
- Room Booking
- Check-In and Check-Out
- Restaurant and Bar Management
- Room Cancellation
- Taxi Service
- Bar
- Swimming Pool and Gym Membership
- Games and Recreational Activities
- View and Manage Customer Data

## Screenshots
### Intro
![Introduction](https://github.com/user-attachments/assets/515ea660-6b49-423f-a580-599ccfa81986)
![map](https://github.com/user-attachments/assets/8e7eb136-8c83-4f48-8fb8-a305556fe42a)
### Main Menu
![Main_menu](https://github.com/user-attachments/assets/e8e6923a-92e7-45fb-8273-20e7991e665f)
### Room Booking
![room booking_1](https://github.com/user-attachments/assets/8a6a5c90-cc24-4e6a-884c-fdddbb2af6a9)
![room booking_2](https://github.com/user-attachments/assets/015c7a54-1add-4a03-8ef6-f79006dae115)
### Check-In
![Check_in](https://github.com/user-attachments/assets/5479a456-a3ce-491b-8d29-25de7a1d5f65)
### Bar-Services
![bar](https://github.com/user-attachments/assets/aad033cb-c9bf-4c2d-9181-61aa2983e7a0)
![bar_list](https://github.com/user-attachments/assets/984d1f56-7f84-4358-9653-a0964f2d89d2)
![bar_order_corfrmation](https://github.com/user-attachments/assets/c2220b00-ee39-4618-a547-ee4f4282a80b)

## File Structure

- `include/hotel.h`: Header file containing class definitions and function declarations.
- `src/hotel.cpp`: Source file containing the implementations of the class member functions.
- `src/main.cpp`: Source file containing the `main` function.
- `Makefile`: File to build the project.

## How to Build

To build the project, navigate to the project directory and run:

```sh
make
```

This will compile the source files and create an executable named `hotel_management`.

## How to Run

After building the project, run the executable:

```sh
./hotel_management
```

## Functionality

The `HOTEL` class contains the following functions:

- `booking()`: Handles the room booking process.
- `check_in()`: Handles the check-in process.
- `check_out()`: Handles the check-out process.
- `cancellation()`: Handles the booking cancellation process.
- `taxi_service()`: Manages taxi services.
- `restaurant()`: Manages restaurant services.
- `bar()`: Manages bar services.
- `swimming_pool()`: Manages the swimming pool.
- `gymnasium()`: Manages the gymnasium.
- `games()`: Manages games and recreational activities.
- `view_data()`: Displays various data related to the hotel management.

## Notes

- Ensure all required libraries are installed.
- The project uses some deprecated functions and libraries. Consider updating them for modern C++ standards.
