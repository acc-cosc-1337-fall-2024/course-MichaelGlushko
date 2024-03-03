//add include statements
#include "func.h"
//add function code here
double get_gc_content(const string& dna)
{
    int i = 0;
    double gc_count = 0;

    for(auto ch : dna) {
        if(ch == 'G' || ch == 'C') {
            gc_count += 1;
        }
        i += 1;
    }

    return gc_count/i;
}

string get_reverse_string(string dna) 
{
    int index = dna.size()-1;
    string reverse_string;

    while(index >= 0) {
        char ch = dna[index--];
        reverse_string += ch;
    }
    return reverse_string;
}

string get_dna_complement(string dna)
{
    string reversed_dna = get_reverse_string(dna);
    string dna_complement;

    for(auto ch : reversed_dna) {
        if(ch == 'A') {
            dna_complement += 'T';
        }
        else if(ch == 'T') {
            dna_complement += 'A';
        }
        else if(ch == 'C') {
            dna_complement += 'G';
        }
        else if(ch == 'G') {
            dna_complement += 'C';
        }
    }

    return dna_complement;
}