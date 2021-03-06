#include "widget.h"
#include "ui_widget.h"
#include <QLabel>
#include <QPixmap>
#include <QFont>
#include <QDebug>
#include <QStringList>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)  //设置界面
{
    ui->setupUi(this);

    // 设置标题内容
    ui->weight->setText("重量转换");
    ui->length->setText("长度转换");
    ui->area->setText("面积转换");
    ui->volume->setText("体积转换");
    ui->temperature->setText("温度转换");
    ui->money->setText("货币转换");

    QFont a;
    a.setPointSize(13);       //设置字体大小
    ui->weight->setFont(a);
    ui->length->setFont(a);
    ui->area->setFont(a);
    ui->volume->setFont(a);
    ui->temperature->setFont(a);
    ui->money->setFont(a);

    // 设置标题颜色
    ui->Sub_weight_1->setStyleSheet("background-color: rgb(237,194,64)");
    ui->Sub_length_1->setStyleSheet("background-color: rgb(237,194,64)");
    ui->Sub_area_1->setStyleSheet("background-color: rgb(237,194,64)");
    ui->Sub_volume_1->setStyleSheet("background-color: rgb(237,194,64)");
    ui->Sub_temperature_1->setStyleSheet("background-color: rgb(237,194,64)");
    ui->Sub_money_1->setStyleSheet("background-color: rgb(237,194,64)");

    // 设置文本框的提示内容
    // weight
    ui->weight_label_1->setText("（其他制式）");
    ui->weight_label_2->setText("=");
    ui->weight_label_3->setText("（公制）");
    // length
    ui->length_label_1->setText("（其他制式）");
    ui->length_label_2->setText("=");
    ui->length_label_3->setText("（公制）");
    // area
    ui->area_label_1->setText("（其他制式）");
    ui->area_label_2->setText("=");
    ui->area_label_3->setText("（公制）");
    // volume
    ui->volume_label_1->setText("（其他制式）");
    ui->volume_label_2->setText("=");
    ui->volume_label_3->setText("（公制）");
    // temperature
    ui->temperature_label_1->setText("（其他制式）");
    ui->temperature_label_2->setText("=");
    ui->temperature_label_3->setText("（公制）");
    // money
    ui->money_label_1->setText("兑");

    a.setPointSize(12);      //设置字体大小   （"其他制式""=""公制"）
    // weight
    ui->weight_label_1->setFont(a);
    ui->weight_label_2->setFont(a);
    ui->weight_label_3->setFont(a);
    // length
    ui->length_label_1->setFont(a);
    ui->length_label_2->setFont(a);
    ui->length_label_3->setFont(a);
    // area
    ui->area_label_1->setFont(a);
    ui->area_label_2->setFont(a);
    ui->area_label_3->setFont(a);
    // volume
    ui->volume_label_1->setFont(a);
    ui->volume_label_2->setFont(a);
    ui->volume_label_3->setFont(a);
    // temperature
    ui->temperature_label_1->setFont(a);
    ui->temperature_label_2->setFont(a);
    ui->temperature_label_3->setFont(a);
    // money
    a.setPointSize(14);
    ui->money_label_1->setFont(a);     //"兑"字的大小

    // 设置label字体颜色
    ui->money_label_1->setStyleSheet("color:red");   //"兑"字的颜色

    // 设置按钮内容和大小
    // weight
    ui->weight_pushButton_1->setText("其他->公制");
    ui->weight_pushButton_1->setFixedSize(110,30);
    ui->weight_pushButton_2->setText("其他<-公制");
    ui->weight_pushButton_2->setFixedSize(110,30);
    // length
    ui->length_pushButton_1->setText("其他->公制");
    ui->length_pushButton_1->setFixedSize(110,30);
    ui->length_pushButton_2->setText("其他<-公制");
    ui->length_pushButton_2->setFixedSize(110,30);
    // area
    ui->area_pushButton_1->setText("其他->公制");
    ui->area_pushButton_1->setFixedSize(110,30);
    ui->area_pushButton_2->setText("其他<-公制");
    ui->area_pushButton_2->setFixedSize(110,30);
    // volume
    ui->volume_pushButton_1->setText("其他->公制");
    ui->volume_pushButton_1->setFixedSize(110,30);
    ui->volume_pushButton_2->setText("其他<-公制");
    ui->volume_pushButton_2->setFixedSize(110,30);
    // temperature
    ui->temperature_pushButton_1->setText("其他->公制");
    ui->temperature_pushButton_1->setFixedSize(110,30);
    ui->temperature_pushButton_2->setText("其他<-公制");
    ui->temperature_pushButton_2->setFixedSize(110,30);
    // money
    ui->money_pushButton_1->setText("其他->公制");
    ui->money_pushButton_1->setFixedSize(110,30);
    ui->money_pushButton_2->setText("其他<-公制");
    ui->money_pushButton_2->setFixedSize(110,30);


    // 设置按钮字体大小
    a.setPointSize(11);
    // weight
    ui->weight_pushButton_1->setFont(a);
    ui->weight_pushButton_2->setFont(a);
    // length
    ui->length_pushButton_1->setFont(a);
    ui->length_pushButton_2->setFont(a);
    // area
    ui->area_pushButton_1->setFont(a);
    ui->area_pushButton_2->setFont(a);
    // volume
    ui->volume_pushButton_1->setFont(a);
    ui->volume_pushButton_2->setFont(a);
    // temperature
    ui->temperature_pushButton_1->setFont(a);
    ui->temperature_pushButton_2->setFont(a);
    // money
    ui->money_pushButton_1->setFont(a);
    ui->money_pushButton_2->setFont(a);

    // 设置文本框大小
    // weight
    ui->weight_lineEdit_1->setFixedSize(210, 21);
    ui->weight_lineEdit_2->setFixedSize(210, 21);
    // length
    ui->length_lineEdit_1->setFixedSize(210, 21);
    ui->length_lineEdit_2->setFixedSize(210, 21);
    // area
    ui->area_lineEdit_1->setFixedSize(210, 21);
    ui->area_lineEdit_2->setFixedSize(210, 21);
    // volume
    ui->volume_lineEdit_1->setFixedSize(210, 21);
    ui->volume_lineEdit_2->setFixedSize(210, 21);
    // temperature
    ui->temperature_lineEdit_1->setFixedSize(210, 21);
    ui->temperature_lineEdit_2->setFixedSize(210, 21);
    // money
    ui->money_lineEdit_1->setFixedSize(210, 21);
    ui->money_lineEdit_2->setFixedSize(210, 21);

    // 设置comboBox内容
    // weight
    // weight_comboBox_1
    ui->weight_comboBox_1->insertItem(0,"--英制--","0");
    ui->weight_comboBox_1->insertItem(1, "磅", "1");
    ui->weight_comboBox_1->insertItem(2, "盎司", "2");
    ui->weight_comboBox_1->insertItem(3, "英吨", "3");
    ui->weight_comboBox_1->insertItem(4, "美吨", "4");
    ui->weight_comboBox_1->insertItem(5, "打兰", "5");
    ui->weight_comboBox_1->insertItem(6, "格令", "6");
    ui->weight_comboBox_1->insertItem(7, "克拉", "7");
    ui->weight_comboBox_1->insertItem(8, "--市制--", "8");
    ui->weight_comboBox_1->insertItem(9, "市担", "9");
    ui->weight_comboBox_1->insertItem(10, "市斤", "10");
    ui->weight_comboBox_1->insertItem(11, "市两", "11");
    ui->weight_comboBox_1->insertItem(12, "市钱", "12");
    ui->weight_comboBox_1->insertItem(13, "市厘", "13");
    ui->weight_comboBox_1->insertItem(14, "市毫", "14");
    ui->weight_comboBox_1->insertItem(15, "市丝", "15");

    // weight_comboBox_2
    ui->weight_comboBox_2->insertItem(0, "公斤（千克）", "0");
    ui->weight_comboBox_2->insertItem(1, "克", "1");
    ui->weight_comboBox_2->insertItem(2, "吨", "2");
    ui->weight_comboBox_2->insertItem(3, "公担", "3");
    ui->weight_comboBox_2->insertItem(4, "分克", "4");
    ui->weight_comboBox_2->insertItem(5, "厘克", "5");
    ui->weight_comboBox_2->insertItem(6, "毫克", "6");

    // length
    // length_comboBox_1
    ui->length_comboBox_1->insertItem(0, "--英制--", "0");
    ui->length_comboBox_1->insertItem(1, "英寸", "1");
    ui->length_comboBox_1->insertItem(2, "英尺", "2");
    ui->length_comboBox_1->insertItem(3, "码", "3");
    ui->length_comboBox_1->insertItem(4, "英里", "4");
    ui->length_comboBox_1->insertItem(5, "--市制--", "5");
    ui->length_comboBox_1->insertItem(6, "市里", "6");
    ui->length_comboBox_1->insertItem(7, "市引", "7");
    ui->length_comboBox_1->insertItem(8, "市丈", "8");
    ui->length_comboBox_1->insertItem(9, "市尺", "9");
    ui->length_comboBox_1->insertItem(10, "市寸", "10");
    ui->length_comboBox_1->insertItem(11, "市分", "11");
    ui->length_comboBox_1->insertItem(12, "市厘", "12");
    ui->length_comboBox_1->insertItem(13, "市毫", "13");

    // length_comboBox_2
    ui->length_comboBox_2->insertItem(0, "公里（千米）", "2");
    ui->length_comboBox_2->insertItem(1, "米", "1");
    ui->length_comboBox_2->insertItem(2, "海里", "2");
    ui->length_comboBox_2->insertItem(3, "分米", "3");
    ui->length_comboBox_2->insertItem(4, "厘米", "4");
    ui->length_comboBox_2->insertItem(5, "毫米", "5");
    ui->length_comboBox_2->insertItem(6, "微米", "6");
    ui->length_comboBox_2->insertItem(7, "纳米", "7");
    ui->length_comboBox_2->insertItem(8, "皮米", "8");

    // area
    // area_comboBox_1
    ui->area_comboBox_1->insertItem(0, "--英制--", "0");
    ui->area_comboBox_1->insertItem(1, "平方英里", "1");
    ui->area_comboBox_1->insertItem(2, "平方英寸", "2");
    ui->area_comboBox_1->insertItem(3, "平方英尺", "3");
    ui->area_comboBox_1->insertItem(4, "平方码", "4");
    ui->area_comboBox_1->insertItem(5, "英亩", "5");
    ui->area_comboBox_1->insertItem(6, "--市制--", "6");
    ui->area_comboBox_1->insertItem(7, "市顷", "7");
    ui->area_comboBox_1->insertItem(8, "市亩", "8");
    ui->area_comboBox_1->insertItem(9, "市分", "9");
    ui->area_comboBox_1->insertItem(10, "平方市尺", "10");

    // area_comboBox_2
    ui->area_comboBox_2->insertItem(0, "公顷", "0");
    ui->area_comboBox_2->insertItem(1, "公亩", "1");
    ui->area_comboBox_2->insertItem(2, "平方公里", "2");
    ui->area_comboBox_2->insertItem(3, "平方米", "3");
    ui->area_comboBox_2->insertItem(4, "平方分米", "4");
    ui->area_comboBox_2->insertItem(5, "平方厘米", "5");

    // volume
    // volume_comboBox_1
    ui->volume_comboBox_1->insertItem(0, "--英制--", "0");
    ui->volume_comboBox_1->insertItem(1, "英国加仑", "1");
    ui->volume_comboBox_1->insertItem(2, "美国液体加仑", "2");
    ui->volume_comboBox_1->insertItem(3, "美国液体盎司", "3");
    ui->volume_comboBox_1->insertItem(4, "立方英寸", "4");
    ui->volume_comboBox_1->insertItem(5, "立方英尺", "5");
    ui->volume_comboBox_1->insertItem(6, "立方码", "6");
    ui->volume_comboBox_1->insertItem(7, "--市制--", "7");
    ui->volume_comboBox_1->insertItem(8, "立方市寸", "8");
    ui->volume_comboBox_1->insertItem(9, "立方市尺", "9");
    ui->volume_comboBox_1->insertItem(10, "立方市丈", "10");

    // volume_comboBox_2
    ui->volume_comboBox_2->insertItem(0, "立方米", "0");
    ui->volume_comboBox_2->insertItem(1, "立方分米", "1");
    ui->volume_comboBox_2->insertItem(2, "立方厘米", "2");
    ui->volume_comboBox_2->insertItem(3, "升", "3");
    ui->volume_comboBox_2->insertItem(4, "毫升", "4");

    // temperature
    // temperature_comboBox_1
    ui->temperature_comboBox_1->insertItem(0, "华氏", "0");

    // temperature_comboBox_2
    ui->temperature_comboBox_2->insertItem(0, "摄氏", "0");

    // money
    // money_comboBox_1
    ui->money_comboBox_1->insertItem(0, "人民币", "0");
    ui->money_comboBox_1->insertItem(1, "美元", "1");
    ui->money_comboBox_1->insertItem(2, "加拿大元", "2");
    ui->money_comboBox_1->insertItem(3, "澳元", "3");
    ui->money_comboBox_1->insertItem(4, "欧元", "4");
    ui->money_comboBox_1->insertItem(5, "英镑", "5");
    ui->money_comboBox_1->insertItem(6, "日元", "6");
    ui->money_comboBox_1->insertItem(7, "泰铢", "7");
    ui->money_comboBox_1->insertItem(8, "新加坡元", "8");
    ui->money_comboBox_1->insertItem(9, "港元", "9");
    ui->money_comboBox_1->insertItem(10, "新台元", "10");

    // money_coboBox_2
    ui->money_comboBox_2->insertItem(0, "人民币", "0");
    ui->money_comboBox_2->insertItem(1, "美元", "1");
    ui->money_comboBox_2->insertItem(2, "加拿大元", "2");
    ui->money_comboBox_2->insertItem(3, "澳元", "3");
    ui->money_comboBox_2->insertItem(4, "欧元", "4");
    ui->money_comboBox_2->insertItem(5, "英镑", "5");
    ui->money_comboBox_2->insertItem(6, "日元", "6");
    ui->money_comboBox_2->insertItem(7, "泰铢", "7");
    ui->money_comboBox_2->insertItem(8, "新加坡元", "8");
    ui->money_comboBox_2->insertItem(9, "港元", "9");
    ui->money_comboBox_2->insertItem(10, "新台元", "10");

    // 设置comboBox大小
    // weight
    ui->weight_comboBox_1->setFixedSize(110,22);
    ui->weight_comboBox_2->setFixedSize(110,22);
    // length
    ui->length_comboBox_1->setFixedSize(110,22);
    ui->length_comboBox_2->setFixedSize(110,22);
    // area
    ui->area_comboBox_1->setFixedSize(110,22);
    ui->area_comboBox_2->setFixedSize(110,22);
    // volume
    ui->volume_comboBox_1->setFixedSize(110,22);
    ui->volume_comboBox_2->setFixedSize(110,22);
    // temperature
    ui->temperature_comboBox_1->setFixedSize(110,22);
    ui->temperature_comboBox_2->setFixedSize(110,22);
    // money
    ui->money_comboBox_1->setFixedSize(110,22);
    ui->money_comboBox_2->setFixedSize(110,22);




}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_weight_pushButton_1_clicked()    //weight 由其它转换为公制
{
    QString str;
    str = ui->weight_lineEdit_1->text();    //取文本框中的内容
    double dou = str.toDouble();        //qstring转换为double型
    int index_1 = ui->weight_comboBox_1->currentIndex();  //事件过滤器
    int index_2 = ui->weight_comboBox_2->currentIndex();
    switch(index_1)
    {
    case 0:       //在其他类没有选择单位时，取0
    {
        dou = dou * 0;
        str = QString::number(dou);
        ui->weight_lineEdit_1->setText(str);
        ui->weight_lineEdit_2->setText(str);
    }
        break;
    case 1:
    {
        if(index_2 == 0)        // 1磅 = 0.454千克
            dou = dou * 0.454;
        if(index_2 == 1)        // 1磅 = 454克
            dou = dou * 454;
        if(index_2 == 2)        // 1磅 = 0.000454吨
            dou = dou * 0.000454;
        if(index_2 == 3)        // 1磅 = 0.00454公担
            dou = dou * 0.00454;
        if(index_2 == 4)        // 1磅 = 4540分克
            dou = dou * 4540;
        if(index_2 == 5)        // 1磅 = 45400厘克
            dou = dou * 45400;
        if(index_2 == 6)        // 1磅 = 454000毫克
            dou = dou * 454000;
        str = QString::number(dou);
        ui->weight_lineEdit_2->setText(str);   //double型转换为qstring型并输入进文本框
    }
        break;
    case 2:
    {
        if(index_2 == 0)        // 1盎司 = 0.02835千克
            dou = dou * 0.02835;
        if(index_2 == 1)        // 1盎司 = 28.35克
            dou = dou * 28.35;
        if(index_2 == 2)        // 1盎司 = 0.00002835吨
            dou = dou * 0.00002835;
        if(index_2 == 3)        // 1盎司 = 0.0002835公担
            dou = dou * 0.0002835;
        if(index_2 == 4)        // 1盎司 = 283.5分克
            dou = dou * 283.5;
        if(index_2 == 5)        // 1盎司 = 2835厘克
            dou = dou * 2835;
        if(index_2 == 6)        // 1盎司 = 28350毫克
            dou = dou * 28350;

        str = QString::number(dou);
        ui->weight_lineEdit_2->setText(str);
    }
        break;
    case 3:
    {
        if(index_2 == 0)        // 1英吨 = 1020千克
            dou = dou * 1020;
        if(index_2 == 1)        // 1英吨 = 1020000克
            dou = dou * 1020000;
        if(index_2 == 2)        // 1英吨 = 1.02吨
            dou = dou * 1.02;
        if(index_2 == 3)        // 1英吨 = 10.2公担
            dou = dou * 10.2;
        if(index_2 == 4)        // 1英吨 = 10200000分克
            dou = dou * 10200000;
        if(index_2 == 5)        // 1英吨 = 102000000厘克
            dou = dou * 102000000;
        if(index_2 == 6)        // 1英吨 = 1020000000毫克
            dou = dou * 1020000000;

        str = QString::number(dou);
        ui->weight_lineEdit_2->setText(str);
    }
        break;
    case 4:
    {
        if(index_2 == 0)        // 1美吨 = 910千克
            dou = dou * 910;
        if(index_2 == 1)        // 1美吨 = 910000克
            dou = dou * 910000;
        if(index_2 == 2)        // 1美吨 = 0.91吨
            dou = dou * 0.91;
        if(index_2 == 3)        // 1美吨 = 9.1公担
            dou = dou * 9.1;
        if(index_2 == 4)        // 1美吨 = 9100000分克
            dou = dou * 9100000;
        if(index_2 == 5)        // 1美吨 = 91000000厘克
            dou = dou * 91000000;
        if(index_2 == 6)        // 1美吨 = 910000000毫克
            dou = dou * 910000000;

        str = QString::number(dou);
        ui->weight_lineEdit_2->setText(str);
    }
        break;
    case 5:
    {
        if(index_2 == 0)        // 1打兰 = 0.00177千克
            dou = dou * 0.00177;
        if(index_2 == 1)        // 1打兰 = 1.77克
            dou = dou * 1.77;
        if(index_2 == 2)        // 1打兰 = 0.00000177吨
            dou = dou * 0.00000177;
        if(index_2 == 3)        // 1打兰 = 0.0000177公担
            dou = dou * 0.0000177;
        if(index_2 == 4)        // 1打兰 = 17.7分克
            dou = dou * 17.7;
        if(index_2 == 5)        // 1打兰 = 177厘克
            dou = dou * 177;
        if(index_2 == 6)        // 1打兰 = 1770毫克
            dou = dou * 1770;

        str = QString::number(dou);
        ui->weight_lineEdit_2->setText(str);
    }
        break;
    case 6:
    {
        if(index_2 == 0)        // 1格令 = 0.000064千克
            dou = dou * 0.000064;
        if(index_2 == 1)        // 1格令 = 0.064克
            dou = dou * 0.064;
        if(index_2 == 2)        // 1格令 = 0.000000064吨
            dou = dou * 0.000000064;
        if(index_2 == 3)        // 1格令 = 0.00000064公担
            dou = dou * 0.00000064;
        if(index_2 == 4)        // 1格令 = 0.64分克
            dou = dou * 0.64;
        if(index_2 == 5)        // 1格令 = 6.4厘克
            dou = dou * 6.4;
        if(index_2 == 6)        // 1格令 = 64毫克
            dou = dou * 64;

        str = QString::number(dou);
        ui->weight_lineEdit_2->setText(str);
    }
        break;
    case 7:
    {
        if(index_2 == 0)        // 1克拉 = 0.000205千克
            dou = dou * 0.000205;
        if(index_2 == 1)        // 1克拉 = 0.205克
            dou = dou * 0.205;
        if(index_2 == 2)        // 1克拉 = 0.000000205吨
            dou = dou * 0.000000205;
        if(index_2 == 3)        // 1克拉 = 0.00000205公担
            dou = dou * 0.00000205;
        if(index_2 == 4)        // 1克拉 = 2.05分克
            dou = dou * 2.05;
        if(index_2 == 5)        // 1克拉 = 20.5厘克
            dou = dou * 20.5;
        if(index_2 == 6)        // 1克拉 = 205毫克
            dou = dou * 205;

        str = QString::number(dou);
        ui->weight_lineEdit_2->setText(str);
    }
        break;
    case 8:
    {
        dou = dou * 0;
        str = QString::number(dou);
        ui->weight_lineEdit_1->setText(str);
        ui->weight_lineEdit_2->setText(str);
    }
        break;
    case 9:
    {
        if(index_2 == 0)        // 1市担 = 50千克
            dou = dou * 50;
        if(index_2 == 1)        // 1市担 = 50000克
            dou = dou * 50000;
        if(index_2 == 2)        // 1市担 = 0.05吨
            dou = dou * 0.05;
        if(index_2 == 3)        // 1市担 = 0.5公担
            dou = dou * 0.5;
        if(index_2 == 4)        // 1市担 = 500000分克
            dou = dou * 500000;
        if(index_2 == 5)        // 1市担 = 5000000厘克
            dou = dou * 5000000;
        if(index_2 == 6)        // 1市担 = 50000000毫克
            dou = dou * 50000000;

        str = QString::number(dou);
        ui->weight_lineEdit_2->setText(str);
    }
        break;
    case 10:
    {
        if(index_2 == 0)        // 1市斤 = 0.5千克
            dou = dou * 0.5;
        if(index_2 == 1)        // 1市斤 = 500克
            dou = dou * 500;
        if(index_2 == 2)        // 1市斤 = 0.0005吨
            dou = dou * 0.0005;
        if(index_2 == 3)        // 1市斤 = 0.005公担
            dou = dou * 0.005;
        if(index_2 == 4)        // 1市斤 = 5000分克
            dou = dou * 5000;
        if(index_2 == 5)        // 1市斤 = 50000厘克
            dou = dou * 50000;
        if(index_2 == 6)        // 1市斤 = 500000毫克
            dou = dou * 500000;

        str = QString::number(dou);
        ui->weight_lineEdit_2->setText(str);
    }
        break;
    case 11:
    {
        if(index_2 == 0)        // 1市两 = 0.05千克
            dou = dou * 0.05;
        if(index_2 == 1)        // 1市两 = 50克
            dou = dou * 50;
        if(index_2 == 2)        // 1市两 = 0.00005吨
            dou = dou * 0.00005;
        if(index_2 == 3)        // 1市两 = 0.0005公担
            dou = dou * 0.0005;
        if(index_2 == 4)        // 1市两 = 500分克
            dou = dou * 500;
        if(index_2 == 5)        // 1市两 = 5000厘克
            dou = dou * 5000;
        if(index_2 == 6)        // 1市两 = 50000毫克
            dou = dou * 50000;

        str = QString::number(dou);
        ui->weight_lineEdit_2->setText(str);
    }
        break;
    case 12:
    {
        if(index_2 == 0)        // 1市钱 = 0.005千克
            dou = dou * 0.005;
        if(index_2 == 1)        // 1市钱 = 5克
            dou = dou * 5;
        if(index_2 == 2)        // 1市钱 = 0.000005吨
            dou = dou * 0.000005;
        if(index_2 == 3)        // 1市钱 = 0.00005公担
            dou = dou * 0.00005;
        if(index_2 == 4)        // 1市钱 = 50分克
            dou = dou * 50;
        if(index_2 == 5)        // 1市钱 = 500厘克
            dou = dou * 500;
        if(index_2 == 6)        // 1市钱 = 5000毫克
            dou = dou * 5000;

        str = QString::number(dou);
        ui->weight_lineEdit_2->setText(str);
    }
        break;
    case 13:
    {
        if(index_2 == 0)        // 1市厘 = 0.00005千克
            dou = dou * 0.00005;
        if(index_2 == 1)        // 1市厘 = 0.05克
            dou = dou * 0.05;
        if(index_2 == 2)        // 1市厘 = 0.00000005吨
            dou = dou * 0.00000005;
        if(index_2 == 3)        // 1市厘 = 0.0000005公担
            dou = dou * 0.0000005;
        if(index_2 == 4)        // 1市厘 = 0.5分克
            dou = dou * 0.5;
        if(index_2 == 5)        // 1市厘 = 5厘克
            dou = dou * 5;
        if(index_2 == 6)        // 1市厘 = 50毫克
            dou = dou * 50;

        str = QString::number(dou);
        ui->weight_lineEdit_2->setText(str);
    }
        break;
    case 14:
    {
        if(index_2 == 0)        // 1市毫 = 0.000005千克
            dou = dou * 0.000005;
        if(index_2 == 1)        // 1市毫 = 0.005克
            dou = dou * 0.005;
        if(index_2 == 2)        // 1市毫 = 0.000000005吨
            dou = dou * 0.000000005;
        if(index_2 == 3)        // 1市毫 = 0.00000005公担
            dou = dou * 0.00000005;
        if(index_2 == 4)        // 1市毫 = 0.05分克
            dou = dou * 0.05;
        if(index_2 == 5)        // 1市毫 = 0.5厘克
            dou = dou * 0.5;
        if(index_2 == 6)        // 1市毫 = 5毫克
            dou = dou * 5;

        str = QString::number(dou);
        ui->weight_lineEdit_2->setText(str);
    }
        break;
    case 15:
    {
        if(index_2 == 0)        // 1市丝 = 0.0000005千克
            dou = dou * 0.0000005;
        if(index_2 == 1)        // 1市丝 = 0.0005克
            dou = dou * 0.0005;
        if(index_2 == 2)        // 1市丝 = 0.0000000005吨
            dou = dou * 0.0000000005;
        if(index_2 == 3)        // 1市丝 = 0.000000005公担
            dou = dou * 0.000000005;
        if(index_2 == 4)        // 1市丝 = 0.005分克
            dou = dou * 0.005;
        if(index_2 == 5)        // 1市丝 = 0.05厘克
            dou = dou * 0.05;
        if(index_2 == 6)        // 1市丝 = 0.5毫克
            dou = dou * 0.5;

        str = QString::number(dou);
        ui->weight_lineEdit_2->setText(str);
    }
        break;
    default :
        break;
    }

}

