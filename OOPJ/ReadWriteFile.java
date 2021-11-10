import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
class ReadWriteFile{
	public static void main(String[] args)throws IOException{
		FileReader fr = new FileReader("sample.txt");
		FileWriter fw = new FileWriter("NewFile.txt");
		int ch;
		while((ch=fr.read())!=-1){
			fw.write((char)ch);
			System.out.print((char)ch);
		}
		fr.close();
		fw.close();
	}
}