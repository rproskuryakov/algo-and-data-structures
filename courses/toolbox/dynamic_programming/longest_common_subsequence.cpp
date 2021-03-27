#include <vector>

int length_of_lcs(const std::vector<int>& first_seq, const std::vector<int>& second_seq) {
    size_t n_rows = (1 + first_seq.size());
    size_t n_columns = (1 + second_seq.size());
    int* distances = new int[n_rows * n_columns];
    for (int i = 0; i < n_columns; ++i) {
        *(distances + i) = 0;
    }
    for (int i = 0; i < n_rows; ++i) {
        *(distances + i * n_columns) = 0;
    }

    for (int j = 1; j < n_columns; ++j) {
        for (int i = 1; i < n_rows; ++i) {
            int insertion = *(distances + i * n_columns + j - 1);
            int deletion = *(distances + (i - 1) * n_columns + j);
            int match = *(distances + (i - 1) * n_columns + j - 1) + 1;
            int mismatch = *(distances + (i - 1) * n_columns + j - 1);
            if (first_seq.at(i - 1) == second_seq.at(j - 1)) {
                *(distances + i * n_columns + j) = std::max(std::max(insertion, deletion), match);
            } else {
                *(distances + i * n_columns + j) = std::max(std::max(insertion, deletion), mismatch);
            }
        }
    }

    return *(distances + n_rows * n_columns - 1);
}