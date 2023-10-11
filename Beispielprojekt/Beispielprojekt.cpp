#include <Gosu/Gosu.hpp>
#include <Gosu/AutoLink.hpp>

class GameWindow : public Gosu::Window
{
public:

    GameWindow()
        : Window(800, 600, true) // Fensterbreite, Fensterhöhe, Vollbildmodus (false für Fenstermodus)
    {
        set_caption("Gosu Tutorial mit Git");
    }

    void draw() override
    {
        graphics().draw_line(
            10, 20, Gosu::Color::RED,
            200, 100, Gosu::Color::GREEN,
            0.0
        );
    }

    void update() override
    {
    }
};

int main()
{
    
}
