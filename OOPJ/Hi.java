import javax.swing.*;
import java.awt.event.*;
class Hi extends JFrame implements ActionListener{
	private JLabel p;
	private JTextField t;
	private JButton b;
	private JLabel hi;
	public Hi(){
		setLayout(null);
		setSize(600,500);
		
		p = new JLabel("enter your name: ");
		p.setBounds(50,50,300,30);
		t = new JTextField();
		t.setBounds(50,80,300,30);
		b = new JButton("Hi");
		b.setBounds(200,150,100,50);
		hi = new JLabel("");
		hi.setBounds(100,300,300,100);
		hi.setFont(hi.getFont().deriveFont(30f));
		
		add(p);
		add(t);
		add(b);
		add(hi);
		
		b.addActionListener(this);
	}
	public void actionPerformed(ActionEvent e){
		if(e.getSource().equals(b)){
			String name = t.getText();
			hi.setText("Hi "+name);
		}
	}
	public static void main(String[]args){
		new Hi().setVisible(true);
	}
}