void Widget::on_weight_pushButton_2_clicked()   //weight 公制转换为其他类
{
    QString str;
    str = ui->weight_lineEdit_2->text();
    double dou = str.toDouble();
    int index_1 = ui->weight_comboBox_1->currentIndex();
    int index_2 = ui->weight_comboBox_2->currentIndex();
    switch (index_2) {
    case 0:
    {
        if(index_1 == 0)
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->weight_lineEdit_1->setText(str);
            ui->weight_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 1)        // 1千克 = 2.205磅
            dou = dou * 2.205;
        if(index_1 == 2)        // 1千克 = 35.274盎司
            dou = dou * 35.274;
        if(index_1 == 3)        // 1千克 = 0.000984英吨
            dou = dou * 0.000984;
        if(index_1 == 4)        // 1千克 = 0.001102美吨
            dou = dou * 0.001102;
        if(index_1 == 5)        // 1千克 = 564.383打兰
            dou = dou * 564.383;
        if(index_1 == 6)        // 1千克 = 15432.358格令
            dou = dou * 15432.358;
        if(index_1 == 7)        // 1千克 = 4877.561克拉
            dou = dou * 4877.561;
        if(index_1 == 8)        //以下为市值
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->weight_lineEdit_1->setText(str);
            ui->weight_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 9)        // 1千克 = 0.2市担
            dou = dou * 0.02;
        if(index_1 == 10)       // 1千克 = 2市斤
            dou = dou * 2;
        if(index_1 == 11)       // 1千克 = 20市两
            dou = dou * 20;
        if(index_1 == 12)       // 1千克 = 200市钱
            dou = dou * 200;
        if(index_1 == 13)       // 1千克 = 20000市厘
            dou = dou * 20000;
        if(index_1 == 14)       // 1千克 = 200000市毫
            dou = dou * 200000;
        if(index_1 == 15)       // 1千克 = 2000000市丝
            dou = dou * 2000000;

        str = QString::number(dou);
        ui->weight_lineEdit_1->setText(str);
    }
        break;
    case 1:
    {
        if(index_1 == 0)
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->weight_lineEdit_1->setText(str);
            ui->weight_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 1)        // 1克 = 0.002205磅
            dou = dou * 0.002205;
        if(index_1 == 2)        // 1克 = 0.035274盎司
            dou = dou * 0.035274;
        if(index_1 == 3)        // 1克 = 0.000000984英吨
            dou = dou * 0.000000984;
        if(index_1 == 4)        // 1克 = 0.000001102美吨
            dou = dou * 0.000001102;
        if(index_1 == 5)        // 1克 = 0.564383打兰
            dou = dou * 0.564383;
        if(index_1 == 6)        // 1克 = 15.432358格令
            dou = dou * 15.432358;
        if(index_1 == 7)        // 1克 = 4.877561克拉
            dou = dou * 4.877561;
        if(index_1 == 8)
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->weight_lineEdit_1->setText(str);
            ui->weight_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 9)        // 1克 = 0.00002市担
            dou = dou * 0.00002;
        if(index_1 == 10)       // 1克 = 0.002市斤
            dou = dou * 0.002;
        if(index_1 == 11)       // 1克 = 0.02市两
            dou = dou * 0.02;
        if(index_1 == 12)       // 1克 = 0.2市钱
            dou = dou * 0.2;
        if(index_1 == 13)       // 1克 = 20市厘
            dou = dou * 20;
        if(index_1 == 14)       // 1克 = 200市毫
            dou = dou * 200;
        if(index_1 == 15)       // 1克 = 2000市丝
            dou = dou * 2000;

        str = QString::number(dou);
        ui->weight_lineEdit_1->setText(str);
    }
        break;
    case 2:
    {
        if(index_1 == 0)
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->weight_lineEdit_1->setText(str);
            ui->weight_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 1)        // 1吨 = 2205磅
            dou = dou * 2205;
        if(index_1 == 2)        // 1吨 = 35274盎司
            dou = dou * 35274;
        if(index_1 == 3)        // 1吨 = 0.984英吨
            dou = dou * 0.984;
        if(index_1 == 4)        // 1吨 = 1.102美吨
            dou = dou * 1.102;
        if(index_1 == 5)        // 1吨 = 564383打兰
            dou = dou * 564383;
        if(index_1 == 6)        // 1吨 = 15432358格令
            dou = dou * 15432358;
        if(index_1 == 7)        // 1吨 = 4877561克拉
            dou = dou * 4877561;
        if(index_1 == 8)
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->weight_lineEdit_1->setText(str);
            ui->weight_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 9)        // 1吨 = 20市担
            dou = dou * 20;
        if(index_1 == 10)       // 1吨 = 2000市斤
            dou = dou * 2000;
        if(index_1 == 11)       // 1吨 = 20000市两
            dou = dou * 20000;
        if(index_1 == 12)       // 1吨 = 200000市钱
            dou = dou * 200000;
        if(index_1 == 13)       // 1吨 = 20000000市厘
            dou = dou * 20000000;
        if(index_1 == 14)       // 1吨 = 200000000市毫
            dou = dou * 200000000;
        if(index_1 == 15)       // 1吨 = 2000000000市丝
            dou = dou * 2000000000;

        str = QString::number(dou);
        ui->weight_lineEdit_1->setText(str);
    }
        break;
    case 3:
    {
        if(index_1 == 0)
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->weight_lineEdit_1->setText(str);
            ui->weight_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 1)        // 1公担 = 220.5磅
            dou = dou * 220.5;
        if(index_1 == 2)        // 1公担 = 3527.4盎司
            dou = dou * 3527.4;
        if(index_1 == 3)        // 1公担 = 0.0984英吨
            dou = dou * 0.0984;
        if(index_1 == 4)        // 1公担 = 0.1102美吨
            dou = dou * 0.1102;
        if(index_1 == 5)        // 1公担 = 56438.3打兰
            dou = dou * 56438.3;
        if(index_1 == 6)        // 1公担 = 1543235.8格令
            dou = dou * 1543235.8;
        if(index_1 == 7)        // 1公担 = 487756.1克拉
            dou = dou * 487756.1;
        if(index_1 == 8)
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->weight_lineEdit_1->setText(str);
            ui->weight_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 9)        // 1公担 = 2市担
            dou = dou * 2;
        if(index_1 == 10)       // 1公担 = 200市斤
            dou = dou * 200;
        if(index_1 == 11)       // 1公担 = 2000市两
            dou = dou * 2000;
        if(index_1 == 12)       // 1公担 = 20000市钱
            dou = dou * 20000;
        if(index_1 == 13)       // 1公担 = 2000000市厘
            dou = dou * 2000000;
        if(index_1 == 14)       // 1公担 = 20000000市毫
            dou = dou * 20000000;
        if(index_1 == 15)       // 1公担 = 200000000市丝
            dou = dou * 200000000;

        str = QString::number(dou);
        ui->weight_lineEdit_1->setText(str);
    }
        break;
    case 4:
    {
        if(index_1 == 0)
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->weight_lineEdit_1->setText(str);
            ui->weight_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 1)        // 1分克 = 0.0000002205磅
            dou = dou * 0.0000002205;
        if(index_1 == 2)        // 1分克 = 0.0000035274盎司
            dou = dou * 0.0000035274;
        if(index_1 == 3)        // 1分克 = 0.0000000000984英吨
            dou = dou * 0.0000000000984;
        if(index_1 == 4)        // 1分克 = 0.0000000001102美吨
            dou = dou * 0.0000000001102;
        if(index_1 == 5)        // 1分克 = 0.0000564383打兰
            dou = dou * 0.0000564383;
        if(index_1 == 6)        // 1分克 = 0.0015432358格令
            dou = dou * 0.0015432358;
        if(index_1 == 7)        // 1分克 = 0.0004877561克拉
            dou = dou * 0.0004877561;
        if(index_1 == 8)
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->weight_lineEdit_1->setText(str);
            ui->weight_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 9)        // 1分克 = 0.000000002市担
            dou = dou * 0.000000002;
        if(index_1 == 10)       // 1分克 = 0.0000002市斤
            dou = dou * 0.0000002;
        if(index_1 == 11)       // 1分克 = 0.000002市两
            dou = dou * 0.000002;
        if(index_1 == 12)       // 1分克 = 0.00002市钱
            dou = dou * 0.00002;
        if(index_1 == 13)       // 1分克 = 0.002市厘
            dou = dou * 0.002;
        if(index_1 == 14)       // 1分克 = 0.02市毫
            dou = dou * 0.02;
        if(index_1 == 15)       // 1分克 = 0.2市丝
            dou = dou * 0.2;

        str = QString::number(dou);
        ui->weight_lineEdit_1->setText(str);
    }
        break;
    case 5:
    {
        if(index_1 == 0)
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->weight_lineEdit_1->setText(str);
            ui->weight_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 1)        // 1厘克 = 0.00000002205磅
            dou = dou * 0.00000002205;
        if(index_1 == 2)        // 1厘克 = 0.00000035274盎司
            dou = dou * 0.00000035274;
        if(index_1 == 3)        // 1厘克 = 0.00000000000984英吨
            dou = dou * 0.00000000000984;
        if(index_1 == 4)        // 1厘克 = 0.00000000001102美吨
            dou = dou * 0.00000000001102;
        if(index_1 == 5)        // 1厘克 = 0.00000564383打兰
            dou = dou * 0.00000564383;
        if(index_1 == 6)        // 1厘克 = 0.00015432358格令
            dou = dou * 0.00015432358;
        if(index_1 == 7)        // 1厘克 = 0.00004877561克拉
            dou = dou * 0.00004877561;
        if(index_1 == 8)
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->weight_lineEdit_1->setText(str);
            ui->weight_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 9)        // 1厘克 = 0.0000000002市担
            dou = dou * 0.0000000002;
        if(index_1 == 10)       // 1厘克 = 0.00000002市斤
            dou = dou * 0.00000002;
        if(index_1 == 11)       // 1厘克 = 0.0000002市两
            dou = dou * 0.0000002;
        if(index_1 == 12)       // 1厘克 = 0.000002市钱
            dou = dou * 0.000002;
        if(index_1 == 13)       // 1厘克 = 0.0002市厘
            dou = dou * 0.0002;
        if(index_1 == 14)       // 1厘克 = 0.002市毫
            dou = dou * 0.002;
        if(index_1 == 15)       // 1厘克 = 0.02市丝
            dou = dou * 0.02;

        str = QString::number(dou);
        ui->weight_lineEdit_1->setText(str);
    }
        break;
    case 6:
    {
        if(index_1 == 0)
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->weight_lineEdit_1->setText(str);
            ui->weight_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 1)        // 1毫克 = 0.000000002205磅
            dou = dou * 0.000000002205;
        if(index_1 == 2)        // 1毫克 = 0.000000035274盎司
            dou = dou * 0.000000035274;
        if(index_1 == 3)        // 1毫克 = 0.000000000000984英吨
            dou = dou * 0.000000000000984;
        if(index_1 == 4)        // 1毫克 = 0.000000000001102美吨
            dou = dou * 0.000000000001102;
        if(index_1 == 5)        // 1毫克 = 0.000000564383打兰
            dou = dou * 0.000000564383;
        if(index_1 == 6)        // 1毫克 = 0.000015432358格令
            dou = dou * 0.000015432358;
        if(index_1 == 7)        // 1毫克 = 0.000004877561克拉
            dou = dou * 0.000004877561;
        if(index_1 == 8)
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->weight_lineEdit_1->setText(str);
            ui->weight_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 9)        // 1毫克 = 0.00000000002市担
            dou = dou * 0.00000000002;
        if(index_1 == 10)       // 1毫克 = 0.000000002市斤
            dou = dou * 0.000000002;
        if(index_1 == 11)       // 1毫克 = 0.00000002市两
            dou = dou * 0.00000002;
        if(index_1 == 12)       // 1毫克 = 0.0000002市钱
            dou = dou * 0.0000002;
        if(index_1 == 13)       // 1毫克 = 0.00002市厘
            dou = dou * 0.00002;
        if(index_1 == 14)       // 1毫克 = 0.0002市毫
            dou = dou * 0.0002;
        if(index_1 == 15)       // 1毫克 = 0.002市丝
            dou = dou * 0.002;

        str = QString::number(dou);
        ui->weight_lineEdit_1->setText(str);
    }
        break;
    default:
        break;
    }
}

