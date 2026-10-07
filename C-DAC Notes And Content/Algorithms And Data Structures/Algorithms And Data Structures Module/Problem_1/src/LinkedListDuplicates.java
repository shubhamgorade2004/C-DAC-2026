import java.util.*;	
public class LinkedListDuplicates {
	class Node {
		int data;
		Node next;
		
		Node(int data) {
			this.data = data;
		}
	}
	
	Node head;
	
	public void add(int d) {
		Node n1 = new Node(d);
		if(head==null) {
			head = n1;
			System.out.println("Added in list"+d);
			return;
			
		}
		
		n1.next = head;
		head = n1;
		System.out.println("Added in list"+d);
	}
	
	public void printDuplicates() {
		System.out.println("Execute");
		Node temp1 = head;
		Node temp2 = head.next;
		for(int i=0; temp1.next!=null; i++) {
			int count = 0;
			for(int j=0; temp2.next!=null; j++) {
				if(temp1.data==temp2.data) {
					count++;
				}
				temp2=temp2.next;
			}
			if(count==0) {
				System.out.println("No Dublicates");
			}
			else {
				System.out.println("Dublicates"+ temp1.data +" "+ count +" "+"times");
			}
			temp1=temp1.next;
			
		}
		
	}
	public static void main(String args[]) {
		
		LinkedListDuplicates l = new LinkedListDuplicates();
		l.add(1);
		l.add(2);
		l.add(3);
		l.add(4);
		l.add(5);
		
		l.printDuplicates();
	}
}

