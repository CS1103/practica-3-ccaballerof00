//
// Created by cristian on 6/7/19.
//

#ifndef PC3_DEQUE_H
#define PC3_DEQUE_H

#include <iostream>
#include <deque>

using namespace std;

template <typename T1>
deque<T1> Hallarminimos(deque<T1> cola,int n) {
    deque<T1> minimos;
    deque<T1> conjuntoreducido;
    auto it = cola.begin();
        while (it != cola.end() - n + 1)
        {
            auto j = it;
            for (int i = 0; i < n; i++,j++) {
                conjuntoreducido.push_back(*j);
                }
            T1 elementomenor;
            elementomenor = *conjuntoreducido.begin();
            for (auto item: conjuntoreducido)
            {
                if (elementomenor > item)
                {
                    elementomenor = item;
                }
                conjuntoreducido.pop_front();
            }
        minimos.push_back(elementomenor);
        it++;
        }
    return minimos;
}

template<typename T2>
void imprimirDeque(deque<T2> a)
{
    while(!a.empty())
    {
        cout<<a.front()<<" ";
        a.pop_front();
    }
}


#endif //PC3_DEQUE_H