void Widget::on_length_pushButton_1_clicked()//length
{
    QString str;
    str = ui->length_lineEdit_1->text();
    double dou = str.toDouble();
    int index_1 = ui->length_comboBox_1->currentIndex();
    int index_2 = ui->length_comboBox_2->currentIndex();
    switch(index_1)
    {
    case 0:
    {
        dou = dou * 0;
        str = QString::number(dou);
        ui->length_lineEdit_1->setText(str);
        ui->length_lineEdit_1->setText(str);
    }
        break;
    case 1:
    {
        if(index_2 == 0)        // 1英寸 = 0.0000254千米
                dou = dou * 0.0000254;
        if(index_2 == 1)        // 1英寸 = 0.0254米
                dou = dou * 0.0254;
        if(index_2 == 2)        // 1英寸 = 0.0000137海里
                dou = dou * 0.0000254;
        if(index_2 == 3)        // 1英寸 = 0.254分米
                dou = dou * 0.254;
        if(index_2 == 4)        // 1英寸 = 2.54厘米
                dou = dou * 2.54;
        if(index_2 == 5)        // 1英寸 = 25.4毫米
                dou = dou * 25.4;
        if(index_2 == 6)        // 1英寸 = 25400微米
                dou = dou * 25400;
        if(index_2 == 7)        // 1英寸 = 25400000纳米
                dou = dou * 25400000;
        if(index_2 == 8)        // 1英寸 = 25400000000皮米
                dou = dou * 25400000000;

        str = QString::number(dou);
        ui->length_lineEdit_2->setText(str);   //double型转换为qstring型并输入进文本框
    }
        break;
    case 2:
    {
        if(index_2 == 0)        // 1英尺 = 0.0003048千米
                dou = dou * 0.0003048;
        if(index_2 == 1)        // 1英尺 = 0.3048米
                dou = dou * 0.3084;
        if(index_2 == 2)        // 1英尺 = 0.0001646海里
                dou = dou * 0.0001646;
        if(index_2 == 3)        // 1英尺 = 3.048分米
                dou = dou * 3.048;
        if(index_2 == 4)        // 1英尺 = 30.48厘米
                dou = dou * 30.48;
        if(index_2 == 5)        // 1英尺 = 304.8毫米
                dou = dou * 304.8;
        if(index_2 == 6)        // 1英尺 = 304800微米
                dou = dou * 304800;
        if(index_2 == 7)        // 1英尺 = 304800000纳米
                dou = dou * 304800000;
        if(index_2 == 8)        // 1英尺 = 304800000000皮米
                dou = dou * 304800000000;

        str = QString::number(dou);
        ui->length_lineEdit_2->setText(str);
    }
        break;
    case 3:
    {
        if(index_2 == 0)        // 1码 = 0.0009144千米
                dou = dou * 0.0009144;
        if(index_2 == 1)        // 1码 = 0.9144米
                dou = dou * 0.9144;
        if(index_2 == 2)        // 1码 = 0.0004937海里
                dou = dou * 0.0004937;
        if(index_2 == 3)        // 1码 = 9.144分米
                dou = dou * 9.144;
        if(index_2 == 4)        // 1码 = 91.44厘米
                dou = dou * 91.44;
        if(index_2 == 5)        // 1码 = 914.4毫米
                dou = dou * 914.4;
        if(index_2 == 6)        // 1码 = 914400微米
                dou = dou * 914400;
        if(index_2 == 7)        // 1码 = 914400000纳米
                dou = dou * 914400000;
        if(index_2 == 8)        // 1码 = 914400000000皮米
                dou = dou * 914400000000;

        str = QString::number(dou);
        ui->length_lineEdit_2->setText(str);
    }
        break;
    case 4:
    {
        if(index_2 == 0)        // 1英里 = 1.609344千米
                dou = dou * 1.609344;
        if(index_2 == 1)        // 1英里 = 1609.344米
                dou = dou * 1609.344;
        if(index_2 == 2)        // 1英里 = 0.8689762海里
                dou = dou * 0.8689762;
        if(index_2 == 3)        // 1英里 = 16093.44分米
                dou = dou * 16093.44;
        if(index_2 == 4)        // 1英里 = 160934.4厘米
                dou = dou * 160934.4;
        if(index_2 == 5)        // 1英里 = 1609344毫米
                dou = dou * 1609344;
        if(index_2 == 6)        // 1英里 = 1609344000微米
                dou = dou * 1609344000;
        if(index_2 == 7)        // 1英里 = 1609344000000纳米
                dou = dou * 1609344000000;
        if(index_2 == 8)        // 1英里 = 1609344000000000皮米
                dou = dou * 1609344000000000;

        str = QString::number(dou);
        ui->length_lineEdit_2->setText(str);
    }
        break;
    case 6:
    {
        if(index_2 == 0)        // 1市里 = 0.5千米
                dou = dou * 0.5;
        if(index_2 == 1)        // 1市里 = 500米
                dou = dou * 500;
        if(index_2 == 2)        // 1市里 = 0.2699784海里
                dou = dou * 0.2699784;
        if(index_2 == 3)        // 1市里 = 5000分米
                dou = dou * 5000;
        if(index_2 == 4)        // 1市里 = 50000厘米
                dou = dou * 50000;
        if(index_2 == 5)        // 1市里 = 500000毫米
                dou = dou * 500000;
        if(index_2 == 6)        // 1市里 = 500000000微米
                dou = dou * 500000000;
        if(index_2 == 7)        // 1市里 = 500000000000纳米
                dou = dou * 500000000000;
        if(index_2 == 8)        // 1市里 = 500000000000000皮米
                dou = dou * 500000000000000;

        str = QString::number(dou);
        ui->length_lineEdit_2->setText(str);
    }
        break;
    case 7:
    {
        if(index_2 == 0)        // 1市引 = 0.033333千米
                dou = dou * 0.033333;
        if(index_2 == 1)        // 1市引 = 3.3333米
                dou = dou * 3.3333;
        if(index_2 == 2)        // 1市引 = 0.017999海里
                dou = dou * 0.017999;
        if(index_2 == 3)        // 1市引 = 33.33333分米
                dou = dou * 33.33333;
        if(index_2 == 4)        // 1市引 = 333.33333厘米
                dou = dou * 333.33333;
        if(index_2 == 5)        // 1市引 = 3333.33333毫米
                dou = dou * 3333.33333;
        if(index_2 == 6)        // 1市引 = 3333333.33333微米
                dou = dou * 3333333.33333;
        if(index_2 == 7)        // 1市引 = 3333333333.333纳米
                dou = dou * 3333333333.333;
        if(index_2 == 8)        // 1市引 = 3333333333333.333皮米
                dou = dou * 3333333333333.333;

        str = QString::number(dou);
        ui->length_lineEdit_2->setText(str);
    }
        break;
    case 8:
    {
        if(index_2 == 0)        // 1丈 = 0.0033333千米
                dou = dou * 0.0033333;
        if(index_2 == 1)        // 1丈 = 3.3333333米
                dou = dou * 3.3333333;
        if(index_2 == 2)        // 1丈 = 0.0017999海里
                dou = dou * 0.0017999;
        if(index_2 == 3)        // 1丈 = 33.3333333分米
                dou = dou * 33.3333333;
        if(index_2 == 4)        // 1丈 = 333.3333333厘米
                dou = dou * 333.3333333;
        if(index_2 == 5)        // 1丈 = 3333.3333333毫米
                dou = dou * 3333.3333333;
        if(index_2 == 6)        // 1丈 = 3333333.333333微米
                dou = dou * 3333333.333333;
        if(index_2 == 7)        // 1丈 = 3333333333.333纳米
                dou = dou * 3333333333.333;
        if(index_2 == 8)        // 1丈 = 3333333333333皮米
                dou = dou * 3333333333333;

        str = QString::number(dou);
        ui->length_lineEdit_2->setText(str);
    }
        break;
    case 9:
    {
        if(index_2 == 0)        // 1尺 = 0.0003333千米
                dou = dou * 0.0003333;
        if(index_2 == 1)        // 1尺 = 0.3333333米
                dou = dou * 0.3333333;
        if(index_2 == 2)        // 1尺 = 0.00018海里
                dou = dou * 0.00018;
        if(index_2 == 3)        // 1尺 = 3.3333333分米
                dou = dou * 3.3333333;
        if(index_2 == 4)        // 1尺 = 33.3333333厘米
                dou = dou * 33.3333333;
        if(index_2 == 5)        // 1尺 = 333.3333333毫米
                dou = dou * 333.3333333;
        if(index_2 == 6)        // 1尺 = 333333.3333333微米
                dou = dou * 333333.3333333;
        if(index_2 == 7)        // 1尺 = 333333333.3333纳米
                dou = dou * 333333333.3333;
        if(index_2 == 8)        // 1尺 = 333333333333.3皮米
                dou = dou * 333333333333.3;

        str = QString::number(dou);
        ui->length_lineEdit_2->setText(str);
    }
        break;
    case 10:
    {
        if(index_2 == 0)        // 1寸 = 0.0000333千米
                dou = dou * 0.0000333;
        if(index_2 == 1)        // 1寸 = 0.0333333米
                dou = dou * 0.0333333;
        if(index_2 == 2)        // 1寸 = 0.000018海里
                dou = dou * 0.000018;
        if(index_2 == 3)        // 1寸 = 0.3333333分米
                dou = dou * 0.3333333;
        if(index_2 == 4)        // 1寸 = 3.3333333厘米
                dou = dou * 3.3333333;
        if(index_2 == 5)        // 1寸 = 33.3333333毫米
                dou = dou * 33.3333333;
        if(index_2 == 6)        // 1寸 = 33333.3333333微米
                dou = dou * 33333.3333333;
        if(index_2 == 7)        // 1寸 = 33333333.33333纳米
                dou = dou * 33333333.33333;
        if(index_2 == 8)        // 1寸 = 33333333333.33皮米
                dou = dou * 33333333333.33;

        str = QString::number(dou);
        ui->length_lineEdit_2->setText(str);
    }
        break;
    case 11:
    {
        if(index_2 == 0)        // 1分 = 0.0000033333千米
                dou = dou * 0.0000033333;
        if(index_2 == 1)        // 1分 = 0.0033333米
                dou = dou * 0.0033333;
        if(index_2 == 2)        // 1分 = 0.0000017999海里
                dou = dou * 0.0000017999;
        if(index_2 == 3)        // 1分 = 0.0333333分米
                dou = dou * 0.0333333;
        if(index_2 == 4)        // 1分 = 0.3333333厘米
                dou = dou * 0.3333333;
        if(index_2 == 5)        // 1分 = 3.3333333毫米
                dou = dou * 3.3333333;
        if(index_2 == 6)        // 1分 = 3333.3333333微米
                dou = dou * 3333.3333333;
        if(index_2 == 7)        // 1分 = 3333333.333333纳米
                dou = dou * 3333333.333333;
        if(index_2 == 8)        // 1分 = 3333333333.333皮米
                dou = dou * 3333333333.333;

        str = QString::number(dou);
        ui->length_lineEdit_2->setText(str);
    }
        break;
    case 12:
    {
        if(index_2 == 0)        // 1厘 = 0.0000003333千米
                dou = dou * 0.0000003333;
        if(index_2 == 1)        // 1厘 = 0.0003333米
                dou = dou * 0.0003333;
        if(index_2 == 2)        // 1厘 = 0.00000017999海里
                dou = dou * 0.00000017999;
        if(index_2 == 3)        // 1厘 = 0.0033333分米
                dou = dou * 0.0033333;
        if(index_2 == 4)        // 1厘 = 0.0333333厘米
                dou = dou * 0.0333333;
        if(index_2 == 5)        // 1厘 = 0.3333333毫米
                dou = dou * 0.3333333;
        if(index_2 == 6)        // 1厘 = 333.3333333微米
                dou = dou * 333.3333333;
        if(index_2 == 7)        // 1厘 = 333333.3333333纳米
                dou = dou * 333333.3333333;
        if(index_2 == 8)        // 1厘 = 333333333.3333皮米
                dou = dou * 333333333.3333;

        str = QString::number(dou);
        ui->length_lineEdit_2->setText(str);
    }
        break;
    case 13:
    {
        if(index_2 == 0)        // 1毫 = 0.00000003333千米
                dou = dou * 0.00000003333;
        if(index_2 == 1)        // 1毫 = 0.0000333米
                dou = dou * 0.0000333;
        if(index_2 == 2)        // 1毫 = 0.000000017999海里
                dou = dou * 0.000000017999;
        if(index_2 == 3)        // 1毫 = 0.0003333分米
                dou = dou * 0.0003333;
        if(index_2 == 4)        // 1毫 = 0.0033333厘米
                dou = dou * 0.0033333;
        if(index_2 == 5)        // 1毫 = 0.0333333毫米
                dou = dou * 0.0333333;
        if(index_2 == 6)        // 1毫 = 33.3333333微米
                dou = dou * 33.3333333;
        if(index_2 == 7)        // 1毫 = 33333.3333333纳米
                dou = dou * 33333.3333333;
        if(index_2 == 8)        // 1毫 = 33333333.33333皮米
                dou = dou * 33333333.33333;

        str = QString::number(dou);
        ui->length_lineEdit_2->setText(str);
    }
        break;
    default:
        break;
    }
}

