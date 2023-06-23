#include <iostream>
#include <vector>
#include <fstream>
#include "functions.h"

class BOARD

{
private:
  int m_dim;
  std::vector<int> m_board;
public:
  BOARD(int dim): m_dim{dim}, m_board(m_dim*m_dim, 256)
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
    //arounf z = 0,0
    complex z;
    z.r, z.i = 0, 0;
    for (int i=0; i<m_dim*m_dim; ++i)
      {
	std::cout<< 256 - num_iter(z ,coordinate_change(i, m_dim), 256) << ' ';
	if (i%(m_dim-1) == 0)
	  {
	    std::cout<<'\n';
	  }
      }
  };
};

