#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struct to store customer details
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

// Function prototypes
void location(struct details** head);
struct details* read(struct details* head);
void display(struct details* head);
void s_display();
void bill(struct details* head);
void load_data(struct details** head);
void save_data(struct details* head);

int c, t1, t2, t3, s, ch1, a, i, j, ar[100], n, ns;

int main() {
    struct details* head = NULL;
    load_data(&head);  // Load existing data from file
    location(&head);
    save_data(head);   // Save data to file before exiting
    return 0;
}

void location(struct details** head) {
    printf("\t \t \t \t \t \t------  WELCOME  ------ \t \t \t \t \t \t ");
    printf("\n SELECT CITY:");
    printf("\n\t \t 1:WARANGAL \n\t \t 2:HANAMKONDA \n \t \t 3:KAZIPET");
    scanf("%d", &c);
    switch(c) {
        case 1:
            printf("\n SELECT THEATRE:");
            printf("\n\t \t  1:PVR CINEMAS \n\t \t  2:ASIAN GEMINI \n\t \t  3:RAM LAXMAN \n\t \t  4:RADHIKA");
            scanf("%d", &t1);
            break;
        case 2:
            printf("\n SELECT THEATRE:");
            printf("\n\t \t  1:ASIAN SRIDEVI MULTIPLEX \n\t \t  2:ASHOKA \n\t \t  3:AMRUTHA");
            scanf("%d", &t2);
            break;
        case 3:
            printf("\n SELECT THEATRE:");
            printf("\n\t \t  1:BHAVANI\n\t \t  2:SHAMBHAVI");
            scanf("%d", &t3);
            break;
    }

    printf("\n SELECT MOVIE:");
    printf("\n\t \t  1:RRR \n\t \t  2:KGF-2 \n\t \t  3:DR STRANGE \n\t \t  4:F3");
    scanf("%d", &s);
    switch(s) {
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

    printf("\n ENTER YOUR CHOICE:");
    printf("\n 1:TO ENTER YOUR DETAILS \n 2:TO DISPLAY ALL THE DETAILS");
    scanf("%d", &a);
    switch(a) {
        case 1:
            *head = read(*head);
            bill(*head);
            break;
        case 2:
            display(*head);
            break;
    }
}

struct details* read(struct details* head) {
    struct details* new_node = (struct details*)malloc(sizeof(struct details));
    if (!new_node) {
        printf("Memory allocation error\n");
        return head;
    }
    printf("ENTER THE FOLLOWING DETAILS:\n FIRST NAME \n LAST NAME \n AADHAR NUMBER \n CREDIT NUMBER \n EXPIRY MONTH \n EXPIRY YEAR \n CARD ID \n CONTACT NUMBER");
    scanf("%s %s %lld %lld %d %ld %d %lld", new_node->first_name, new_node->last_name, &new_node->aadhar_number, &new_node->credit_number, &new_node->expiry_month, &new_node->expiry_year, &new_node->card_id, &new_node->contact_number);
    new_node->next = head;
    return new_node;
}

void display(struct details* head) {
    struct details* temp = head;
    printf("\n THE DETAILS YOU HAVE ENTERED:");
    while (temp != NULL) {
        printf("\n\n\n%s \n%s \n%lld \n%lld \n%d \n%ld \n%d \n%lld", temp->first_name, temp->last_name, temp->aadhar_number, temp->credit_number, temp->expiry_month, temp->expiry_year, temp->card_id, temp->contact_number);
        temp = temp->next;
    }
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

    printf("\n enter the  seat number you want to select:");
    for (i = 0; i < n; i++)
        fscanf(stdin, "%d", &ns);
}

void bill(struct details* head) {
    struct details* temp = head;
    printf("\n--------------------------------------------------------------------------------");
    printf("\n|                                                                              |");
    printf("\n|                                                                              |");
    printf("\n| NAME OF THE CUSTOMER: %s %s                                                   |", temp->first_name, temp->last_name);
    printf("\n|                                                                              |");
    printf("\n| COST OF 1 TICKET: 150                                                         |");
    printf("\n|                                                                              |");
    printf("\n| NO OF TICKETS: %d                                                              |", n);
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

void load_data(struct details** head) {
    FILE* file = fopen("customer_details.txt", "r");
    if (!file) {
        return; // No existing data
    }

    struct details* temp;
    while (1) {
        temp = (struct details*)malloc(sizeof(struct details));
        if (!temp) {
            printf("Memory allocation error\n");
            break;
        }
        if (fscanf(file, "%s %s %lld %lld %d %ld %d %lld %d", temp->first_name, temp->last_name, &temp->aadhar_number, &temp->credit_number, &temp->expiry_month, &temp->expiry_year, &temp->card_id, &temp->contact_number, &temp->ns) == EOF) {
            free(temp);
            break;
        }
        temp->next = *head;
        *head = temp;
    }
    fclose(file);
}

void save_data(struct details* head) {
    FILE* file = fopen("customer_details.txt", "w");
    if (!file) {
        printf("Error opening file for writing\n");
        return;
    }

    struct details* temp = head;
    while (temp) {
        fprintf(file, "%s %s %lld %lld %d %ld %d %lld %d\n", temp->first_name, temp->last_name, temp->aadhar_number, temp->credit_number, temp->expiry_month, temp->expiry_year, temp->card_id, temp->contact_number, temp->ns);
        temp = temp->next;
    }
    fclose(file);
}
