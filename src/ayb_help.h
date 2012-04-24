/**
 * \file ayb_help.h
 * Help text for AYB.
 * Include as bulk text in options print_help.
 */

//"12345678901234567890123456789012345678901234567890123456789012345678901234567890\n"
"\n"
"Options:\n"
"  -b  --blockstring <Rn[InCn...]>\n"
"\tHow to group cycle data in intensity files for analysis\n"
"\t[default: all in a single block]\n"
"\t(R=Read, I=Ignore, C=Concatenate onto previous block)\n"
"\t(First R must precede first C)\n\n"
"  -d  --dataformat <format>\tInput format [default: cif]\n"
"\t\t\t\t(txt/cif)\n"
"  -e  --logfile <filepath>\tFile path of message output [default: none]\n"
"\t\t\t\t(Alternative to script redirect of error output)\n"
"  -f  --format <format>\t\tOutput format [default: fastq]\n"
"\t\t\t\t(fasta/fastq)\n"
"  -g  --generr <num>\t\tGeneralised error value [default: 38]\n"
"\t\t\t\t(Higher value for higher quality scores)\n"
"  -k  --spikeuse\t\tUse spike-in data to calibrate qualities\n"
"\t\t\t\t(Alternative to output of quality counts file)\n"
"  -i  --input <path>\t\tLocation of input files [default: \"\"]\n"
"  -l  --loglevel <level>\tLevel of message output [default: warning]\n"
"\t\t\t\t(none/fatal/error/warning/information/debug)\n"
"  -n  --niter <num>\t\tNumber of model iterations [default: 5]\n"
"  -o  --output <path>\t\tLocation to create output files [default: \"\"]\n"
"  -p  --parallel <num>\t\tMultiple threads speeds up run time [default: 1]\n"
"  -q  --noqualout\t\tDo not output quality calibration table\n"
"  -r  --runfolder\t\tRead cif files from a run-folder\n"
"\tPrefix is replaced by lane tile (range) with format LnTn (Ln-nTn-n)\n"
"  -s  --simdata <header>\tOutput simulation data\n"
"  -t  --thin <factor>\t\tThin number of clusters by factor [default: 1]\n"
"  -w  --working <level>\t\tOutput final working values to level\n"
"\t\t\t\t(none/matrices/values/processed) [default: none]\n"
"  -A  --A <filepath>\t\tPredetermined fixed Parameter A matrix file path\n"
"\t\t\t\t(Must be accompanied by option N)\n"
"  -K  --spikein <path>\t\tLocation of spike-in data files\n"
"  -M  --M <filepath>\t\tPredetermined initial Crosstalk matrix file path\n"
"  -N  --N <filepath>\t\tPredetermined fixed Noise matrix file path\n"
"\t\t\t\t(Must be accompanied by option A)\n"
"  -Q  --qualtab <filepath>\tQuality calibration table\n"
"\n"
"  --help\t\t\tDisplay this help\n"
"  --licence\t\t\tDisplay AYB licence information\n"
"  --version\t\t\tDisplay AYB version information\n"
"\n"
