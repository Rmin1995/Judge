#ifndef JUDGE_H
#define JUDGE_H
#include <QString>
#include <cstdlib>
#include <fstream>

class Judge
{
public:
    Judge();
    static bool compileCode(QString command,QString code,QString name);
    static bool copyCode(QString source,QString dest);
    static QString judge(int time,int tstsCount);
    static void removeFile(QString name);
    static bool openLastInput();
    static bool openYourOutput();
    static bool openCorrOutput();
    static bool openCompileOutput();
    static void clear();
};

#endif // JUDGE_H
