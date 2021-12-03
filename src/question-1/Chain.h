#ifndef CHAIN_H
#define CHAIN_H
#include "Domino.h"
#include <vector>
using namespace std;

enum class Direction{ LEFT, RIGHT, TOP, BOTTOM, NONE };
class Chain
{
    public:
        Chain():spinnerObtained{false}
        {

        }

        bool IsDouble( Domino &Move)
        {
            if( Move.Left() == Move.Right())
            {
                return true;
            } else return false;
        }

        bool IsMoveValid( Domino &Move, Direction &PlacementDirection)
        {
            if( isSpinner( Move))
            return true;
        }

        bool isSpinner( Domino &Move)
        {
            if( !spinnerObtained && IsDouble(Move) && ( (TopOpenEnd.Left() == 0 )&& ( BottomOpenEnd.Left() == 0) && (TopOpenEnd.Right() == 0 )&& ( BottomOpenEnd.Right() == 0) ))
            {
                spinnerObtained = true;
                return true;
            } else false;
        }

        void storeOpenEnds( Domino &Move, Direction &PlacementDirection )
        {
            // two open ends
            {

            }

            if( IsDouble(Move))
            { //There are four open ends

            }
        }

    private:

        vector< Domino> LeftchainEnds; //CrossWise Ends
        vector< Domino> RightchainEnds;
        vector< Domino> TopchainEnds;
        vector< Domino> BottomchainEnds;
        Domino LastMove;

        Domino RightOpenEnd;
        Domino TopOpenEnd;
        Domino BottomOpenEnd;
        Domino LeftOpenEnd;
        bool spinnerObtained ;

};

#endif // CHAIN_H
