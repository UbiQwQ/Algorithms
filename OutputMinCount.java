/*
* 网易2017校园招聘
* 给定一个数组，除了一个数出现 1 次之外，其余数都出现 3 次。找出出现一次的数。如：{1, 2, 1, 2, 1, 2, 7}, 找出 7
*/
public class OutputMinCount {
    public static void main(String[] args){
        int count;
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int a[] = new int[n];
        Scanner in = new Scanner(System.in);
        for (int i = 0; i < n; i++){
            a[i] = in.nextInt();
        }
        for(int i = 0; i < n; i++){😂
            count = 0;
            for(int j = 0; j < n; j++){
                if(a[i] == a[j]){
                    count++;
                }
            }
            if(count == 0){
                System.out.print(a[count]);
            }
        }
    }
}