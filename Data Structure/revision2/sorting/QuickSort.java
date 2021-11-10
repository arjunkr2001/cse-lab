import java.util.Scanner;
import java.util.Arrays;
class QuickSort{
	private static int partition(int a[],int l,int h){
		int t,i,pivot,j;
		pivot = a[h];
		i=l-1;
		for(j=l;j<h;j++){
			if(a[j] <= pivot){
				i++;
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
		t=a[i+1];
		a[i+1]=a[h];
		a[h]=t;
		return i+1;
	}
	private static void quickSort(int a[],int l,int h){
		if(l<h){
			int pi = partition(a,l,h);
			quickSort(a,l,pi-1);
			quickSort(a,pi+1,h);
		}
	}
	public static void main(String[] args){
		int a[];
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter no.of elements: ");
		int n = sc.nextInt();
		a = new int[n];
		System.out.println("Enter "+n+"elements: ");		
		for(int i=0;i<n;i++)
			a[i] = sc.nextInt();
		quickSort(a,0,n-1);
		System.out.println("Sorted array is:");
		for(int i=0;i<n;i++)
			System.out.println(a[i]);
	}
}