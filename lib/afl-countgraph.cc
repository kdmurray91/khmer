//
// This file is part of khmer, https://github.com/dib-lab/khmer/, and is
// Copyright (C) Michigan State University, 2015. It is licensed under
// the three-clause BSD license; see LICENSE.
// Contact: khmer-project@idyll.org
//

// Author:  Kevin Murray, spam@kdmurray.id.au
// This file is used to test compilation with libkhmer.a/libkhmer.so, after
// installation

#include <oxli/counting.hh>
#include <iostream>

int main(int argc, const char **argv)
{
    khmer::CountingHash test(1,1);
    if (argc != 2) {
        std::cerr << "USAGE: afl-read-ct COUNTGRAPH.ct" << std::endl;
        return EXIT_FAILURE;
    }
    try {
        test.load(argv[1]);
    } catch (khmer::khmer_file_exception &e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }
    return 0;
}
