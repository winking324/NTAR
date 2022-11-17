This folder contains:
- the supposed text output for each of the tests in the "tests" folder.
- the input trace file for the tests needing an input file (test???_in.ntar). 
- the supposed outputs file for the tests generating syntetic trace files 
  (test???.ntar). NOTE: these files have been generated on a x86 machine, 
  therefore they are valid models only on those architectures with the same 
  byte order as the x86.

TODO: maybe such files should be moved in the each test folder, or into a 
      folder under ntar/tests. At the moment they live under bin/debug because
      under windows the tests executables are placed under bin/(debug|release).
