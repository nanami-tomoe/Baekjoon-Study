import java.util.Scanner;

public class BOJ_1003 {
    static int[][] D;

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int T = in.nextInt();

        for(int i = 0; i < T; i++) {
            int N = in.nextInt();
            D = new int[N+1][2];
            fibonacci(N);
            System.out.printf("%d %d\n", D[N][0], D[N][1]);
        }
    }

    public static void fibonacci(int n) {
        D[0][0] = 1;
        D[0][1] = 0;
        if(n >= 1) {
            D[1][0] = 0;
            D[1][1] = 1;
            if(n >= 2) {
                for(int i = 2; i <= n; i++) {
                    D[i][0] = D[i-1][0] + D[i-2][0];
                    D[i][1] = D[i-1][1] + D[i-2][1];
                }
            }
        }
    }
}