void Widget::on_length_pushButton_2_clicked()//length
{
    QString str;
    str = ui->length_lineEdit_2->text();
    double dou = str.toDouble();
    int index_1 = ui->length_comboBox_1->currentIndex();
    int index_2 = ui->length_comboBox_2->currentIndex();
    switch (index_2)
    {
    case 0:
    {
        if(index_1 == 0)
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->length_lineEdit_1->setText(str);
            ui->length_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 1)        // 1千米 = 39370.0787402英寸
            dou = dou * 39370.0787402;
        if(index_1 == 2)        // 1千米 = 3280.839895英尺
            dou = dou * 3280.839895;
        if(index_1 == 3)        // 1千米 = 1093.6132983码
            dou = dou * 1093.6132983;
        if(index_1 == 4)        // 1千米 = 0.6213712英里
            dou = dou * 0.6213712;
        if(index_1 == 5)       //以下为市值
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->length_lineEdit_1->setText(str);
            ui->length_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 6)        // 1千米 = 2市里
            dou = dou * 2;
        if(index_1 == 7)        // 1千米 = 30市引
            dou = dou * 30;
        if(index_1 == 8)        // 1千米 = 300市丈
            dou = dou * 300;
        if(index_1 == 9)        // 1千米 = 3000市尺
            dou = dou * 3000;
        if(index_1 == 10)       // 1千米 = 30000市寸
            dou = dou * 30000;
        if(index_1 == 11)       // 1千米 = 300000市分
            dou = dou * 300000;
        if(index_1 == 12)       // 1千米 = 3000000市厘
            dou = dou * 3000000;
        if(index_1 == 13)       // 1千米 = 30000000市毫
            dou = dou * 30000000;


        str = QString::number(dou);
        ui->length_lineEdit_1->setText(str);
    }
        break;
    case 1:
    {
        if(index_1 == 0)
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->length_lineEdit_1->setText(str);
            ui->length_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 1)        // 1米 = 39.3700787英寸
            dou = dou * 39.3700787;
        if(index_1 == 2)        // 1米 = 3.2808399英尺
            dou = dou * 3.2808399;
        if(index_1 == 3)        // 1米 = 1.0936133码
            dou = dou * 1.0936133;
        if(index_1 == 4)        // 1米 = 0.0006214英里
            dou = dou * 0.0006214;
        if(index_1 == 5)       //以下为市值
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->length_lineEdit_1->setText(str);
            ui->length_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 6)        // 1米 = 0.002市里
            dou = dou * 0.002;
        if(index_1 == 7)        // 1米 = 0.03市引
            dou = dou * 0.03;
        if(index_1 == 8)        // 1米 = 0.3市丈
            dou = dou * 0.3;
        if(index_1 == 9)        // 1米 = 3市尺
            dou = dou * 3;
        if(index_1 == 10)       // 1米 = 30市寸
            dou = dou * 30;
        if(index_1 == 11)       // 1米 = 300市分
            dou = dou * 300;
        if(index_1 == 12)       // 1米 = 3000市厘
            dou = dou * 3000;
        if(index_1 == 13)       // 1米 = 30000市毫
            dou = dou * 30000;

        str = QString::number(dou);
        ui->length_lineEdit_1->setText(str);
    }
        break;
    case 2:
    {
        if(index_1 == 0)
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->length_lineEdit_1->setText(str);
            ui->length_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 1)        // 1海里 = 72913.3858268英寸
            dou = dou * 72913.3858268;
        if(index_1 == 2)        // 1海里 = 6076.1154856英尺
            dou = dou * 6076.1154856;
        if(index_1 == 3)        // 1海里 = 2025.3718285码
            dou = dou * 2025.3718285;
        if(index_1 == 4)        // 1海里 = 1.1507794英里
            dou = dou * 1.1507794;
        if(index_1 == 5)       //以下为市值
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->length_lineEdit_1->setText(str);
            ui->length_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 6)        // 1海里 = 3.704市里
            dou = dou * 3.704;
        if(index_1 == 7)        // 1海里 = 55.56市引
            dou = dou * 55.56;
        if(index_1 == 8)        // 1海里 = 555.6市丈
            dou = dou * 555.6;
        if(index_1 == 9)        // 1海里 = 5556市尺
            dou = dou * 5556;
        if(index_1 == 10)       // 1海里 = 55560市寸
            dou = dou * 55560;
        if(index_1 == 11)       // 1海里 = 555600市分
            dou = dou * 555600;
        if(index_1 == 12)       // 1海里 = 5556000市厘
            dou = dou * 5556000;
        if(index_1 == 13)       // 1海里 = 55560000市毫
            dou = dou * 55560000;


        str = QString::number(dou);
        ui->length_lineEdit_1->setText(str);
    }
        break;
    case 3:
    {
        if(index_1 == 0)
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->length_lineEdit_1->setText(str);
            ui->length_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 1)        // 1分米 = 3.9370079英寸
            dou = dou * 3.9370079;
        if(index_1 == 2)        // 1分米 = 0.328084英尺
            dou = dou * 0.328084;
        if(index_1 == 3)        // 1分米 = 0.1093613码
            dou = dou * 0.1093613;
        if(index_1 == 4)        // 1分米 = 0.0000621英里
            dou = dou * 0.0000621;
        if(index_1 == 5)       //以下为市值
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->length_lineEdit_1->setText(str);
            ui->length_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 6)        // 1分米 = 0.0002市里
            dou = dou * 0.0002;
        if(index_1 == 7)        // 1分米 = 0.003市引
            dou = dou * 0.003;
        if(index_1 == 8)        // 1分米 = 0.03市丈
            dou = dou * 0.03;
        if(index_1 == 9)        // 1分米 = 0.3市尺
            dou = dou * 0.3;
        if(index_1 == 10)       // 1分米 = 3市寸
            dou = dou * 3;
        if(index_1 == 11)       // 1分米 = 30市分
            dou = dou * 30;
        if(index_1 == 12)       // 1分米 = 300市厘
            dou = dou * 300;
        if(index_1 == 13)       // 1分米 = 3000市毫
            dou = dou * 3000;


        str = QString::number(dou);
        ui->length_lineEdit_1->setText(str);
    }
        break;
    case 4:
    {
        if(index_1 == 0)
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->length_lineEdit_1->setText(str);
            ui->length_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 1)        // 1厘米 = 0.39370079英寸
            dou = dou * 0.39370079;
        if(index_1 == 2)        // 1厘米 = 0.0328084英尺
            dou = dou * 0.0328084;
        if(index_1 == 3)        // 1厘米 = 0.01093613码
            dou = dou * 0.01093613;
        if(index_1 == 4)        // 1厘米 = 0.00000621英里
            dou = dou * 0.00000621;
        if(index_1 == 5)       //以下为市值
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->length_lineEdit_1->setText(str);
            ui->length_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 6)        // 1厘米 = 0.00002市里
            dou = dou * 0.00002;
        if(index_1 == 7)        // 1厘米 = 0.0003市引
            dou = dou * 0.0003;
        if(index_1 == 8)        // 1厘米 = 0.003市丈
            dou = dou * 0.003;
        if(index_1 == 9)        // 1厘米 = 0.03市尺
            dou = dou * 0.03;
        if(index_1 == 10)       // 1厘米 = 0.3市寸
            dou = dou * 0.3;
        if(index_1 == 11)       // 1厘米 = 3市分
            dou = dou * 3;
        if(index_1 == 12)       // 1厘米 = 30市厘
            dou = dou * 30;
        if(index_1 == 13)       // 1厘米 = 300市毫
            dou = dou * 300;


        str = QString::number(dou);
        ui->length_lineEdit_1->setText(str);
    }
        break;

    case 5:
    {
        if(index_1 == 0)
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->length_lineEdit_1->setText(str);
            ui->length_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 1)        // 1毫米 = 0.039370079英寸
            dou = dou * 0.039370079;
        if(index_1 == 2)        // 1毫米 = 0.00328084英尺
            dou = dou * 0.00328084;
        if(index_1 == 3)        // 1毫米 = 0.001093613码
            dou = dou * 0.001093613;
        if(index_1 == 4)        // 1毫米 = 0.000000621英里
            dou = dou * 0.000000621;
        if(index_1 == 5)       //以下为市值
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->length_lineEdit_1->setText(str);
            ui->length_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 6)        // 1毫米 = 0.000002市里
            dou = dou * 0.000002;
        if(index_1 == 7)        // 1毫米 = 0.00003市引
            dou = dou * 0.00003;
        if(index_1 == 8)        // 1毫米 = 0.0003市丈
            dou = dou * 0.0003;
        if(index_1 == 9)        // 1毫米 = 0.003市尺
            dou = dou * 0.003;
        if(index_1 == 10)       // 1毫米 = 0.03市寸
            dou = dou * 0.03;
        if(index_1 == 11)       // 1毫米 = 0.3市分
            dou = dou * 0.3;
        if(index_1 == 12)       // 1毫米 = 3市厘
            dou = dou * 3;
        if(index_1 == 13)       // 1毫米 = 30市毫
            dou = dou * 30;


        str = QString::number(dou);
        ui->length_lineEdit_1->setText(str);
    }
        break;
    case 6:
    {
        if(index_1 == 0)
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->length_lineEdit_1->setText(str);
            ui->length_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 1)        // 1微米 = 0.000039370079英寸
            dou = dou * 0.000039370079;
        if(index_1 == 2)        // 1微米 = 0.00000328084英尺
            dou = dou * 0.00000328084;
        if(index_1 == 3)        // 1微米 = 0.000001093613码
            dou = dou * 0.000001093613;
        if(index_1 == 4)        // 1微米 = 0.000000000621英里
            dou = dou * 0.000000000621;
        if(index_1 == 5)       //以下为市值
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->length_lineEdit_1->setText(str);
            ui->length_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 6)        // 1微米 = 0.000000002市里
            dou = dou * 0.000000002;
        if(index_1 == 7)        // 1微米 = 0.00000003市引
            dou = dou * 0.00000003;
        if(index_1 == 8)        // 1微米 = 0.0000003市丈
            dou = dou * 0.0000003;
        if(index_1 == 9)        // 1微米 = 0.000003市尺
            dou = dou * 0.000003;
        if(index_1 == 10)       // 1微米 = 0.00003市寸
            dou = dou * 0.00003;
        if(index_1 == 11)       // 1微米 = 0.0003市分
            dou = dou * 0.0003;
        if(index_1 == 12)       // 1微米 = 0.003市厘
            dou = dou * 0.003;
        if(index_1 == 13)       // 1微米 = 0.03市毫
            dou = dou * 0.03;


        str = QString::number(dou);
        ui->length_lineEdit_1->setText(str);
    }
        break;
    case 7:
    {
        if(index_1 == 0)
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->length_lineEdit_1->setText(str);
            ui->length_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 1)        // 1纳米 = 0.000000039370079英寸
            dou = dou * 0.000000039370079;
        if(index_1 == 2)        // 1纳米 = 0.00000000328084英尺
            dou = dou * 0.00000000328084;
        if(index_1 == 3)        // 1纳米 = 0.000000001093613码
            dou = dou * 0.000000001093613;
        if(index_1 == 4)        // 1纳米 = 0.000000000000621英里
            dou = dou * 0.000000000000621;
        if(index_1 == 5)       //以下为市值
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->length_lineEdit_1->setText(str);
            ui->length_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 6)        // 1纳米 = 0.000000000002市里
            dou = dou * 0.000000000002;
        if(index_1 == 7)        // 1纳米 = 0.00000000003市引
            dou = dou * 0.00000000003;
        if(index_1 == 8)        // 1纳米 = 0.0000000003市丈
            dou = dou * 0.0000000003;
        if(index_1 == 9)        // 1纳米 = 0.000000003市尺
            dou = dou * 0.000000003;
        if(index_1 == 10)       // 1纳米 = 0.00000003市寸
            dou = dou * 0.00000003;
        if(index_1 == 11)       // 1纳米 = 0.0000003市分
            dou = dou * 0.0000003;
        if(index_1 == 12)       // 1纳米 = 0.000003市厘
            dou = dou * 0.000003;
        if(index_1 == 13)       // 1纳米 = 0.00003市毫
            dou = dou * 0.00003;


        str = QString::number(dou);
        ui->length_lineEdit_1->setText(str);
    }
        break;
    case 8:
    {
        if(index_1 == 0)
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->length_lineEdit_1->setText(str);
            ui->length_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 1)        // 1皮米 = 0.000000000039370079英寸
            dou = dou * 0.000000000039370079;
        if(index_1 == 2)        // 1皮米 = 0.00000000000328084英尺
            dou = dou * 0.00000000000328084;
        if(index_1 == 3)        // 1皮米 = 0.000000000001093613码
            dou = dou * 0.000000000001093613;
        if(index_1 == 4)        // 1皮米 = 0.000000000000000621英里
            dou = dou * 0.000000000000000621;
        if(index_1 == 5)       //以下为市值
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->length_lineEdit_1->setText(str);
            ui->length_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 6)        // 1皮米 = 0.000000000000002市里
            dou = dou * 0.000000000000002;
        if(index_1 == 7)        // 1皮米 = 0.00000000000003市引
            dou = dou * 0.00000000000003;
        if(index_1 == 8)        // 1皮米 = 0.0000000000003市丈
            dou = dou * 0.0000000000003;
        if(index_1 == 9)        // 1皮米 = 0.000000000003市尺
            dou = dou * 0.000000000003;
        if(index_1 == 10)       // 1皮米 = 0.00000000003市寸
            dou = dou * 0.00000000003;
        if(index_1 == 11)       // 1皮米 = 0.0000000003市分
            dou = dou * 0.0000000003;
        if(index_1 == 12)       // 1皮米 = 0.000000003市厘
            dou = dou * 0.000000003;
        if(index_1 == 13)       // 1皮米 = 0.00000003市毫
            dou = dou * 0.00000003;


        str = QString::number(dou);
        ui->length_lineEdit_1->setText(str);
    }
        break;
    default:
        break;
    }
}

