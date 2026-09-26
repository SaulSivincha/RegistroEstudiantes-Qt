#pragma once

#include <QWidget>

class QLineEdit;
class QPushButton;
class QLabel;
class QListWidget;

class VentanaRegistro : public QWidget {
    Q_OBJECT

public:
    explicit VentanaRegistro(QWidget *parent = nullptr);

private slots:
    void registrarEstudiante();
    void limpiarFormulario();

private:
    void mostrarMensaje(const QString &mensaje, bool esError = false);
    void actualizarContador();

    QLineEdit *edtNombre;
    QLineEdit *edtCodigo;
    QPushButton *btnRegistrar;
    QPushButton *btnLimpiar;
    QLabel *lblResultado;
    QLabel *lblContador;
    QListWidget *lstEstudiantes;
};
