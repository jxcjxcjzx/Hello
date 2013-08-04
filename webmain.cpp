#include <QtGui/QtGui>
#include <QtWebKit/QWebView>

/*
 * Copyright 2013 Jiangxincheng <jxcjxcjzx@sina.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; 

*/
/*
it is just an editor for
common use in web environment
for all interested.
And I just try to use it with the
using in svn, which is subversion,
you knon it.
*/

int main(int argc, char **argv)
{
QApplication application(argc,argv);

QFile inFile;
bool InputFileSelected = false;
// in file test with the argument input help,
// which is commonly used like ./app infile
QStringList args = application.arguments();
args.pop_front();
QWebView* editview = new QWebView();
editview->load(QString("http://bbs.nju.edu.cn"));
editview->show();
return application.exec();


}
