package model;

public abstract class Employee {
	private int id;
	private String name;
	private double salary;
	
//	constructor
	public Employee(int id, String name, double salary) {
		this.id = id;
		this.name = name;
		this.salary = salary;
	}

	//Getters
	public int getId() {
		return id;
	}

	public String getName() {
		return name;
	}

	public double getSalary() {
		return salary;
	}

	//Setters
	public void setId(int id) {
		this.id = id;
	}

	public void setName(String name) {
		this.name = name;
	}

	public void setSalary(double salary) {
		this.salary = salary;
	}
		
	@Override
	public String toString() {
		return "ID : "+this.id +"\nName : "+this.name+"\nSalary : "+this.salary;
	}

	public abstract double calculateSalary();
}