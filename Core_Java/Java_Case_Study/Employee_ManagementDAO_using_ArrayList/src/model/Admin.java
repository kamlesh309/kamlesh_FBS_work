package model;

public class Admin extends Employee{
	private double allowance;

	//constructor
	public Admin(int id, String name, double salary, double allowance) {
		super(id, name, salary);
		this.allowance=allowance;
	}

	//getter
	public double getAllowance() {
		return allowance;
	}

	//setter
	public void setAllowance(double allowance) {
		this.allowance = allowance;
	}
	
	public String toString() {
		return super.toString()+"\nAllowance : "+this.getAllowance();
	}

	@Override
	public double calculateSalary() {
		return this.getSalary()+this.getAllowance();
	}
}