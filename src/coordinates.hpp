#pragma once

struct coordinates{
    int x,y;
    friend bool operator==(const coordinates& l,const coordinates& r)
    {
        return l.x == r.x && l.y == r.y;
    }
};
