/// @file
/// @author David Pilger <dpilger26@gmail.com>
/// [GitHub Repository](https://github.com/dpilger26/NumCpp)
///
/// License
/// Copyright 2018-2022 David Pilger
///
/// Permission is hereby granted, free of charge, to any person obtaining a copy of this
/// software and associated documentation files(the "Software"), to deal in the Software
/// without restriction, including without limitation the rights to use, copy, modify,
/// merge, publish, distribute, sublicense, and/or sell copies of the Software, and to
/// permit persons to whom the Software is furnished to do so, subject to the following
/// conditions :
///
/// The above copyright notice and this permission notice shall be included in all copies
/// or substantial portions of the Software.
///
/// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
/// INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
/// PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE
/// FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
/// OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
/// DEALINGS IN THE SOFTWARE.
///
/// Description
/// Methods for interacting with NdArrays
///
#pragma once

#include "NumCpp/Functions/abs.hpp"
#include "NumCpp/Functions/add.hpp"
#include "NumCpp/Functions/alen.hpp"
#include "NumCpp/Functions/all.hpp"
#include "NumCpp/Functions/allclose.hpp"
#include "NumCpp/Functions/amax.hpp"
#include "NumCpp/Functions/amin.hpp"
#include "NumCpp/Functions/angle.hpp"
#include "NumCpp/Functions/any.hpp"
#include "NumCpp/Functions/append.hpp"
#include "NumCpp/Functions/applyFunction.hpp"
#include "NumCpp/Functions/applyPoly1d.hpp"
#include "NumCpp/Functions/arange.hpp"
#include "NumCpp/Functions/arccos.hpp"
#include "NumCpp/Functions/arccosh.hpp"
#include "NumCpp/Functions/arcsin.hpp"
#include "NumCpp/Functions/arcsinh.hpp"
#include "NumCpp/Functions/arctan.hpp"
#include "NumCpp/Functions/arctan2.hpp"
#include "NumCpp/Functions/arctanh.hpp"
#include "NumCpp/Functions/argmax.hpp"
#include "NumCpp/Functions/argmin.hpp"
#include "NumCpp/Functions/argsort.hpp"
#include "NumCpp/Functions/argwhere.hpp"
#include "NumCpp/Functions/around.hpp"
#include "NumCpp/Functions/array_equal.hpp"
#include "NumCpp/Functions/array_equiv.hpp"
#include "NumCpp/Functions/asarray.hpp"
#include "NumCpp/Functions/astype.hpp"
#include "NumCpp/Functions/average.hpp"

#include "NumCpp/Functions/bartlett.hpp"
#include "NumCpp/Functions/binaryRepr.hpp"
#include "NumCpp/Functions/bincount.hpp"
#include "NumCpp/Functions/bitwise_and.hpp"
#include "NumCpp/Functions/bitwise_not.hpp"
#include "NumCpp/Functions/bitwise_or.hpp"
#include "NumCpp/Functions/bitwise_xor.hpp"
#include "NumCpp/Functions/blackman.hpp"
#include "NumCpp/Functions/byteswap.hpp"

#include "NumCpp/Functions/cbrt.hpp"
#include "NumCpp/Functions/ceil.hpp"
#include "NumCpp/Functions/centerOfMass.hpp"
#include "NumCpp/Functions/clip.hpp"
#include "NumCpp/Functions/column_stack.hpp"
#include "NumCpp/Functions/complex.hpp"
#include "NumCpp/Functions/concatenate.hpp"
#include "NumCpp/Functions/conj.hpp"
#include "NumCpp/Functions/contains.hpp"
#include "NumCpp/Functions/copy.hpp"
#include "NumCpp/Functions/copySign.hpp"
#include "NumCpp/Functions/copyto.hpp"
#include "NumCpp/Functions/cos.hpp"
#include "NumCpp/Functions/cosh.hpp"
#include "NumCpp/Functions/corrcoef.hpp"
#include "NumCpp/Functions/count_nonzero.hpp"
#include "NumCpp/Functions/cov.hpp"
#include "NumCpp/Functions/cross.hpp"
#include "NumCpp/Functions/cube.hpp"
#include "NumCpp/Functions/cumprod.hpp"
#include "NumCpp/Functions/cumsum.hpp"

#include "NumCpp/Functions/deg2rad.hpp"
#include "NumCpp/Functions/degrees.hpp"
#include "NumCpp/Functions/deleteIndices.hpp"
#include "NumCpp/Functions/diag.hpp"
#include "NumCpp/Functions/diagflat.hpp"
#include "NumCpp/Functions/diagonal.hpp"
#include "NumCpp/Functions/diff.hpp"
#include "NumCpp/Functions/divide.hpp"
#include "NumCpp/Functions/dot.hpp"
#include "NumCpp/Functions/dump.hpp"

