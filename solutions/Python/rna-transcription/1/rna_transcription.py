def to_rna(dna_strand):
    conversion = {
        'G': 'C',
        'C': 'G',
        'T': 'A',
        'A': 'U'
    }
    rna = ''
    for nucleotide in dna_strand:
        if nucleotide in conversion:
            rna += conversion[nucleotide]
    return rna
