#include <iostream>
char table[9]={'1','2','3','4','5','6','7','8','9'};
bool draw=false;
char turn='X';
using namespace std;

void display_table();
void player_turn();
bool gameover();
int main() 
{
	
	cout<<"\t\"T I K   T A C   T O E   G A M E\""<<endl;
	cout<<"Player1 [X]"<<endl<<"Player2 [O]\n\n\n";
	
	
	
	
    display_table();
    while(gameover())
	{
	player_turn();
	display_table();
	gameover();
	}
	
	if (turn=='X'&&draw==false)
	cout<<"Player2 [O] Has Won The GAME...";
	else if (turn=='O'&&draw==false)
	cout<<"Player1 [X] Has Won The GAME...";
	else
	cout<<"GAME DRAW...";
	
	return 0;
}
void display_table()
{
	
	cout<<"\t\t     |     |     \n";
	cout<<"\t\t  "<<table[0]<<"  |  "<<table[1]<<"  |  "<<table[2]<<"  \n";
	cout<<"\t\t_____|_____|_____\n";
	cout<<"\t\t     |     |     \n";
	cout<<"\t\t  "<<table[3]<<"  |  "<<table[4]<<"  |  "<<table[5]<<"  \n";
	cout<<"\t\t_____|_____|_____\n";
	cout<<"\t\t     |     |     \n";
	cout<<"\t\t  "<<table[6]<<"  |  "<<table[7]<<"  |  "<<table[8]<<"  \n";
	cout<<"\t\t     |     |     \n";
	
	
}
void player_turn()
{
	int select,place;
	
	if (turn=='X'&&table[place]!='X'&&table[place]!='O')
	{
	cout<<"\n\tPlayer1 [X] turn: ";
	cin>>select;
	switch(select)
	{
		case 1:
			place=0;
			break;
		case 2:
			place=1;
			break;
		case 3:
			place=2;
			break;
		case 4:
			place=3;
			break;
		case 5:
			place=4;
			break;
		case 6:
			place=5;
			break;
		case 7:
			place=6;
			break;
		case 8:
			place=7;
			break;
		case 9:
			place=8;
			break;
		default:
		cout<<"INVLID OPTION";
		break;}
		table[place]='X';
		turn='O';	
		
	}
	else if (turn=='O'&&table[place]!='X'&&table[place]!='O')
	{cout<<"\n\tPlayer1 [O] turn: ";  
	cin>>select;
	switch(select)
	{
		case 1:
			place=0;
			break;
		case 2:
			place=1;
			break;
		case 3:
			place=2;
			break;
		case 4:
			place=3;
			break;
		case 5:
			place=4;
			break;
		case 6:
			place=5;
			break;
		case 7:
			place=6;
			break;
		case 8:
			place=7;
			break;
		case 9:
			place=8;
			break;
		default:
		cout<<"INVLID OPTION";
		break;}
		table[place]='O';
		turn='X';	
	}
	else
	{
		cout<<"You Have Entered Input In Already Filled Space...\n	Play Again...!!!";
		 void player_turn();
	}
	
}
bool gameover()
{
	//conditions for wining the game
	if (table[0]==table[1]&&table[0]==table[2] || table[3]==table[4]&&table[3]==table[5]
	 || table[6]==table[7]&&table[6]==table[8] || table[0]==table[3]&&table[0]==table[6]
	 || table[1]==table[4]&&table[1]==table[7] || table[2]==table[5]&&table[2]==table[8]
	 || table[0]==table[4]&&table[0]==table[8] || table[2]==table[4]&&table[2]==table[6])
	return false;
	// this will run till no one has won, or no one
	for (int i=0;i<9;i++)
	if	(table[i]!='X' && table[i]!='O')
	return true;
	//draw
	draw=true;
	return false;
	
	
	
	
	
	
	
	
	
}
