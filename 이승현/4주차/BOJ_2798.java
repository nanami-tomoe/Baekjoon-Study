import java.util.Scanner;

public class BOJ_2798 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        int M = in.nextInt();

        int[] card = new int[N];
        for(int i = 0; i < N; i++) {
            card[i] = in.nextInt();
        }

        int maxNum = 1;
        for(int i = 0; i < N; i++) {
            for(int j = i+1; j < N; j++) {
                for(int k = j+1; k < N; k++) {
                    int sum = card[i] + card[j] + card[k];
                    if(sum > maxNum && sum <= M) {
                        maxNum = sum;
                    }
                }
            }
        }

        System.out.println(maxNum);
    }
}
