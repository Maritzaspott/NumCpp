#include "NumCpp/Core/DataCube.hpp"

#include "BindingsIncludes.hpp"


//================================================================================
// new comment 
namespace DataCubeInterface
{
    template<typename dtype>
    NdArray<dtype>& at(DataCube<dtype>& self, uint32 inIndex)
    {
        std::cout << "Hello World!";
        return self.at(inIndex);
    }

    //================================================================================

    template<typename dtype>
    NdArray<dtype>& getItem(DataCube<dtype>& self, uint32 inIndex)
    {
        return self[inIndex];
    }

    //================================================================================

    template<typename dtype>
    pbArrayGeneric sliceZIndexAll(const DataCube<dtype>& self, int32 inIndex)
    {
        return nc2pybind(self.sliceZAll(inIndex));
    }

    //================================================================================

    template<typename dtype>
    pbArrayGeneric sliceZIndex(const DataCube<dtype>& self, int32 inIndex, const Slice& inSlice)
    {
        return nc2pybind(self.sliceZ(inIndex, inSlice));
    }

    //================================================================================

    template<typename dtype>
    pbArrayGeneric sliceZRowColAll(const DataCube<dtype>& self, int32 inRow, int32 inCol)
    {
        return nc2pybind(self.sliceZAll(inRow, inCol));
    }

    //================================================================================

    template<typename dtype>
    pbArrayGeneric sliceZRowCol(const DataCube<dtype>& self, int32 inRow, int32 inCol, const Slice& inSlice)
    {
        return nc2pybind(self.sliceZ(inRow, inCol, inSlice));
    }

    //================================================================================

    template<typename dtype>
    pbArrayGeneric sliceZSliceScalerAll(const DataCube<dtype>& self, const Slice& inRow, int32 inCol)
    {
        return nc2pybind(self.sliceZAll(inRow, inCol));
    }

    //================================================================================

    template<typename dtype>
    pbArrayGeneric sliceZSliceScaler(const DataCube<dtype>& self, const Slice& inRow, int32 inCol, const Slice& inSlice)
    {
        return nc2pybind(self.sliceZ(inRow, inCol, inSlice));
    }

    //================================================================================

    template<typename dtype>
    pbArrayGeneric sliceZScalerSliceAll(const DataCube<dtype>& self, int32 inRow, const Slice& inCol)
    {
        return nc2pybind(self.sliceZAll(inRow, inCol));
    }

    //================================================================================

    template<typename dtype>
    pbArrayGeneric sliceZScalerSlice(const DataCube<dtype>& self, int32 inRow, const Slice& inCol, const Slice& inSlice)
    {
        return nc2pybind(self.sliceZ(inRow, inCol, inSlice));
    }

    //================================================================================

    template<typename dtype>
    DataCube<dtype> sliceZSliceSliceAll(const DataCube<dtype>& self, const Slice& inRow, const Slice& inCol)
    {
        return self.sliceZAll(inRow, inCol);
    }

    //================================================================================

    template<typename dtype>
    DataCube<dtype>
        sliceZSliceSlice(const DataCube<dtype>& self, const Slice& inRow, const Slice& inCol, const Slice& inSlice)
    {
        return self.sliceZ(inRow, inCol, inSlice);
    }

    //================================================================================

    template<typename dtype>
    pbArrayGeneric sliceZAtIndexAll(const DataCube<dtype>& self, int32 inIndex)
    {
        return nc2pybind(self.sliceZAllat(inIndex));
    }

    //================================================================================

    template<typename dtype>
    pbArrayGeneric sliceZAtIndex(const DataCube<dtype>& self, int32 inIndex, const Slice& inSlice)
    {
        return nc2pybind(self.sliceZat(inIndex, inSlice));
    }

    //================================================================================

    template<typename dtype>
    pbArrayGeneric sliceZAtRowColAll(const DataCube<dtype>& self, int32 inRow, int32 inCol)
    {
        return nc2pybind(self.sliceZAllat(inRow, inCol));
    }

    //================================================================================

    template<typename dtype>
    pbArrayGeneric sliceZAtRowCol(const DataCube<dtype>& self, int32 inRow, int32 inCol, const Slice& inSlice)
    {
        return nc2pybind(self.sliceZat(inRow, inCol, inSlice));
    }

    //================================================================================

    template<typename dtype>
    pbArrayGeneric sliceZAtSliceScalerAll(const DataCube<dtype>& self, const Slice& inRow, int32 inCol)
    {
        return nc2pybind(self.sliceZAllat(inRow, inCol));
    }

