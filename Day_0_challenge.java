import java.util.Scanner;
import java.lang.Math.*;

class Day_zero {
    public static void main(String[] args) {
        //Problem_1: sum finder for 3 number
        Scanner ip = new Scanner(System.in);
        System.out.println("Enter the 3 numbers: ");
        int a = ip.nextInt();
        int b = ip.nextInt();
        int c = ip.nextInt();
        System.out.println(a+b);
        System.out.println(c+b);
        System.out.println(a+c);
        
        //Problem_2: Area finder
        System.out.println("\nEnter the radius: ");
        float r = ip.nextFloat();
        System.out.println("Area : " + (Math.PI*r*r));
        
        //Problem_3: Odd or Even Finder
        System.out.println("\nEnter a number: ");
        int n = ip.nextInt();
        if(n % 2 == 0){
             System.out.println("Even");
        }
        else{
             System.out.println("Odd");
        }
    }
}
