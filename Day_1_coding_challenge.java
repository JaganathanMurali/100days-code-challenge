import java.util.Scanner;

class Day_One {
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        
        System.out.print("Enter the trials: ");
        int n = ip.nextInt();
        int x, y ,z;
        int a[] = new int[1000];
        
        for(int i = 0; i< n; i++){
            x = ip.nextInt();
            y = ip.nextInt();
            z = ip.nextInt();
            a[i] = x * y *z;
        }
        
        for(int i = 0; i< n; i++){
            System.out.println(a[i]);
        }
        
    }
}
