#include <regex_explore/match_page.hpp>

#include <cppurses/widget/border.hpp>

namespace regex_explore {

Match_page::Match_page(const Textbox_highlight* highlight_box)
    : submatch_display{this->make_child<Submatch_display>(highlight_box)} {
    cppurses::disable_corners(this->border);
    cppurses::disable_walls(this->border);
    this->border.east_enabled = true;
    cppurses::enable_border(*this);

    cppurses::set_background(label, cppurses::Color::Light_gray);
    cppurses::set_foreground(label, cppurses::Color::Dark_blue);

    label.set_alignment(cppurses::Alignment::Center);
}

}  // namespace regex_explore