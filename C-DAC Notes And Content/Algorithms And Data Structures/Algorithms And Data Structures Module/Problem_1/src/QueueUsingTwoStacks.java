import java.util.*;
public class QueueUsingTwoStacks {
	int stack1[] = new int[10];
	int stack2[] = new int[10];
	int top1=-1;
	int front1=-1;
	int top2=-1;
	int sizeq;
	
	public void enqueue(int a) {
		if(top1==stack1.length-1) {
			System.out.println("Queue Overflow");
			return;
		}
		
		if(front1==-1) {
			front1 = 0;
		}
		top1++;
		stack1[top1]=a;
		sizeq++;
	}
	
	public void dequeue() {
		if(top1==-1) {
			System.out.println("EMPTY");
			return;
		}
		
		int temp = stack1[front1];
		front1++;
		sizeq--;
		
		top2++;
		stack2[top2]=temp;
		System.out.println(stack2[top2]);
		top2--;
	}
	
	public void peek() {
		if(top1==-1) {
			System.out.println("EMPTY");
			return;
		}
		System.out.println(stack1[front1]);
		
	}
	
	public void size() {
		System.out.println(sizeq);
	}
	
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String choice;
		
		QueueUsingTwoStacks q = new QueueUsingTwoStacks();
		
		do {
			System.out.println("We are implementing queue");
			System.out.println("E : enqeue");
			System.out.println("D : dequeue");
			System.out.println("P : peek front value");
			System.out.println("S : size");
			System.out.println("X : exit");
			
			
			System.out.println("Enter your choice");
			choice = sc.next();
			sc.nextLine();
			
			switch(choice) {
			case "E" : {
				System.out.println("Enter element to be added");
				int a = sc.nextInt();
				q.enqueue(a);
				break;
			}
			
			case "D" : {
				q.dequeue();
				break;
			}
			
			case "P" : {
				q.peek();
				break;
			}
			
			case "S" : {
				q.size();
				break;
			}
			
			case "X" : {
				System.out.println("Exiting the program");
				break;
			}
			
			default : {
				System.out.println("Enter correct choice");
				break;
			}
			
			}
			
	}while(choice!="X");
		
	}
		
}
