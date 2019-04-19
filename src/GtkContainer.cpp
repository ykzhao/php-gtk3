
#include "GtkContainer.h"

/**
 *  C++ constructor and destructor
 */
GtkContainer_::GtkContainer_() = default;
GtkContainer_::~GtkContainer_() = default;

/**
 * Adds widget to container
 */
void GtkContainer_::add(Php::Parameters &parameters)
{
    Php::Value object = parameters[0];

    if (!object.instanceOf("GtkWidget")) throw Php::Exception("parameter expect GtkWidget instance");

    GtkWidget_ *passedWidget = (GtkWidget_ *)object.implementation();


    gtk_container_add(GTK_CONTAINER(widget), passedWidget->get_widget());
};