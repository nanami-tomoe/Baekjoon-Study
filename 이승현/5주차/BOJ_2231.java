import java.util.Scanner;

public class BOJ_2231 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int N = in.nextInt();
        int minCon = 0;

        for(int i = 1; i < N; i++) {
            int sum = i;
            int temp = i;

            while(temp > 0) {
                sum += temp % 10;
                temp  /= 10;
            }

            if(sum == N) {
                minCon = i;
                break;
            }
        }

        System.out.println(minCon);
    }
}
