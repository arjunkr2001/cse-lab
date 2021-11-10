class Display{
	public synchronized void display(String msg){
		System.out.print("["+msg);
		try{
			Thread.sleep(1000);
		}catch(Exception e){
			e.printStackTrace();
		}
		System.out.print("]\n");
	}
}
class SyncT extends Thread{
	String str;
	Display ob;
	public SyncT(Display d,String str){
		ob = d;
		this.str = str;
	}
	public void run(){
		ob.display(str);
	}
}
class ThreadSynch{
	public static void main(String[] args){
		Display d = new Display();
		SyncT t1 = new SyncT(d,"helo");
		SyncT t2 = new SyncT(d,"wrld");
		t1.start();
		t2.start();
	}
}