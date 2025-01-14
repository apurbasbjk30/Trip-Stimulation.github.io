# Trip-Stimulation.github.io
# So, I have been given a Assignment for OOPs to Write a program for trip stimulation. This is basically a real life problem faced by our teacher during vote counting.
# Here, We have been given 7 locations.
# We need to visit/Report to  the Location 3 times within the 5 Reporting time Given to us.
# And by the Time we also need to look into car's Avergae and best average speed.
# need to ensure the driver is given enough rest during the trip also.



---

# Trip Simulation Program

## Overview

The **Trip Simulation Program** is a C++ application designed to simulate multiple trips, each with distinct segments. This program calculates and outputs key data such as:
- Total distance covered during the trip.
- Time taken for each segment of the journey.
- Average speed of the trip.
- Arrival time for each trip segment.
- Remaining rest time until the next reporting time.

The program leverages **Object-Oriented Programming (OOP)** principles, including inheritance and method overriding, to simulate various trips, each with varying distances and reporting times.

## Key Features

- **User Input for Speed**: The user provides the speed of the vehicle, and the program computes the journey's data based on this input.
- **Total Distance Calculation**: Computes the total distance covered during each trip.
- **Time Calculation**: Determines the time taken for each segment based on the speed provided by the user.
- **Average Speed**: Calculates and displays the average speed for each trip.
- **Time of Arrival**: Displays the expected time of arrival for each trip segment.
- **Rest Time**: Calculates the remaining rest time before the next reporting time, ensuring no negative values are shown.
- **Best Average Speed**: Computes the best average speed across all trips.

## Program Structure

### `trip` Class

The base class for all trips, containing essential attributes and methods:
- **Attributes**:
  - `speed`: The speed at which the vehicle is traveling.
  - `total_dis`: The total distance of the trip.
  - `total_time`: The total time taken for the trip.
  - `t[]`: Array to store time for each segment in seconds.
- **Methods**:
  - `total_dis_func()`: Calculates the total distance of the trip.
  - `Time_taken()`: Calculates the time taken for each segment.
  - `dis_speed()`: Computes the average speed for the trip.
  - `Time_reached()`: Calculates the arrival time for each segment.
  - `rest_time()`: Calculates the remaining rest time before the next reporting time.

### `trip1` to `trip5` Classes

Each of these subclasses represents a distinct trip, inheriting the core functionality from the `trip` class and overriding methods as needed:
- **Distance Array**: Each trip contains an array of distances for each segment.
- **Constructor**: Accepts user input for speed and initializes necessary values.
- **Methods**: Inherits and overrides methods to calculate the total distance, time, average speed, and arrival time for each trip.

## How to Use

### Prerequisites

To run the program, ensure that you have a C++ compiler (such as `g++`) installed on your machine.



## Example Output

```plaintext
Enter the speed you want to travel: 60
Total Distance is: 45.5 km
Average Speed for the trip is: 50 km/h
Reached time for segment 1 is 9:00:30
Reached time for segment 2 is 9:10:45
...
Rest time is: 1 hours 20 minutes 45 seconds
IT WILL REST and start from 11 AM - the Reporting time.

Enter the speed you want to travel: 80
Total Distance is: 41 km
Average Speed for the trip is: 75 km/h
Reached time for segment 1 is 11:00:30
...
Rest time is: 0 hours 30 minutes 10 seconds
IT WILL REST and start from 1 pm-the Reporting time.

... (similar outputs for other trips)

Best Speed of The CAR is: 68 Km/h
```

## Technologies Used

- **Programming Language**: C++
- **Concepts**: Object-Oriented Programming (OOP)
  - Classes and Inheritance
  - Method Overriding
  - Arrays and Time Calculations



---

### Contact

For any inquiries or issues regarding this project, feel free to open an issue in the GitHub repository or reach out via email at [apurba131223@gmail.com].

---
