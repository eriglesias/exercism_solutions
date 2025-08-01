#include "high_scores.h"

#define TOP_SIZE 3

/// Return the latest score.
int32_t latest(const int32_t *scores, size_t scores_len){
    return scores[scores_len - 1];
}

/// Return the highest score.
int32_t personal_best(const int32_t *scores, size_t scores_len){
    int32_t best = scores[0];
    for (size_t i=0; i < scores_len ; i++)
        if (scores[i] > best)
        best = scores[i];
    return best;
}

/// Write the highest scores to `output` (in non-ascending order).
/// Return the number of scores written.
size_t personal_top_three(int32_t const scores[static 1], size_t scores_len,
                        int32_t output[static 1]) {
    
    int32_t* first = output;
    int32_t* second;
    int32_t* last;
    if (scores_len > 1)
        second = output + 1;
    if (scores_len > 2)
        last = output + 2;
    size_t count = 0;
    for (size_t i = 0; i < scores_len; i++) {
        
        if (scores_len < 2) {
            if (scores[i] > *first) {
                *first = scores[i];
            }
            count++;
        }
        else if (scores_len < 3) {
            if (scores[i] > *first) {
                *second = *first;
                *first = scores[i];
            }
            else if (scores[i] > *second) {
                *second = scores[i];
            }
            count++;
        }
        else if (scores_len >= 3) {
            if (scores[i] > *first) {
                *last = *second;
                *second = *first;
                *first = scores[i];
            }
            else if (scores[i] > *second) {
                *last = *second;
                *second = scores[i];
            }
            else if (scores[i] > *last) {
                *last = scores[i];
            }
            count++;
        }
    }
    count = (count > TOP_SIZE) ? TOP_SIZE : count;
    return count;
}

