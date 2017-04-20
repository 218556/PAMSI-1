#include "stoper.h"
#include "stos.h"
#include "lista.h"
#include "kolejka.h"
#include "heapsort.h"
#include "mergesort.h"

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	stoper time;
    lista list;
    for(int i=0; i<10; ++i)
    {
        list.add(0,i);
    }
    time.sstart();
    list.Find(10);
    time.sstop();
    time.wynik();
    
    
    mergesort(list, 0, list.rozmiar());

/*
    kolejka queue;
    for(int i=0; i<10; ++i)
    {
        queue.push(i);
    }
    time.sstart();
    queue.Find(10);
    time.sstop();
    time.wynik();

    stos stack;
    for(int i=0; i<10; ++i)
    {
        stack.push(i);
    }
    time.sstart();
    stack.Find(10);
    time.sstop();
    time.wynik();
    */
    

    
    
    return EXIT_SUCCESS;
}
