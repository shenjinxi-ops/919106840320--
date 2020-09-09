#include "widget.h"
#include "ui_widget.h"
#include <QLabel>
#include <QPixmap>
#include <QFont>
#include <QDebug>
#include <QStringList>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
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
    a.setPointSize(14);       //设置字体大小
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

    // 设置文本框lineEdit大小
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
    ui->volume_comboBox_1->insertItem(3, "美国固体加仑", "3");
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

void Widget::on_weight_pushButton_1_clicked()    //由其它转换为公制
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

void Widget::on_weight_pushButton_2_clicked()   //公制转换为其他类
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


void Widget::on_length_pushButton_1_clicked()
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

void Widget::on_length_pushButton_2_clicked()
{
    QString str;
    str = ui->length_lineEdit_2->text();
    double dou = str.toDouble();
    int index_1 = ui->length_comboBox_1->currentIndex();
    int index_2 = ui->length_comboBox_2->currentIndex();
    switch (index_2) {
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
        if(index_1 == 1)        // 1米 = 英寸
            dou = dou * 2.205;
        if(index_1 == 2)        // 1米 = 英尺
            dou = dou * 35.274;
        if(index_1 == 3)        // 1米 = 码
            dou = dou * 0.000984;
        if(index_1 == 4)        // 1米 = 英里
            dou = dou * 0.001102;
        if(index_1 == 5)       //以下为市值
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->length_lineEdit_1->setText(str);
            ui->length_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 6)        // 1米 = 市里
            dou = dou * 15432.358;
        if(index_1 == 7)        // 1米 = 市引
            dou = dou * 4877.561;
        if(index_1 == 8)        // 1米 = 市丈
            dou = dou * 4877.561;
        if(index_1 == 9)        // 1米 = 市尺
            dou = dou * 0.02;
        if(index_1 == 10)       // 1米 = 市寸
            dou = dou * 2;
        if(index_1 == 11)       // 1米 = 市分
            dou = dou * 20;
        if(index_1 == 12)       // 1米 = 市厘
            dou = dou * 200;
        if(index_1 == 13)       // 1米 = 市毫
            dou = dou * 20000;

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
        if(index_1 == 1)        // 1 = 英寸
            dou = dou * 2.205;
        if(index_1 == 2)        // 1 = 英尺
            dou = dou * 35.274;
        if(index_1 == 3)        // 1 = 码
            dou = dou * 0.000984;
        if(index_1 == 4)        // 1 = 英里
            dou = dou * 0.001102;
        if(index_1 == 5)       //以下为市值
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->length_lineEdit_1->setText(str);
            ui->length_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 6)        // 1 = 市里
            dou = dou * 15432.358;
        if(index_1 == 7)        // 1 = 市引
            dou = dou * 4877.561;
        if(index_1 == 8)        // 1 = 市丈
            dou = dou * 4877.561;
        if(index_1 == 9)        // 1 = 市尺
            dou = dou * 0.02;
        if(index_1 == 10)       // 1 = 市寸
            dou = dou * 2;
        if(index_1 == 11)       // 1 = 市分
            dou = dou * 20;
        if(index_1 == 12)       // 1 = 市毫
            dou = dou * 200;
        if(index_1 == 13)       // 1 = 市厘
            dou = dou * 20000;


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
        if(index_1 == 1)        // 1 = 英寸
            dou = dou * 2.205;
        if(index_1 == 2)        // 1 = 英尺
            dou = dou * 35.274;
        if(index_1 == 3)        // 1 = 码
            dou = dou * 0.000984;
        if(index_1 == 4)        // 1 = 英里
            dou = dou * 0.001102;
        if(index_1 == 5)       //以下为市值
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->length_lineEdit_1->setText(str);
            ui->length_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 6)        // 1 = 市里
            dou = dou * 15432.358;
        if(index_1 == 7)        // 1 = 市引
            dou = dou * 4877.561;
        if(index_1 == 8)        // 1 = 市丈
            dou = dou * 4877.561;
        if(index_1 == 9)        // 1 = 市尺
            dou = dou * 0.02;
        if(index_1 == 10)       // 1 = 市寸
            dou = dou * 2;
        if(index_1 == 11)       // 1 = 市分
            dou = dou * 20;
        if(index_1 == 12)       // 1 = 市毫
            dou = dou * 200;
        if(index_1 == 13)       // 1 = 市厘
            dou = dou * 20000;


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
        if(index_1 == 1)        // 1 = 英寸
            dou = dou * 2.205;
        if(index_1 == 2)        // 1 = 英尺
            dou = dou * 35.274;
        if(index_1 == 3)        // 1 = 码
            dou = dou * 0.000984;
        if(index_1 == 4)        // 1 = 英里
            dou = dou * 0.001102;
        if(index_1 == 5)       //以下为市值
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->length_lineEdit_1->setText(str);
            ui->length_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 6)        // 1 = 市里
            dou = dou * 15432.358;
        if(index_1 == 7)        // 1 = 市引
            dou = dou * 4877.561;
        if(index_1 == 8)        // 1 = 市丈
            dou = dou * 4877.561;
        if(index_1 == 9)        // 1 = 市尺
            dou = dou * 0.02;
        if(index_1 == 10)       // 1 = 市寸
            dou = dou * 2;
        if(index_1 == 11)       // 1 = 市分
            dou = dou * 20;
        if(index_1 == 12)       // 1 = 市毫
            dou = dou * 200;
        if(index_1 == 13)       // 1 = 市厘
            dou = dou * 20000;


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
        if(index_1 == 1)        // 1 = 英寸
            dou = dou * 2.205;
        if(index_1 == 2)        // 1 = 英尺
            dou = dou * 35.274;
        if(index_1 == 3)        // 1 = 码
            dou = dou * 0.000984;
        if(index_1 == 4)        // 1 = 英里
            dou = dou * 0.001102;
        if(index_1 == 5)       //以下为市值
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->length_lineEdit_1->setText(str);
            ui->length_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 6)        // 1 = 市里
            dou = dou * 15432.358;
        if(index_1 == 7)        // 1 = 市引
            dou = dou * 4877.561;
        if(index_1 == 8)        // 1 = 市丈
            dou = dou * 4877.561;
        if(index_1 == 9)        // 1 = 市尺
            dou = dou * 0.02;
        if(index_1 == 10)       // 1 = 市寸
            dou = dou * 2;
        if(index_1 == 11)       // 1 = 市分
            dou = dou * 20;
        if(index_1 == 12)       // 1 = 市毫
            dou = dou * 200;
        if(index_1 == 13)       // 1 = 市厘
            dou = dou * 20000;


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
        if(index_1 == 1)        // 1 = 英寸
            dou = dou * 2.205;
        if(index_1 == 2)        // 1 = 英尺
            dou = dou * 35.274;
        if(index_1 == 3)        // 1 = 码
            dou = dou * 0.000984;
        if(index_1 == 4)        // 1 = 英里
            dou = dou * 0.001102;
        if(index_1 == 5)       //以下为市值
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->length_lineEdit_1->setText(str);
            ui->length_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 6)        // 1 = 市里
            dou = dou * 15432.358;
        if(index_1 == 7)        // 1 = 市引
            dou = dou * 4877.561;
        if(index_1 == 8)        // 1 = 市丈
            dou = dou * 4877.561;
        if(index_1 == 9)        // 1 = 市尺
            dou = dou * 0.02;
        if(index_1 == 10)       // 1 = 市寸
            dou = dou * 2;
        if(index_1 == 11)       // 1 = 市分
            dou = dou * 20;
        if(index_1 == 12)       // 1 = 市毫
            dou = dou * 200;
        if(index_1 == 13)       // 1 = 市厘
            dou = dou * 20000;


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
        if(index_1 == 1)        // 1 = 英寸
            dou = dou * 2.205;
        if(index_1 == 2)        // 1 = 英尺
            dou = dou * 35.274;
        if(index_1 == 3)        // 1 = 码
            dou = dou * 0.000984;
        if(index_1 == 4)        // 1 = 英里
            dou = dou * 0.001102;
        if(index_1 == 5)       //以下为市值
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->length_lineEdit_1->setText(str);
            ui->length_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 6)        // 1 = 市里
            dou = dou * 15432.358;
        if(index_1 == 7)        // 1 = 市引
            dou = dou * 4877.561;
        if(index_1 == 8)        // 1 = 市丈
            dou = dou * 4877.561;
        if(index_1 == 9)        // 1 = 市尺
            dou = dou * 0.02;
        if(index_1 == 10)       // 1 = 市寸
            dou = dou * 2;
        if(index_1 == 11)       // 1 = 市分
            dou = dou * 20;
        if(index_1 == 12)       // 1 = 市毫
            dou = dou * 200;
        if(index_1 == 13)       // 1 = 市厘
            dou = dou * 20000;


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
        if(index_1 == 1)        // 1 = 英寸
            dou = dou * 2.205;
        if(index_1 == 2)        // 1 = 英尺
            dou = dou * 35.274;
        if(index_1 == 3)        // 1 = 码
            dou = dou * 0.000984;
        if(index_1 == 4)        // 1 = 英里
            dou = dou * 0.001102;
        if(index_1 == 5)       //以下为市值
        {
            dou = dou * 0;
            str = QString::number(dou);
            ui->length_lineEdit_1->setText(str);
            ui->length_lineEdit_2->setText(str);
            break;
        }
        if(index_1 == 6)        // 1 = 市里
            dou = dou * 15432.358;
        if(index_1 == 7)        // 1 = 市引
            dou = dou * 4877.561;
        if(index_1 == 8)        // 1 = 市丈
            dou = dou * 4877.561;
        if(index_1 == 9)        // 1 = 市尺
            dou = dou * 0.02;
        if(index_1 == 10)       // 1 = 市寸
            dou = dou * 2;
        if(index_1 == 11)       // 1 = 市分
            dou = dou * 20;
        if(index_1 == 12)       // 1 = 市毫
            dou = dou * 200;
        if(index_1 == 13)       // 1 = 市厘
            dou = dou * 20000;


        str = QString::number(dou);
        ui->length_lineEdit_1->setText(str);
    }
        break;
    default:
        break;
    }
}

void Widget::on_area_pushButton_1_clicked()
{

}

void Widget::on_area_pushButton_2_clicked()
{

}

void Widget::on_volume_pushButton_1_clicked()
{

}

void Widget::on_volume_pushButton_2_clicked()
{

}

void Widget::on_temperature_pushButton_1_clicked()
{

}

void Widget::on_temperature_pushButton_2_clicked()
{

}

void Widget::on_money_pushButton_1_clicked()
{

}

void Widget::on_money_pushButton_2_clicked()
{

}
