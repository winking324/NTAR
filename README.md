# NTAR: Network Trace Archival and Retrieval library

Welcome to the NTAR website, the Network Trace Archival and Retrieval library. The main objective of NTAR is to provide an extensible way to store and retrieve network traces to mass storage. The NTAR file format includes support for saving a number of per-capture and per-packet details ("metadata") in a simple and yet powerful manner.

NTAR implements a new "wanna-be" dump standard that overcomes the limits of the current [libpcap](http://www.tcpdump.org/)/[WinPcap](http://www.winpcap.org/) dump format, by allowing the user to save packets coming from multiple interfaces and different data-links in a single trace file. More information on this new trace format can be found in [PCAP Next Generation Dump File Format](https://www.winpcap.org/ntar/draft/PCAP-DumpFileFormat.html).

NTAR is a fresh project looking for contributors. If you want to be among them, you can join the **ntar-workers@winpcap.org** mailing list. At the moment, NTAR is available in source code format only, from the [download page](https://www.winpcap.org/ntar/download/default.htm). In the future, we plan to set up a public CVS repository.
