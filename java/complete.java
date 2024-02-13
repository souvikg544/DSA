//package hello.java;
//package hello.java;
//
//import java.util.Arrays;
//import java.util.Scanner;
//public class hello1 {
//
//	public static void main(String[] args) {
		// TODO Auto-generated method stub
//		System.out.println("hello jva");
//		variabless
		
		
//		String name="Aman";
//		String never="AKku";
//		int age=30;
//		String friend="ashu";
		
		
//		types...............
//		primitive---simple --byte -1[-128to127] short 2 int 4 long 8 float 4 char 2 boolean 1
//		non prem-complex....
		
//		byte age=30;
//		int phone=123;
//		long no=123L;
//		float pi=3.14F;
//		char letter='@';
//		boolean isAdult=true;
//		
		
//		non premeptive...........
		
//		String name="khusu";
//		System.out.println(name.length());
//		
		
//		concatenate...
//		String name1="aman";
//		String name2="akku";
//		String name3=name1+name2;
//		String name4=name1+"and"+name2;
//		System.out.println(name4);
//		System.out.println(name1.charAt(1));
//		System.out.println(name1.length());
//		String n=name1.replace('a', 'z');
//		System.out.println(n);
//		string are not chane in java immutable
//		substring
//		String name="aman and akku";
//		System.out.println(name.substring(0,3));
//		arrays.....
//		int age=30;
//		int phy=90;
//		int che=89;
//		int eng=23;
//		int []mark=new int[3];
//		mark[0]=90;
//		mark[1]=89;
//		mark[2]=23;
//		System.out.println(mark[0]);
//		System.out.println(mark.length);
//		
//		sort.............
//		System.out.println(mark[0]);
//		Arrays.sort(mark);
//		System.out.println(mark[0]);
		
//		intilization..................
		//int []mark=new int[3];
		//boolean []mark=new boolean[3];
//		mark[0]=90;
//		mark[1]=89;
//		mark[2]=23;
		//System.out.println(mark[0]);
		
		
//		2d array...............
		
//		int[] marks= {97,98,95};
//		int[][] finalMarks= {{97,98,95},{95,95,98}};
//		System.out.println(finalMarks[0][0]);
		
//		casting--implicit and explicit..
		
//		double price=100.00;
//		double finalPrice=price+18;
//		System.out.println(finalPrice);
//		this is implicit casting..in which a small alue to be covert or add into large value
		
//		now explicit casting....
//		int p=100;
//		int fp=p+(int)18.99;
//		System.out.println(fp);
		
//		constants.........
//		int age=30;
//		age=31;
//		age=32;
//		
//		final float pi=3.14F;
		
		
		
//		operator.........
//		int a=1;
//		int b=2;
//		int c=a+b;
//		System.out.print(c);
//		
//		int num=1;
//		num++;
//		System.out.println(num);
//		
//		math class.........
//		System.out.println(Math.max(5, 6));
//		System.out.println(Math.min(5, 6));
//		System.out.println((int)(Math.random()*100));
//		

//		input in java
	//	Scanner sc=new Scanner(System.in);
//		System.out.println("input your age1:");
		//System.out.println("input your age2:");
//		int age1=sc.nextInt();
		//float age2=sc.nextFloat();
		//System.out.println(age2);
//		System.out.println(age1);
		
		
//		input string......
//		Scanner sc=new Scanner(System.in);
//		System.out.println("input your name: ");
//		//String name=sc.next();
//		String name=sc.nextLine();
//		System.out.println(name);
		
		
//		comparasion opeartor.....
		//== != 
//		boolean isSunUp=true;
//		if(isSunUp==true)
//			System.out.println("day");
//		else
//			System.out.println("night");
		
		
//		int age=30;
//		if(age>18)
//			System.out.println("can vote");
//		else
//			System.out.println("can't vote");
//			
		
//		logical oprator...........
//		int a=30;
//		int b=40;
//		if(a<50 && b<50)
//			System.out.println("both less than 50");
		
//		if(a<50 || b<20)
//			System.out.println("atleast one less than 50");
//		
		
	
		//boolean isAdult=true;
	//	if(isAdult == true)
//		if(!isAdult)
//			System.out.println("is adult");
//		else
//			System.out.println("not an adult");
//		
//		Scanner sc=new Scanner(System.in);
//		int cash=sc.nextInt();
//		if(cash<10) {
//			System.out.println("cannot buy anything..");
//			System.out.println("get more cash");
//		}
//		else if(cash>10&&cash<50)
//		{
//			System.out.println("can get 1thing");
//		}
//		else {
//			System.out.println("get both things..");
//		}
//			
		
		
//		switch case.......
//		int day=1;
//		switch(day) {
//		case 1:
//			System.out.println("monday");
//		case 2:
//			System.out.println("tuesday");
//			default:
//				System.out.println("wed-sun");
//		}
		
		
		
