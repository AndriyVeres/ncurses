#include <ncurses.h>
#include <unistd.h>

static int nLenght = 5;
static int nHeight = 5;
static bool FLAG   = true;

void printwRectangle(unsigned int nLenght, unsigned int nHeight, const char * cSymbol);

int main()
{
  initscr();
  while(true)
  {
    printwRectangle(nLenght,nHeight,"*");
    refresh();
    usleep(50000);

    if(nLenght == 40 || nHeight == 40)
      FLAG = false;
    if(nLenght == 5 || nHeight == 5)
      FLAG = true;
    if(FLAG)
      {
        nHeight++;
        nLenght += 2;
      }
    else
    {
      nHeight--;
      nLenght -= 2;
    }
    clear();
  }
  endwin();
  return 0;
}


void printwRectangle(unsigned int nLenght, unsigned int nHeight, const char * cSymbol)
{
  /*print top corner*/
  for(int i=0;i<nLenght;++i)
    mvprintw(0,i,cSymbol);

  /*print right corner*/
  for(int i=1;i<nHeight;++i)
    mvprintw(i,nLenght-1,cSymbol);

    /*print bottom corner*/
    for(int i=nLenght-1;i != 0;--i)
      mvprintw(nHeight-1,i,cSymbol);

    /*print right corner*/
    for(int i=nHeight-1;i != 0;--i)
      mvprintw(i,0,cSymbol);
}
