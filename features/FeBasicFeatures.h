//----------------------------------------------------------------------------
/** @file FeBasicFeatures.h
    Non-patterns features as in Remi Coulom's work.
*/
//----------------------------------------------------------------------------

#ifndef FE_BASIC_FEATURES_H
#define FE_BASIC_FEATURES_H

//----------------------------------------------------------------------------

#include <bitset>
#include "GoLadder.h"

//----------------------------------------------------------------------------

// Coulom's classical features
enum FeBasicFeature{
    FE_PASS_NEW,            // pass, previous move was not pass
    FE_PASS_CONSECUTIVE,    // pass, previous move was also pass
    FE_CAPTURE_ADJ_ATARI,   // String contiguous to new string in atari
    FE_CAPTURE_RECAPTURE,   // Re-capture previous move
    FE_CAPTURE_PREVENT_CONNECTION, // Prevent connection to previous move
    FE_CAPTURE_NOT_LADDER,  // String not in a ladder
    FE_CAPTURE_LADDER,      // String in a ladder
    // FE_CAPTURE_MULTIPLE,
    FE_EXTENSION_NOT_LADDER, // New atari, not in a ladder
    FE_EXTENSION_LADDER,    // New atari, in a ladder
    // todo distinguish extending 1 stone only?
    FE_SELFATARI,
    // FE_SELFATARI_NAKADE,
    // FE_SELFATARI_THROWIN,
    FE_ATARI_LADDER,        // Ladder atari
    FE_ATARI_KO,            // Atari when there is a ko
    FE_ATARI_OTHER,         // Other atari
    FE_LINE_1,
    FE_LINE_2,
    FE_LINE_3,
    FE_LINE_4,
    FE_DIST_PREV_2, // d(dx,dy) = |dx|+|dy|+max(|dx|,|dy|)
    FE_DIST_PREV_3,
    FE_DIST_PREV_4,
    FE_DIST_PREV_5,
    FE_DIST_PREV_6,
    FE_DIST_PREV_7,
    FE_DIST_PREV_8,
    FE_DIST_PREV_9,
    FE_DIST_PREV_10,
    FE_DIST_PREV_11,
    FE_DIST_PREV_12,
    FE_DIST_PREV_13,
    FE_DIST_PREV_14,
    FE_DIST_PREV_15,
    FE_DIST_PREV_16,
    FE_DIST_PREV_17,
    FE_DIST_PREV_OWN_2,
    FE_DIST_PREV_OWN_3,
    FE_DIST_PREV_OWN_4,
    FE_DIST_PREV_OWN_5,
    FE_DIST_PREV_OWN_6,
    FE_DIST_PREV_OWN_7,
    FE_DIST_PREV_OWN_8,
    FE_DIST_PREV_OWN_9,
    FE_DIST_PREV_OWN_10,
    FE_DIST_PREV_OWN_11,
    FE_DIST_PREV_OWN_12,
    FE_DIST_PREV_OWN_13,
    FE_DIST_PREV_OWN_14,
    FE_DIST_PREV_OWN_15,
    FE_DIST_PREV_OWN_16,
    FE_DIST_PREV_OWN_17,
    FE_MC_OWNER_1, // 0−7 wins/63 sim.
    FE_MC_OWNER_2, // 8−15
    FE_MC_OWNER_3, // 16−23
    FE_MC_OWNER_4, // 24−31
    FE_MC_OWNER_5, // 32−39
    FE_MC_OWNER_6, // 40−47
    FE_MC_OWNER_7, // 48−55
    FE_MC_OWNER_8,  // 56−63
    FE_NONE,
    _NU_FE_FEATURES

    // other ideas: cfgdistance. tacticaldistance = less for lowlib stones
};

typedef std::bitset<_NU_FE_FEATURES> FeBasicFeatureSet;

//----------------------------------------------------------------------------

namespace FeBasicFeatures {
    
void FindFeatures(const GoBoard& bd, SgPoint move,
                  FeBasicFeatureSet& features);
}

//----------------------------------------------------------------------------

#endif // FE_BASIC_FEATURES_H

