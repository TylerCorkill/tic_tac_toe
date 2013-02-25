#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string one = " ",
		   two = " ",
		   tri = " ", 
		   fur = " ",
		   fiv = " ",
		   six = " ",
		   sev = " ",
		   eit = " ",
		   nin = " ";
	for (int total = 0; total <= 9; total++)
	{
		cout << "\n _________________       __"<<"_"<<"_____"<<"_"<<"_____"<<"_"<<"__ "
			 << "\n|     |     |     |     |  "<<" "<<"  |  "<<" "<<"  |  "<<" "<<"  |"
			 << "\n|  1  |  2  |  3  | --> |  "<<one<<"  |  "<<two<<"  |  "<<tri<<"  |"
			 << "\n|_____|_____|_____|     |__"<<"_"<<"__|__"<<"_"<<"__|__"<<"_"<<"__|"
			 << "\n|     |     |     | --> |  "<<" "<<"  |  "<<" "<<"  |  "<<" "<<"  |"
			 << "\n|  4  |  5  |  6  |     |  "<<fur<<"  |  "<<fiv<<"  |  "<<six<<"  |"
			 << "\n|_____|_____|_____| --> |__"<<"_"<<"__|__"<<"_"<<"__|__"<<"_"<<"__|"
			 << "\n|     |     |     |     |  "<<" "<<"  |  "<<" "<<"  |  "<<" "<<"  |"
			 << "\n|  7  |  8  |  9  | --> |  "<<sev<<"  |  "<<eit<<"  |  "<<nin<<"  |"
			 << "\n|_____|_____|_____|     |__"<<"_"<<"__|__"<<"_"<<"__|__"<<"_"<<"__|"
			 << "\n                           "<<" "<<"     ";
		if ((((one == fiv) && (fiv == nin))
		||   ((two == fiv) && (fiv == eit))
		||   ((tri == fiv) && (fiv == sev))
		||   ((fur == fiv) && (fiv == six)))
			&&	(fiv != " "))
		{
			cout << "\n\t\t\t    Winner: "
				 << fiv
				 << endl;
			main();
		}
		else if ((((one == fur) && (fur == sev))
			 ||   ((one == two) && (two == tri)))
				&& (one != " "))
		{
			cout << "\n\t\t\t    Winner: "
				 << one
				 << endl;
			main();
		}
		else if ((((tri == six) && (six == nin))
			 ||   ((sev == eit) && (eit == nin)))
				&& (nin != " "))
		{
			cout << "\n\t\t\t    Winner: "
				 << nin
				 << endl;
			main();
		}
		else if (total == 9)
		{
			cout << "\n\t\t\t    Cats Game"
				 << endl;
			main();
		}
		if (total % 2 == 0)
		{
			string box;
			cin >> box;
			if (box == "1" && one == " ")
			{
				one = "X";
			}
			else if (box == "2" && two == " ")
			{
				two = "X";
			}
			else if (box == "3" && tri == " ")
			{
				tri = "X";
			}
			else if (box == "4" && fur == " ")
			{
				fur = "X";
			}
			else if (box == "5" && fiv == " ")
			{
				fiv = "X";
			}
			else if (box == "6" && six == " ")
			{
				six = "X";
			}
			else if (box == "7" && sev == " ")
			{
				sev = "X";
			}
			else if (box == "8" && eit == " ")
			{
				eit = "X";
			}
			else if (box == "9" && nin == " ")
			{
				nin = "X";
			}
			else
			{
				cout << "\n\t\t\t    Unavailable"
					 << endl;
				total -= 1;
			}
		}
		else
		{
			if ((nin == " ") && (((fiv == one) && (fiv == "O"))
							 ||  ((six == tri) && (six == "O"))
							 ||  ((eit == sev) && (eit == "O"))))
			{
				nin = "O";
			}
			else if ((sev == " ") && (((fiv == tri) && (fiv == "O"))
								  ||  ((fur == one) && (fur == "O"))
								  ||  ((eit == nin) && (eit == "O"))))
			{
				sev = "O";
			}
			else if ((tri == " ") && (((fiv == sev) && (fiv == "O"))
								  ||  ((two == one) && (two == "O"))
								  ||  ((six == nin) && (six == "O"))))
			{
				tri = "O";
			}
			else if ((one == " ") && (((fiv == nin) && (fiv == "O"))
								  ||  ((two == tri) && (two == "O"))
								  ||  ((fur == sev) && (fur == "O"))))
			{
				one = "O";
			}
			else if ((eit == " ") && (((fiv == two) && (fiv == "O"))
								  ||  ((sev == nin) && (sev == "O"))))
			{
				eit = "O";
			}
			else if ((six == " ") && (((fiv == fur) && (fiv == "O"))
								  ||  ((tri == nin) && (tri == "O"))))
			{
				six = "O";
			}
			else if ((fur == " ") && (((fiv == six) && (fiv == "O"))
								  ||  ((one == sev) && (one == "O"))))
			{
				fur = "O";
			}
			else if ((two == " ") && (((fiv == eit) && (fiv == "O"))
								  ||  ((one == tri) && (one == "O"))))
			{
				two = "O";
			}
			else if ((nin == " ") && (((fiv == one) && (fiv == "X"))
								  ||  ((six == tri) && (six == "X"))
								  ||  ((eit == sev) && (eit == "X"))))
			{
				nin = "O";
			}
			else if ((sev == " ") && (((fiv == tri) && (fiv == "X"))
								  ||  ((fur == one) && (fur == "X"))
								  ||  ((eit == nin) && (eit == "X"))))
			{
				sev = "O";
			}
			else if ((tri == " ") && (((fiv == sev) && (fiv == "X"))
								  ||  ((two == one) && (two == "X"))
								  ||  ((six == nin) && (six == "X"))))
			{
				tri = "O";
			}
			else if ((one == " ") && (((fiv == nin) && (fiv == "X"))
								  ||  ((two == tri) && (two == "X"))
								  ||  ((fur == sev) && (fur == "X"))))
			{
				one = "O";
			}
			else if ((eit == " ") && (((fiv == two) && (fiv == "X"))
								  ||  ((sev == nin) && (sev == "X"))))
			{
				eit = "O";
			}
			else if ((six == " ") && (((fiv == fur) && (fiv == "X"))
								  ||  ((tri == nin) && (tri == "X"))))
			{
				six = "O";
			}
			else if ((fur == " ") && (((fiv == six) && (fiv == "X"))
								  ||  ((one == sev) && (one == "X"))))
			{
				fur = "O";
			}
			else if ((two == " ") && (((fiv == eit) && (fiv == "X"))
								  ||  ((one == tri) && (one == "X"))))
			{
				two = "O";
			}
			else
			{
				if (fiv == " ")	fiv = "O";
				else if (one == "X")
				{
					if (nin == " ")
					{
						nin = "O";
					}
					else if (nin == "X")
					{
						if ((two == " ") && (eit == " ")) two = "O";
						else if ((fur == " ") && (six == " ")) fur = "O";
					}
					else if (fiv == "X")
					{
						if ((six == " ") && (tri == " ")) tri = "O";
						else if ((eit == " ") && (sev == " ")) sev = "O";
					}
					else if ((six == "X") && (tri == " "))
					{
						tri = "O";
					}
					else if ((eit == "X") && (sev == " "))
					{
						sev = "O";
					}
				}
				else if (tri == "X")
				{
					if (sev == " ")
					{
						sev = "O";
					}
					else if (sev == "X")
					{
						if ((two == " ") && (eit == " ")) eit = "O";
						else if ((fur == " ") && (six == " ")) fur = "O";
					}
					else if (fiv == "X")
					{
						if ((fur == " ") && (one == " ")) one = "O";
						else if ((eit == " ") && (nin == " ")) nin = "O";
					}
					else if ((fur == "X") && (one == " "))
					{
						one = "O";
					}
					else if ((eit == "X") && (nin == " "))
					{
						nin = "O";
					}
				}
				else if (nin == "X")
				{
					if (one == " ")
					{
						one = "O";
					}
					else if (one == "X")
					{
						if ((fur == " ") && (sev == " ")) sev = "O";
						else if ((two == " ") && (tri == " ")) tri = "O";
					}
					else if (fiv == "X")
					{
						if ((two == " ") && (tri == " ")) tri = "O";
						else if ((fur == " ") && (sev == " ")) sev = "O";
					}
					else if ((two == "X") && (tri == " "))
					{
						tri = "O";
					}
					else if ((fur == "X") && (sev == " "))
					{
						sev = "O";
					}
				}
				else if (sev == "X")
				{
					if (tri == " ")
					{
						tri = "O";
					}
					else if (tri == "X")
					{
						if ((six == " ") && (nin == " ")) nin = "O";
						else if ((two == " ") && (one == " ")) one = "O";
					}
					else if (fiv == "X")
					{
						if ((two == " ") && (one == " ")) one = "O";
						else if ((six == " ") && (nin == " ")) nin = "O";
					}
					else if ((two == "X") && (one == " "))
					{
						one = "O";
					}
					else if ((six == "X") && (nin == " "))
					{
						nin = "O";
					}
				}
				else if ((one == " ") 
					 ||  (tri == " ")
					 ||  (sev == " ")
					 ||  (nin == " "))
				{
					bool corner = true;
					while (corner)
					{
						int num = rand() % 10;
						if (num % 2 == 1)
						{
							if ((num == 1) && (one == " "))
							{
								one = "O";
								corner = false;
							}
							else if ((num == 3) && (tri == " "))
							{
								tri = "O";
								corner = false;
							}
							else if ((num == 7) && (sev == " "))
							{
								sev = "O";
								corner = false;
							}
							else if ((num == 9) && (nin == " "))
							{
								nin = "O";
								corner = false;
							}
						}
					}
				}
				else
				{
					bool side = true;
					while (side)
					{
						int num = rand() % 10;
						if (num % 2 == 0)
						{
							if ((num == 2) && (two == " "))
							{
								two = "O";
								side = false;
							}
							else if ((num == 4) && (fur == " "))
							{
								fur = "O";
								side = false;
							}
							else if ((num == 6) && (six == " "))
							{
								six = "O";
								side = false;
							}
							else if ((num == 8) && (eit == " "))
							{
								eit = "O";
								side = false;
							}
						}
					}
				}
			}
		}
	}
}