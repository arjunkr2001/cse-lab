import javax.swing.*;
import java.awt.event.*;
class Addition extends JFrame implements ActionListener{
	private JTextField t;
	private JButton btnSum;
	//private Int num;
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
	//public void sad(){			
	//	num = t.getText();
	//	t.setText(num+1);
	//}
	public void ActionPerformed(ActionEvent e){
		if(e.getSource() == btnSum)
			t.setText("");
	}
	public static void main(String[]args){
		new Addition().setVisible(true);
	}
} 