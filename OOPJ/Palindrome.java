import java.util.Scanner;
class Palindrome{
	public static void main(String[]args){
		int flag=0;
		Scanner sc = new Scanner(System.in);
		System.out.print("enter a string: ");
		String str = sc.nextLine();
		int len=str.length();
		for(int i=0;i<len/2;i++){
			if(str.charAt(i)!=str.charAt(len-1-i)){
				flag=1;
				break;
			}
		}
		if(flag==0)
			System.out.println("palindrome");
		else
			System.out.println("not palindrome!");
	}
}