    //================================================================================

    template<typename dtype>
    pbArrayGeneric
        sliceZAtSliceScaler(const DataCube<dtype>& self, const Slice& inRow, int32 inCol, const Slice& inSlice)
    {
        return nc2pybind(self.sliceZat(inRow, inCol, inSlice));
    }

    //================================================================================

    template<typename dtype>
    pbArrayGeneric sliceZAtScalerSliceAll(const DataCube<dtype>& self, int32 inRow, const Slice& inCol)
    {
        return nc2pybind(self.sliceZAllat(inRow, inCol));
    }

    //================================================================================

    template<typename dtype>
    pbArrayGeneric
        sliceZAtScalerSlice(const DataCube<dtype>& self, int32 inRow, const Slice& inCol, const Slice& inSlice)
    {
        return nc2pybind(self.sliceZat(inRow, inCol, inSlice));
    }

    //================================================================================

    template<typename dtype>
    DataCube<dtype> sliceZAtSliceSliceAll(const DataCube<dtype>& self, const Slice& inRow, const Slice& inCol)
    {
        return self.sliceZAllat(inRow, inCol);
    }

    //================================================================================

    template<typename dtype>
    DataCube<dtype>
        sliceZAtSliceSlice(const DataCube<dtype>& self, const Slice& inRow, const Slice& inCol, const Slice& inSlice)
    {
        return self.sliceZat(inRow, inCol, inSlice);
    }
} // namespace DataCubeInterface

//================================================================================

void initDataCube(pb11::module& m)
{
    // DataCube
    using DataCubeDouble = DataCube<double>;
    pb11::class_<DataCubeDouble>(m, "DataCube")
        .def(pb11::init<>())
        .def(pb11::init<uint32>())
        .def("at", &DataCubeInterface::at<double>, pb11::return_value_policy::reference)
        .def("__getitem__", &DataCubeInterface::getItem<double>, pb11::return_value_policy::reference)
        .def("back", &DataCubeDouble::back, pb11::return_value_policy::reference)
        .def("dump", &DataCubeDouble::dump)
        .def("front", &DataCubeDouble::front, pb11::return_value_policy::reference)
        .def("isempty", &DataCubeDouble::isempty)
        .def("shape", &DataCubeDouble::shape, pb11::return_value_policy::reference)
        .def("sizeZ", &DataCubeDouble::sizeZ)
        .def("pop_back", &DataCubeDouble::pop_back)
        .def("push_back", &DataCubeDouble::push_back)
        .def("sliceZAll", &DataCubeInterface::sliceZIndexAll<double>)
        .def("sliceZ", &DataCubeInterface::sliceZIndex<double>)
        .def("sliceZAll", &DataCubeInterface::sliceZRowColAll<double>)
        .def("sliceZ", &DataCubeInterface::sliceZRowCol<double>)
        .def("sliceZAll", &DataCubeInterface::sliceZSliceScalerAll<double>)
        .def("sliceZ", &DataCubeInterface::sliceZSliceScaler<double>)
        .def("sliceZAll", &DataCubeInterface::sliceZScalerSliceAll<double>)
        .def("sliceZ", &DataCubeInterface::sliceZScalerSlice<double>)
        .def("sliceZAll", &DataCubeInterface::sliceZSliceSliceAll<double>)
        .def("sliceZ", &DataCubeInterface::sliceZSliceSlice<double>)
        .def("sliceZAllat", &DataCubeInterface::sliceZAtIndexAll<double>)
        .def("sliceZat", &DataCubeInterface::sliceZAtIndex<double>)
        .def("sliceZAllat", &DataCubeInterface::sliceZAtRowColAll<double>)
        .def("sliceZat", &DataCubeInterface::sliceZAtRowCol<double>)
        .def("sliceZAllat", &DataCubeInterface::sliceZAtSliceScalerAll<double>)
        .def("sliceZat", &DataCubeInterface::sliceZAtSliceScaler<double>)
        .def("sliceZAllat", &DataCubeInterface::sliceZAtScalerSliceAll<double>)
        .def("sliceZat", &DataCubeInterface::sliceZAtScalerSlice<double>)
        .def("sliceZAllat", &DataCubeInterface::sliceZAtSliceSliceAll<double>)
        .def("sliceZat", &DataCubeInterface::sliceZAtSliceSlice<double>);
}