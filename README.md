# Baekjoon-Study
## ✅ 참여 방법
1. 이 저장소를 fork 해주세요.
2. 백준에 문제를 제출하여 정답처리가 제대로 되었으면, 파일작성규칙에 따라 파일을 만들어 주세요.
3. 이때 commit 규칙을 지켜주세요.
4. 원본 저장소로 Pull Request를 해주세요. (매주차가 끝나면 merge 예정)
5. 다른 사람들의 PR을 보고 자유롭게 코드리뷰를 해주세요.
- 주의사항: 기존 폴더와 파일을 지우면 안됩니다!!

## ✅ 소스코드 작성규칙
- 소스코드는 자유롭게 작성해주세요.
- 주의사항: java 사용자들은 백준 제출시 클래스 이름이 Main이어야 제출이 가능합니다. 하지만, 커밋 제출할 때는 파일이름과 클래스 이름 규칙을 따라주세요.
  - 백준 제출시 코드
    ```java
    public class Main {
        public static void main(String[] args) {
            System.out.println("Hello World!");
        }
    }
    ```
  - 커밋 제출시 코드
    ```java
    public class 2557 {
        public static void main(String[] args) {
            System.out.println("Hello World!");
        }
    }
    ```

## ✅ 파일 작성 규칙
- '이름_주차_문제번호' 순서로 작성해주세요.
  - `이승현_1주차_1234.java`
  - `이승현_1주차_1234.py`
  - `이승현_1주차_1234.cpp`
- 소스코드 이름은 `문제번호.언어`로 설정해주세요.

## ✅ commit 규칙
- commit은 1문제를 풀때마다 작성해주세요.
- commit message: 문제 제목 / 난이도 / 링크
  - `1931 / silver 1 / https://www.acmicpc.net/problem/1931`
- 터미널에서 작성법
  - `git commit -m "1931 / silver 1 / https://www.acmicpc.net/problem/1931"`
- Extended description은 자유롭게 작성해주세요. 저는 사고과정, 사용한 알고리즘 같은 것들을 적을 예정입니다.
  - 예시: https://github.com/michaelkimm/Algorithm-problem-solving-thought-process-re-record/commit/5e56b3145ddf401469f33ea91cad4f5b36bcffc9

## ✅ PR 규칙
- PR시 자신이 해당하는 branch에 pr을 날려주세요. main브랜치에 날리면 안됩니다.
- 단, 자신의 repository 혹은 원격저장소에는 main으로 커밋은 괜찮습니다. pull request 날릴 때 main브랜치에 날리면 안된다는 뜻입니다.
- 한주차에 푼 문제를 한번의 PR로 남겨주세요.
- PR 제목: 이름 / 주차 
  - `이승현 / 1주차`
- PR 내용:
  - 문제별로 내용을 작성합니다.
  - 사고과정, 어려운 부분, 아쉬운 점 등 자유롭게 작성해주세요.

## ✅ 코드리뷰 규칙
- PR 아래에 comment로 코드 리뷰를 남겨주세요.
