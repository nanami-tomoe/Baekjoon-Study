import java.util.Arrays;
import java.util.Comparator;
import java.util.Scanner;

public class BOJ_1931 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int num = in.nextInt();
        int[][] info = new int[num][2];

        for(int i = 0; i < num; i++) {
            info[i][0] = in.nextInt();
            info[i][1] = in.nextInt();
        }
        Arrays.sort(info, new Comparator<int[]>() {
            @Override // compare 함수 재정의
            public int compare(int[] S, int[] E) {
                if (S[1] == E[1]) { // 종료시간이 같을 때
                    return S[0] - E[0];
                }
                return S[1] - E[1];
            }
        });

        int count = 0;
        int end = -1;

        for(int i = 0; i < num; i++) {
            if(end <= info[i][0]) {
                end = info[i][1];
                count++;
            }
        }

        System.out.println(count);
    }
}
