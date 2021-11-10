import java.util.Scanner;
class CharFreq{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("enter string: ");
		String str = sc.nextLine();
		System.out.print("enter character: ");
		char c = sc.nextLine().charAt(0);
		int count = 0;
		for(int i=0;i<str.length();i++){
			if(str.charAt(i)==c)
				count++;
		}
		System.out.println(count);
	}
}