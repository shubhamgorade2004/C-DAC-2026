import java.util.Scanner;
class Input {
 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your name: ");
        String str = sc.nextLine();
        System.out.println("Your name is: " + str);

        int age = sc.nextInt();
        System.out.println("Your age is: " + age);

    }
}
