class Instancein {
    String name = "Shubham";
    int rollNo = 123;
    public static void main(String[] args) {
        Instancein obj1 = new Instancein();
        System.out.println(obj1.name);
        System.out.println(obj1.rollNo);

        Instancein obj2 = new Instancein();
        System.out.println(obj2.name);
        System.out.println(obj2.rollNo);
    }
}