void Widget::on_area_pushButton_1_clicked()//area
{
    QString str;
    str = ui->area_lineEdit_1->text();
    double dou = str.toDouble();
    int index_1 = ui->area_comboBox_1->currentIndex();
    int index_2 = ui->area_comboBox_2->currentIndex();
    switch(index_1)
    {
    case 0:
    {
        dou = dou * 0;
        str = QString::number(dou);
        ui->area_lineEdit_1->setText(str);
        ui->area_lineEdit_1->setText(str);
    }
        break;
    case 1:
    {
        if(index_2 == 0)        // 1平方英里 = 258.998811公顷
                dou = dou * 258.998811;
        if(index_2 == 1)        // 1平方英里 = 25899.8811034公亩
                dou = dou * 25899.8811034;
        if(index_2 == 2)        // 1平方英里 = 2.5899881平方公里
                dou = dou * 2.5899881;
        if(index_2 == 3)        // 1平方英里 = 2589988.110336平方米
                dou = dou * 2589988.110336;
        if(index_2 == 4)        // 1平方英里 = 258998811.0336平方分米
                dou = dou * 258998811.0336;
        if(index_2 == 5)        // 1平方英里 = 25899881103.36平方厘米
                dou = dou * 25899881103.36;

        str = QString::number(dou);
        ui->area_lineEdit_2->setText(str);
    }
        break;
    case 2:
    {
        if(index_2 == 0)        // 1平方英寸 = 0.000000064516公顷
                dou = dou * 0.000000064516;
        if(index_2 == 1)        // 1平方英寸 = 0.0000064516公亩
                dou = dou * 0.0000064516;
        if(index_2 == 2)        // 1平方英寸 = 0.00000000064516平方公里
                dou = dou * 0.00000000064516;
        if(index_2 == 3)        // 1平方英寸 = 0.0006452平方米
                dou = dou * 0.0006452;
        if(index_2 == 4)        // 1平方英寸 = 0.064516平方分米
                dou = dou * 0.064516;
        if(index_2 == 5)        // 1平方英寸 = 6.4516平方厘米
                dou = dou * 6.4516;

        str = QString::number(dou);
        ui->area_lineEdit_2->setText(str);
    }
        break;
     case 3:
    {
        if(index_2 == 0)        // 1平方英尺 = 0.0000092903公顷
                dou = dou * 0.0000092903;
        if(index_2 == 1)        // 1平方英尺 = 0.000929公亩
                dou = dou * 0.000929;
        if(index_2 == 2)        // 1平方英尺 = 0.000000092903平方公里
                dou = dou * 0.000000092903;
        if(index_2 == 3)        // 1平方英尺 = 0.092903平方米
                dou = dou * 0.092903;
        if(index_2 == 4)        // 1平方英尺 = 9.290304平方分米
                dou = dou * 9.290304;
        if(index_2 == 5)        // 1平方英尺 = 929.0304平方厘米
                dou = dou * 929.0304;

        str = QString::number(dou);
        ui->area_lineEdit_2->setText(str);
    }
        break;
    case 4:
    {
        if(index_2 == 0)        // 1平方码 = 0.0000836公顷
                dou = dou * 0.0000836;
        if(index_2 == 1)        // 1平方码 = 0.0083613公亩
                dou = dou * 0.0083613;
        if(index_2 == 2)        // 1平方码 = 0.00000083613平方公里
                dou = dou * 0.00000083613;
        if(index_2 == 3)        // 1平方码 = 0.8361274平方米
                dou = dou * 0.8361274;
        if(index_2 == 4)        // 1平方码 = 83.612736平方分米
                dou = dou * 83.612736;
        if(index_2 == 5)        // 1平方码 = 8361.2736平方厘米
                dou = dou * 8361.2736;

        str = QString::number(dou);
        ui->area_lineEdit_2->setText(str);
    }
        break;
    case 5:
    {
        if(index_2 == 0)        // 1英亩 = 0.4046856公顷
                dou = dou * 0.4046856;
        if(index_2 == 1)        // 1英亩 = 40.4685642公亩
                dou = dou * 40.4685642;
        if(index_2 == 2)        // 1英亩 = 0.0040469平方公里
                dou = dou * 0.0040469;
        if(index_2 == 3)        // 1英亩 = 4046.8564224平方米
                dou = dou * 4046.8564224;
        if(index_2 == 4)        // 1英亩 = 404685.64224平方分米
                dou = dou * 404685.64224;
        if(index_2 == 5)        // 1英亩 = 40468564.224平方厘米
                dou = dou * 40468564.224;

        str = QString::number(dou);
        ui->area_lineEdit_2->setText(str);
    }
        break;
    case 7:
    {
        if(index_2 == 0)        // 1市顷 = 6.6666667公顷
                dou = dou * 6.6666667;
        if(index_2 == 1)        // 1市顷 = 666.6666667公亩
                dou = dou * 666.6666667;
        if(index_2 == 2)        // 1市顷 = 0.0666667平方公里
                dou = dou * 0.0666667;
        if(index_2 == 3)        // 1市顷 = 66666.6666667平方米
                dou = dou * 66666.6666667;
        if(index_2 == 4)        // 1市顷 = 6666666.666667平方分米
                dou = dou * 6666666.666667;
        if(index_2 == 5)        // 1市顷 = 666666666.6667平方厘米
                dou = dou * 666666666.6667;

        str = QString::number(dou);
        ui->area_lineEdit_2->setText(str);
    }
        break;
    case 8:
    {
        if(index_2 == 0)        // 1英亩 = 0.0666667公顷
                dou = dou * 0.0666667;
        if(index_2 == 1)        // 1英亩 = 6.6666667公亩
                dou = dou * 6.6666667;
        if(index_2 == 2)        // 1英亩 = 0.0006667平方公里
                dou = dou * 0.0006667;
        if(index_2 == 3)        // 1英亩 = 666.6666667平方米
                dou = dou * 666.6666667;
        if(index_2 == 4)        // 1英亩 = 66666.6666667平方分米
                dou = dou * 66666.6666667;
        if(index_2 == 5)        // 1英亩 = 6666666.666667平方厘米
                dou = dou * 6666666.666667;

        str = QString::number(dou);
        ui->area_lineEdit_2->setText(str);
    }
        break;
    case 9:
    {
        if(index_2 == 0)        // 1英分 = 0.0066667公顷
                dou = dou * 0.0066667;
        if(index_2 == 1)        // 1英分 = 0.6666667公亩
                dou = dou * 0.6666667;
        if(index_2 == 2)        // 1英分 = 0.0000667平方公里
                dou = dou * 0.0000667;
        if(index_2 == 3)        // 1英分 = 66.6666667平方米
                dou = dou * 66.6666667;
        if(index_2 == 4)        // 1英分 = 6666.6666667平方分米
                dou = dou * 6666.6666667;
        if(index_2 == 5)        // 1英分 = 666666.6666667平方厘米
                dou = dou * 666666.6666667;

        str = QString::number(dou);
        ui->area_lineEdit_2->setText(str);
    }
        break;
    case 10:
    {
        if(index_2 == 0)        // 1平方市尺 = 0.0000111公顷
                dou = dou * 0.0000111;
        if(index_2 == 1)        // 1平方市尺 = 0.0011111公亩
                dou = dou * 0.0011111;
        if(index_2 == 2)        // 1平方市尺 = 0.000000111平方公里
                dou = dou * 0.000000111;
        if(index_2 == 3)        // 1平方市尺 = 0.1111111平方米
                dou = dou * 0.1111111;
        if(index_2 == 4)        // 1平方市尺 = 11.1111111平方分米
                dou = dou * 11.1111111;
        if(index_2 == 5)        // 1平方市尺 = 1111.1111111平方厘米
                dou = dou * 1111.1111111;

        str = QString::number(dou);
        ui->area_lineEdit_2->setText(str);
    }
        break;

    default:
        break;
    }
}

void Widget::on_area_pushButton_2_clicked()//area
{
    QString str;
    str = ui->area_lineEdit_2->text();
    double dou = str.toDouble();
    int index_1 = ui->area_comboBox_1->currentIndex();
    int index_2 = ui->area_comboBox_2->currentIndex();
    switch (index_2)
    {
    case 0:
    {
        if(index_1 == 0)
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->area_lineEdit_1->setText(str);
            ui->area_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 1)        // 1公顷 = 0.003861平方英里
            dou = dou * 0.003861;
        if(index_1 == 2)        // 1公顷 = 15500031.00006平方英寸
            dou = dou * 15500031.00006;
        if(index_1 == 3)        // 1公顷 = 107639.1041671平方英尺
            dou = dou * 107639.1041671;
        if(index_1 == 4)        // 1公顷 = 11959.900463平方码
            dou = dou * 11959.900463;
        if(index_1 == 5)        // 1公顷 = 2.4710538英亩
            dou = dou * 2.4710538;
        if(index_1 == 6)        //以下为市值
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->area_lineEdit_1->setText(str);
            ui->area_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 7)        // 1公顷 = 0.15市顷
            dou = dou * 0.15;
        if(index_1 == 8)        // 1公顷 = 15市亩
            dou = dou * 15;
        if(index_1 == 9)        // 1公顷 = 150市分
            dou = dou * 150;
        if(index_1 == 10)       // 1公顷 = 90000平方市尺
            dou = dou * 90000;

        str = QString::number(dou);
        ui->area_lineEdit_1->setText(str);
    }
        break;
    case 1:
    {
        if(index_1 == 0)
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->area_lineEdit_1->setText(str);
            ui->area_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 1)        // 1公亩 = 0.0000386平方英里
            dou = dou * 0.0000386;
        if(index_1 == 2)        // 1公亩 = 155000.3100006平方英寸
            dou = dou * 155000.3100006;
        if(index_1 == 3)        // 1公亩 = 1076.3910417平方英尺
            dou = dou * 1076.3910417;
        if(index_1 == 4)        // 1公亩 = 119.5990046平方码
            dou = dou * 119.5990046;
        if(index_1 == 5)        // 1公亩 = 0.0247105英亩
            dou = dou * 0.0247105;
        if(index_1 == 6)        //以下为市值
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->area_lineEdit_1->setText(str);
            ui->area_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 7)        // 1公亩 = 0.0015市顷
            dou = dou * 0.0015;
        if(index_1 == 8)        // 1公亩 = 0.15市亩
            dou = dou * 0.15;
        if(index_1 == 9)        // 1公亩 = 1.5市分
            dou = dou * 1.5;
        if(index_1 == 10)       // 1公亩 = 900平方市尺
            dou = dou * 900;

        str = QString::number(dou);
        ui->area_lineEdit_1->setText(str);
    }
        break;
    case 2:
    {
        if(index_1 == 0)
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->area_lineEdit_1->setText(str);
            ui->area_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 1)        // 1平方公里 = 0.3861022平方英里
            dou = dou * 0.3861022;
        if(index_1 == 2)        // 1平方公里 = 1550003100.006平方英寸
            dou = dou * 1550003100.006;
        if(index_1 == 3)        // 1平方公里 = 10763910.41671平方英尺
            dou = dou * 10763910.41671;
        if(index_1 == 4)        // 1平方公里 = 1195990.046301平方码
            dou = dou * 1195990.046301;
        if(index_1 == 5)        // 1平方公里 = 247.1053815英亩
            dou = dou * 247.1053815;
        if(index_1 == 6)        //以下为市值
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->area_lineEdit_1->setText(str);
            ui->area_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 7)        // 1平方公里 = 15市顷
            dou = dou * 15;
        if(index_1 == 8)        // 1平方公里 = 1500市亩
            dou = dou * 1500;
        if(index_1 == 9)        // 1平方公里 = 15000市分
            dou = dou * 15000;
        if(index_1 == 10)       // 1平方公里 = 9000000平方市尺
            dou = dou * 9000000;

        str = QString::number(dou);
        ui->area_lineEdit_1->setText(str);
    }
        break;
    case 3:
    {
        if(index_1 == 0)
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->area_lineEdit_1->setText(str);
            ui->area_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 1)        // 1平方米 = 0.00000038610平方英里
            dou = dou * 0.00000038610;
        if(index_1 == 2)        // 1平方米  = 1550.0031平方英寸
            dou = dou * 1550.0031;
        if(index_1 == 3)        // 1平方米  = 10.7639104平方英尺
            dou = dou * 10.7639104;
        if(index_1 == 4)        // 1平方米  = 1.19599平方码
            dou = dou * 1.19599;
        if(index_1 == 5)        // 1平方米  = 0.0002471英亩
            dou = dou * 0.0002471;
        if(index_1 == 6)        //以下为市值
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->area_lineEdit_1->setText(str);
            ui->area_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 7)        // 1平方米  = 0.000015市顷
            dou = dou * 0.000015;
        if(index_1 == 8)        // 1平方米  = 0.0015市亩
            dou = dou * 0.0015;
        if(index_1 == 9)        // 1平方米  = 0.015市分
            dou = dou * 0.015;
        if(index_1 == 10)       // 1平方米  = 9平方市尺
            dou = dou * 9;

        str = QString::number(dou);
        ui->area_lineEdit_1->setText(str);
    }
        break;
    case 4:
    {
        if(index_1 == 0)
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->area_lineEdit_1->setText(str);
            ui->area_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 1)        // 1平方分米 = 0.0000000038610平方英里
            dou = dou * 0.0000000038610;
        if(index_1 == 2)        // 1平方分米 = 15.500031平方英寸
            dou = dou * 15.500031;
        if(index_1 == 3)        // 1平方分米 = 0.1076391平方英尺
            dou = dou * 0.1076391;
        if(index_1 == 4)        // 1平方分米 = 0.0119599平方码
            dou = dou * 0.0119599;
        if(index_1 == 5)        // 1平方分米 = 0.0000024711英亩
            dou = dou * 0.0000024711;
        if(index_1 == 6)        //以下为市值
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->area_lineEdit_1->setText(str);
            ui->area_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 7)        // 1平方分米 = 0.00000015市顷
            dou = dou * 0.00000015;
        if(index_1 == 8)        // 1平方分米 = 0.000015市亩
            dou = dou * 0.000015;
        if(index_1 == 9)        // 1平方分米 = 0.00015市分
            dou = dou * 0.00015;
        if(index_1 == 10)       // 1平方分米 = 0.09平方市尺
            dou = dou * 0.09;

        str = QString::number(dou);
        ui->area_lineEdit_1->setText(str);
    }
        break;
    case 5:
    {
        if(index_1 == 0)
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->area_lineEdit_1->setText(str);
            ui->area_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 1)        // 1平方厘米 = 0.000000000038610平方英里
            dou = dou * 0.000000000038610;
        if(index_1 == 2)        // 1平方厘米 = 0.1550003平方英寸
            dou = dou * 0.1550003;
        if(index_1 == 3)        // 1平方厘米 = 0.0010764平方英尺
            dou = dou * 0.0010764;
        if(index_1 == 4)        // 1平方厘米 = 0.0001196平方码
            dou = dou * 0.0001196;
        if(index_1 == 5)        // 1平方厘米 = 0.000000024711英亩
            dou = dou * 0.000000024711;
        if(index_1 == 6)        //以下为市值
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->area_lineEdit_1->setText(str);
            ui->area_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 7)        // 1平方厘米 = 0.0000000015市顷
            dou = dou * 0.0000000015;
        if(index_1 == 8)        // 1平方厘米 = 0.00000015市亩
            dou = dou * 0.00000015;
        if(index_1 == 9)        // 1平方厘米 = 0.0000015市分
            dou = dou * 0.0000015;
        if(index_1 == 10)       // 1平方厘米 = 0.0009平方市尺
            dou = dou * 0.0009;

        str = QString::number(dou);
        ui->area_lineEdit_1->setText(str);
    }
        break;

    default:
        break;
    }
}

