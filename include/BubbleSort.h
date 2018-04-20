#pragma once

#include <memory>

namespace chain {
    class BubbleSort{
    public: int dist1,dist2,dist32;
    public: void Sort(int &dist1, int &dist2, int &dist3);
    public: virtual ~BubbleSort();
    };
}
