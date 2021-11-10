abstract class Shape{
	public abstract void numberOfSides();
}
class Rectangle extends Shape{
	public void numberOfSides(){
		System.out.println("4");
	}
}
class Triangle extends Shape{
	public void numberOfSides(){
		System.out.println("3");
	}
}
class Hexagon extends Shape{
	public void numberOfSides(){
		System.out.println("6");
	}
}
class Polymorphism{
	public static void main(String[]args){
		Rectangle r = new Rectangle();
		Triangle t = new Triangle();
		Hexagon h = new Hexagon();
		r.numberOfSides();
		t.numberOfSides();
		h.numberOfSides();
	}
}