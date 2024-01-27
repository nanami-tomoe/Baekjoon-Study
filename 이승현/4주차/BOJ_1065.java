import java.util.Scanner;
import java.util.stream.Stream;

public class BOJ_1065 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        int count = 0;

        // 1 - N 까지 다 해보기(브루트포스)
        for(int i = 1; i <= N; i++) {
            count += 1; // 일단 카운트
            if(i >= 100) { // 1, 2자릿수는 무조건 한수고 세자릿수부터 판별
                int[] arrNum = Stream.of(String.valueOf(i).split("")).mapToInt(Integer::parseInt).toArray();
                int diff = arrNum[1] - arrNum[0];
                for(int j = 2; j < arrNum.length; j++) {
                    if(arrNum[j] - arrNum[j-1] != diff) {
                        count -= 1; // 한수가 아니면 카운트 했던거 다시 빼주기
                        break;
                    }
                }
            }
        }

        System.out.println(count);
    }
}
