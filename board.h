#include <iostream>
#include <vector>
#include <fstream>
#include "functions.h"

struct complex
{
  double r; //real part
  double i; //imaginary part
};

class BOARD
{
private:
  int m_dim;
  std::vector<double> m_board;
public:
  BOARD(int dim): m_dim{dim}, m_board(m_dim*m_dim, 256.0)
  {
  }

  
  void print_board() {
    for (int i = 0; i < m_dim * m_dim; ++i)
      {
      std::cout << m_board[i] << ' ';
      if (i % (m_dim - 1) == 0) {
        std::cout << '\n';
      }
    }
  };
  

  void board_iter()
  {
    for (int i=0; i<m_dim*m_dim; ++i)
      {
	std::cout<< 256 - num_iter(get_coordinates(i), 256) << ' ';
	if (i%(m_dim-1) == 0)
	  {
	    std::cout<<'\n';
	  }
      }
  };
};
