/*
 * Copyright (C) 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * Copyright (C) 2006-2010 RobotCub Consortium
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms of the
 * BSD-3-Clause license. See the accompanying LICENSE file for details.
 */

#include <yarp/companion/impl/Companion.h>
#include <yarp/companion/impl/BottleReader.h>

using yarp::companion::impl::Companion;
using yarp::companion::impl::BottleReader;


int Companion::cmdReadWrite(int argc, char *argv[])
{
    if (argc<2)
    {
        yCError(COMPANION, "Please supply the read and write port names");
        return 1;
    }

    const char *read_port_name=argv[0];
    const char *write_port_name=argv[1];
    const char *verbatim[] = { "verbatim", nullptr };

    Companion::installHandler();
    BottleReader reader;
    reader.open(read_port_name, false);

    int ret = write(write_port_name, 1, (char**)&verbatim);

    reader.close();

    return ret;
}