//		loops..........
//		for(int i=1;i<=100;i++)
//		{
//			System.out.println(i);
//		}
//		
//		...........while....
//		int j=100;
//		while(j>=1)
//		{
//			System.out.println(j);
//			j--;
//		}
//	...........do while
//		int k=100;
//		do {
//			System.out.println(k);
//			k--;
//		}while(k>=1);
//		
//		
		
		
//		Scanner sc=new Scanner(System.in);
//		int number=0;
//			do {
//				System.out.println("input a number:");
//				 number=sc.nextInt();
//				System.out.print("here ur number");
//				System.out.println(number);
//			}while(number>=0);
//		System.out.println("the end");
//
//		
		
//		recrusion......
//		public class Area{
//			private int l,b;
//			Area(int l,int b)
//			{
//				this.l=l;
//				this.b=b;
//			}
//			Area()
//			{
//				
//			}
//			public void calculate()
//			{
//				int area;
//				area=l*b;
//				System.out.println("area");
//			}
//
//		}
		


//public class Main{
//	static void myMethod(){
//		System.out.println("i just got executed");
//		
//	}
//	public static void main(String[] args)
//	{
//		myMethod();
//	}
//}


//parameter and arguments..
//public class Main{
//	static void myMethod(String fname)
//	{
//		System.out.println(fname+"Refsnes");
//	}
//	
//	public static void main(String[] args)
//	{
//		myMethod("liam");
//		myMethod("anja");
//	}
//}


//public class Main{
//	static int myMethod(int x)
//	{
//		return 5+x;
//	}
//
//public static void main(String[] args)
//{
//	System.out.println(myMethod(3));
//}
//}

//.equals tel content of string -->oif cond true then oup is also true
//== tell location if string same then op is false or not true

//public class Main{
//	static int myMethod(int x,int y)
//	{
//		return x+y;
//	}
//	
//	public static void main(String[] args)
//	{
//		System.out.println(myMethod(5,3));
//	}
//}

//for each loop
//public class Main{
//	public static void main(String[] args) {
//int a[]= {1,2,3};
//Arrays.sort(a);
//for(int i:a)
//	System.out.println(" "+i);
//}
//}


//representation of linklist..
//class LinkedList{
//	Node head;
//	class Node{
//		int data;
//		Node next;
//		Node(int d)
//		{
//			data=d;
//			next=null;
//		}
//	}
//}




//............................
//package com.apnacollege;
//import java.util.Scanner;
//public class Main{
//	public static void printJava() {
//		System.out.println("hello java");
//	}
//	public static void printName(String name)
//	{
//		System.out.println(name);
//	}
//	public static void printSum(int a, int b)
//	{
//		int sum=a+b;
//		System.out.println(sum);
//	}
	//public static void main(String[] args)
	{
        //		int i=0;
        //		while(true)
        //		{
        //			if(i==3)
        //			{
        //				i+=1;
        //				continue;
        //			}
        //			System.out.println(i);
        //			i=i+1;
        //			if(i>5)
        //			{
        //				break;
        //			}
        //			
        //		}
                
                
                
        //		..........eception handling.....try...catch.....
        //		int[]marks= {97,98,95};
        //		try {
        //			System.out.println(marks[5]);
        //		}catch(Exception exception)
        //		{
        //			
        //		}
        //		System.out.println("name is end");
                
        //		methods...........*********functions*****
        //		printJava();
        //		printJava();
        //		printJava();
                
        //		.........STRING FN CALLL********
                
                //printName("aman");
                //
                
                //printSum(1,6);
                
                //miniproject******
        //		Scanner sc=new Scanner(System.in);
        //		int myNumber=(int)(Math.random()*100);
        //		int userNumber=sc.nextInt();
        //		do {
        //			System.out.println("guess my number:");
        //			
        //			if(userNumber==myNumber)
        //			{
        //				System.out.println("correct number");
        //			}
        //			else if(userNumber>myNumber)
        //			{
        //				System.out.println("NO IS TOO LARGE");
        //			}
        //			else {
        //				System.out.println("no is too smal....");
        //			}
        //		}while(userNumber>=0);
        //		System.out.println("my number was");
        //		System.out.println("myNumber");
        //		
        //		
        //	}
        //}
                
                
                
                
                
                
                
                ///oopss...........
        
        
        //...........
        //	}
        //
        //}
        
        
                
                
                
                
                //parameterized  constructor......
                class Student{
                    String name;
                    int age;
        
                    public void printInfo()
                    {
                        System.out.println(this.name);
                        System.out.println(this.age);
                    }
        
                    Student(String name, int age)
                    {
                        this.name=name;
                        this.age=age;
                    }
                }
        
        
                public class Main {
                    public static void main(String args[])
                    {
                        Student s1=new Student("aman",24);
                        s1.printInfo();
        
        
                    }
                    
                }
        
                
                
                
                ///oops
                
                //object--all entity and the instruction are performed is----class
                