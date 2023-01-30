import java.util.*;
/*
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Iterator;*/
//import Ticket.Client;

public class Main {

	
	public static void main(String[] args)
	{
		/*
		ArrayList b=new ArrayList();
		library r=new library();
		book s=new book();
		s.adding();
		b.add(s);
		r.adding();
		b.add(r);
		s.adding();
		b.add(s);
		r.adding();
		b.add(r);
		int k=0;   // количество объектов класса Sprint
		String gc;
		Iterator ik=b.iterator();
		while(ik.hasNext())    // пока есть следующий элемент
             {
			Object el=ik.next();
			gc=el.getClass().getSimpleName();
			if(gc.equals("book"))
				k++;
             }
	       System.out.println(k);  // k=2
*/
		
		/*
		ArrayList a = new ArrayList<book>();
	      a.add(new book("First", 3));
	      a.add(new book("Second", 1));
	      a.add(new book("Thrist", 2));
	      Collections.sort(a);    // сортировка по  int compareTo(book p)
	      book f=new book();

	      for (int i = 0; i < a.size(); i++) 
	     {
	      f=(book)a.get(i);
	      System.out.println(f.GetId());
	    }
*/
	      ArrayList<Integer> list = new ArrayList<Integer>();
	      Collections.addAll(list, 11, 2, 23, 5, 15, 4, 2, 4);

	      Collections.sort(list);  // 2, 2, 4, 4, 5, 11, 15, 23

	      int index = Collections.binarySearch(list, 5);    // 4
	      System.out.println(index);

		
		/*
		ArrayList b=new ArrayList();
		library r=new library();
		book s=new book();
		s.adding();
		b.add(s);
		r.adding();
		b.add(r);
		s.adding();
		b.add(s);
		r.adding();
		b.add(r);
		for(Object o : ArrayList)
			*/
			
		//book zxc = new book();
		//Ticket client1 = new Ticket();
		//Ticket zxcv = new Ticket();
		//zxc.title = "123";
		//zxc.adding_book();
		
		//Ticket.Client [] client1 = new Ticket.Client[10];
		
		//Ticket.Client client1 = new Ticket.Client();
		/*
		Ticket ticket1 = new Ticket(2,"2","3",3);
		
		//Ticket.Client client1 = new Ticket.Client();
		
		book [] books = new book[10];
		for (int i = 0; i < 10; i++)
		{
			books[i]= new book();
		}
		
		books[1].adding_book();
		books[1].info_book();
		
		Ticket.Client [] client1 = new Ticket.Client[10];
		for (int i = 0; i < 10; i++)
		{
			client1[i]= new Ticket.Client();
		}
		
		
		ticket1.add_ticket(3);
		ticket1.give_book(3);
		ticket1.info_client(3);
		
		*/
	}
}