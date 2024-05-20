#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>

#include <g2o/types/slam3d_addons/edge_se3_calib.h>

namespace py = pybind11;
using namespace pybind11::literals;

namespace g2o {

void declareEdgeSE3Calib(py::module & m) {

    templatedBaseMultiEdge<6, Isometry3D>(m, "_6_Isometry3D");
    py::class_<EdgeSE3Calib, BaseMultiEdge<6, Isometry3D>>(m, "EdgeSE3Calib")
        .def(py::init<>())
        
        .def("compute_error", &EdgeSE3Calib::computeError)
        .def("read", &EdgeSE3Calib::read)
        .def("write", &EdgeSE3Calib::write)
    ;

}

}