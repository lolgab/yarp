/*
 * Copyright (C) 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * Copyright (C) 2006-2010 RobotCub Consortium
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms of the
 * BSD-3-Clause license. See the accompanying LICENSE file for details.
 */

#ifndef YARP_DEV_IMULTIPLEWRAPPER_H
#define YARP_DEV_IMULTIPLEWRAPPER_H

#include <yarp/dev/api.h>
#include <yarp/dev/PolyDriverList.h>

namespace yarp {
namespace dev {

/**
 * @ingroup dev_imultiplewrapper
 *
 * Interface for an object that can wrap/attach to to another. This is useful
 * for example when an object refers internally to another device, but
 * you want to decouple the creation of the two objects. In this case
 * you first creates the two objects separately then you can attach one
 * to the other. This class is similar to IWrapper, but allows attaching
 * to more than one object by subsequent calls to attach.
 */
class YARP_dev_API IMultipleWrapper
{
public:
    /**
     * Destructor.
     */
    virtual ~IMultipleWrapper();

    /**
     * Attach to a list of objects.
     * @param p the polydriver list that you want to attach to.
     * @return true/false on success failure.
     */
    virtual bool attachAll(const PolyDriverList &p)=0;

    /**
     * Detach the object (you must have first called attach).
     * @return true/false on success failure.
     */
    virtual bool detachAll()=0;
};

} // namespace dev
} // namespace yarp

#endif // YARP_DEV_IMULTIPLEWRAPPER_H