#include "NumCpp/Functions/empty.hpp"
#include "NumCpp/Functions/empty_like.hpp"
#include "NumCpp/Functions/endianess.hpp"
#include "NumCpp/Functions/equal.hpp"
#include "NumCpp/Functions/exp.hpp"
#include "NumCpp/Functions/exp2.hpp"
#include "NumCpp/Functions/expm1.hpp"
#include "NumCpp/Functions/extract.hpp"
#include "NumCpp/Functions/eye.hpp"

#include "NumCpp/Functions/fillDiagnol.hpp"
#include "NumCpp/Functions/find.hpp"
#include "NumCpp/Functions/fix.hpp"
#include "NumCpp/Functions/flatnonzero.hpp"
#include "NumCpp/Functions/flatten.hpp"
#include "NumCpp/Functions/flip.hpp"
#include "NumCpp/Functions/fliplr.hpp"
#include "NumCpp/Functions/flipud.hpp"
#include "NumCpp/Functions/floor.hpp"
#include "NumCpp/Functions/floor_divide.hpp"
#include "NumCpp/Functions/fmax.hpp"
#include "NumCpp/Functions/fmin.hpp"
#include "NumCpp/Functions/fmod.hpp"
#include "NumCpp/Functions/frombuffer.hpp"
#include "NumCpp/Functions/fromfile.hpp"
#include "NumCpp/Functions/fromiter.hpp"
#include "NumCpp/Functions/full.hpp"
#include "NumCpp/Functions/full_like.hpp"

#include "NumCpp/Functions/gcd.hpp"
#include "NumCpp/Functions/geomspace.hpp"
#include "NumCpp/Functions/gradient.hpp"
#include "NumCpp/Functions/greater.hpp"
#include "NumCpp/Functions/greater_equal.hpp"

#include "NumCpp/Functions/hamming.hpp"
#include "NumCpp/Functions/hammingEncode.hpp"
#include "NumCpp/Functions/hanning.hpp"
#include "NumCpp/Functions/histogram.hpp"
#include "NumCpp/Functions/hstack.hpp"
#include "NumCpp/Functions/hypot.hpp"

#include "NumCpp/Functions/identity.hpp"
#include "NumCpp/Functions/imag.hpp"
#include "NumCpp/Functions/inner.hpp"
#include "NumCpp/Functions/interp.hpp"
#include "NumCpp/Functions/intersect1d.hpp"
#include "NumCpp/Functions/invert.hpp"
#include "NumCpp/Functions/isclose.hpp"
#include "NumCpp/Functions/isinf.hpp"
#include "NumCpp/Functions/isneginf.hpp"
#include "NumCpp/Functions/isposinf.hpp"
#include "NumCpp/Functions/isnan.hpp"

#include "NumCpp/Functions/kaiser.hpp"

#include "NumCpp/Functions/lcm.hpp"
#include "NumCpp/Functions/ldexp.hpp"
#include "NumCpp/Functions/left_shift.hpp"
#include "NumCpp/Functions/less.hpp"
#include "NumCpp/Functions/less_equal.hpp"
#include "NumCpp/Functions/linspace.hpp"
#include "NumCpp/Functions/load.hpp"
#include "NumCpp/Functions/log.hpp"
#include "NumCpp/Functions/log10.hpp"
#include "NumCpp/Functions/log1p.hpp"
#include "NumCpp/Functions/log2.hpp"
#include "NumCpp/Functions/logical_and.hpp"
#include "NumCpp/Functions/logical_not.hpp"
#include "NumCpp/Functions/logical_or.hpp"
#include "NumCpp/Functions/logical_xor.hpp"
#include "NumCpp/Functions/logspace.hpp"

#include "NumCpp/Functions/matmul.hpp"
#include "NumCpp/Functions/max.hpp"
#include "NumCpp/Functions/maximum.hpp"
#include "NumCpp/Functions/mean.hpp"
#include "NumCpp/Functions/median.hpp"
#include "NumCpp/Functions/meshgrid.hpp"
#include "NumCpp/Functions/min.hpp"
#include "NumCpp/Functions/minimum.hpp"
#include "NumCpp/Functions/mod.hpp"
#include "NumCpp/Functions/multiply.hpp"

