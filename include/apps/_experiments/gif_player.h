#ifndef OSW_APP_GIF_PLAYER_H
#define OSW_APP_GIF_PLAYER_H

#include <osw_hal.h>

#include "osw_app.h"

class OswAppGifPlayer : public OswApp {
  public:
    OswAppGifPlayer() = default;
    virtual ~OswAppGifPlayer() = default;

    virtual void setup() override;
    virtual void loop() override;
    virtual void stop() override;
};

#endif
