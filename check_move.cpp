
#include<list>
#include<iostream>
#include<conio.h>          
struct position
{
	int i =-1;
	int j =-1;
	
};

class check_move
{
	int board[8][8];
	int move_counter = 0;
	public :
	static check_move& getInstance()
	{
		static check_move Instance;
		return Instance;
	}
	check_move()
	{
		//setting up the board
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				if (i % 2 == 0)
				{
					if (j % 2 == 0) board[i][j] = 5;
					else
					{
						if (i == 0 || i == 2) board[i][j] = 1;
						if (i == 4) board[i][j] = 0;
						if (i == 6) board[i][j] = 2;
					}
				}
				else
				{
					if (j % 2 != 0) board[i][j] = 5;
					else
					{
						if (i == 1) board[i][j] = 1;
						if (i == 3) board[i][j] = 0;
						if (i == 5 || i == 7) board[i][j] = 2;
					}
				}
				
			}
		}
	}
	bool check_set_up(int new_board[][8])
	{
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				if (board[i][j] != new_board[i][j]) return false;
			}
		}
		return true;
	}
	bool check_white_fields(int new_board[][8])
	{
		int counter = 0;
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				if (new_board[i][j] == 5) counter++;
			}
		}
		if (counter == 32) return true;
		else return false;
	}
	bool delete_counter(int new_board[][8],position old_p,position new_p,int deleted_color) // move with deleted counter
	{
		if (board[new_p.i][new_p.j] != 0) return false; // new field must be empty

		if ((old_p.i > new_p.i) && (old_p.j < new_p.i)) // move from bottom left field
		{
			if (board[new_p.i + 1][new_p.j - 1] != deleted_color) return false; // check deleted counter old position
			if (new_board[new_p.i + 1][new_p.j - 1] != 0) return false; // counter must be deleted from board
			if (new_p.i + 2 != old_p.i || new_p.i - 2 != old_p.i) return false; // move must start from right field
		}
		if ((old_p.i < new_p.i) && (old_p.j < new_p.i)) // move from top left field
		{
			if (board[new_p.i - 1][new_p.j - 1] != deleted_color) return false; // check old deleted counter position
			if (new_board[new_p.i - 1][new_p.j - 1] != 0) return false; // counter must be deleted from board
			if (new_p.i - 2 != old_p.i || new_p.i - 2 != old_p.i) return false; // move must start from right field
		}
		if ((old_p.i < new_p.i) && (old_p.j > new_p.i)) // move from top right field
		{
			if (board[new_p.i - 1][new_p.j + 1] != deleted_color) return false; // check old deleted counter position
			if (new_board[new_p.i - 1][new_p.j + 1] != 0) return false; // counter must be deleted from board
			if (new_p.i - 2 != old_p.i || new_p.i + 2 != old_p.i) return false; // move must start from right field
		}
		if ((old_p.i > new_p.i) && (old_p.j > new_p.i)) // move from bottom right field
		{
			if (board[new_p.i + 1][new_p.j + 1] != deleted_color) return false; // check old deleted counter position
			if (new_board[new_p.i + 1][new_p.j + 1] != 0) return false; // counter must be deleted from board
			if (new_p.i + 2 != old_p.i || new_p.i + 2 != old_p.i) return false; // move must start from right field
		}
		return true;

	}
	bool check(int new_board[][8])
	{
		if (!check_white_fields(new_board)) return false;
		if (move_counter % 2 == 0) //white player turn
		{
			position old_p;
			position new_p;
			position deleted_p;
			int change_counter = 0;

			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					if (board[i][j] == 1)
					{
						if (new_board[i][j] != 1) //old counter position
						{
							old_p.i = i;
							old_p.j = j;
							change_counter++;
						}
					}
					if (new_board[i][j] == 1)
					{
						if (board[i][j] != 1) // new counter position
						{
							new_p.i = i;
							new_p.j = j;
							change_counter++;
						}
					}
					if (new_board[i][j] == 2)
					{
						if (board[i][j] != 2) return false; // black cant have new position when is white move
					}
					if (board[i][j] == 2)
					{
						if (new_board[i][j] == 0) // deleted counter position
						{
							deleted_p.i = i;
							deleted_p.j = j;
						}
					}
				}

			}
			if (change_counter != 2) return false; // we can have only one new, and only one old position
			if (deleted_p.i == -1) // move without deleted counter
			{
				if (board[new_p.i][new_p.j] != 0) return false; // new field must be empty
				if (new_p.j != old_p.j + 1) return false; // move must be forward
				if (!((new_p.i != old_p.i + 1) || (new_p.i != old_p.i - 1))) return false; // move must be diagonal
			}
			if(!delete_counter(new_board, old_p, new_p, 2)) return false; // move with delete black counter
			
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					board[i][j] = new_board[i][j];
				}
			}
			return true;
		}


	}
	




};



using namespace std;
int main() {
	
	check_move* c = new check_move();
	int board[8][8];
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (i % 2 == 0)
			{
				if (j % 2 == 0) board[i][j] = 5;
				else
				{
					if (i == 0 || i == 2) board[i][j] = 1;
					if (i == 4) board[i][j] = 0;
					if (i == 6) board[i][j] = 2;
				}
			}
			else
			{
				if (j % 2 != 0) board[i][j] = 5;
				else
				{
					if (i == 1) board[i][j] = 1;
					if (i == 3) board[i][j] = 0;
					if (i == 5 || i == 7) board[i][j] = 2;
				}
			}

		}
	}
	if (c->check_set_up(board)) cout << "poprawna";
	board[2][1] = 0;
	board[3][2] = 1;
	cout << c->check(board);
	_getch();
	delete c;
	return(0);
}