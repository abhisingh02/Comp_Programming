public class pattern4 {
    public static void p4(int n)
{
    for (int i = 0; i <= n; i++) {
        for (int j = 1; j <= i; j++)
        {
            System.out.print(i+" ");
        }
        System.out.println();
    }
}
    public static void main(String[] args) {
        int n=5;
        p4(n);
    }
}
