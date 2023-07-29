/*
    Time Complexity: O( N )
    Space Complexity: O( 1 )

    Where 'N' is the length of the string 'S'.
*/

int maxDepth(string s) {

    // Initialize two integer variables, 'maxNestingDepth' and 'currentDepth' with 0.
    int maxNestingDepth = 0, currentDepth = 0;

    // For each character 'c' in 's':
    for (char &c : s) {

        // If 'c' equals '(':
        if (c == '(') {

            // Update 'currentDepth' and 'maxNestingDepth'.
            currentDepth++;
            maxNestingDepth = max(maxNestingDepth, currentDepth);
        }

        // If 'c' equals ')':
        else if (c == ')') {

            // Decrement current depth.
            currentDepth--;
        }
    }

    // Return 'maxNestingDepth'.
    return maxNestingDepth;
}