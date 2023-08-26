// SPDX-FileCopyrightText: 2023 KOINSLOT, Inc.
//
// SPDX-License-Identifier: GPL-3.0-or-later

#include "Kywy.hpp"

Kywy::Engine engine;

extern "C" void app_main(void) {
  engine.start();

  engine.display.drawCircle(Display::Origin::Object2D::TOP_LEFT, 7, 7, 50, 0xff);
  engine.display.drawCircle(Display::Origin::Object2D::TOP_LEFT, 17, 17, 30, 0xff);

  char text[] = "K";
  engine.display.drawText(Display::Origin::Text::CENTER, 32, 32, Display::Font::bailleul_16_pt, text, 0xff,
                          {.transparent = true});
  engine.display.update();
}
