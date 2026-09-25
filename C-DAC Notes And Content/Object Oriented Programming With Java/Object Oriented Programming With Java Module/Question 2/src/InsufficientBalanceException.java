
import java.util.*;
public class InsufficientBalanceException extends Exception {
	InsufficientBalanceException(String s) {
		super(s);
	}
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		SavingsAccount sav = new SavingsAccount();
		CurrentAccount c = new CurrentAccount();
	
		int choice;
		
		do {
			System.out.println("1.Account type");
			System.out.println("2.Enter account No");
			System.out.println("3. Add Money");
			System.out.println("4.Withdraw");
			System.out.println("5.Exit");
			
			choice = sc.nextInt();
			
			switch(choice) {
			case 1 :
			{
				System.out.println("Enter account type");
				String s = sc.next();
				
				
			}
			
			case 2:{
				System.out.println("Enter account Number");
				sc.nextLine();
				int a = sc.nextInt();
				sav.acc(a);
				
			}
			
			case 3 :{
				System.out.println("Enter Money");
					double b = sc.nextInt();
					c.addBall(b);
					

			}
			
			case 4 : {
				System.out.println("Withdarw Money");
				double d = sc.nextInt();
				
				try {
					CurrentAccount.withdrawbb(d);
				}
				
				catch(InsufficientBalanceException e) {
					System.out.println(e.getMessage());
				}
				
				try {
					SavingsAccount.withdrawb(d);
				}
				
				catch(InsufficientBalanceException e1) {
					System.out.println(e1.getMessage());
				}
				break;
				
			}
			
			default : {
				System.out.println("Enter correct Choice");
				break;
			}
			}
		}while(choice==5);
		
		
		

	}

}
