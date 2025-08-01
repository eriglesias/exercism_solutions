#include "word_count.h"



static void insert_new_word(word_count_word_t *words, size_t arr_len,
                            const char new_word[], int *word_count)
{
    if (!new_word || !word_count || !new_word[0])
        return;
    size_t i = 0;
    for (; i < arr_len; ++i)
    {
        if (strcmp(words[i].text, new_word) == 0)
            break;
        // If an empty string is encountered, end of array is reached
        if (!words[i].text[0])
            break;
    }
    if (!words[i].text[0])
    {
        strcpy(words[i].text, new_word);
        (*word_count)++;
    }
    words[i].count++;
}
int count_words(const char *sentence, word_count_word_t *words)
{
    if (!sentence || !words)
        return 0;
    
    // Initialize word array. This assumes that `words` array is MAX_WORDS long.
    memset(words, 0, sizeof(word_count_word_t) * MAX_WORDS);
    char word_buffer[MAX_WORD_LENGTH + 1] = { '\0' };
    bool valid_prev_char;
    bool valid_curr_char = false;
    size_t char_index = 0;
    size_t sentence_len = strlen(sentence);
    int word_count = 0;
    for (size_t i = 0; i < sentence_len; ++i)
    {
        char c = sentence[i];
        valid_prev_char = valid_curr_char;
        valid_curr_char = isalnum(c);
        // Peek forward to check if apostrophe is truly valid.
        if (c == '\'' && (i + 1) < sentence_len && isalpha(sentence[i + 1]))
            valid_curr_char = valid_prev_char;
        // Add the newly matched to the output array.
        if (!valid_curr_char && valid_prev_char)
        {
            if (word_count == MAX_WORDS)
                return EXCESSIVE_NUMBER_OF_WORDS;
            insert_new_word(words, MAX_WORDS, word_buffer, &word_count);
            // Clear the buffer.
            memset(word_buffer, 0, sizeof(char) * MAX_WORD_LENGTH);
            char_index = 0;
            continue;
        }
        if (char_index == MAX_WORD_LENGTH)
            return EXCESSIVE_LENGTH_WORD;
        if (valid_curr_char)
            word_buffer[char_index++] = tolower(c);
    }
    // NOTE: By the time the input had been exhausted, there might still be a
    // word in the buffer.
    // Add the word to the output.
    insert_new_word(words, MAX_WORDS, word_buffer, &word_count);
    return word_count;
}

