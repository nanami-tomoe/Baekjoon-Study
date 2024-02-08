import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.*;

public class BOJ_2108 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());

        int[] arr = new int[N];
        int sum = 0;

        int ave = 0; // 산술평균
        int mid = 0; // 중앙값
        int dif = 0; // 차이

        for(int i = 0; i < N; i++) {
            int x = Integer.parseInt(br.readLine());
            arr[i] = x;
            sum += x;
        }

        ave = (int) Math.round(sum / (double) N);
        Arrays.sort(arr);
        mid = arr[(N-1)/2];
        dif = arr[N-1] - arr[0];

        // 최빈값을 계산하고 출력합니다.
        int[] count = new int[8001]; // -4000부터 4000까지의 수를 저장하기 위한 배열
        int maxCount = 0; // 최빈값의 빈도 수
        List<Integer> modes = new ArrayList<>(); // 최빈값들을 저장하기 위한 리스트

        for (int i = 0; i < N; i++) {
            count[arr[i] + 4000]++; // 수의 범위를 인덱스로 맞춰 빈도 수를 증가시킵니다.
            if (count[arr[i] + 4000] > maxCount) {
                maxCount = count[arr[i] + 4000];
            }
        }

        for (int i = 0; i < count.length; i++) {
            if (count[i] == maxCount) {
                modes.add(i - 4000); // 최빈값을 리스트에 추가합니다.
            }
        }

        int mode; // 최빈값
        if (modes.size() > 1) {
            mode = modes.get(1); // 최빈값 중 두 번째로 작은 값을 선택합니다.
        } else {
            mode = modes.get(0);
        }

        System.out.println(ave);
        System.out.println(mid);
        System.out.println(mode);
        System.out.println(dif);
    }
}
