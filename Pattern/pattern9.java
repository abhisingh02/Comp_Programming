public class pattern9 {
   
   public static void erect_pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j =0; j<n-i-1; j++)
        {
            System.out.print(" ");
        }
        for(int j=0;j< 2*i+1;j++){
            
            System.out.print("*");
        }
         for (int j =0; j<n-i-1; j++)
        {
            System.out.print(" ");
        }
        System.out.println();
    }
}

   public static void inverted_pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j =0; j<i; j++)
        {
            System.out.print(" ");
        }
        for(int j=0;j< 2*n -(2*i +1);j++){
            
            System.out.print("*");
        }
        for (int j =0; j<i; j++)
        {
            System.out.print(" ");
        }
        System.out.println();
    }
}

    public static void main(String[] args) {
        int n = 5;
        erect_pyramid(n);
        inverted_pyramid(n);
    }
}