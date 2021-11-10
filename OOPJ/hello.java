class myClass{
	static String name = "arjun";
	static int age;
	
	public myClass(){
		this.age = 19;
	}
	
	public static void Person(String n){
		n = n;
		System.out.println("Mr. "+n);
	}
	
	public static void main(String[] args){
		System.out.println("Hello bros.");
		System.out.println(name);
		myClass myObj = new myClass();
		myObj.age = 20;
		Person p1 = new Person("Arjun KR");
		System.out.println("Age: "+myObj.age);
	} 
}