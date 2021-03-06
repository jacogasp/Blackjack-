//
// Created by Jacopo Gasparetto on 23/04/21.
//

#ifndef BLACKJACK_CARDS_H
#define BLACKJACK_CARDS_H

#include <array>

namespace BlackJackConstants {
    constexpr int winScore = 21;
    constexpr int dealerMaxScore = 17;
}

class Card {

public:
    enum Rank {
        rank_2, rank_3, rank_4, rank_5, rank_6, rank_7, rank_8, rank_9, rank_10,
        rank_jack, rank_queen, rank_king, rank_ace,
        max_rank
    };

    enum Suit {
        suit_clubs,
        suit_diamonds,
        suit_hearts,
        suit_spades,

        max_suits
    };

    Card() = default;

    Card(Suit suit, Rank rank);

    [[nodiscard]] int value() const;

    void print() const;

private:
    Suit m_suit{};

    Rank m_rank{};
};

#endif //BLACKJACK_CARDS_H
