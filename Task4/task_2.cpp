#include <gtkmm.h>

class Window : public Gtk::Window {
public:
  Gtk::Box box;
  Gtk::Entry forname;
  Gtk::Entry surname;
  Gtk::Button button;
  Gtk::Label label;
  Gtk::Label fornameLabel;
  Gtk::Label surnameLabel;

  Window() : box(Gtk::Orientation::ORIENTATION_VERTICAL), fornameLabel("Forname:"), surnameLabel("Surname:") {
    set_title("Øving 4");
    button.set_label("Click here");

    box.pack_start(fornameLabel);
    box.pack_start(forname); // Add the widget entry to box
    box.pack_start(surnameLabel);
    box.pack_start(surname);
    box.pack_start(button); // Add the widget button to box
    box.pack_start(label);  // Add the widget label to box

    add(box);   // Add vbox to window
    show_all(); // Show all widgets

    button.set_sensitive(false);

    forname.signal_changed().connect([this]() {
      isFornameEmpty = forname.get_text().empty();
      button.set_sensitive(!(isFornameEmpty || isSurnameEmpty));
    });

    surname.signal_changed().connect([this]() {
      isSurnameEmpty = surname.get_text().empty();
      button.set_sensitive(!(isFornameEmpty || isSurnameEmpty));
    });

    button.signal_clicked().connect([this]() {
      std::string combinedName = forname.get_text() + " " + surname.get_text();
      label.set_text("Names combined: " + combinedName);
    });
  }

private:
  bool isFornameEmpty = true;
  bool isSurnameEmpty = true;
};

int main() {
  auto app = Gtk::Application::create();
  Window window;
  return app->run(window);
}
