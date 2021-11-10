import java.util.Scanner;
class ArrInput{
	public static void main(String[] args){
		int a[];
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter no.of elements: ");
		int n = sc.nextInt();
		a = new int[n];
		System.out.println("Enter "+n+"elements: ");		
		for(int i=0;i<n;i++)
			a[i] = sc.nextInt();
		System.out.println("array is:");
		for(int i=0;i<n;i++)
			System.out.println(a[i]);
	}
}