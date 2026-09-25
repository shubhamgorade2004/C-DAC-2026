import java.util.*;
import java.util.LinkedList;
public class Collectionc {

	public static void main(String[] args) {
		
		LinkedList list = new LinkedList();
		
		list.add(3);
		list.add(2);
		list.add(1);
		
		System.out.println(list);
		
		System.out.println(list.get(2));
		
		System.out.println(list);
		
		Collections.sort(list);
		
		System.out.println(list);
		
		Collections.reverse(list);
		
		System.out.println(list);
		
		System.out.println(Collections.min(list));
		
		System.out.println(Collections.max(list));
		
	}

}
