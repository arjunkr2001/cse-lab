import javax.swing.*;
import java.awt.event.*;
class Addition extends JFrame implements ActionListener{
	private JTextField t;
	private JButton btnSum;
	public Addition(){
		setLayout(null);
		setSize(500,500);
		
		t = new JTextField();
		t.setBounds(200,200,200,30);
		btnSum = new JButton("SUM");
		btnSum.setBounds(230,300,80,50);
		
		add(t);
		add(btnSum);
		
		btnSum.addActionListener(this);
	}
	public void sum(){
		int r, sum=0;		
		int num = Integer.parseInt(t.getText());
		while(num > 0){
			r = num%10;
			sum = sum + r;
			num = num/10;
		}
		t.setText(String.valueOf(sum));
	}
	public void actionPerformed(ActionEvent e){
		if(e.getSource().equals(btnSum)){
			sum();
		}
	}
	public static void main(String[]args){
		new Addition().setVisible(true);
	}
} 