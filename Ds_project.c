#include <stdio.h>
#include <stdlib.h>

int c, t1, t2, t3, s, ch1, a, i, j, ar[100], n, ns;

struct details {
    char first_name[100];
    char last_name[100];
    long long int aadhar_number;
    long long int credit_number;
    int expiry_month;
    long int expiry_year;
    int card_id;
    long long int contact_number;
    int ns;
    struct details* next;
};

// Define a head pointer for the linked list
struct details* head = NULL;

// Function prototypes
void location(void);
struct details* read();
void display();
void s_display();
void bill();
void add_customer(struct details* new_customer);
void display_all_customers();

int main() {
    location();
    return 0;
}

void location(void) {
    printf("\t\t\t\t\t\t\t------  WELCOME  ------\t\t\t\t\t\t\t");
    printf("\n SELECT CITY:");
    printf("\n\t\t 1:WARANGAL \n\t\t 2:HANAMKONDA \n\t\t 3:KAZIPET");
    scanf("%d", &c);
    switch (c) {
        case 1:
            printf("\n SELECT THEATRE:");
            printf("\n\t\t  1:PVR CINEMAS \n\t\t  2:ASIAN GEMINI \n\t\t  3:RAM LAXMAN \n\t\t  4:RADHIKA");
            scanf("%d", &t1);
            switch (t1) {
                case 1:
                    printf("\n SELECT MOVIE:");
                    printf("\n\t\t  1:RRR \n\t\t  2:KGF-2 \n\t\t  3:DR STRANGE \n\t\t  4:F3");
                    scanf("%d", &s);
                    switch (s) {
                        case 1:
                            printf("\nRRR\n");
                            s_display();
                            break;
                        case 2:
                            printf("\nKGF-2\n");
                            s_display();
                            break;
                        case 3:
                            printf("\nDR STRANGE\n");
                            s_display();
                            break;
                        case 4:
                            printf("\nF3\n");
                            s_display();
                            break;
                    }
                    break;
                case 2:
                    printf("\n SELECT MOVIE:");
                    printf("\n\t\t  1:RRR \n\t\t  2:KGF-2 \n\t\t  3:DR STRANGE \n\t\t  4:F3");
                    scanf("%d", &s);
                    switch (s) {
                        case 1:
                            printf("\nRRR\n");
                            s_display();
                            break;
                        case 2:
                            printf("\nKGF-2\n");
                            s_display();
                            break;
                        case 3:
                            printf("\nDR STRANGE\n");
                            s_display();
                            break;
                        case 4:
                            printf("\nF3\n");
                            s_display();
                            break;
                    }
                    break;

                case 3:
                    printf("\n SELECT MOVIE:");
                    printf("\n\t\t  1:RRR \n\t\t  2:KGF-2 \n\t\t  3:F3");
                    scanf("%d", &s);
                    switch (s) {
                        case 1:
                            printf("\nRRR\n");
                            s_display();
                            break;
                        case 2:
                            printf("\nKGF-2\n");
                            s_display();
                            break;
                        case 3:
                            printf("\nF3\n");
                            s_display();
                            break;
                    }
                    break;

                case 4:
                    printf("\n SELECT MOVIE:");
                    printf("\n\t\t  1:KGF-2 \n\t\t  2:F3");
                    scanf("%d", &s);
                    switch (s) {
                        case 1:
                            printf("\nKGF-2\n");
                            s_display();
                            break;
                        case 2:
                            printf("\nF3\n");
                            s_display();
                            break;
                    }
                    break;
            }
            break;
        case 2:
            printf("\n SELECT THEATRE:");
            printf("\n\t\t  1:ASIAN SRIDEVI MULTIPLEX \n\t\t  2:ASHOKA \n\t\t  3:AMRUTHA");
            scanf("%d", &t2);
            switch (t2) {
                case 1:
                    printf("\n SELECT MOVIE:");
                    printf("\n\t\t  1:RRR \n\t\t  2:KGF-2 \n\t\t  3:DR STRANGE \n\t\t  4:F3");
                    scanf("%d", &s);
                    switch (s) {
                        case 1:
                            printf("\nRRR\n");
                            s_display();
                            break;
                        case 2:
                            printf("\nKGF-2\n");
                            s_display();
                            break;
                        case 3:
                            printf("\nDR STRANGE\n");
                            s_display();
                            break;
                        case 4:
                            printf("\nF3\n");
                            s_display();
                            break;
                    }
                    break;

                case 2:
                    printf("\n SELECT MOVIE:");
                    printf("\n\t\t  1:RRR \n\t\t  2:KGF-2 \n\t\t  3:F3");
                    scanf("%d", &s);
                    switch (s) {
                        case 1:
                            printf("\nRRR\n");
                            s_display();
                            break;
                        case 2:
                            printf("\nKGF-2\n");
                            s_display();
                            break;
                        case 3:
                            printf("\nF3\n");
                            s_display();
                            break;
                    }
                    break;

                case 3:
                    printf("\n SELECT MOVIE:");
                    printf("\n\t\t  1:KGF-2 \n\t\t  2:F3");
                    scanf("%d", &s);
                    switch (s) {
                        case 1:
                            printf("\nKGF-2\n");
                            s_display();
                            break;
                        case 2:
                            printf("\nF3\n");
                            s_display();
                            break;
                    }
                    break;
            }
            break;
        case 3:
            printf("\n SELECT THEATRE:");
            printf("\n\t\t  1:BHAVANI\n\t\t  2:SHAMBHAVI");
            scanf("%d", &t3);
            switch (t3) {
                case 1:
                    printf("\n SELECT MOVIE:");
                    printf("\n\t\t  1:RRR \n\t\t  2:KGF-2 \n\t\t  3:F3");
                    scanf("%d", &s);
                    switch (s) {
                        case 1:
                            printf("\nRRR\n");
                            s_display();
                            break;
                        case 2:
                            printf("\nKGF-2\n");
                            s_display();
                            break;
                        case 3:
                            printf("\nF3\n");
                            s_display();
                            break;
                    }
                    break;

                case 2:
                    printf("\n SELECT MOVIE:");
                    printf("\n\t\t  1:KGF-2 \n\t\t  2:F3");
                    scanf("%d", &s);
                    switch (s) {
                        case 1:
                            printf("\nKGF-2\n");
                            s_display();
                            break;
                        case 2:
                            printf("\nF3\n");
                            s_display();
                            break;
                    }
                    break;
            }
    }
    printf("\n ENTER YOUR CHOICE:");
    printf("\n 1:TO ENTER YOUR DETAILS \n 2:TO DISPLAY ALL THE DETAILS");
    scanf("%d", &a);
    switch (a) {
        case 1: {
            struct details* new_customer = read();
            add_customer(new_customer);
            bill();
            break;
        }
        case 2:
            display_all_customers();
            break;
    }
}

