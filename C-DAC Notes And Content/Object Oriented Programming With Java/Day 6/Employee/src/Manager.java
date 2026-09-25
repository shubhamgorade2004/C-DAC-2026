public class Manager extends Employee {
	
	int hra;
	
	Manager(String n, String a, int ag, char g, int s, int h, int hra) {
		super(n, a, ag, g,s,h);
		this.hra=hra;
	}

	public int gethra() {
		return hra;
	}

	public void sethra(int hra) {
		this.hra = hra;
	}
	
}
