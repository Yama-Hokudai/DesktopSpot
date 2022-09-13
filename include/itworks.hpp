#pragma once
#include <pulse/pulseaudio.h>

class itworks {
private:
  pa_mainloop *pa_ml;
  pa_mainloop_api *pa_mlapi;
  pa_context *pa_ctx;
  pa_stream *pa_strm;
public:
  // constructor
  itworks(int ch, int Fs);
};
