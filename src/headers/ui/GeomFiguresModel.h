#pragma once

#include <QAbstractListModel>
#include <QString>
#include <QHash>

namespace rio
{
class GeomFiguresModel;
}

class GeomFiguresModel : public QAbstractListModel
{
    Q_OBJECT

public:
    GeomFiguresModel(QWidget *parent = nullptr);

    QVariant data( const QModelIndex& index, int role ) const;
    bool setData(const QModelIndex& index,
                 const QVariant& value,
                 int role);

public slots:
    bool removeSelected(QString& nameFigure);
    bool appendFigure(QString& indicator,
                      QString& nameFigure,
                      QVariant& parameters);

private:
    typedef QHash< QString, QVariant > Figure;
    typedef QList< Figure > FigureList;
    FigureList m_figureList;
};
