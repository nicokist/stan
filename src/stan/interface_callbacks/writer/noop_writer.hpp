#ifndef STAN_INTERFACE_CALLBACKS_WRITER_NOOP_WRITER_HPP
#define STAN_INTERFACE_CALLBACKS_WRITER_NOOP_WRITER_HPP

#include <stan/interface_callbacks/writer/base_writer.hpp>

namespace stan {
  namespace interface_callbacks {
    namespace writer {

      class noop_writer: public base_writer {
      public:
        void operator()(const std::string& key, double value) {}
        void operator()(const std::string& key, int value) {}
        void operator()(const std::string& key, const std::string& value) {}
        void operator()(const std::string& key,
                        const double* values,
                        int n_values) {};
        void operator()(const std::string& key,
                        const double* values,
                        int n_rows, int n_cols) {};
        void operator()(const std::vector<std::string>& names) {}
        void operator()(const std::vector<double>& state) {}
        void operator()() {}
        void operator()(const std::string& message) {}
      };

    }
  }
}

#endif