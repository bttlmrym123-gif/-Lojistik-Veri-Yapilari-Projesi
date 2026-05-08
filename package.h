#ifndef PACKAGE_H
#define PACKAGE_H

typedef struct Package {
    int id;
    char sender[50];
    char destination[50];
    float weight;
} Package;

#endif
