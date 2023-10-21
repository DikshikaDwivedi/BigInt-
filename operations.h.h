// operations.h
#ifndef OPERATIONS_H
#define OPERATIONS_H

#include <gmp.h> // Include the appropriate big integer library.

// Define the structure 
typedef struct Term {
    mpz_t coefficient; 
    int exp;
    struct Term* next;
} Term;

// Define the structure for OPERATIONS.
typedef struct Operations {
    Term* head;
} Operations;

// Function prototypes
Operations* createOperations();
void insertTerm(Operations* op, const mpz_t coefficient, int exp);
void addOperations(Operations* result, const Operations* op1, const Operations* op2);
void subtractOperations(Operations* result, const Operations* op1, const Operations* op2);
void multiplyOperations(Operations* result, const Operations* op1, const Operations* op2);
void printOperations(const Operations* op);
void destroyOperations(Operations* op);

#endif // OPERATIONS_H
