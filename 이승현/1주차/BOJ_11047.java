import java.util.Scanner;

public class BOJ_11047 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        int K = in.nextInt();
        int[] A = new int[N];
        int coin = 0; // 동전 수

        for(int i = 0; i < N; i++) {
            A[i] = in.nextInt();
        }

        for(int i = N - 1; i >= 0; i--) {
            if(A[i] <= K) {
                coin += K / A[i];
                K %= A[i];
            }
        }

        System.out.println(coin);
    }
}