void Widget::on_volume_pushButton_1_clicked()//volume
{
    QString str;
    str = ui->volume_lineEdit_1->text();
    double dou = str.toDouble();
    int index_1 = ui->volume_comboBox_1->currentIndex();
    int index_2 = ui->volume_comboBox_2->currentIndex();
    switch(index_1)
    {
    case 0:
    {
        dou = dou * 0;
        str = QString::number(dou);
        ui->volume_lineEdit_1->setText(str);
        ui->volume_lineEdit_1->setText(str);
    }
        break;
    case 1:
    {
        if(index_2 == 0)        // 1英制加仑 = 0.0045461立方米
                dou = dou * 0.0045461;
        if(index_2 == 1)        // 1英制加仑 = 4.5460919立方分米
                dou = dou * 4.5460919;
        if(index_2 == 2)        // 1英制加仑 = 4546.09188立方厘米
                dou = dou * 4546.09188;
        if(index_2 == 3)        // 1英制加仑 = 4.5460919升
                dou = dou * 4.5460919;
        if(index_2 == 4)        // 1英制加仑 = 4546.09188毫升
                dou = dou * 4546.09188;

        str = QString::number(dou);
        ui->volume_lineEdit_2->setText(str);
    }
        break;
    case 2:
    {
        if(index_2 == 0)        // 1美国液体加仑 = 0.00379立方米
                dou = dou * 0.00379;
        if(index_2 == 1)        // 1美国液体加仑 = 3.78541立方分米
                dou = dou * 3.78541;
        if(index_2 == 2)        // 1美国液体加仑 = 3785.41178立方厘米
                dou = dou * 3785.41178;
        if(index_2 == 3)        // 1美国液体加仑 = 3.78541升
                dou = dou * 3.78541;
        if(index_2 == 4)        // 1美国液体加仑 = 3785.41178毫升
                dou = dou * 3785.41178;

        str = QString::number(dou);
        ui->volume_lineEdit_2->setText(str);
    }
        break;
    case 3:
    {
        if(index_2 == 0)        // 1美国液体盎司 = 0.0000296立方米
                dou = dou * 0.0000296;
        if(index_2 == 1)        // 1美国液体盎司 = 0.02957立方分米
                dou = dou * 0.02957;
        if(index_2 == 2)        // 1美国液体盎司 = 29.57立方厘米
                dou = dou * 29.57;
        if(index_2 == 3)        // 1美国液体盎司 = 0.02957升
                dou = dou * 0.02957;
        if(index_2 == 4)        // 1美国液体盎司 = 29.57毫升
                dou = dou * 29.57;

        str = QString::number(dou);
        ui->volume_lineEdit_2->setText(str);
    }
        break;
    case 4:
    {
        if(index_2 == 0)        // 1立方英寸 = 0.0000164立方米
                dou = dou * 0.0000164;
        if(index_2 == 1)        // 1立方英寸  = 0.016387立方分米
                dou = dou * 0.016387;
        if(index_2 == 2)        // 1立方英寸 = 16.387037立方厘米
                dou = dou * 16.387037;
        if(index_2 == 3)        // 1立方英寸  = 0.016387升
                dou = dou * 0.016387;
        if(index_2 == 4)        // 1立方英寸  = 16.387037毫升
                dou = dou * 16.387037;

        str = QString::number(dou);
        ui->volume_lineEdit_2->setText(str);
    }
        break;
    case 5:
    {
        if(index_2 == 0)        // 1立方英尺 = 0.0283168立方米
                dou = dou * 0.0283168;
        if(index_2 == 1)        // 1立方英尺 = 28.3168立方分米
                dou = dou * 28.3168;
        if(index_2 == 2)        // 1立方英尺 = 28316.8立方厘米
                dou = dou * 28316.8;
        if(index_2 == 3)        // 1立方英尺 = 28.3168升
                dou = dou * 28.3168;
        if(index_2 == 4)        // 1立方英尺 = 28316.8毫升
                dou = dou * 28316.8;

        str = QString::number(dou);
        ui->volume_lineEdit_2->setText(str);
    }
        break;
    case 6:
    {
        if(index_2 == 0)        // 1立方码 = 0.7645536立方米
                dou = dou * 0.7645536;
        if(index_2 == 1)        // 1立方码 = 764.5536立方分米
                dou = dou * 764.5536;
        if(index_2 == 2)        // 1立方码 = 764553.6立方厘米
                dou = dou * 764553.6;
        if(index_2 == 3)        // 1立方码 = 764.5536升
                dou = dou * 764.5536;
        if(index_2 == 4)        // 1立方码 = 764553.6毫升
                dou = dou * 764553.6;

        str = QString::number(dou);
        ui->volume_lineEdit_2->setText(str);
    }
        break;
    case 8:
    {
        if(index_2 == 0)        // 1立方市寸 = 0.000037036立方米
                dou = dou * 0.000037036;
        if(index_2 == 1)        // 1立方市寸 = 0.037036立方分米
                dou = dou * 0.037036;
        if(index_2 == 2)        // 1立方市寸 = 37.036立方厘米
                dou = dou * 37.036;
        if(index_2 == 3)        // 1立方市寸 = 0.037036升
                dou = dou * 0.037036;
        if(index_2 == 4)        // 1立方市寸 = 37.036毫升
                dou = dou * 37.036;

        str = QString::number(dou);
        ui->volume_lineEdit_2->setText(str);
    }
        break;
    case 9:
    {
        if(index_2 == 0)        // 1立方市尺 = 0.03703立方米
                dou = dou * 0.03703;
        if(index_2 == 1)        // 1立方市尺 = 37.03立方分米
                dou = dou * 37.03;
        if(index_2 == 2)        // 1立方市尺 = 37037.026立方厘米
                dou = dou * 37037.026;
        if(index_2 == 3)        // 1立方市尺 = 37.03升
                dou = dou * 37.03;
        if(index_2 == 4)        // 1立方市尺 = 37037.026毫升
                dou = dou * 37037.026;

        str = QString::number(dou);
        ui->volume_lineEdit_2->setText(str);
    }
        break;
    case 10:
    {
        if(index_2 == 0)        // 1立方市丈 = 37.0370359立方米
                dou = dou * 37.0370359;
        if(index_2 == 1)        // 1立方市丈 = 37037.035925926立方分米
                dou = dou * 37037.035925926;
        if(index_2 == 2)        // 1立方市丈 = 37037035.925926立方厘米
                dou = dou * 37037035.925926;
        if(index_2 == 3)        // 1立方市丈 = 37037.035925926升
                dou = dou * 37037.035925926;
        if(index_2 == 4)        // 1立方市丈 = 37037035.925926毫升
                dou = dou * 37037035.925926;

        str = QString::number(dou);
        ui->volume_lineEdit_2->setText(str);
    }
        break;

    default:
        break;
    }
}

void Widget::on_volume_pushButton_2_clicked()//volume
{
    QString str;
    str = ui->volume_lineEdit_2->text();
    double dou = str.toDouble();
    int index_1 = ui->volume_comboBox_1->currentIndex();
    int index_2 = ui->volume_comboBox_2->currentIndex();
    switch (index_2)
    {
    case 0:
    {
        if(index_1 == 0)
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->volume_lineEdit_1->setText(str);
            ui->volume_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 1)        // 1立方米 = 219.9691573英国加仑
            dou = dou * 219.9691573;
        if(index_1 == 2)        // 1立方米 = 264.17205美国液体加仑
            dou = dou * 264.17205;
        if(index_1 == 3)        // 1立方米 = 33818.0588434美国液体盎司
            dou = dou * 33818.0588434;
        if(index_1 == 4)        // 1立方米 = 61023.8445022立方英寸
            dou = dou * 61023.8445022;
        if(index_1 == 5)        // 1立方米 = 35.3147248立方英尺
            dou = dou * 35.3147248;
        if(index_1 == 6)        // 1立方米 = 1.3079528立方码
            dou = dou * 1.3079528;
        if(index_1 == 7)        //以下为市值
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->volume_lineEdit_1->setText(str);
            ui->volume_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 8)        // 1立方米 = 27000立方市寸
            dou = dou * 27000;
        if(index_1 == 9)        // 1立方米 = 27立方市尺
            dou = dou * 27;
        if(index_1 == 10)       // 1立方米 = 0.027立方市丈
            dou = dou * 0.027;

        str = QString::number(dou);
        ui->volume_lineEdit_1->setText(str);
    }
        break;
    case 1:
    {
        if(index_1 == 0)
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->volume_lineEdit_1->setText(str);
            ui->volume_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 1)        // 1立方分米 = 0.2199692英国加仑
            dou = dou * 0.2199692;
        if(index_1 == 2)        // 1立方分米 = 0.2641721美国液体加仑
            dou = dou * 0.2641721;
        if(index_1 == 3)        // 1立方分米 = 33.8180588美国液体盎司
            dou = dou * 33.8180588;
        if(index_1 == 4)        // 1立方分米 = 61.0238445立方英寸
            dou = dou * 61.0238445;
        if(index_1 == 5)        // 1立方分米 = 0.0353147立方英尺
            dou = dou * 0.0353147;
        if(index_1 == 6)        // 1立方分米 = 0.001308立方码
            dou = dou * 0.001308;
        if(index_1 == 7)        //以下为市值
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->volume_lineEdit_1->setText(str);
            ui->volume_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 8)        // 1立方分米 = 27立方市寸
            dou = dou * 27;
        if(index_1 == 9)        // 1立方分米 = 0.027立方市尺
            dou = dou * 0.027;
        if(index_1 == 10)       // 1立方分米 = 0.000027立方市丈
            dou = dou * 0.000027;

        str = QString::number(dou);
        ui->volume_lineEdit_1->setText(str);
    }
        break;
    case 2:
    {
        if(index_1 == 0)
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->volume_lineEdit_1->setText(str);
            ui->volume_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 1)        // 1立方厘米 = 0.0002199692英国加仑
            dou = dou * 0.0002199692;
        if(index_1 == 2)        // 1立方厘米 = 0.0002641721美国液体加仑
            dou = dou * 0.0002641721;
        if(index_1 == 3)        // 1立方厘米 = 0.0338180588美国液体盎司
            dou = dou * 0.0338180588;
        if(index_1 == 4)        // 1立方厘米 = 0.0610238445立方英寸
            dou = dou * 0.0610238445;
        if(index_1 == 5)        // 1立方厘米 = 0.0000353147立方英尺
            dou = dou * 0.0000353147;
        if(index_1 == 6)        // 1立方厘米 = 0.000001308立方码
            dou = dou * 0.000001308;
        if(index_1 == 7)        //以下为市值
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->volume_lineEdit_1->setText(str);
            ui->volume_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 8)        // 1立方厘米 = 0.027立方市寸
            dou = dou * 0.027;
        if(index_1 == 9)        // 1立方厘米 = 0.000027立方市尺
            dou = dou * 0.000027;
        if(index_1 == 10)       // 1立方厘米 = 0.000000027立方市丈
            dou = dou * 0.000000027;

        str = QString::number(dou);
        ui->volume_lineEdit_1->setText(str);
    }
        break;
    case 3:
    {
        if(index_1 == 0)
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->volume_lineEdit_1->setText(str);
            ui->volume_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 1)        // 1升 = 0.2199692英国加仑
            dou = dou * 0.2199692;
        if(index_1 == 2)        // 1升 = 0.2641721美国液体加仑
            dou = dou * 0.2641721;
        if(index_1 == 3)        // 1升 = 33.8180588美国液体盎司
            dou = dou * 33.8180588;
        if(index_1 == 4)        // 1升 = 61.0238445立方英寸
            dou = dou * 61.0238445;
        if(index_1 == 5)        // 1升 = 0.0353147立方英尺
            dou = dou * 0.0353147;
        if(index_1 == 6)        // 1升 = 0.001308立方码
            dou = dou * 0.001308;
        if(index_1 == 7)        //以下为市值
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->volume_lineEdit_1->setText(str);
            ui->volume_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 8)        // 1升 = 27立方市寸
            dou = dou * 27;
        if(index_1 == 9)        // 1升 = 0.027立方市尺
            dou = dou * 0.027;
        if(index_1 == 10)       // 1升 = 0.000027立方市丈
            dou = dou * 0.000027;

        str = QString::number(dou);
        ui->volume_lineEdit_1->setText(str);
    }
        break;
    case 4:
    {
        if(index_1 == 0)
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->volume_lineEdit_1->setText(str);
            ui->volume_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 1)        // 1毫升 = 0.0002199692英国加仑
            dou = dou * 0.0002199692;
        if(index_1 == 2)        // 1毫升 = 0.0002641721美国液体加仑
            dou = dou * 0.0002641721;
        if(index_1 == 3)        // 1毫升 = 0.0338180588美国液体盎司
            dou = dou * 0.0338180588;
        if(index_1 == 4)        // 1毫升 = 0.0610238445立方英寸
            dou = dou * 0.0610238445;
        if(index_1 == 5)        // 1毫升 = 0.0000353147立方英尺
            dou = dou * 0.0000353147;
        if(index_1 == 6)        // 1毫升 = 0.000001308立方码
            dou = dou * 0.000001308;
        if(index_1 == 7)        //以下为市值
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->volume_lineEdit_1->setText(str);
            ui->volume_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 8)        // 1毫升 = 0.027立方市寸
            dou = dou * 0.027;
        if(index_1 == 9)        // 1毫升 = 0.000027立方市尺
            dou = dou * 0.000027;
        if(index_1 == 10)       // 1毫升 = 0.000000027立方市丈
            dou = dou * 0.000000027;

        str = QString::number(dou);
        ui->volume_lineEdit_1->setText(str);
    }
        break;

    default:
        break;
    }
}

