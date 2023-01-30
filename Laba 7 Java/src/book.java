public class book extends library implements Comparable<book> {

	//book zxc = new book();
	//Ticket.Client client1 = new Client();
	//Ticket zxcv = new Ticket();
	//zxc.title = "123";
	//zxc.adding_book();
	
	book(String title, int id)
	{
		this.title = title;
		this.id = id;
	}
	book()
	{
		
	}
	
	public int compareTo(book p) // перегрузка метода сравнения
	   {	       
		return this.id - p.id;
	      /* if(p.id > this.id)      
	           return -1; 
	       else
	           return 1;*/
	   }
	public int GetId()
	{
		return id;
	}
	
	public void adding()
	{
		System.out.print("\nFunctciya dobavleniya knigi.\n");
		super.adding();
	}
	void info_book()
	{
		System.out.print("\n...Kniga...\n");
		info();
	}
	void deleted_book()
	{
		deleted();
		System.out.print("\nKniga bila udalena\n");
	}
	void edit_book()
	{
		System.out.print("\nFunctciya redaktirovaniya knigi.");
		info_book();
		edit();
	}	
}