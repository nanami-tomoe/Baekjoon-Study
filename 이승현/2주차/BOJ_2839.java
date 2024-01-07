import java.util.Scanner;

public class BOJ_2839 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        if(delivery(N) < 0) {
            System.out.println(-1);
        } else {
            System.out.println(delivery(N));
        }
    }

    private static int delivery(int n) {
        if(n == 3) {
            return 1;
        } else if(n < 3) {
            return -2000;
        }

        if(n % 5 == 0) {
            return n / 5;
        } else {
            return delivery(n - 3) + 1;
        }
    }
}
