#ifndef _MODES_TAIKODRUMS_HPP
#define _MODES_TAIKODRUMS_HPP

#include "core/ControllerMode.hpp"
#include "core/socd.hpp"
#include "core/state.hpp"

class TaikoDrums : public ControllerMode {
  public:
    TaikoDrums(socd::SocdType socd_type);

  private:
    virtual void UpdateDigitalOutputs(InputState &inputs, OutputState &outputs);
    virtual void UpdateAnalogOutputs(InputState &inputs, OutputState &outputs);
};

#endif