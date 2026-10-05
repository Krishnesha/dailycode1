char* convert(char* s, int numRows) {
    int len = strlen(s);

    if (numRows == 1 || numRows >= len)
        return s;

    char* result = malloc((len + 1) * sizeof(char));
    int k = 0;

    int cycle = 2 * numRows - 2;

    for (int row = 0; row < numRows; row++) {

        for (int i = row; i < len; i += cycle) {

            result[k++] = s[i];

            // Characters between first and last row
            int diagonal = i + cycle - 2 * row;

            if (row != 0 && row != numRows - 1 && diagonal < len)
                result[k++] = s[diagonal];
        }
    }

    result[k] = '\0';

    return result;
}