void Widget::on_temperature_pushButton_1_clicked()//temperature
{
    QString str;
    str = ui->temperature_lineEdit_1->text();
    double dou = str.toDouble();
    int index_1 = ui->temperature_comboBox_1->currentIndex();
    int index_2 = ui->temperature_comboBox_2->currentIndex();
    switch(index_1)
    {
    case 0:
    {
        if(index_2 == 0)        // 摄氏度=（华氏摄氏度-32）*5/9
                dou = (dou-32)*5/9;

        str = QString::number(dou);
        ui->temperature_lineEdit_2->setText(str);
    }
        break;

    default:
        break;
    }
}

void Widget::on_temperature_pushButton_2_clicked()//temperature
{
    QString str;
    str = ui->temperature_lineEdit_2->text();
    double dou = str.toDouble();
    int index_1 = ui->temperature_comboBox_1->currentIndex();
    int index_2 = ui->temperature_comboBox_2->currentIndex();
    switch (index_2)
    {
    case 0:
    {
        if(index_1 == 0)        //华氏摄氏度=摄氏度/1.8+32
            dou=dou*9/5+32;

        str = QString::number(dou);
        ui->temperature_lineEdit_1->setText(str);
    }
        break;

    default:
        break;
    }

}

void Widget::on_money_pushButton_1_clicked()//money
{
    QString str;
    str = ui->money_lineEdit_1->text();
    double dou = str.toDouble();
    int index_1 = ui->money_comboBox_1->currentIndex();
    int index_2 = ui->money_comboBox_2->currentIndex();
    switch(index_1)
    {
    case 0:
    {
        if(index_2 == 0)        // 1人民币 = 1人民币
                dou = dou * 1;
        if(index_2 == 1)        // 1人民币 = 0.1464美元
                dou = dou * 0.1464;
        if(index_2 == 2)        // 1人民币 = 0.1925加拿大元
                dou = dou * 0.1925;
        if(index_2 == 3)        // 1人民币 = 0.2011澳元
                dou = dou * 0.2011;
        if(index_2 == 4)        // 1人民币 = 0.1240欧元
                dou = dou * 0.1240;
        if(index_2 == 5)        // 1人民币 = 0.1126英镑
                dou = dou * 0.1126;
        if(index_2 == 6)        // 1人民币 = 15.5487日元
                dou = dou * 15.5487;
        if(index_2 == 7)        // 1人民币 = 4.5763泰铢
                dou = dou * 4.5763;
        if(index_2 == 8)        // 1人民币 = 0.2001新加坡元
                dou = dou * 0.2001;
        if(index_2 == 9)        // 1人民币 = 1.1346港元
                dou = dou * 1.1346;
        if(index_2 == 10)       // 1人民币 = 4.2904新台元
                dou = dou * 4.2904;

        str = QString::number(dou);
        ui->money_lineEdit_2->setText(str);
    }
        break;
    case 1:
    {
        if(index_2 == 0)        // 1美元 = 6.8308人民币
                dou = dou * 6.8308;
        if(index_2 == 1)        // 1美元 = 1美元
                dou = dou * 1;
        if(index_2 == 2)        // 1美元 = 1.3151加拿大元
                dou = dou * 1.3151;
        if(index_2 == 3)        // 1美元 = 1.374澳元
                dou = dou * 1.374;
        if(index_2 == 4)        // 1美元 = 0.8470欧元
                dou = dou * 0.8470;
        if(index_2 == 5)        // 1美元 = 0.7690英镑
                dou = dou * 0.7690;
        if(index_2 == 6)        // 1美元 = 106.21日元
                dou = dou * 106.21;
        if(index_2 == 7)        // 1美元 = 31.26泰铢
                dou = dou * 31.26;
        if(index_2 == 8)        // 1美元 = 1.3669新加坡元
                dou = dou * 1.3669;
        if(index_2 == 9)        // 1美元 = 7.7501港元
                dou = dou * 7.7501;
        if(index_2 == 10)        // 1美元 = 29.307新台元
                dou = dou * 29.307;

        str = QString::number(dou);
        ui->money_lineEdit_2->setText(str);
    }
        break;
    case 2:
    {
        if(index_2 == 0)        // 1加拿大元 = 5.1941人民币
                dou = dou * 5.1941;
        if(index_2 == 1)        // 1加拿大元 = 0.7604美元
                dou = dou * 0.7604;
        if(index_2 == 2)        // 1加拿大元 = 1加拿大元
                dou = dou * 1;
        if(index_2 == 3)        // 1加拿大元 = 1.0448澳元
                dou = dou * 1.0448;
        if(index_2 == 4)        // 1加拿大元 = 0.6441欧元
                dou = dou * 0.6441;
        if(index_2 == 5)        // 1加拿大元 = 0.5847英镑
                dou = dou * 0.5847;
        if(index_2 == 6)        // 1加拿大元 = 80.7619日元
                dou = dou * 80.7619;
        if(index_2 == 7)        // 1加拿大元 = 23.7701泰铢
                dou = dou * 23.7701;
        if(index_2 == 8)        // 1加拿大元 = 1.0394新加坡元
                dou = dou * 1.0394;
        if(index_2 == 9)        // 1加拿大元 = 5.8932港元
                dou = dou * 5.8932;
        if(index_2 == 10)        // 1加拿大元 = 22.285新台元
                dou = dou * 22.285;

        str = QString::number(dou);
        ui->money_lineEdit_2->setText(str);
    }
        break;
    case 3:
    {
        if(index_2 == 0)        // 1澳元 = 4.9715人民币
                dou = dou * 4.9715;
        if(index_2 == 1)        // 1澳元 = 0.7278美元
                dou = dou * 0.7278;
        if(index_2 == 2)        // 1澳元 = 0.9571加拿大元
                dou = dou * 0.9571;
        if(index_2 == 3)        // 1澳元 = 1澳元
                dou = dou * 1;
        if(index_2 == 4)        // 1澳元 = 0.6150欧元
                dou = dou * 0.6150;
        if(index_2 == 5)        // 1澳元 = 0.5593英镑
                dou = dou * 0.5593;
        if(index_2 == 6)        // 1澳元 = 77.1152日元
                dou = dou * 77.1152;
        if(index_2 == 7)        // 1澳元 = 22.701泰铢
                dou = dou * 22.701;
        if(index_2 == 8)        // 1澳元 = 0.9923新加坡元
                dou = dou * 0.9923;
        if(index_2 == 9)        // 1澳元 = 5.6281港元
                dou = dou * 5.6281;
        if(index_2 == 10)        // 1澳元 = 21.2537新台元
                dou = dou * 21.2537;

        str = QString::number(dou);
        ui->money_lineEdit_2->setText(str);
    }
        break;
    case 4:
    {
        if(index_2 == 0)        // 1欧元 = 8.0644人民币
                dou = dou * 8.0644;
        if(index_2 == 1)        // 1欧元 = 1.1806美元
                dou = dou * 1.1806;
        if(index_2 == 2)        // 1欧元 = 1.5526加拿大元
                dou = dou * 1.5526;
        if(index_2 == 3)        // 1欧元 = 1.6261澳元
                dou = dou * 1.6261;
        if(index_2 == 4)        // 1欧元 = 1欧元
                dou = dou * 1;
        if(index_2 == 5)        // 1欧元 = 0.9094英镑
                dou = dou * 0.9094;
        if(index_2 == 6)        // 1欧元 = 125.3998日元
                dou = dou * 125.3998;
        if(index_2 == 7)        // 1欧元 = 36.9149泰铢
                dou = dou * 36.9149;
        if(index_2 == 8)        // 1欧元 = 1.6136新加坡元
                dou = dou * 1.6136;
        if(index_2 == 9)        // 1欧元 = 9.1521港元
                dou = dou * 9.1521;
        if(index_2 == 10)        // 1欧元 = 34.5614新台元
                dou = dou * 34.5614;

        str = QString::number(dou);
        ui->money_lineEdit_2->setText(str);
    }
        break;
    case 5:
    {
        if(index_2 == 0)        // 1英镑 = 8.8828人民币
                dou = dou * 8.8828;
        if(index_2 == 1)        // 1英镑 = 1.3004美元
                dou = dou * 1.3004;
        if(index_2 == 2)        // 1英镑 = 1.7102加拿大元
                dou = dou * 1.7102;
        if(index_2 == 3)        // 1英镑 = 1.7881澳元
                dou = dou * 1.7881;
        if(index_2 == 4)        // 1英镑 = 1.0996欧元
                dou = dou * 1.0996;
        if(index_2 == 5)        // 1英镑 = 1英镑
                dou = dou * 1;
        if(index_2 == 6)        // 1英镑 = 137.8877日元
                dou = dou * 137.8877;
        if(index_2 == 7)        // 1英镑 = 40.5911泰铢
                dou = dou * 40.5911;
        if(index_2 == 8)        // 1英镑 = 1.7743新加坡元
                dou = dou * 1.7743;
        if(index_2 == 9)        // 1英镑 = 10.0635港元
                dou = dou * 10.0635;
        if(index_2 == 10)       // 1英镑 = 38.0032新台元
                dou = dou * 38.0032;

        str = QString::number(dou);
        ui->money_lineEdit_2->setText(str);
    }
        break;
    case 6:
    {
        if(index_2 == 0)        // 1日元 = 0.0643人民币
                dou = dou * 0.0643;
        if(index_2 == 1)        // 1日元 = 0.0094美元
                dou = dou * 0.0094;
        if(index_2 == 2)        // 1日元 = 0.0124加拿大元
                dou = dou * 0.0124;
        if(index_2 == 3)        // 1日元 = 0.013澳元
                dou = dou * 0.013;
        if(index_2 == 4)        // 1日元 = 0.008欧元
                dou = dou * 0.008;
        if(index_2 == 5)        // 1日元 = 0.0073英镑
                dou = dou * 0.0073;
        if(index_2 == 6)        // 1日元 = 1日元
                dou = dou * 1;
        if(index_2 == 7)        // 1日元 = 0.2944泰铢
                dou = dou * 0.2944;
        if(index_2 == 8)        // 1日元 = 0.01287新加坡元
                dou = dou * 0.01287;
        if(index_2 == 9)        // 1日元 = 0.07298港元
                dou = dou * 0.07298;
        if(index_2 == 10)        // 1日元 = 0.2756新台元
                dou = dou * 0.2756;

        str = QString::number(dou);
        ui->money_lineEdit_2->setText(str);
    }
        break;
    case 7:
    {
        if(index_2 == 0)        // 1泰铢 = 0.2185人民币
                dou = dou * 0.2185;
        if(index_2 == 1)        // 1泰铢 = 0.032美元
                dou = dou * 0.032;
        if(index_2 == 2)        // 1泰铢 = 0.0421加拿大元
                dou = dou * 0.0421;
        if(index_2 == 3)        // 1泰铢 = 0.0441澳元
                dou = dou * 0.0441;
        if(index_2 == 4)        // 1泰铢 = 0.0271欧元
                dou = dou * 0.0271;
        if(index_2 == 5)        // 1泰铢 = 0.0246英镑
                dou = dou * 0.0246;
        if(index_2 == 6)        // 1泰铢 = 3.397日元
                dou = dou * 3.397;
        if(index_2 == 7)        // 1泰铢 = 1泰铢
                dou = dou * 1;
        if(index_2 == 8)        // 1泰铢 = 0.04371新加坡元
                dou = dou * 0.04371;
        if(index_2 == 9)        // 1泰铢 = 0.2479港元
                dou = dou * 0.2479;
        if(index_2 == 10)        // 1泰铢 = 0.9362新台元
                dou = dou * 0.9362;

        str = QString::number(dou);
        ui->money_lineEdit_2->setText(str);
    }
        break;
    case 8:
    {
        if(index_2 == 0)        // 1新加坡元 = 4.9973人民币
                dou = dou * 4.9973;
        if(index_2 == 1)        // 1新加坡元 = 0.7316美元
                dou = dou * 0.7316;
        if(index_2 == 2)        // 1新加坡元 = 0.9621加拿大元
                dou = dou * 0.9621;
        if(index_2 == 3)        // 1新加坡元 = 1.0078澳元
                dou = dou * 1.0078;
        if(index_2 == 4)        // 1新加坡元 = 0.6197欧元
                dou = dou * 0.6197;
        if(index_2 == 5)        // 1新加坡元 = 0.5636英镑
                dou = dou * 0.5636;
        if(index_2 == 6)        // 1新加坡元 = 77.7152日元
                dou = dou * 77.7152;
        if(index_2 == 7)        // 1新加坡元 = 22.8776泰铢
                dou = dou * 22.8776;
        if(index_2 == 8)        // 1新加坡元 = 1新加坡元
                dou = dou * 1;
        if(index_2 == 9)        // 1新加坡元 = 5.6719港元
                dou = dou * 5.6719;
        if(index_2 == 10)        // 1新加坡元 = 21.4191新台元
                dou = dou * 21.4191;

        str = QString::number(dou);
        ui->money_lineEdit_2->setText(str);
    }
        break;
    case 9:
    {
        if(index_2 == 0)        // 1港元 = 0.8814人民币
                dou = dou * 0.8814;
        if(index_2 == 1)        // 1港元 = 0.129美元
                dou = dou * 0.129;
        if(index_2 == 2)        // 1港元 = 0.1697加拿大元
                dou = dou * 0.1697;
        if(index_2 == 3)        // 1港元 = 0.1777澳元
                dou = dou * 0.1777;
        if(index_2 == 4)        // 1港元 = 0.1093欧元
                dou = dou * 0.1093;
        if(index_2 == 5)        // 1港元 = 0.0994英镑
                dou = dou * 0.0994;
        if(index_2 == 6)        // 1港元 = 13.7018日元
                dou = dou * 13.7018;
        if(index_2 == 7)        // 1港元 = 4.0335泰铢
                dou = dou * 4.0335;
        if(index_2 == 8)        // 1港元 = 0.1763新加坡元
                dou = dou * 0.1763;
        if(index_2 == 9)        // 1港元 = 1港元
                dou = dou * 1;
        if(index_2 == 10)        // 1港元 = 3.7763新台元
                dou = dou * 3.7763;

        str = QString::number(dou);
        ui->money_lineEdit_2->setText(str);
    }
        break;
    case 10:
    {
        if(index_2 == 0)        // 1新台元 = 0.2331人民币
                dou = dou * 0.2331;
        if(index_2 == 1)        // 1新台元 = 0.0341美元
                dou = dou * 0.0341;
        if(index_2 == 2)        // 1新台元 = 0.0449加拿大元
                dou = dou * 0.0449;
        if(index_2 == 3)        // 1新台元 = 0.0471澳元
                dou = dou * 0.0471;
        if(index_2 == 4)        // 1新台元 = 0.0289欧元
                dou = dou * 0.0289;
        if(index_2 == 5)        // 1新台元 = 0.0263英镑
                dou = dou * 0.0263;
        if(index_2 == 6)        // 1新台元 = 3.6283日元
                dou = dou * 3.6283;
        if(index_2 == 7)        // 1新台元 = 1.0681泰铢
                dou = dou * 1.0681;
        if(index_2 == 8)        // 1新台元 = 0.0467新加坡元
                dou = dou * 0.0467;
        if(index_2 == 9)        // 1新台元 = 0.2648港元
                dou = dou * 0.2648;
        if(index_2 == 10)        // 1新台元 = 1新台元
                dou = dou * 1;

        str = QString::number(dou);
        ui->money_lineEdit_2->setText(str);
    }
        break;

    default:
        break;
    }
}

