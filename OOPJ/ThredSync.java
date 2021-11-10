class Display{
	public synchronized void prin(String msg){
		System.out.print("["+msg);
		try{
			Thread.sleep(1000);
		}catch(Exception e){
			System.out.println(e.getMessage());
		}
		System.out.print("]\n");
	}
}
class SyncThread extends Thread{
	private Display d;
	private String msg;
	SyncThread(Display d,String msg){
		this.d=d;
		this.msg=msg;
	}
	public void run(){
		d.prin(msg);
	}
}
class ThredSync{
	public static void main(String[] args){
		Display d = new Display();
		SyncThread t1 = new SyncThread(d,"Hello");
		SyncThread t2 = new SyncThread(d,"World");
		t1.start();
		t2.start();
	}
}