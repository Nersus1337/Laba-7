public class journal extends library{

	
	
	
	//journal zxc = new journal();
	//zxc.title = "123";
	//zxc.adding_journal();

	public void adding_journal()
	{
		System.out.print("\nFunctciya dobavleniya zhurnala.\n");
		adding();
	}
	void info_journal()
	{
		System.out.print("\n...Zhurnal...\n");
		info();
	}
	void deleted_journal()
	{
		deleted();
		System.out.print("\nZhurnal bil udalen\n");
	}
	void edit_journal()
	{
		System.out.print("\nFunctciya redaktirovaniya zhurnala.");
		info_journal();
		edit();
	}	
}