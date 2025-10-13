package model;

public class HR extends Employee{
	private double commission;
	
//	constructor
	public HR(int id, String name, double salary, double commission) {
		super(id, name, salary);
		this.commission=commission;
	}
	
	//Getters
	public double getCommission() {
		return commission;
	}	
	
	//Setters
	public void setCommission(double commission) {
		this.commission = commission;
	}
	
	
	public String toString() {
		return super.toString()+"\nCommission : "+this.getCommission();
	}

	@Override
	public double calculateSalary() {
		// TODO Auto-generated method stub
		return this.getSalary()+this.getCommission();
	}
}