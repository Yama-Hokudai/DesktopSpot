#include "../include/itworks.hpp"

itworks(int ch, int Fs) {
  pa_ml = pa_mainloop_new();
  pa_mlapi = pa_mainloop_get_api(pa_ml);
  pa_ctx = pa_context_new(pa_ml, "itworks' application");
  pa_context_connect(pa_ctx, NULL, 0, NULL);
  
}
