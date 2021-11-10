class RecFib{
	static int a=0,b=1,c,n=10;
	static void fib(int n){
		if(n>0){
			c=a+b;
			a=b;
			b=c;
			System.out.println(c);
			fib(n-1);
		}
	}
	public static void main(String[]args){
		System.out.println(a+"\n"+b);
		fib(n-2);
	}
}