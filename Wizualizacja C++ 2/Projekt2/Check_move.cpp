
#include<list>
#include<iostream>
#include<conio.h>  
#include<list>
#include<vector>

struct position
{
	int i = -1;
	int j = -1;
};

class Check_move
{
private:
	const int EMPTY_SQUARE = 0;
	const int WHITE = 1;
	const int BLACK = 2;
	const int WHITE_KING = 3;
	const int BLACK_KING = 4;
	const int WHITE_SQUARE = 5;


	int board[8][8];
	int move_counter = 0;
	bool hit = false;
	bool isFirstMove = true;
	position multiHitLastCounterPosition;

	
	bool check_set_up(int new_board[][8])
	{
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				if (board[i][j] != new_board[i][j]) return false;
			}
		}
		isFirstMove = false;
		return true;
	}
	bool check_white_fields(int new_board[][8])
	{
		int counter = 0;
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				if (new_board[i][j] == WHITE_SQUARE) counter++;
			}
		}
		if (counter == 32) return true;
		else return false;
	}
	bool delete_counter(int new_board[][8], position old_p, position new_p, int deleted_color) // move with deleted counter
	{
		int king_color;
		if (deleted_color == WHITE) king_color = WHITE_KING;
		else king_color == BLACK_KING;

		if (board[old_p.i][old_p.j] == WHITE_KING || board[old_p.i][old_p.j] == BLACK_KING  ) //if counter is the king 
		{
			int how_far = 0;
			if (old_p.i < new_p.i) how_far = new_p.i - old_p.i;
			else how_far = old_p.i - new_p.i;
			int i = old_p.i;
			int j = old_p.j;
			while (how_far != 1)
			{
				if (old_p.i < new_p.i) i++;
				else i--;
				if (old_p.j < new_p.j) j++;
				else j--;
				if (how_far != 1)
				{
					if (new_board[i][j] != EMPTY_SQUARE)
					{
						return false;
					}
					how_far--;
				}

			}
		}
		else
		{
			if (board[new_p.i][new_p.j] != EMPTY_SQUARE)
			{
				return false; // new field must be empty
			}
			if ((old_p.i > new_p.i) && (old_p.j < new_p.j)) // move from bottom left field
			{
				if ((board[new_p.i + 1][new_p.j - 1] != deleted_color))
				{
					return false; // check deleted counter old position
				}
				if (new_board[new_p.i + 1][new_p.j - 1] != 0)
				{
					return false; // counter must be deleted from board
				}
				if (new_p.i + 2 != old_p.i || new_p.j - 2 != old_p.j)
				{
					return false; // move must start from right field
				}
			}
			if ((old_p.i < new_p.i) && (old_p.j < new_p.j)) // move from top left field
			{
				if ((board[new_p.i - 1][new_p.j - 1] != deleted_color))
				{
					return false; // check old deleted counter position
				}
				if (new_board[new_p.i - 1][new_p.j - 1] != 0)
				{
					return false; // counter must be deleted from board
				}
				if (new_p.i - 2 != old_p.i || new_p.j - 2 != old_p.j)
				{
					return false; // move must start from right field
				}
			}
			if ((old_p.i < new_p.i) && (old_p.j > new_p.j)) // move from top right field
			{
				if ((board[new_p.i - 1][new_p.j + 1] != deleted_color))
				{
					return false; // check old deleted counter position
				}
				if (new_board[new_p.i - 1][new_p.j + 1] != 0)
				{
					return false; // counter must be deleted from board
				}
				if (new_p.i - 2 != old_p.i || new_p.j + 2 != old_p.j)
				{
					return false; // move must start from right field
				}
			}
			if ((old_p.i > new_p.i) && (old_p.j > new_p.j)) // move from bottom right field
			{
				if ((board[new_p.i + 1][new_p.j + 1] != deleted_color))
				{
					return false; // check old deleted counter position
				}
				if (new_board[new_p.i + 1][new_p.j + 1] != 0)
				{
					return false; // counter must be deleted from board
				}
				if (new_p.i + 2 != old_p.i || new_p.j + 2 != old_p.j)
				{
					return false; // move must start from right field
				}
			}
			return true;

		}

	}
	bool have_to_hit(int new_board[][8], position counter_p, int player_color)
	{
		int enemy_color;
		int enemy_king_color;
		if (player_color == WHITE) { enemy_color = BLACK; enemy_king_color = BLACK_KING; }
		else
		{
			enemy_color = WHITE;
			enemy_king_color = WHITE_KING;
		}

		if ((counter_p.i + 2 < 8) && (counter_p.j + 2 < 8))
		{
			if ((new_board[counter_p.i + 1][counter_p.j + 1] == enemy_color) || (new_board[counter_p.i + 1][counter_p.j + 1] == enemy_king_color))
			{
				if (new_board[counter_p.i + 2][counter_p.j + 2] == EMPTY_SQUARE)
				{
					return true;
				}
			}
		}
		if ((counter_p.i - 2 > 0) && (counter_p.j - 2 > 0))
		{
			if ((new_board[counter_p.i - 1][counter_p.j - 1] == enemy_color ) || (new_board[counter_p.i - 1][counter_p.j - 1] == enemy_king_color))
			{
				if (new_board[counter_p.i + -2][counter_p.j - 2] == EMPTY_SQUARE)
				{
					return true;
				}
			}
		}
		if ((counter_p.i + 2 < 8) && (counter_p.j - 2 > 8))
		{
			if ((new_board[counter_p.i + 1][counter_p.j - 1] == enemy_color) || (new_board[counter_p.i + 1][counter_p.j - 1] == enemy_king_color ))
			{
				if (new_board[counter_p.i + 2][counter_p.j - 2] == EMPTY_SQUARE)
				{
					return true;
				}
			}
		}
		if ((counter_p.i - 2 > 0) && (counter_p.j + 2 < 8))
		{
			if ((new_board[counter_p.i - 1][counter_p.j + 1] == enemy_color ) || (new_board[counter_p.i - 1][counter_p.j + 1] == enemy_king_color))
			{
				if (new_board[counter_p.i - 2][counter_p.j + 2] == EMPTY_SQUARE)
				{
					return true;
				}
			}
		}
		return false;


	}
	bool white_turn(int new_board[][8])
	{

		position old_p;
		position new_p;
		position deleted_p;
		int change_counter = 0;

		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				if ((board[i][j] == WHITE) || (board[i][j] ==  WHITE_KING))	//if for found white counter
				{
					position n;
					n.i = i;
					n.j = j;
					bool isMultiHit;
					if (hit == true) isMultiHit = true;
					hit = have_to_hit(board, n, WHITE);
					if (new_board[i][j] != board[i][j]) //old counter position
					{
						old_p.i = i;
						old_p.j = j;
						change_counter++;
						if (isMultiHit) // if it is multi hit, you have to use the same counter 
						{
							if (old_p.i != multiHitLastCounterPosition.i)
							{
								return false;
							}
							if (old_p.j != multiHitLastCounterPosition.j)
							{
								return false;
							}
						}
					}


				}
				if ((new_board[i][j] == WHITE) || (new_board[i][j] ==  WHITE_KING))
				{
					if (board[i][j] != new_board[i][j]) // new counter position
					{
						new_p.i = i;
						new_p.j = j;
						change_counter++;
					}
				}
				if (new_board[i][j] == BLACK)
				{
					if (board[i][j] != BLACK)
					{
						return false; // black cant have new position when is white move
					}
				}

				if (new_board[i][j] == BLACK_KING)
				{
					if (board[i][j] != BLACK_KING)
					{
						return false; // black cant have new position when is white move
					}
				}




				if ((board[i][j] == BLACK) || (board[i][j] == BLACK_KING))
				{
					if (new_board[i][j] == EMPTY_SQUARE) // deleted counter position
					{
						deleted_p.i = i;
						deleted_p.j = j;
					}
				}
			}

		}
		if (change_counter != 2)
		{
			return false; // we can have only one new, and only one old positon
		}

		if (deleted_p.i == -1) // move without deleted counter
		{
			if (hit == true)
			{
				return false; // if player have to delete counter
			}
			if (board[new_p.i][new_p.j] != EMPTY_SQUARE)
			{
				return false; // new field must be empty
			}
			if (board[old_p.i][old_p.j] == WHITE) // counter is not a king
			{
				if (new_p.i != old_p.i + 1)
				{
					return false; // move must be forward
				}
				if (new_p.j - new_p.j != (1 || -1))
				{
					return false; // move must be diagonal
				}

			}
			else // counter is a king
			{
				int how_far = 0; // how long was move 
				if (new_p.i > old_p.i) how_far = new_p.i - old_p.i;
				else how_far = old_p.i - new_p.j;
				int i = old_p.i;
				int j = old_p.j;
				while (how_far != 0) //we have to check every one field between old and new position
				{
					if (old_p.i < new_p.i) i++;
					else i--;
					if (old_p.j < new_p.j) j++;
					else j--;
					if (board[i][j] != 0)
					{
						return false;
					}
					how_far--;
				}
			}
		}
		else {
			if (!delete_counter(new_board, old_p, new_p, 2))
			{
				return false; // move with delete black counter
			}
		}
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				board[i][j] = new_board[i][j];
			}
		}
		if (have_to_hit(new_board, new_p, WHITE))
		{

			hit = true;
			multiHitLastCounterPosition = new_p;
			return true;
		}
		else
		{
			if (new_p.i == 8) board[new_p.i][new_p.j] = WHITE_KING;
			hit = false;
			move_counter++;
			return true;
		}

	}
	bool black_turn(int new_board[][8])
	{
		position old_p;
		position new_p;
		position deleted_p;
		int change_counter = 0;

		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				if ((board[i][j] == BLACK) || (board[i][j] == BLACK_KING))
				{
					position n;
					n.i = i;
					n.j = j;
					bool isMultiHit;
					if (hit == true) isMultiHit = true;
					hit = have_to_hit(board, n, BLACK);
					if (new_board[i][j] != board[i][j]) //old counter position
					{
						old_p.i = i;
						old_p.j = j;
						change_counter++;
						if (isMultiHit) // if it is multi hit, you have to use the same counter 
						{
							if (old_p.i != multiHitLastCounterPosition.i)
							{
								return false;
							}
							if (old_p.j != multiHitLastCounterPosition.j)
							{
								return false;
							}
						}
					}
				}
				if ((new_board[i][j] == BLACK || new_board[i][j] == BLACK_KING))
				{
					if (board[i][j] != new_board[i][j]) // new counter position
					{
						new_p.i = i;
						new_p.j = j;
						change_counter++;
					}
				}
				if ((new_board[i][j] == WHITE) || (new_board[i][j] == WHITE_KING))
				{
					if (board[i][j] != new_board[i][j])
					{
						return false; // white cant have new position when is black move
					}
				}


				if (board[i][j] == WHITE)
				{
					if (new_board[i][j] == EMPTY_SQUARE) // deleted counter position
					{
						deleted_p.i = i;
						deleted_p.j = j;
					}
				}
			}

		}
		if (change_counter != 2)
		{
			return false; // we can have only one new, and only one old position
		}
		if (deleted_p.i == -1) // move without deleted counter
		{
			if (hit == true)
			{
				return false;
			}
			if (board[new_p.i][new_p.j] != EMPTY_SQUARE)
			{
				return false; // new field must be empty
			}
			if (board[old_p.i][old_p.j] == BLACK)
			{
				if (new_p.i != old_p.i - 1)
				{
					return false; // move must be forward
				}
				if (new_p.j - new_p.j != (1 || -1))
				{
					return false; // move must be diagonal
				}
			}
			else // counter is a king
			{
				int how_far = 0; // how long was move 
				if (new_p.i > old_p.i) how_far = new_p.i - old_p.i;
				else how_far = old_p.i - new_p.j;
				int i = old_p.i;
				int j = old_p.j;
				while (how_far != 0) //we have to check every one field between old and new position
				{
					if (old_p.i < new_p.i) i++;
					else i--;
					if (old_p.j < new_p.j) j++;
					else j--;
					if (board[i][j] != 0)
					{
						return false;
					}
					how_far--;
				}
			}
		}
		else
		{
			if (!delete_counter(new_board, old_p, new_p, WHITE))
			{
				return false; // move with delete white counter
			}
		}
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				board[i][j] = new_board[i][j];
			}
		}
		if (have_to_hit(new_board, new_p, BLACK))
		{
			hit = true;
			multiHitLastCounterPosition = new_p;
			return true;
		}
		else
		{
			if (new_p.i == 0) board[new_p.i][new_p.j] = BLACK_KING;
			hit = false;
			move_counter++;
			return true;
		}
	}

	public:


		Check_move()
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

	bool check(int new_board[][8])
	{
		if (isFirstMove == true) return check_set_up(new_board);
		if (!check_white_fields(new_board)) return false;
		if (move_counter % 2 == 0) //white player turn
		{
			return white_turn(new_board);
		}
		else     // black player turn
		{
			return black_turn(new_board);
		}
	}
};


