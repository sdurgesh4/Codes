class spy
{
    public static void main()
    {
        int n=1124,s=0,p=1,rem=0;
        while(n>0)
        {
            rem=n%10;
            s=s+rem;
            p=p*rem;
            n=n/10;
        }
        if(s==p)
        {
            System.out.println("spy no");
        }
        else
        {
            System.out.println("not spy no");
        }
    }
}
