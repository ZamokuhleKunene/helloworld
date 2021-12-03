#ifndef DOMINO_H
#define DOMINO_H


class DominoValuesAreNoneNegative{};
class Domino
{
    public:
        Domino( int left, int right ): _Left{left},_Right{right}
            {
                if( (_Right < 0)|| (_Left < 0) ) throw DominoValuesAreNoneNegative{};
            }
        Domino(): _Left{0},_Right{0}
        {

        }

        int Left() { return _Left; }
        int Right() { return _Right; }
    private:
        int _Left;
        int _Right;
};

#endif // DOMINO_H
