#include <iostream>
#include "Notebook.hpp"
#include "Direction.hpp"
#include <vector>
using namespace std;
using namespace ariel;

    void Notebook::write(unsigned int page,unsigned int row,unsigned int col,Direction dir,string s){
         unsigned len =s.length();
         /*
         if (col+len>99)
         {
              return;
         }
         
         if (dir==Direction::Horizontal)
         {
               for (unsigned int i = 0; i < len; i++)
               {
                    Notebook::myNotebook[page][row][col+i]=s[i];
                    if (Notebook::myNotebook[page][row][col+i]!='_')
                    {
                         return;
                    }
                    
               }
         }else
         {
              for (unsigned int i = 0; i < len; i++)
              {
                    Notebook::myNotebook[page][row+i][col]=s[i];
                    if (Notebook::myNotebook[page][row+i][col]!='_')
                    {
                         return;
                    }
              }
         }
         */
         

          
    }
    string Notebook::read(unsigned int page ,unsigned int row,unsigned int col,ariel::Direction dir, int len)
    {         
          string s;
          /*
          if (dir==Direction::Horizontal)
          {
               if (col+len>99)
               {
                    return s;
               }
               for (int i = 0; i < len; i++)
               {
                    s.append(char(Notebook::myNotebook[page][row][col+i]));
               }
               
          }else
          {
               for (int i = 0; i < len; i++)
               {
                    s.append(char(Notebook::myNotebook[page][row+i][col]));
               }
               */
          return s;
    }
    void Notebook::erase(unsigned int page,unsigned int row,unsigned int col,ariel::Direction dir, int len){
    }
    void Notebook::show(int page){
          
    }