#include "NumCpp/Functions/nan_to_num.hpp"
#include "NumCpp/Functions/nanargmax.hpp"
#include "NumCpp/Functions/nanargmin.hpp"
#include "NumCpp/Functions/nancumprod.hpp"
#include "NumCpp/Functions/nancumsum.hpp"
#include "NumCpp/Functions/nanmax.hpp"
#include "NumCpp/Functions/nanmean.hpp"
#include "NumCpp/Functions/nanmedian.hpp"
#include "NumCpp/Functions/nanmin.hpp"
#include "NumCpp/Functions/nanpercentile.hpp"
#include "NumCpp/Functions/nanprod.hpp"
#include "NumCpp/Functions/nans.hpp"
#include "NumCpp/Functions/nans_like.hpp"
#include "NumCpp/Functions/nanstdev.hpp"
#include "NumCpp/Functions/nansum.hpp"
#include "NumCpp/Functions/nanvar.hpp"
#include "NumCpp/Functions/nbytes.hpp"
#include "NumCpp/Functions/negative.hpp"
#include "NumCpp/Functions/newbyteorder.hpp"
#include "NumCpp/Functions/none.hpp"
#include "NumCpp/Functions/nonzero.hpp"
#include "NumCpp/Functions/norm.hpp"
#include "NumCpp/Functions/not_equal.hpp"

#include "NumCpp/Functions/ones.hpp"
#include "NumCpp/Functions/ones_like.hpp"
#include "NumCpp/Functions/outer.hpp"

#include "NumCpp/Functions/pad.hpp"
#include "NumCpp/Functions/partition.hpp"
#include "NumCpp/Functions/percentile.hpp"
#include "NumCpp/Functions/place.hpp"
#include "NumCpp/Functions/polar.hpp"
#include "NumCpp/Functions/power.hpp"
#include "NumCpp/Functions/powerf.hpp"
#include "NumCpp/Functions/print.hpp"
#include "NumCpp/Functions/prod.hpp"
#include "NumCpp/Functions/proj.hpp"
#include "NumCpp/Functions/ptp.hpp"
#include "NumCpp/Functions/put.hpp"
#include "NumCpp/Functions/putmask.hpp"

#include "NumCpp/Functions/rad2deg.hpp"
#include "NumCpp/Functions/radians.hpp"
#include "NumCpp/Functions/ravel.hpp"
#include "NumCpp/Functions/real.hpp"
#include "NumCpp/Functions/reciprocal.hpp"
#include "NumCpp/Functions/remainder.hpp"
#include "NumCpp/Functions/repeat.hpp"
#include "NumCpp/Functions/replace.hpp"
#include "NumCpp/Functions/reshape.hpp"
#include "NumCpp/Functions/resizeFast.hpp"
#include "NumCpp/Functions/resizeSlow.hpp"
#include "NumCpp/Functions/right_shift.hpp"
#include "NumCpp/Functions/rint.hpp"
#include "NumCpp/Functions/rms.hpp"
#include "NumCpp/Functions/roll.hpp"
#include "NumCpp/Functions/rot90.hpp"
#include "NumCpp/Functions/round.hpp"
#include "NumCpp/Functions/row_stack.hpp"

#include "NumCpp/Functions/select.hpp"
#include "NumCpp/Functions/setdiff1d.hpp"
#include "NumCpp/Functions/shape.hpp"
#include "NumCpp/Functions/sign.hpp"
#include "NumCpp/Functions/signbit.hpp"
#include "NumCpp/Functions/sin.hpp"
#include "NumCpp/Functions/sinc.hpp"
#include "NumCpp/Functions/sinh.hpp"
#include "NumCpp/Functions/size.hpp"
#include "NumCpp/Functions/sort.hpp"
#include "NumCpp/Functions/sqrt.hpp"
#include "NumCpp/Functions/square.hpp"
#include "NumCpp/Functions/stack.hpp"
#include "NumCpp/Functions/stdev.hpp"
#include "NumCpp/Functions/subtract.hpp"
#include "NumCpp/Functions/sum.hpp"
#include "NumCpp/Functions/swap.hpp"
#include "NumCpp/Functions/swapaxes.hpp"

#include "NumCpp/Functions/tan.hpp"
#include "NumCpp/Functions/tanh.hpp"
#include "NumCpp/Functions/tile.hpp"
#include "NumCpp/Functions/toStlVector.hpp"
#include "NumCpp/Functions/tofile.hpp"
#include "NumCpp/Functions/trace.hpp"
#include "NumCpp/Functions/transpose.hpp"
#include "NumCpp/Functions/trapz.hpp"
#include "NumCpp/Functions/tri.hpp"
#include "NumCpp/Functions/trim_zeros.hpp"
#include "NumCpp/Functions/trunc.hpp"

#include "NumCpp/Functions/union1d.hpp"
#include "NumCpp/Functions/unique.hpp"
#include "NumCpp/Functions/unwrap.hpp"

#include "NumCpp/Functions/var.hpp"
#include "NumCpp/Functions/vstack.hpp"

#include "NumCpp/Functions/where.hpp"

#include "NumCpp/Functions/zeros.hpp"
#include "NumCpp/Functions/zeros_like.hpp"
