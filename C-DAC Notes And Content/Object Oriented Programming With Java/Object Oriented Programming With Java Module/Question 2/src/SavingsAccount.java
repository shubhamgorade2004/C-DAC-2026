import java.util.*;
public class SavingsAccount extends Account {
	
	public void acc(int a) {
		AccountNumber = a;
	}
	public void addBal(double bal) {
		balance = bal;
		if(balance<500) {
			System.out.println("Add more moneny in account balance should be minminum 500");
		}
	}
	
	public static void withdrawb(double bal) throws InsufficientBalanceException{
		if(balance-bal<=500) {
			throw new InsufficientBalanceException("Explanation: Savings account must maintain minimum balance of 500.");
		}
		
		else {
			balance = balance - bal;
			System.out.println("Remaining Balance = "+balance);
		}
	}
}
