/*
 * Copyright (C) 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms of the
 * BSD-3-Clause license. See the accompanying LICENSE file for details.
 */


#ifndef YARP_DEV_IMUROSPUBLISHER_H
#define YARP_DEV_IMUROSPUBLISHER_H

#include "GenericSensorRosPublisher.h"

 // Thrift-generated classes
#include <yarp/rosmsg/sensor_msgs/Imu.h>

    /**
 * @ingroup dev_impl_wrapper
 *
 * \brief `IMURosPublisher`: This wrapper connects to a device and publishes a ROS topic of type sensor_msgs::Imu.
 *
 * | YARP device name |
 * |:-----------------:|
 * | `IMURosPublisher` |
 *
 * The parameters accepted by this device are:
 * | Parameter name | SubParameter   | Type    | Units          | Default Value    | Required                    | Description                                                       | Notes |
 * |:--------------:|:--------------:|:-------:|:--------------:|:----------------:|:--------------------------: |:-----------------------------------------------------------------:|:-----:|
 * | topic          |      -         | string  | -              |   -              | Yes                         | The name of the ROS topic opened by this device.                  | MUST start with a '/' character |
 * | node_name      |      -         | string  | -              | $topic + "_node" | No                          | The name of the ROS node opened by this device                    | Autogenerated by default |
 * | period         |      -         | double  | s              |   -              | Yes                         | Refresh period of the broadcasted values in seconds               |  |
 */
class IMURosPublisher : public GenericSensorRosPublisher<yarp::rosmsg::sensor_msgs::Imu>
{
    // Interface of the wrapped device
    yarp::dev::IThreeAxisLinearAccelerometers* m_iThreeAxisLinearAccelerometers{ nullptr };
    yarp::dev::IThreeAxisGyroscopes*           m_iThreeAxisGyroscopes{ nullptr };
    yarp::dev::IOrientationSensors*            m_iOrientationSensors{ nullptr };
    yarp::dev::IThreeAxisMagnetometers*        m_iThreeAxisMagnetometers{ nullptr };

public:
    using GenericSensorRosPublisher<yarp::rosmsg::sensor_msgs::Imu>::GenericSensorRosPublisher;

    using GenericSensorRosPublisher<yarp::rosmsg::sensor_msgs::Imu>::open;
    using GenericSensorRosPublisher<yarp::rosmsg::sensor_msgs::Imu>::close;
    using GenericSensorRosPublisher<yarp::rosmsg::sensor_msgs::Imu>::attachAll;
    using GenericSensorRosPublisher<yarp::rosmsg::sensor_msgs::Imu>::detachAll;

    /* PeriodicRateThread methods */
    void run() override;

protected:
    bool viewInterfaces() override;
};

#endif
