#include <iostream>
#include "judge.h"

Judge::Judge()
{
}

bool Judge::compileCode(QString command, QString code, QString name)
{
    removeFile(name);
    system(QString(command + " " + code + " -o" + name + " 2>compileOutput.txt").toStdString().c_str());
    char x;
    std::ifstream inp(name.toStdString().c_str());
    if(!inp.is_open())
    {
        return false;   // compile Error
    }
    return true;        // compile successful
}

bool Judge::copyCode(QString source, QString dest)
{
    system(QString("cp " + source + " " + dest + " 2>cpOutput.txt").toStdString().c_str());     // copy file
    std::ifstream inp("cpOutput.txt");
    char x;
    if(inp >> x)
    {
        return false;
    }
    return true;
}

QString Judge::judge(int time, int tstsCount)
{
    std::ofstream judgeInput("judgeInput.txt");
    judgeInput << time << std::endl << tstsCount << std::endl;
    system("chmod 777 ./judge.sh");
    system("./judge.sh < judgeInput.txt > judgeOutput.txt");
    std::ifstream judgeOutput("judgeOutput.txt");
    QString output;
    while(true)
    {
        char str[100];
        if(judgeOutput.getline(str,100))
        {
            output += str;
            output.append('\n');
        }
        else
            break;
    }
    return output;
}

void Judge::removeFile(QString name)
{
    system(QString("if [ -e " + name + " ]; then rm " + name + "; fi;").toStdString().c_str());
}

bool Judge::openLastInput()
{
    system("xdg-open input.txt 2>err.txt");
    std::ifstream err("err.txt");
    char x;
    if(err >> x)
    {
        return false;
    }
    return true;
}

bool Judge::openYourOutput()
{
    system("xdg-open output.txt 2>err.txt");
    std::ifstream err("err.txt");
    char x;
    if(err >> x)
    {
        return false;
    }
    return true;
}

bool Judge::openCorrOutput()
{
    system("xdg-open answer.txt 2>err.txt");
    std::ifstream err("err.txt");
    char x;
    if(err >> x)
    {
        return false;
    }
    return true;
}

bool Judge::openCompileOutput()
{
    system("xdg-open compileOutput.txt 2>err.txt");
    std::ifstream err("err.txt");
    char x;
    if(err >> x)
    {
        return false;
    }
    return true;
}

void Judge::clear()
{
    removeFile(QString("compileOutput.txt"));
    removeFile(QString("input.txt"));
    removeFile(QString("output.txt"));
    removeFile(QString("answer.txt"));
}
