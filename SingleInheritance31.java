// Superclass (parent)
class Employee {
String name;
double basicSalary;
Employee(String name, double basicSalary) 
{
this.name = name;
this.basicSalary = basicSalary;
}
void displayEmployee() {
System.out.println("Name         : " + name);
System.out.println("Basic Salary : " + basicSalary);
}
}
// Subclass (child) - inherits from exactly ONE class
class Manager extends Employee {
double bonus;
Manager(String name, double basicSalary, double bonus){
super(name, basicSalary);// calls the parent constructor
this.bonus = bonus;
}
void displayManager() {
displayEmployee();// inherited method
System.out.println("Bonus        : " + bonus);
System.out.println("Total Salary : " + (basicSalary + bonus));
}
}
public class SingleInheritance31 {public static void main(String[] args) {
Manager m = new Manager("Krish", 5000, 16000);
m.displayManager();
}
}