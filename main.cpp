#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
using namespace std;
char element[3][3];
int r=0, c=0;
int input = 0;
int step = 1;
int alt = 0;
int alto = 1;
int alti = 0;
class tictactoe
{
private:
	//char element[3][3];
	int i, j,io;
public:
	void get_defaultvalues()
	{
		element[2][0] = '7';
		element[2][1] = '8';
		element[2][2] = '9';
		element[1][0] = '4';
		element[1][1] = '5';
		element[1][2] = '6';
		element[0][0] = '1';
		element[0][1] = '2';
		element[0][2] = '3';
	}
	void show_table()
	{
		for (i = 0; i < 3; i++)
		{
			cout << "\n" << element[i][0] << "|" << element[i][1] << "|" << element[i][2];
			if (i < 2)
			{
				cout << "\n-----";
			}
		}
	}
	void set_cellvalue(int input)
	{
		if (input == 1)
		{
			r = 0;
			c = 0;
		}
		else if (input == 2)
		{
			r = 0;
			c = 1;
		}
		else if (input == 3)
		{
			r = 0;
			c = 2;
		}
		else if (input == 4)
		{
			r = 1;
			c = 0;
		}
		else if (input == 5)
		{
			r = 1;
			c = 1;
		}
		else if (input == 6)
		{
			r = 1;
			c = 2;
		}
		else if (input == 7)
		{
			r = 2;
			c = 0;
		}
		else if (input == 8)
		{
			r = 2;
			c = 1;
		}
		else if (input == 9)
		{
			r = 2;
			c = 2;
		}
	}
	void get_cellvalue()
	{
		cout << "\nenter the cell number for your next move";
		cin >> input;
	}
	void validate_cellvalue(int r,int c)
	{

		if (element[r][c] = 0)
		{
			cout << "\ninvalid choice";
			get_cellvalue();
		}
	}
	void put_cellvalue(int r,int c)
	{
		element[r][c] = '0';
	}
	void strategy1(int input)
	{

		switch (step)
		{
		case 1:  //step 1
		{
				  element[2][2] = 'X';
				  step++;
		}
		case 2:  //step 2
		{
				  if (element[0][1] == '0')
				  {
					  element[0][2] = 'X';
					  step++;
					  alt = 1;
				  }
				  else if (element[0][2] == '0')
				  {
					  element[0][1] = 'X';
					  step++;
					  alt = 2;
				  }
				  else if (element[1][0] == '0')
				  {
					  element[2][0] = 'X';
					  step++;
					  alt = 3;
				  }
				  else if (element[1][1] == '0')
				  {
					  element[2][0] = 'X';
					  step++;
					  alt = 4;
				  }
				  else if (element[1][2] == '0')
				  {
					  element[2][0] = 'X';
					  step++;
					  alt = 5;
				  }
				  else if (element[2][0] == '0')
				  {
					  element[1][0] = 'X';
					  step++;
					  alt = 6;
				  }
				  else if (element[2][1] == '0')
				  {
					  element[0][2] = 'X';
					  step++;
					  alt = 7;
				  }
				  else
				  {
					  cout << "Warning! - At trick no.1, step 2 - function failed to assign value.";
				  }
		}
		case 3: //step 3
		{
					switch (alt)
					{
					case 1: // alt 1 - step 3 - trick 1
					{
								if (element[1][2] == '0')
								{
									element[2][0] = 'X';
									step++;
									alto = 1;
								}
								else if ((element[1][0] || element[1][1] || element[2][0] || element[2][1]) == '0')
								{
									element[1][2] = 'X'; // Machine Wins
									cout << "Machine Wins!";
								}
								else
								{
									cout << "Warning! - At trick no.1, step 3, alt 1 - function failed to assign value";
								}
					}
					case 2: // alt 2 - step 3 - trick 1
					{
								if (element[2][0] == '0')
								{
									element[1][1] = 'X';
									step++;
									alto = 2;
								}
								else if (element[1][0] == '0')
								{
									element[2][0] = 'X';
									step++;
									alto = 3;
								}
								else if (element[1][1] == '0')
								{
									element[2][0] = 'X';
									step++;
									alto = 4;
								}
								else if (element[1][2] == '0')
								{
									element[2][1] = 'X';
									step++;
									alto = 5;
								}
								else if (element[2][1] == '0')
								{
									element[1][0] = 'X';
									step++;
									alto = 6;
								}
								else
								{
									cout << "Warning! - At trick no 1, step 3, alt 2 - function failed to assign value";
								}
					}
					case 3: // alt 3 - step 3 - trick 1
					{
								if (element[2][1] == '0')
								{
									element[0][2] = 'X';
									step++;
									alto = 7;
								}
								else if ((element[0][1] || element[0][2] || element[1][1] || element[1][2]) == '0')
								{
									element[2][1] = 'X'; // Machine Wins
									cout << "Machine Wins!";
								}
								else
								{
									cout << "Warning! - At trick no 1, step 3, alt 3 - function failed to assign value";
								}
					}
					case 4: // alt 4 - step 3 - trick 1
					{
								if (element[2][1] == '0')
								{
									element[0][1] = 'X';
									step++;
									alto = 8;
								}
								else if ((element[0][1] || element[0][2] || element[1][0] || element[1][2]) == '0')
								{
									element[2][1] = 'X'; // Machine Wins
									cout << "Machine Wins!";
								}
								else
								{
									cout << "Warning! - At trick no 1, step 3, alt 4 - function failed to assign value";
								}
					}
					case 5: // alt 5 - step 3 - trick 1
					{
								if (element[2][1] == '0')
								{
									element[1][1] = 'X';
									step++;
									alto = 9;
								}
								else if ((element[0][1] || element[0][2] || element[1][0] || element[1][1]) == '0')
								{
									element[2][1] = 'X';// Machine Wins
									cout << "Machine Wins!";
								}
								else
								{
									cout << "Warning! - At trick no 1, step 3, alt 5 - function failed to assign value";
								}
					}
					case 6: // alt 5 - step 3 - trick 1
					{
								if (element[0][1] == '0')
								{
									element[0][3] = 'X';
									step++;
									alto = 10;
								}
								else if (element[0][2] == '0')
								{
									element[0][1] = 'X';
									step++;
									alto = 11;
								}
								else if (element[1][1] == '0')
								{
									element[0][2] = 'X';
									step++;
									alto = 12;
								}
								else if (element[1][2] == '0')
								{
									element[0][1] = 'X';
									step++;
									alto = 13;
								}
								else if (element[2][1] == '0')
								{
									element[1][2] = 'X';
									step++;
									alto = 14;
								}
								else
								{
									cout << "Warning! - At trick no 1, step 3, alt 6 - function failed to assign value";
								}
					}
					case 7: // alt 7 - step 3 - trick 1
					{
								if (element[1][2] == '0')
								{
									element[1][1] = 'X';
									step++;
									alto = 15;
								}
								else if ((element[0][1] || element[1][1] || element[1][0] || element[2][0]) == '0')
								{
									element[1][2] = 'X'; //Machine Wins
									cout << "Machine Wins!";
								}
								else
								{
									cout << "Warning! - At trick no 1, step 3, alt 7 - function failed to assign value";
								}
					}
					};
		}
		case 4:// Step 4
		{
				   switch (alto)
				   {
				   case 1: // alto 1 - step 4 - trick 1
				   {
							   if (element[2][1] == '0')
							   {
								   element[1][1] = 'X'; //Machine Wins
								   cout << "Machine Wins!";
							   }
							   else if (element[1][1] == '0')
							   {
								   element[2][1] = 'X';// Machine Wins
								   cout << "Machine Wins!";
							   }
							   else if (element[1][0] == '0')
							   {
								   element[1][1] = 'X';//Machine Wins
								   cout << "Machine Wins!";
							   }
							   else
							   {
								   cout << "Warning! - At trick no 1, step 4, alto 1 - function failed to assign value";
							   }
				   }
				   case 2: // alto 2 - step 4 - trick 1
				   {
							   if (element[1][0] == '0')
							   {
								   cout << "Human Wins!";
							   }
							   else if(element[2][1]=='0')
                               {
                                   element[1][0]='X';
                                   alti=1;
                                   step++;
                               }
                               else if(element[1][2]=='0')
                               {
                                   element[2][1]='X';
                                   cout<<" Machine Wins!";//Machine Wins
                               }
                               else
                                {
                                    cout<<"Warning! - At trick no 1, step 4, alto 2 - function failed to assign value";
                                }
				   }
				   case 3: // alto 3 - step 4 - trick 1
				   {
					           if(element[2][1]=='0')
                               {
                                   element[1][1]='X';
                                   alti=2;
                                   step++;
                               }
                               else if((element[1][1] || element[1][2]=='0'))
                               {
                                   element[2][1]='X';//Machine Wins
                                   cout<<"Machine Wins!";
                               }
                               else
                               {
                                   cout<<"Warning! - At trick no 1, step 4, alto 3 - function failed to assign value";
                               }

				   }
				   case 4:// alto 4 - step 4 - trick 1
                    {
                        if(element[2][1]=='0')
                        {
                            element[1][0]='X';
                            alti=3;
                            step++;
                        }
                        else if ((element[1][0] || element[1][2])=='0')
                        {
                            element[2][1]='X';// Machine Wins!
                            cout<<"Machine Wins!";
                        }
                        else
                        {
                            cout<<"Warning! - At trick no 1, step 4, alto 4 - function failed to assign value";
                        }
                    }
                   case 5://alto 5 - step 4 - trick 1
                    {
                        if(element[2][0]=='0')
                        {
                            element[1][1]='X';//Machine Wins
                            cout<<"Machine Wins!";
                        }
                        else if(element[1][1]=='0')
                        {
                            element[2][0]='X';//Machine Wins
                            cout<<"Machine Wins!";
                        }
                        else if(element[1][0]=='0')
                        {
                            element[1][1]='X';//Machine Wins
                            cout<<"Machine Wins!";
                        }
                        else
                        {
                            cout<"Warning! - At trick no 1, step 4, alto 5 - function failed to assign value";
                        }
                    }
                   case 6://alto 6 - step 4 - trick 1
                    {
                        if(element[2][0]=='0')
                        {
                            element[1][1]='X';
                            step++;
                            alti=4;
                        }
                        else if(element[1][1]=='0')
                        {
                            element[2][0]='X';
                            step++;
                            alti=5;
                        }
                        else if(element[1][2]=='0')
                        {
                            element[1][1]='X';
                            step++;
                            alti=6;
                        }
                        else
                        {
                            cout<<"Warning! - At trick no 1, step 4, alto 5 - function failed to assign value";
                        }
                    }
                   case 7://alto 7 - step 4 - trick 1
                    {
                        if(element[1][2]=='0')
                        {
                            element[1][1]='X';//Machine Wins
                            cout<<"Machine Wins!";
                        }
                        else if(element[1][1]=='0')
                        {
                            element[1][2]='X';//Machine Wins
                            cout<<"Machine Wins!";
                        }
                        else if(element[0][1]=='0')
                        {
                            element[1][2]='X';//Machine Wins
                            cout<<"Machine Wins!";
                        }
                        else
                        {
                            cout<<"Warning! - At trick no 1, step 4, alto 7 - function failed to assign value";
                        }
                    }
                   case 8://alto 8 - step 4 - trick 1
                    {
                        if(element[1][0]=='0')
                        {
                            element[1][2]='X';
                            alti=7;
                            step++;
                        }
                        else if(element[1][2]=='0')
                        {
                            element[1][0]='X';
                            alti=8;
                            step++;
                        }
                        else if(element[0][2]=='0')
                        {
                            element[1][2]='X';
                            alti=9;
                            step++;
                        }
                        else
                        {
                            cout<<"Warning! - At trick no 1, step 4, alto 8 - function failed to assign value";
                        }
                    }
                   case 9://alto 9 - step 4 - trick 1
                    {
                        if (element[0][2]=='0')
                        {
                            element[0][1]='X';
                            alti=10;
                            step++;
                        }
                        else if((element[0][1] || element[1][0])=='0')
                        {
                            element[0][2]='X';//Machine Wins
                            cout<<"Machine Wins!";
                        }
                        else
                        {
                            cout<<"Warning! - At trick no 1, step 4, alto 9 - function failed to assign value";
                        }
                    }
                   case 10://alto 10 - step 4 - trick 1
                    {
                        if(element[1][2]=='0')
                        {
                            element[1][1]='X';
                            alti=11;
                            step++;
                        }
                        else if((element[1][2] || element[2][1])=='0')
                        {
                            element[1][2]='X';//Machine Wins
                            cout<<"Machine Wins!";
                        }
                    }
                   case 11://alto 11 - step 4 - trick 1
                    {
                        if(element[1][1]=='0')
                        {
                            cout<<"Human Wins!";
                        }
                        else if(element[1][2]=='0')
                        {
                            element[1][1]='X';
                            alti=12;
                            step++;
                        }
                        else if(element[2][1]=='0')
                        {
                            element[1][1]='X';
                            alti=13;
                            step++;
                        }
                        else
                        {
                            cout<<"Warning! - At trick no 1, step 4, alto 11 - function failed to assign value";
                        }
                    }
                   case 12://alto 12 - step 4 - trick 1
                    {
                        if(element[1][2]=='0')
                        {
                            element[0][1]='X';
                            alti=14;
                            step++;
                        }
                        else if((element[0][1] || element[2][1])=='0')
                        {
                            element[1][2]='X';//Machine Wins
                            cout<<"Machine Wins!";
                        }
                        else
                        {
                            cout<<"Warning! - At trick no 1, step 4, alto 12 - function failed to assign value";
                        }
                    }
                   case 13://alto 13 - step 4 - trick 1
                    {
                        if(element[])
                    }
				   };
		}
		};
	}
};
void main()
{
	tictactoe game;
	
	game.get_defaultvalues();
	game.show_table();
	game.get_cellvalue();

        game.set_cellvalue(input);
	game.validate_cellvalue(r,c);
	game.put_cellvalue(r,c);
	system("cls");
	cout << input;
	cout << r << c;
	game.show_table();
	int a;
	cin >> a;
	getch;
}
