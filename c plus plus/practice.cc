#include <iostream>
#include <string>

class Employee {
private:
    std::string name;
    int id;
    std::string position;
    double salary;          // Hidden from employees
    double yearlyIncrement; // Hidden from employees

public:
    // Function to set employee information
    void getInfo() {
        std::cout << "Enter employee name: ";
        std::cin >> name;
        std::cout << "Enter employee ID: ";
        std::cin >> id;
        std::cout << "Enter employee position: ";
        std::cin >> position;
    }

    // Function to calculate salary increment based on the number of working years
    void Increment(int noOfWorkingYears) {
        // Calculate the new salary after the specified number of working years
        for (int year = 0; year < noOfWorkingYears; year++) {
            salary += (yearlyIncrement / 100) * salary;
        }
    }

    // Function to display employee details, including calculated salary
    void display() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "ID: " << id << std::endl;
        std::cout << "Position: " << position << std::endl;
        std::cout << "Salary: " << salary << std::endl;
    }
};

int main() {
    Employee employee1, employee2;

    // Set employee information
    std::cout << "Employee 1 Information:" << std::endl;
    employee1.getInfo();

    std::cout << "Employee 2 Information:" << std::endl;
    employee2.getInfo();

    // Calculate and display the updated salaries
    int years1, years2;
    std::cout << "Enter the number of working years for employee 1: ";
    std::cin >> years1;
    std::cout << "Enter the number of working years for employee 2: ";
    std::cin >> years2;

    employee1.salary = 35000; // Initialize hidden salary
    employee1.yearlyIncrement = 7; // Initialize hidden yearly increment

    employee2.salary = 75000; // Initialize hidden salary
    employee2.yearlyIncrement = 10; // Initialize hidden yearly increment

    employee1.Increment(years1);
    employee2.Increment(years2);

    std::cout << "Employee 1 Details:" << std::endl;
    employee1.display();
    std::cout << "\nEmployee 2 Details:" << std::endl;
    employee2.display();

    return 0;
}
