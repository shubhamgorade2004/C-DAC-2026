public class Forcommand {
    public static void main(String[] args) {
        System.out.println("hello" + args.length);
        for(int i=0; i<args.length; i++) {
            System.out.println("i" + i + ": " + args[i]);
        }
    }
}
