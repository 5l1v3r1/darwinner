#ifndef LOGINW_H
#define LOGINW_H


#include <QtGui>
#include "DUIObserver.h"
class Message;

class SSLoginWindow : public QDialog, public DUIObserver
{
	Q_OBJECT

public:
	SSLoginWindow(QWidget *parent = 0, DUIHandler* handler = 0);
	~SSLoginWindow();
	void OnEvent(Message& ev);
	void SettingFont(QFont& font);

private:
	void setupUi();
	QLabel *idLabel;
	QLabel *pwLabel;
	QLineEdit *idLineEdit;
	QLineEdit *pwLineEdit;
	QLabel *logoLabel;
	QPushButton *pushButtonLogin;
	QPushButton *pushButtonExit;
	QGroupBox* loginGroupBox;

private slots:
	void Login();
};

#endif // LOGINW_H
