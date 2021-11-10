import java.util.Scanner;

class ExceptionDemo{
	public static void main(String[]args){
		Scanner sc = new Scanner(System.in);
		System.out.print("enter a = ");
		int a = sc.nextInt();
		System.out.print("enter b = ");
		int b = sc.nextInt();
		try{
			System.out.println("a/b = "+a/b);
		}
		catch(ArithmeticException e){
			System.out.println(e.getMessage());
		}
	}
}