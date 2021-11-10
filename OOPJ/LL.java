import java.util.Scanner;
class LinkedList{
	private Node head;
	class Node{
		private int data;
		private Node link;
		public Node(int data){
			this.data = data;
			this.link = null;
		}
	}
	public void insert(int data){
		Node temp = new Node(data);
		if(head == null){
			head = temp;
		}
		else{
			Node ptr = head;
			while(ptr.link != null){
				ptr = ptr.link;
			}
			ptr.link = temp;
		}
	}
	public void delete(){
		int x = head.data;
		head = head.link;
		System.out.println("Element "+x +" got deleted");
	}
	public void display(){
		if(head == null)
			System.out.println("List is Empty");
		else{
			Node ptr = head;
			while(ptr != null){
				System.out.print(ptr.data +"\t");
				ptr = ptr.link;
			}
			System.out.println();
		}
	}
}
class LL{
	public static void main(String [] args){
		LinkedList list = new LinkedList();
		Scanner sc = new Scanner(System.in);
		String choice = "";
		while(!choice.equals("4")){
			System.out.print("1. Insert at End \n2. Delete From Front \n3. Display \n4.Exit\n");
			System.out.println("Enter the choice:");
			choice = sc.nextLine();
			switch(choice){
				case "1": System.out.print("Enter the number to insert:");
							int data = sc.nextInt();
							sc.nextLine();
							list.insert(data);
							System.out.println("Data inserted Successfully");
							break;
				case "2": list.delete();
							break;
				case "3": list.display();
							break;
				case "4": break;
				default: System.out.println("Invalid Choice");
			}
		}
	}
}
