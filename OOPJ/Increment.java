import java.awt.event.*;
import javax.swing.*;
class IncrementModel{
	public Integer plus(int i){
		return i+1;
	}
}
class IncrementView extends JFrame{
	private JTextField t;
	private JButton b;
	public IncrementView(){
		JPanel panel = new JPanel();
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		setSize(100,100);
		t = new JTextField(10);
		b = new JButton("+");
		panel.add(t);panel.add(b);
		add(panel);
	}
	public int getI(){
		return Integer.parseInt(t.getText());
	}
	public void setI(String i){
		t.setText(i);
	}
	public void listener(ActionListener listen){
		b.addActionListener(listen);
	}
}
class IncrementController{
	private IncrementModel pls;
	private IncrementView frame;
	public IncrementController(IncrementView frame, IncrementModel pls){
		this.frame = frame;
		this.pls = pls;
		this.frame.listener(new IncrementListener());
	}
	class IncrementListener implements ActionListener{
		public void actionPerformed(ActionEvent e){
			System.out.println("button pressed");
			int i = frame.getI();
			Integer iv = pls.plus(i);
			frame.setI(iv.toString());
		}
	}
}
class Increment{
	public static void main(String[]args){
		IncrementView v = new IncrementView();
		IncrementModel m = new IncrementModel();
		IncrementController c = new IncrementController(v,m);
		v.setVisible(true);
	}
}