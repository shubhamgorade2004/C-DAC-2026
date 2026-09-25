import java.util.*;
public class Menu {
	
	public static int add(int a, int b) {
		return a+b;
	}
	
	public static int sub(int a, int b) {
		return a-b;
	}
	

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int choice;
		
		do {
			System.out.println("1.Add");
			System.out.println("2.Subtract");
			System.out.println("3.Exit");
			
			choice = sc.nextInt();
			
			switch(choice) {
			case 1: {
				int res = Menu.add(10, 20);
				System.out.println(res);
				break;
			}
			
			case 2 : {
				int res = Menu.sub(20, 10);
				System.out.println(res);
				break;
			}
			
			default : 
				System.out.println("Invalid Choice");
				break;
			
			}
			
			
		} while(choice!=3);


	}

}
