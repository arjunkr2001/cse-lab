class Display extends Thread{
	String msg;
	Display(String msg){
		this.msg = msg;
	}
	Thread obj = Thread.currentThread();
	public void run(){
		synchronized(obj){
			System.out.print("["+msg);
			try{
				Thread.sleep(1000);
			}catch(Exception e){
				System.out.println(e);
			}
			System.out.print("]\n");
			try{
				Thread.sleep(1000);
			}catch(Exception e){
				System.out.println(e.getMessage());
			}
		}
	}
}
class ThreadSync{
	public static void main(String[] args){
		Display d1 = new Display("hello");
		Display d2 = new Display("world");
		d1.start();
		d2.start();
	}
}