import java.util.Scanner;
public class Sorting {
    public static void print(int n,int arr[]) {
        for(int i=0;i<n;++i)
        {
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int bubble[] = new int[n];
        for (int i = 0; i < n; ++i) {
            bubble[i] = sc.nextInt();
        }
        //bubble sort
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<n-i-1;++j)
            {
                if(bubble[j]>bubble[j+1])
                {
                    //swap
                    int temp=bubble[j];
                    bubble[j]=bubble[j+1];
                    bubble[j+1]=temp;
                }
            }
        }
        print(n,bubble);
    }
}
