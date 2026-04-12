#include <stdio.h>

int main() {
    int frames, pages, i, j, k;

    printf("Enter number of frames: ");
    scanf("%d", &frames);

    printf("Enter number of pages: ");
    scanf("%d", &pages);

    int page[pages];
    printf("Enter page reference string: ");
    for (i = 0; i < pages; i++) {
        scanf("%d", &page[i]);
    }
    int frame[frames];
    for (i = 0; i < frames; i++) {
        frame[i] = -1;
    }

    int faults = 0;

    for (i = 0; i < pages; i++) {
        int found = 0;

        // Check if page already in frame
        for (j = 0; j < frames; j++) {
            if (frame[j] == page[i]) {
                found = 1;
                break;
            }
        }

        if (!found) {
            int pos = -1, farthest = i;

            for (j = 0; j < frames; j++) {
                int k;
                for (k = i + 1; k < pages; k++) {
                    if (frame[j] == page[k]) {
                        break;
                    }
                }

                if (k == pages) { // not used again
                    pos = j;
                    break;
                }

                if (k > farthest) {
                    farthest = k;
                    pos = j;
                }
            }

            if (pos == -1) {
                pos = 0;
            }

            frame[pos] = page[i];
            faults++;
        }

        // Display frames
        printf("Page %d -> ", page[i]);
        for (j = 0; j < frames; j++) {
            printf("%d ", frame[j]);
        }
        printf("\n");
    }

    printf("Total Page Faults = %d\n", faults);
    return 0;
}