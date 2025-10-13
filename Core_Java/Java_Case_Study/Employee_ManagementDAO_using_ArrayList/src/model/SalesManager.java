package model;

public class SalesManager extends Employee{
	private double incentive;
	private int target;
	
	//constructor
	public SalesManager(int id, String name, double salary, double incentive, int target) {
		super(id, name, salary);
		this.incentive=incentive;
		this.target=target;
	}

	//getter
	public double getIncentive() {
		return incentive;
	}

	public int getTarget() {
		return target;
	}

	//setter
	public void setIncentive(double incentive) {
		this.incentive = incentive;
	}

	public void setTarget(int target) {
		this.target = target;
	}

	
	public String toString() {
		return super.toString()+"\nIncentive : "+this.getIncentive()+"\nTarget : "+this.getTarget();
	}
	
	@Override
	public double calculateSalary() {
		// TODO Auto-generated method stub
		return this.getSalary()+this.getIncentive();
	}
}