# Car_Rental_System

## Introduction
Welcome to the Car Rental System project! This system allows customers to rent different types of cars (Petrol, Electric, Diesel) by providing their details and selecting the desired car model. The program calculates the total rental cost and generates a bill for the customer.

## Features
- **Customer Data Collection:** Collects customer details including name, user ID, and contact number.
- **Car Selection:** Allows customers to choose from different car types and models.
- **Rental Duration:** Customers can specify the number of days they wish to rent the car.
- **Price Calculation:** Calculates the total rental cost based on the car type, model, and rental duration.
- **Bill Generation:** Generates a bill with all relevant details and the total amount to be paid.
- **Car Availability Tracking:** Keeps track of the number of available cars for each type.

## Classes and Functions

### `customer`
- **Attributes:**
  - `user_id`
  - `len`
  - `contact`
  - `name`
- **Functions:**
  - `customer_data()`: Collects customer details.
  - `display_user()`: Displays customer details.

### `car`
- **Attributes:**
  - `car_type`
  - `days`
- **Functions:**
  - `car_data()`: Collects rental duration.

### `EV` (inherits from `car`)
- **Attributes:**
  - `model1`
  - `a`
- **Functions:**
  - `display_ev()`: Displays and selects EV models.
  - `price()`: Calculates the rental price for EV models.

### `petrol` (inherits from `car`)
- **Attributes:**
  - `model2`
  - `b`
- **Functions:**
  - `display_p()`: Displays and selects petrol car models.
  - `price()`: Calculates the rental price for petrol car models.

### `diesel` (inherits from `car`)
- **Attributes:**
  - `model3`
  - `c`
- **Functions:**
  - `display_d()`: Displays and selects diesel car models.
  - `price()`: Calculates the rental price for diesel car models.

### `capacity`
- **Functions:**
  - `operator--()`: Decrements the number of petrol vehicles.
  - `operator-()`: Decrements the number of diesel vehicles.
  - `operator+()`: Decrements the number of electric vehicles.
  - `capp()`: Displays the number of available vehicles for each type.

### `reservation` (inherits from `EV`, `petrol`, `diesel`, `customer`, and `capacity`)
- **Attributes:**
  - `c1`, `c2`, `c3`
  - `total_price`
  - `ch`
  - `choice`
  - `rent_fee`
- **Functions:**
  - `get_car()`: Manages car selection and booking process.
  - `calc()`: Calculates the total rental cost.
  - `confirm()`: Confirms the booking.
  - `display_car()`: Displays the bill and rental details.

## How to Run
1. Compile the program using a C++ compiler.
2. Run the executable.
3. Enter customer details when prompted.
4. Select the type of car and model.
5. Confirm the booking to generate the bill.

## Example Usage

Enter following details
Enter your Name: John
Enter User Id: 12345
Enter Contact: 9776542344
Enter number of days for rent: 3
Enter 1 for Petrol Car
Enter 2 for Electric vehicle
Enter 3 for Diesel Car
Choose Car Type : 1
Enter 1 for Hyundai Sentro MT
Enter 2 for Maruti Alto K10
Choose car model: 2
Are you sure, you want to rent this car?
Enter YES to continue or NO to exit
YES
Your Car is Booked

-------------------------BILL-------------------------
Name: John
User-Id: 12345
Contact: 9776542344
Car chosen:
Car type: Petrol
Model: Maruti Alto K10
Number of days of rent: 3
Total Amount : 800


## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Contributing
Contributions are welcome! Please fork this repository and submit a pull request for any changes or additions.

## Contact
For any inquiries, please contact `vaishnavi.b1418@gmail.com`.

---

Thank you for using the Car Rental System!
