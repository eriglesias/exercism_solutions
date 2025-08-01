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
size_t personal_top_three(const int32_t scores[], size_t scores_len, int32_t output[]) {
    // Initialize pointers to track the top three scores
    int32_t *first = &output[0];
    int32_t *second = &output[1];
    int32_t *last = &output[2];
    
    size_t count = 0; // Initialize the count of scores written
    
    // Loop through the scores array
    for (size_t i = 0; i < scores_len; i++) {
        if (scores[i] > *first) {
            *last = *second;
            *second = *first;
            *first = scores[i];
        } else if (scores[i] > *second && scores_len >= 2) {
            *last = *second;
            *second = scores[i];
        } else if (scores[i] > *last && scores_len >= 3) {
            *last = scores[i];
        }
        count++;
    }
    
    // Cap the count at TOP_SIZE
    count = (count > TOP_SIZE) ? TOP_SIZE : count;
    
    return count;
}

