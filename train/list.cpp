#include <iostream>
#include <list>

int	main()
{

	std::list<int> lt;

	lt.push_front(4);
	lt.push_front(5);
	lt.push_front(8);

	std::list<int>::const_iterator bt;
	std::list<int>::const_iterator bt_end = lt.end();
	lt.sort();
	for (bt = lt.begin(); bt != bt_end; bt++)
	{
		/* code */
		std::cout << *bt << std::endl;
	}
	
}
