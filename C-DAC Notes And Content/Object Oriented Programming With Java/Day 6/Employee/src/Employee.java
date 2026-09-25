
public abstract class Employee {
	
	String name = new String();
	String adress = new String();
	int age;
	char gender;
	int salary;
	
	public Employee() {
	}
	
	public Employee(String n, String a, int ag, char g, int s, int h) {
		name = n;
		adress = a;
		age = ag;
		gender = g;
		salary = s;
	}

	public String getname() {
		return name;
	}

	public void setname(String name) {
		this.name = name;
	}

	public String getadress() {
		return adress;
	}

	public void setadress(String adress) {
		this.adress = adress;
	}

	public int getage() {
		return age;
	}

	public void setage(int age) {
		this.age = age;
	}

	public char getgender() {
		return gender;
	}

	public void setgender(char gender) {
		this.gender = gender;
	}

	public int getsalary() {
		return salary;
	}

	public void setsalary(int salary) {
		this.salary = salary;
	}

	
}