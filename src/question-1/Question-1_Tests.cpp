#include "Domino.h"
#include "Chain.h"

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

// ------------- Tests for Domino ----------------

TEST_CASE("Domino with negative values cannot be created") {
    CHECK_THROWS_AS(Domino(-1, 1), DominoValuesAreNoneNegative);
}

TEST_CASE("Should return true if a Domino is a double"){
  Chain chain;
  Domino TwoFives( 5, 5);
  CHECK(chain.IsDouble( TwoFives));
}

TEST_CASE("Should return true if a Double is the first one ie spinner")
{
  Chain chain;
  Domino TwoFives( 5, 5);
  CHECK(chain.isSpinner( TwoFives));

}

TEST_CASE("Should return for a spinner as a valid move")
{
  Chain chain;
  auto placementDirection = Direction::TOP;
  Domino TwoFives( 5, 5);
  CHECK(chain.IsMoveValid( TwoFives, placementDirection ));

}
