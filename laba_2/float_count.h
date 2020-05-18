#pragma once

class float_count{
    public:
        float_count();
        float_count(int X);
        ~float_count();
        void show();
        friend float_count operator + (const float_count& x, const float_count& y);
        float operator - (float_count x);
        bool operator < (float_count x);
        bool operator > (float_count x);
        bool operator != (float_count x);
        bool operator == (float_count x);
    private:
        float value;
};
