import java.util.Scanner;

public class BOJ_13305 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int N = in.nextInt();
        int[] D = new int[N-1];

        for(int i = 0; i < N-1; i++) {
            D[i] = in.nextInt();
        }

        int minGas = 1000000000;
        int result = 0;
        for(int i = 0; i < N-1; i++) {
            int G = in.nextInt();
            if(G < minGas) {
                minGas = G;
            }
            result += minGas * D[i];
        }

        System.out.println(result);
    }
}
