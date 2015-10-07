#ifndef SAMPLE_ODOMETRY_MODEL_H
#define SAMPLE_ODOMETRY_MODEL_H

#include "SampleMotionModel.hpp"

#include "ros/ros.h"

class SampleOdometryModel : public SampleMotionModel {

    // parameters
    double a1, a2, a3, a4;

    // the command
    /* TODO */

    public:
        // constructor
        SampleOdometryModel(const ros::NodeHandle&);

        // updates the pose to a new one based on the CommandVel
        void samplePose2D(Pose2D *pose);
};

#endif