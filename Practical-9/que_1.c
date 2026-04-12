#include <stdio.h>

int main() {
    int frames, pages, i, j;

    printf("Enter number of frames: ");
    scanf("%d", &frames);

    printf("Enter number of pages: ");
    scanf("%d", &pages);

    int page[pages];
    printf("Enter page reference string: ");
    for (i = 0; i < pages; i++){
        scanf("%d", &page[i]);
    }
    int frame[frames];
    for (i = 0; i < frames; i++){
        frame[i] = -1;
    }
    int index = 0, faults = 0;

    for (i = 0; i < pages; i++) {
        int found = 0;

        for (j = 0; j < frames; j++) {
            if (frame[j] == page[i]) {
                found = 1;
                break;
            }
        }

        if (!found) {
            frame[index] = page[i];
            index = (index + 1) % frames;
            faults++;
        }

        // Display frames
        printf("Page %d -> ", page[i]);
        for (j = 0; j < frames; j++){
            printf("%d ", frame[j]);
        }
        printf("\n");
    }

    printf("Total Page Faults = %d\n", faults);
    return 0;
}