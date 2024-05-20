#include <pybind11/pybind11.h>

#include <g2o/types/slam3d_addons/types_slam3d_addons.h>
#include <g2o/core/factory.h>
#include <g2o/stuff/macros.h>

#include "edge_se3_calib.h"


namespace g2o {

G2O_REGISTER_TYPE(EDGE_SE3_CALIB, EdgeSE3Calib);

void declareTypesSlam3dAddons(py::module & m) {

    declareEdgeSE3Calib(m);

}

}