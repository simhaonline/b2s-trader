/*
 * Copyright (c) 2020, Rapprise.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef AUTO_TRADER_VIEW_LICENSE_DIALOG_H
#define AUTO_TRADER_VIEW_LICENSE_DIALOG_H

#include <QDialog>

#include "features/include/license.h"
#include "ui_license_dialog.h"

namespace auto_trader {
namespace view {
namespace dialogs {

class LicenseDialog : public QDialog {
  Q_OBJECT
 public:
  LicenseDialog(features::license::License& license, QWidget* parent = nullptr);

  bool getLicenseStatus() const;

 public slots:
  void buyLicense();
  void buyTrial();
  void activate();
  void exit();
  void checkOkButtonStatus() const;

 private:
  Ui::LicenseDialog licenseDialog_;
  features::license::License& license_;

  bool licenseStatus_{false};
};

}  // namespace dialogs
}  // namespace view
}  // namespace auto_trader

#endif  // AUTO_TRADER_VIEW_LICENSE_DIALOG_H