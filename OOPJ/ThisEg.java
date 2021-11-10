class Dog{
	String name;
	Dog(String name){
		this.name = name;
	}
	public void bark(){
		System.out.println("Ooughr"+name+"rRrRrrrh");
	}
}
class ThisEg{
	public static void main(String[] args){
		Dog edgar = new Dog("Edgar");
		edgar.bark();
	}
}