public class pattern7 {
   public static void p7(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j =0; j<N-i-1; j++)
        {
            System.out.print(" ");
        }
        for(int j=0;j< 2*i+1;j++){
            
            System.out.print("*");
        }
         for (int j =0; j<N-i-1; j++)
        {
            System.out.print(" ");
        }
       
        System.out.println();
    }
}
    public static void main(String[] args) {
        int N = 5;
        p7(N);
    }
}