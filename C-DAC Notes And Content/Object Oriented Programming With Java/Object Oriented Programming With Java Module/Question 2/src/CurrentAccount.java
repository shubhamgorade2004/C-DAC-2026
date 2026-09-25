import java.util.*;
public class CurrentAccount extends Account{
	public void addBall(double bal) {
		balance = bal;
		if(balance<0) {
			System.out.println("Add more moneny in account balance should not be negative");
		}
		if(bal<500) {
			System.out.println("Add more moneny in account balance should be minminum 500");
		}
	}
	
	public static void withdrawbb(double bal) throws InsufficientBalanceException  {
		if(bal>balance) {
			throw new InsufficientBalanceException("Withdrawal denied due to insufficient balance");
		}
	}
}