void Widget::on_money_pushButton_2_clicked()//money
{
    QString str;
    str = ui->money_lineEdit_2->text();
    double dou = str.toDouble();
    int index_1 = ui->money_comboBox_1->currentIndex();
    int index_2 = ui->money_comboBox_2->currentIndex();
    switch(index_2)
    {
    case 0:
    {
        if(index_1 == 0)        // 1人民币 = 1人民币
                dou = dou * 1;
        if(index_1 == 1)        // 1人民币 = 0.1464美元
                dou = dou * 0.1464;
        if(index_1 == 2)        // 1人民币 = 0.1925加拿大元
                dou = dou * 0.1925;
        if(index_1 == 3)        // 1人民币 = 0.2011澳元
                dou = dou * 0.2011;
        if(index_1 == 4)        // 1人民币 = 0.1240欧元
                dou = dou * 0.1240;
        if(index_1 == 5)        // 1人民币 = 0.1126英镑
                dou = dou * 0.1126;
        if(index_1 == 6)        // 1人民币 = 15.5487日元
                dou = dou * 15.5487;
        if(index_1 == 7)        // 1人民币 = 4.5763泰铢
                dou = dou * 4.5763;
        if(index_1 == 8)        // 1人民币 = 0.2001新加坡元
                dou = dou * 0.2001;
        if(index_1 == 9)        // 1人民币 = 1.1346港元
                dou = dou * 1.1346;
        if(index_1 == 10)       // 1人民币 = 4.2904新台元
                dou = dou * 4.2904;

        str = QString::number(dou);
        ui->money_lineEdit_1->setText(str);
    }
        break;
    case 1:
    {
        if(index_1 == 0)        // 1美元 = 6.8308人民币
                dou = dou * 6.8308;
        if(index_1 == 1)        // 1美元 = 1美元
                dou = dou * 1;
        if(index_1 == 2)        // 1美元 = 1.3151加拿大元
                dou = dou * 1.3151;
        if(index_1 == 3)        // 1美元 = 1.374澳元
                dou = dou * 1.374;
        if(index_1 == 4)        // 1美元 = 0.8470欧元
                dou = dou * 0.8470;
        if(index_1 == 5)        // 1美元 = 0.7690英镑
                dou = dou * 0.7690;
        if(index_1 == 6)        // 1美元 = 106.21日元
                dou = dou * 106.21;
        if(index_1 == 7)        // 1美元 = 31.26泰铢
                dou = dou * 31.26;
        if(index_1 == 8)        // 1美元 = 1.3669新加坡元
                dou = dou * 1.3669;
        if(index_1 == 9)        // 1美元 = 7.7501港元
                dou = dou * 7.7501;
        if(index_1 == 10)        // 1美元 = 29.307新台元
                dou = dou * 29.307;

        str = QString::number(dou);
        ui->money_lineEdit_1->setText(str);
    }
        break;
    case 2:
    {
        if(index_1 == 0)        // 1加拿大元 = 5.1941人民币
                dou = dou * 5.1941;
        if(index_1 == 1)        // 1加拿大元 = 0.7604美元
                dou = dou * 0.7604;
        if(index_1 == 2)        // 1加拿大元 = 1加拿大元
                dou = dou * 1;
        if(index_1 == 3)        // 1加拿大元 = 1.0448澳元
                dou = dou * 1.0448;
        if(index_1 == 4)        // 1加拿大元 = 0.6441欧元
                dou = dou * 0.6441;
        if(index_1 == 5)        // 1加拿大元 = 0.5847英镑
                dou = dou * 0.5847;
        if(index_1 == 6)        // 1加拿大元 = 80.7619日元
                dou = dou * 80.7619;
        if(index_1 == 7)        // 1加拿大元 = 23.7701泰铢
                dou = dou * 23.7701;
        if(index_1 == 8)        // 1加拿大元 = 1.0394新加坡元
                dou = dou * 1.0394;
        if(index_1 == 9)        // 1加拿大元 = 5.8932港元
                dou = dou * 5.8932;
        if(index_1 == 10)        // 1加拿大元 = 22.285新台元
                dou = dou * 22.285;

        str = QString::number(dou);
        ui->money_lineEdit_1->setText(str);
    }
        break;
    case 3:
    {
        if(index_1 == 0)        // 1澳元 = 4.9715人民币
                dou = dou * 4.9715;
        if(index_1 == 1)        // 1澳元 = 0.7278美元
                dou = dou * 0.7278;
        if(index_1 == 2)        // 1澳元 = 0.9571加拿大元
                dou = dou * 0.9571;
        if(index_1 == 3)        // 1澳元 = 1澳元
                dou = dou * 1;
        if(index_1 == 4)        // 1澳元 = 0.6150欧元
                dou = dou * 0.6150;
        if(index_1 == 5)        // 1澳元 = 0.5593英镑
                dou = dou * 0.5593;
        if(index_1 == 6)        // 1澳元 = 77.1152日元
                dou = dou * 77.1152;
        if(index_1 == 7)        // 1澳元 = 22.701泰铢
                dou = dou * 22.701;
        if(index_1 == 8)        // 1澳元 = 0.9923新加坡元
                dou = dou * 0.9923;
        if(index_1 == 9)        // 1澳元 = 5.6281港元
                dou = dou * 5.6281;
        if(index_1 == 10)        // 1澳元 = 21.2537新台元
                dou = dou * 21.2537;

        str = QString::number(dou);
        ui->money_lineEdit_1->setText(str);
    }
        break;
    case 4:
    {
        if(index_1 == 0)        // 1欧元 = 8.0644人民币
                dou = dou * 8.0644;
        if(index_1 == 1)        // 1欧元 = 1.1806美元
                dou = dou * 1.1806;
        if(index_1 == 2)        // 1欧元 = 1.5526加拿大元
                dou = dou * 1.5526;
        if(index_1 == 3)        // 1欧元 = 1.6261澳元
                dou = dou * 1.6261;
        if(index_1 == 4)        // 1欧元 = 1欧元
                dou = dou * 1;
        if(index_1 == 5)        // 1欧元 = 0.9094英镑
                dou = dou * 0.9094;
        if(index_1 == 6)        // 1欧元 = 125.3998日元
                dou = dou * 125.3998;
        if(index_1 == 7)        // 1欧元 = 36.9149泰铢
                dou = dou * 36.9149;
        if(index_1 == 8)        // 1欧元 = 1.6136新加坡元
                dou = dou * 1.6136;
        if(index_1 == 9)        // 1欧元 = 9.1521港元
                dou = dou * 9.1521;
        if(index_1 == 10)        // 1欧元 = 34.5614新台元
                dou = dou * 34.5614;

        str = QString::number(dou);
        ui->money_lineEdit_1->setText(str);
    }
        break;
    case 5:
    {
        if(index_1 == 0)        // 1英镑 = 8.8828人民币
                dou = dou * 8.8828;
        if(index_1 == 1)        // 1英镑 = 1.3004美元
                dou = dou * 1.3004;
        if(index_1 == 2)        // 1英镑 = 1.7102加拿大元
                dou = dou * 1.7102;
        if(index_1 == 3)        // 1英镑 = 1.7881澳元
                dou = dou * 1.7881;
        if(index_1 == 4)        // 1英镑 = 1.0996欧元
                dou = dou * 1.0996;
        if(index_1 == 5)        // 1英镑 = 1英镑
                dou = dou * 1;
        if(index_1 == 6)        // 1英镑 = 137.8877日元
                dou = dou * 137.8877;
        if(index_1 == 7)        // 1英镑 = 40.5911泰铢
                dou = dou * 40.5911;
        if(index_1 == 8)        // 1英镑 = 1.7743新加坡元
                dou = dou * 1.7743;
        if(index_1 == 9)        // 1英镑 = 10.0635港元
                dou = dou * 10.0635;
        if(index_1 == 10)       // 1英镑 = 38.0032新台元
                dou = dou * 38.0032;

        str = QString::number(dou);
        ui->money_lineEdit_1->setText(str);
    }
        break;
    case 6:
    {
        if(index_1 == 0)        // 1日元 = 0.0643人民币
                dou = dou * 0.0643;
        if(index_1 == 1)        // 1日元 = 0.0094美元
                dou = dou * 0.0094;
        if(index_1 == 2)        // 1日元 = 0.0124加拿大元
                dou = dou * 0.0124;
        if(index_1 == 3)        // 1日元 = 0.013澳元
                dou = dou * 0.013;
        if(index_1 == 4)        // 1日元 = 0.008欧元
                dou = dou * 0.008;
        if(index_1 == 5)        // 1日元 = 0.0073英镑
                dou = dou * 0.0073;
        if(index_1 == 6)        // 1日元 = 1日元
                dou = dou * 1;
        if(index_1 == 7)        // 1日元 = 0.2944泰铢
                dou = dou * 0.2944;
        if(index_1 == 8)        // 1日元 = 0.01287新加坡元
                dou = dou * 0.01287;
        if(index_1 == 9)        // 1日元 = 0.07298港元
                dou = dou * 0.07298;
        if(index_1 == 10)        // 1日元 = 0.2756新台元
                dou = dou * 0.2756;

        str = QString::number(dou);
        ui->money_lineEdit_1->setText(str);
    }
        break;
    case 7:
    {
        if(index_1 == 0)        // 1泰铢 = 0.2185人民币
                dou = dou * 0.2185;
        if(index_1 == 1)        // 1泰铢 = 0.032美元
                dou = dou * 0.032;
        if(index_1 == 2)        // 1泰铢 = 0.0421加拿大元
                dou = dou * 0.0421;
        if(index_1 == 3)        // 1泰铢 = 0.0441澳元
                dou = dou * 0.0441;
        if(index_1 == 4)        // 1泰铢 = 0.0271欧元
                dou = dou * 0.0271;
        if(index_1 == 5)        // 1泰铢 = 0.0246英镑
                dou = dou * 0.0246;
        if(index_1 == 6)        // 1泰铢 = 3.397日元
                dou = dou * 3.397;
        if(index_1 == 7)        // 1泰铢 = 1泰铢
                dou = dou * 1;
        if(index_1 == 8)        // 1泰铢 = 0.04371新加坡元
                dou = dou * 0.04371;
        if(index_1 == 9)        // 1泰铢 = 0.2479港元
                dou = dou * 0.2479;
        if(index_1 == 10)        // 1泰铢 = 0.9362新台元
                dou = dou * 0.9362;

        str = QString::number(dou);
        ui->money_lineEdit_1->setText(str);
    }
        break;
    case 8:
    {
        if(index_1 == 0)        // 1新加坡元 = 4.9973人民币
                dou = dou * 4.9973;
        if(index_1 == 1)        // 1新加坡元 = 0.7316美元
                dou = dou * 0.7316;
        if(index_1 == 2)        // 1新加坡元 = 0.9621加拿大元
                dou = dou * 0.9621;
        if(index_1 == 3)        // 1新加坡元 = 1.0078澳元
                dou = dou * 1.0078;
        if(index_1 == 4)        // 1新加坡元 = 0.6197欧元
                dou = dou * 0.6197;
        if(index_1 == 5)        // 1新加坡元 = 0.5636英镑
                dou = dou * 0.5636;
        if(index_1 == 6)        // 1新加坡元 = 77.7152日元
                dou = dou * 77.7152;
        if(index_1 == 7)        // 1新加坡元 = 22.8776泰铢
                dou = dou * 22.8776;
        if(index_1 == 8)        // 1新加坡元 = 1新加坡元
                dou = dou * 1;
        if(index_1 == 9)        // 1新加坡元 = 5.6719港元
                dou = dou * 5.6719;
        if(index_1 == 10)        // 1新加坡元 = 21.4191新台元
                dou = dou * 21.4191;

        str = QString::number(dou);
        ui->money_lineEdit_1->setText(str);
    }
        break;
    case 9:
    {
        if(index_1 == 0)        // 1港元 = 0.8814人民币
                dou = dou * 0.8814;
        if(index_1 == 1)        // 1港元 = 0.129美元
                dou = dou * 0.129;
        if(index_1 == 2)        // 1港元 = 0.1697加拿大元
                dou = dou * 0.1697;
        if(index_1 == 3)        // 1港元 = 0.1777澳元
                dou = dou * 0.1777;
        if(index_1 == 4)        // 1港元 = 0.1093欧元
                dou = dou * 0.1093;
        if(index_1 == 5)        // 1港元 = 0.0994英镑
                dou = dou * 0.0994;
        if(index_1 == 6)        // 1港元 = 13.7018日元
                dou = dou * 13.7018;
        if(index_1 == 7)        // 1港元 = 4.0335泰铢
                dou = dou * 4.0335;
        if(index_1 == 8)        // 1港元 = 0.1763新加坡元
                dou = dou * 0.1763;
        if(index_1 == 9)        // 1港元 = 1港元
                dou = dou * 1;
        if(index_1 == 10)        // 1港元 = 3.7763新台元
                dou = dou * 3.7763;

        str = QString::number(dou);
        ui->money_lineEdit_1->setText(str);
    }
        break;
    case 10:
    {
        if(index_1 == 0)        // 1新台元 = 0.2331人民币
                dou = dou * 0.2331;
        if(index_1 == 1)        // 1新台元 = 0.0341美元
                dou = dou * 0.0341;
        if(index_1 == 2)        // 1新台元 = 0.0449加拿大元
                dou = dou * 0.0449;
        if(index_1 == 3)        // 1新台元 = 0.0471澳元
                dou = dou * 0.0471;
        if(index_1 == 4)        // 1新台元 = 0.0289欧元
                dou = dou * 0.0289;
        if(index_1 == 5)        // 1新台元 = 0.0263英镑
                dou = dou * 0.0263;
        if(index_1 == 6)        // 1新台元 = 3.6283日元
                dou = dou * 3.6283;
        if(index_1 == 7)        // 1新台元 = 1.0681泰铢
                dou = dou * 1.0681;
        if(index_1 == 8)        // 1新台元 = 0.0467新加坡元
                dou = dou * 0.0467;
        if(index_1 == 9)        // 1新台元 = 0.2648港元
                dou = dou * 0.2648;
        if(index_1 == 10)        // 1新台元 = 1新台元
                dou = dou * 1;

        str = QString::number(dou);
        ui->money_lineEdit_1->setText(str);
    }
        break;

    default:
        break;
    }
}
