class palindrom{
	public static void main(String[]args){
		int n,p=0,t,r;
		n = 1551;
		t=n;
		while(n>0){
			r = n%10;
			p = (p*10)+r;
			n = n/10;
		}
		if(p == t){
			System.out.println(t+" palindrome.");
		}
		else{
			System.out.println(t+" is not palindrome.");
		}
	}
}