struct details* read() {
    struct details* new_customer = (struct details*)malloc(sizeof(struct details));
    if (new_customer == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    printf("ENTER THE FOLLOWING DETAILS:\n FIRST NAME \n LAST NAME \n AADHAR NUMBER \n CREDIT NUMBER \n EXPIRY MONTH \n EXPIRY YEAR \n CARD ID \n CONTACT NUMBER");
    scanf("%s %s %lld %lld %d %ld %d %lld",
          new_customer->first_name,
          new_customer->last_name,
          &new_customer->aadhar_number,
          &new_customer->credit_number,
          &new_customer->expiry_month,
          &new_customer->expiry_year,
          &new_customer->card_id,
          &new_customer->contact_number);

    new_customer->next = NULL;

    // Save details to file
    FILE* de = fopen("DETAILS_OF_CUSTOMER", "a");
    if (de != NULL) {
        fprintf(de, "\n%s \n%s \n%lld \n%lld \n%d \n%ld \n%d \n%lld",
                new_customer->first_name,
                new_customer->last_name,
                new_customer->aadhar_number,
                new_customer->credit_number,
                new_customer->expiry_month,
                new_customer->expiry_year,
                new_customer->card_id,
                new_customer->contact_number);
        fclose(de);
    }

    return new_customer;
}

void display(struct details* person) {
    printf("\n THE DETAILS YOU HAVE ENTERED:");
    printf("\n%s \n%s \n%lld \n%lld \n%d \n%ld \n%d \n%lld",
           person->first_name,
           person->last_name,
           person->aadhar_number,
           person->credit_number,
           person->expiry_month,
           person->expiry_year,
           person->card_id,
           person->contact_number);
}

void s_display() {
    printf("\t\t\t\t\t\tSCREEN\n\n\n");
    for (i = 1; i <= 100; i++) {
        printf("%d\t", i);
        if (i % 10 == 0)
            printf("\n\n");
    }

    printf("\n enter the no of seats you want to select:");
    scanf("%d", &n);

    printf("\n enter the seat number you want to select:");
    for (i = 0; i < n; i++)
        scanf("%d", &ns);
}

void bill() {
    printf("\n--------------------------------------------------------------------------------");
    printf("\n|                                                                              |");
    printf("\n|                                                                              |");
    printf("\n| NAME OF THE CUSTOMER: %s %s                                                   |", head->first_name, head->last_name);
    printf("\n|                                                                              |");
    printf("\n| COST OF 1 TICKET: 150                                                         |");
    printf("\n|                                                                              |");
    printf("\n| NO OF TICKETS: %d                                                             |", n);
    printf("\n|                                                                              |");
    printf("\n| TOTAL COST: %d                                                               |", 150 * n);
    printf("\n|                                                                              |");
    printf("\n|                                                                              |");
    printf("\n|                                                                              |");
    printf("\n|                                                                              |");
    printf("\n|                                                                              |");
    printf("\n|                                                                              |");
    printf("\n|                                                                              |");
    printf("\n--------------------------------------------------------------------------------");
}

void add_customer(struct details* new_customer) {
    if (head == NULL) {
        head = new_customer;
    } else {
        struct details* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_customer;
    }
}

void display_all_customers() {
    struct details* temp = head;
    if (temp == NULL) {
        printf("No customer details to display.\n");
        return;
    }

    while (temp != NULL) {
        display(temp);
        temp = temp->next;
    }
}
