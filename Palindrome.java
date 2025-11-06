class Palindrome
{
    public static void main()
    {
        int sum=0,n=561,rev=0,rem=0,num=n;
        while(n>0)
        {
            rem=n%10;
            rev=(rev*10)+rem;
            n=n/10;
        }
        if(rev==num)
                {
                    System.out.println("it is a palindrome number");
                }
                else
                {
                    System.out.println("it is not a palindrome no");
                }
    }
}