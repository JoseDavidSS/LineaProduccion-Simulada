#include "ventanaprincipal.h"
#include "ui_ventanaprincipal.h"
#include "../Logica/Lista.h"
#include <iostream>


VentanaPrincipal::VentanaPrincipal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::VentanaPrincipal)
{
    ui->setupUi(this);
}

VentanaPrincipal::~VentanaPrincipal()
{
    delete ui;
}

void VentanaPrincipal::agregarLineaProduccion() {
    int contador = this->contador;

    if (contador == 1) {
        this->linea1 = new Lista;
        this->contador++;
        ui->label_3->setText("1");
        ui->comboBox->addItem("Linea 1");


    }

    if (contador == 2) {
        this->linea2 = new Lista;
        this->contador++;
        ui->label_3->setText("2");
        ui->comboBox->addItem("Linea 2");


    }

    if (contador == 3) {
        this->linea3 = new Lista;
        this->contador++;
        ui->label_3->setText("3");
        ui->comboBox->addItem("Linea 3");


    }

    if (contador == 4) {
        this->linea4 = new Lista;
        this->contador++;
        ui->label_3->setText("4");
        ui->comboBox->addItem("Linea 4");


    }

    if (contador == 5) {
        this->linea5 = new Lista;
        this->contador++;
        ui->label_3->setText("5");
        ui->comboBox->addItem("Linea 5");


    }

    if (contador == 6) {
        this->linea6 = new Lista;
        this->contador++;
        ui->label_3->setText("6, no se pueden agregar mas.");
        ui->comboBox->addItem("Linea 6");


    }

    if (contador >= 7){
        printf("No se pueden agregar mas lineas de produccion");
    }
}


void VentanaPrincipal::on_pushButton_4_clicked()
{
    agregarLineaProduccion();
}

void VentanaPrincipal::agregarElementoLineaProduccion(string linea){

    std::cout << linea << std::endl;
    string proceso = ui->lineEdit->displayText().toStdString();
    int tiempo = ui->lineEdit_2->displayText().toInt();

    if (linea == "Linea 1"){
        this->linea1->insertarNodo(proceso,tiempo,true);
    }
    if (linea == "Linea 2"){
        this->linea2->insertarNodo(proceso,tiempo,true);
        cout << linea2->head->getProceso();
        cout << linea2->head->getTiempo();
        cout << linea2->head->getEstado() << std::endl;
    }
    if (linea == "Linea 3"){
        this->linea3->insertarNodo(proceso,tiempo,true);

    }
    if (linea == "Linea 4"){
        this->linea4->insertarNodo(proceso,tiempo,true);

    }
    if (linea == "Linea 5"){
        this->linea5->insertarNodo(proceso,tiempo,true);

    }
    if (linea == "Linea 6"){
        this->linea6->insertarNodo(proceso,tiempo,true);
    }

}

void VentanaPrincipal::on_pushButton_6_clicked()
{
    agregarElementoLineaProduccion(ui->comboBox->currentText().toStdString());
}
