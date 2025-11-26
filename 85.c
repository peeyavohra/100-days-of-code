#include <stdio.h>

// Simple enum with explicit values
enum Numbers {
    TEN = 10,
    TWENTY = 20,
    THIRTY = 30,
    FORTY = 40,
    FIFTY = 50
};

int main() {
    printf("Enum with Explicit Values:\n");
    printf("--------------------------\n");
    
    printf("TEN   = %d\n", TEN);
    printf("TWENTY = %d\n", TWENTY);
    printf("THIRTY = %d\n", THIRTY);
    printf("FORTY  = %d\n", FORTY);
    printf("FIFTY  = %d\n", FIFTY);
    
    return 0;
}