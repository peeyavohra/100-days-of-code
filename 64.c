#include <stdio.h>
#include <string.h>
#include <limits.h>

#define MAX_CHARS 256

int lengthOfLongestSubstring(char* s) {
    int n = strlen(s);
    if (n == 0) return 0;
    
    int visited[MAX_CHARS];
    for (int i = 0; i < MAX_CHARS; i++) {
        visited[i] = -1;
    }
    
    int max_len = 0;
    int start = 0;
    
    for (int end = 0; end < n; end++) {
        // If character is already visited and is within current window
        if (visited[s[end]] != -1 && visited[s[end]] >= start) {
            // Move start to position after the repeated character
            start = visited[s[end]] + 1;
        }
        
        // Update last occurrence of current character
        visited[s[end]] = end;
        
        // Update maximum length
        if (end - start + 1 > max_len) {
            max_len = end - start + 1;
        }
    }
    
    return max_len;
}

int main() {
    char s[1000];
    
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    
    // Remove newline character if present
    size_t len = strlen(s);
    if (len > 0 && s[len - 1] == '\n') {
        s[len - 1] = '\0';
    }
    
    int result = lengthOfLongestSubstring(s);
    
    printf("\nString: \"%s\"\n", s);
    printf("Length of longest substring without repeating characters: %d\n", result);
    
    // Find and display the actual substring
    printf("\nFinding the actual longest substring...\n");
    
    int n = strlen(s);
    if (n == 0) {
        printf("Empty string\n");
        return 0;
    }
    
    int visited[MAX_CHARS];
    for (int i = 0; i < MAX_CHARS; i++) {
        visited[i] = -1;
    }
    
    int max_len = 0;
    int start = 0;
    int max_start = 0;
    
    for (int end = 0; end < n; end++) {
        if (visited[s[end]] != -1 && visited[s[end]] >= start) {
            start = visited[s[end]] + 1;
        }
        
        visited[s[end]] = end;
        
        if (end - start + 1 > max_len) {
            max_len = end - start + 1;
            max_start = start;
        }
    }
    
    // Extract and display the longest substring
    char longest[1000];
    strncpy(longest, s + max_start, max_len);
    longest[max_len] = '\0';
    
    printf("Longest substring: \"%s\"\n", longest);
    printf("Starting index: %d, Length: %d\n", max_start, max_len);
    
    // Display all substrings for verification
    printf("\nAll substrings without repeating characters:\n");
    for (int i = 0; i < n; i++) {
        int current_visited[MAX_CHARS] = {0};
        for (int j = i; j < n; j++) {
            if (current_visited[s[j]]) {
                break;
            }
            current_visited[s[j]] = 1;
            
            char substr[1000];
            strncpy(substr, s + i, j - i + 1);
            substr[j - i + 1] = '\0';
            
            printf("\"%s\" (length: %d)", substr, j - i + 1);
            if (j - i + 1 == max_len && i == max_start) {
                printf(" ← LONGEST");
            }
            printf("\n");
        }
    }
    
    return 0;
}