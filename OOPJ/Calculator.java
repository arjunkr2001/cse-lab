import javax.swing.*;
import java.awt.event.*;
class Calculator extends JFrame implements ActionListener{
	private JTextField t;
	private JButton b1;
	private JButton b2;
	private JButton b3;
	private JButton b4;
	private JButton b5;
	private JButton b6;
	private JButton b7;
	private JButton b8;
	private JButton b9;
	private JButton b10;
	private JButton b11;
	private JButton b12;
	private JButton b13;
	private JButton b14;
	private JButton b15;
	private JButton b16;
	private JButton b17;
	private Integer res;
	private String operation;
	public Calculator(){
		
		setLayout(null);
		setSize(500,500);
		
		t = new JTextField();
		t.setBounds(100,100,200,30);
		b1 = new JButton("1");
		b1.setBounds(100,140,50,30);
		b2 = new JButton("2");
		b2.setBounds(150,140,50,30);
		b3 = new JButton("3");
		b3.setBounds(200,140,50,30);
		b4 = new JButton("+");
		b4.setBounds(250,140,50,30);
		b5 = new JButton("4");
		b5.setBounds(100,170,50,30);
		b6 = new JButton("5");
		b6.setBounds(150,170,50,30);
		b7 = new JButton("6");
		b7.setBounds(200,170,50,30);
		b8 = new JButton("-");
		b8.setBounds(250,170,50,30);
		b9 = new JButton("7");
		b9.setBounds(100,200,50,30);
		b10 = new JButton("8");
		b10.setBounds(150,200,50,30);
		b11 = new JButton("9");
		b11.setBounds(200,200,50,30);
		b12 = new JButton("x");
		b12.setBounds(250,200,50,30);
		b13 = new JButton("/");
		b13.setBounds(100,230,50,30);
		b14 = new JButton("%");
		b14.setBounds(150,230,50,30);
		b15 = new JButton("=");
		b15.setBounds(200,230,50,30);
		b16 = new JButton("C");
		b16.setBounds(250,230,50,30);
		b17 = new JButton("0");
		b17.setBounds(100,260,200,30);
		
		add(t);add(b1);add(b2);
		add(b3);add(b4);add(b5);
		add(b6);add(b7);add(b8);
		add(b9);add(b10);add(b11);
		add(b12);add(b13);add(b14);
		add(b15);add(b16);add(b17);
		
		b1.addActionListener(this);b2.addActionListener(this);
		b3.addActionListener(this);b4.addActionListener(this);
		b5.addActionListener(this);b6.addActionListener(this);
		b7.addActionListener(this);b8.addActionListener(this);
		b9.addActionListener(this);b10.addActionListener(this);
		b11.addActionListener(this);b12.addActionListener(this);
		b13.addActionListener(this);b14.addActionListener(this);
		b15.addActionListener(this);b16.addActionListener(this);
		b17.addActionListener(this);
	}
	public void doAction(String op){
		if(operation == null){
			operation = op;
			res = Integer.parseInt(t.getText());
			t.setText("");
		}
		else{
			switch(operation){
				case "+": res = res + Integer.parseInt(t.getText());break;
				case "-": res = res - Integer.parseInt(t.getText());break;
				case "x": res = res * Integer.parseInt(t.getText());break;
				case "/": res = res / Integer.parseInt(t.getText());break;
				case "%": res = res % Integer.parseInt(t.getText());break;
			}
			if(op == "="){
				t.setText(res.toString());
				res = 0;
				operation = null;
			}
			else{
				operation = op;
				t.setText("");
			}
		}
	}
	public void actionPerformed(ActionEvent e){
		if(e.getSource() == b1)
			t.setText(t.getText()+"1");
		else if(e.getSource() == b2)
			t.setText(t.getText()+"2");
		else if(e.getSource() == b3)
			t.setText(t.getText()+"3");
		else if(e.getSource() == b5)
			t.setText(t.getText()+"4");
		else if(e.getSource() == b6)
			t.setText(t.getText()+"5");
		else if(e.getSource() == b7)
			t.setText(t.getText()+"6");
		else if(e.getSource() == b9)
			t.setText(t.getText()+"7");
		else if(e.getSource() == b10)
			t.setText(t.getText()+"8");
		else if(e.getSource() == b11)
			t.setText(t.getText()+"9");
		else if(e.getSource() == b17)
			t.setText(t.getText()+"0");
		else if(e.getSource() == b16){
			t.setText("");
			res = 0;
			operation = null;
		}
		else if(e.getSource() == b4)
			doAction("+");
		else if(e.getSource() == b8)
			doAction("-");
		else if(e.getSource() == b12)
			doAction("x");
		else if(e.getSource() == b13)
			doAction("/");
		else if(e.getSource() == b14)
			doAction("%");
		else if(e.getSource() == b15)
			doAction("=");
	}
	public static void main(String[]args){
		new Calculator().setVisible(true);
	}
}