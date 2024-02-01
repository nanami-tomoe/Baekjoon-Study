class Main {
  public static void main(String[] args) {
    int[] nums = new int[10003];

    //d(9972)=9999  d(9973)=10001
    for (int i=1; i<9973; i++){
      int k = i+i%10+(int)(i/10)%10+(int)(i/100)%10+(int)(i/1000)%10;
      nums[k] = -1;
    }
    for (int i=1; i<10000; i++){
      if (nums[i]==-1) continue;
      System.out.println(i);
    }
  }
}
