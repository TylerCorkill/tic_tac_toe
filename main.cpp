#include <iostream>
#include <string>

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
		cout << "\n _________________       __"<<"_"<<"_____"<<"_"<<"_____"<<"_"<<"__           "
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
			if ((nin == " ") && (((fiv == one) && (fiv != " "))
							 ||  ((six == tri) && (six != " "))
							 ||  ((eit == sev) && (eit != " "))))
			{
				nin = "O";
			}
			else if ((sev == " ") && (((fiv == tri) && (fiv != " "))
								  ||  ((fur == one) && (fur != " "))
								  ||  ((eit == nin) && (eit != " "))))
			{
				sev = "O";
			}
			else if ((tri == " ") && (((fiv == sev) && (fiv != " "))
								  ||  ((two == one) && (two != " "))
								  ||  ((six == nin) && (six != " "))))
			{
				tri = "O";
			}
			else if ((one == " ") && (((fiv == nin) && (fiv != " "))
								  ||  ((two == tri) && (two != " "))
								  ||  ((fur == sev) && (fur != " "))))
			{
				one = "O";
			}
			else if ((eit == " ") && (((fiv == two) && (fiv != " "))
								  ||  ((sev == nin) && (sev != " "))))
			{
				eit = "O";
			}
			//else if ((fiv == two) && (eit == " "))	eit = "O";
			else if ((six == " ") && (((fiv == fur) && (fiv != " "))
								  ||  ((tri == nin) && (tri != " "))))
			{
				six = "O";
			}
			//else if ((fiv == fur) && (six == " "))	six = "O";
			else if ((fur == " ") && (((fiv == six) && (fiv != " "))
								  ||  ((one == sev) && (one != " "))))
			{
				fur = "O";
			}
			//else if ((fiv == six) && (fur == " "))	fur = "O";
			else if ((two == " ") && (((fiv == eit) && (fiv != " "))
								  ||  ((one == tri) && (one != " "))))
			{
				two = "O";
			}
			//else if ((fiv == eit) && (two == " "))	two = "O";
			else
			{
				if (one == " ") 		one = "O";
				else if (two == " ")	two = "O";
				else if (tri == " ")	tri = "O";
				else if (fur == " ")	fur = "O";
				else if (fiv == " ")	fiv = "O";
				else if (six == " ")	six = "O";
				else if (sev == " ")	sev = "O";
				else if (eit == " ")	eit = "O";
				else if (nin == " ")	nin = "O";
			}
		}
	}
}