public class pattern1{
   public static void p1(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            System.out.print("* ");
        }
        System.out.println();
    }
}

    public static void main(String[] args) {
        int N = 5;
        p1(N);
    }
}