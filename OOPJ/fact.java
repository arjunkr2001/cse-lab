class fact{
	static int n=5,f;
	static int fact(int n){
		if(n==1){
			return 1;
		}
		else{
			f = n*fact(n-1);
			return f;
		}
	}
	public static void main(String[]args){
		System.out.println(fact(n));
	}
}