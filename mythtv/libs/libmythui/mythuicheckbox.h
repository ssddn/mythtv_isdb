#ifndef MYTHUI_CHECKBOX_H_
#define MYTHUI_CHECKBOX_H_

// MythUI headers
#include "mythuibutton.h"

/** \class MythUICheckBox
 *
 * \brief A checkbox widget supporting three check states - on,off,half and two
 *        conditions - selected and unselected.
 */
class MythUICheckBox : public MythUIButton
{
    Q_OBJECT

  public:
    MythUICheckBox(MythUIType *parent, const QString &name, bool doInit = true);
   ~MythUICheckBox();

    virtual void gestureEvent(MythUIType *uitype, MythGestureEvent *event);
    virtual bool keyPressEvent(QKeyEvent *);

    void toggleCheckState(void);

  signals:
    void valueChanged();

  protected:
    virtual void CopyFrom(MythUIType *base);
    virtual void CreateCopy(MythUIType *parent);
};

#endif
