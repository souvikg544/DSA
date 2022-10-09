import java.util.*;

class Stack{
	int tos;
	int arr[];

	public Stack(){
		tos = -1;
		arr = new int[5];
	}

	public Stack(int n){
		tos = -1;
		arr = new int[n];
	}

	public int getSize(){
		return arr.length;
	}

	public void push(int data){
		if(tos==arr.length-1){
			System.out.println("OVERFLOW");
		}
		else{
			arr[++tos] = data;
		}
	}

	public int pop(){
		if (tos==-1){
			System.out.println("UNDERFLOW");
			return 0;
		}
		else{
			return(arr[tos--]);
		}
	}

	public void display(){
		System.out.println("Stack is:  ");
		for(int i=tos;i>=0;i--){
			System.out.println(arr[i]);
		}
	}
}

class TestStack{
	public static void main(String[] args) {
	Scanner inpt = new Scanner(System.in);
	Stack str = new Stack(5);
	System.out.println("Size of the Stack is: " + str.getSize());
	
	int ch;
	do{
		System.out.println("1. PUSH");
		System.out.println("1. POP");
		System.out.println("1. DISPLAY");
		System.out.println("1. EXIT");
		System.out.println("Enter Your Choice: ");
		ch = inpt.nextInt();

		switch(ch){
			case 1:
					System.out.println("ENTER THE VALUE TO BE PUSHED: ");
					str.push(inpt.nextInt());
					break;
			case 2:
			break;
			case 3:
			break;
			case 4:
			break;
		}
	}while(ch>0 && ch<5);
	inpt.close();
	}		
}
