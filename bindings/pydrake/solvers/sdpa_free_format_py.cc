#include "pybind11/eigen.h"
#include "pybind11/pybind11.h"

#include "drake/bindings/pydrake/documentation_pybind.h"
#include "drake/bindings/pydrake/pydrake_pybind.h"
#include "drake/solvers/sdpa_free_format.h"

namespace drake {
namespace pydrake {
PYBIND11_MODULE(sdpa_free_format, m) {
  // NOLINTNEXTLINE(build/namespaces): Emulate placement in namespace.
  using namespace drake::solvers;
  constexpr auto& doc = pydrake_doc.drake.solvers;

  m.doc() = "SdpaFreeFormat bindings for MathematicalProgram";

  py::module::import("pydrake.solvers.mathematicalprogram");

  m.def("GenerateSDPA", &solvers::GenerateSDPA, py::arg("prog"),
      py::arg("file_name"), doc.GenerateSDPA.doc);
}
}  // namespace pydrake
}  // namespace drake
