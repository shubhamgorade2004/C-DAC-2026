class Ternaryopr {
    public static void main(String[] args) {
        int age = 60;

        String voting = (age>=18) ? "Your are eligible" : (age<=18) ? "Your are not eligible" : "Invalid age";
        System.out.println(voting);
    }

}