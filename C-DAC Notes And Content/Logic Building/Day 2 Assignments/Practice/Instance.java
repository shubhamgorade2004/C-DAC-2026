class Instance {
    String name; 
    public static void main (String args[]) {
        Instance obj1 = new Instance();
        obj1.name = "First object is created";
        System.out.println(obj1.name);

        Instance obj2 = new Instance();
        obj2.name = "Second instance is created";
        System.out.println(obj2.name);
    }
}
