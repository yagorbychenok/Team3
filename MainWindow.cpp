#include "MainWindow.h"

#include <QDebug>
#include <QFileDialog>
#include <iostream>

#include "GraphView.h"

MainWindow::MainWindow(QWidget *parent)
        : QMainWindow(parent)
        , ui_(std::make_unique<Ui::MainWindow>())
        , graphView_(std::make_unique<GraphView>(this)) {
    ui_->setupUi(this);
    ui_->verticalLayout->addWidget(graphView_.get());

    ui_->styleBox->addItem("Summer");
    ui_->styleBox->addItem("Minimalism");
}

void MainWindow::on_load_graph_clicked() {
    QString fileName = QFileDialog::getOpenFileName(
                                        this,
                                        tr("Load graph"), "",
                                        tr("Graph (*.json)"));
    //std::cout << fileName.toStdString();
    /*graphView_->NewGame(
            static_cast<utils::TextureType>(ui_->background_box->currentIndex()),
            ui_->map_box->currentText());
    ui_->new_game->setEnabled(false);
    ui_->background_box->setEnabled(false);
    ui_->pause->setEnabled(true);
    ui_->pause->setText("Pause");
    ui_->state_label->setText("");*/
}

void MainWindow::on_styleBox_currentTextChanged(const QString &text) {
    //std::cout << text.toStdString() << std::endl;
}

void MainWindow::on_exit_clicked() {
    QApplication::exit(0);
}
