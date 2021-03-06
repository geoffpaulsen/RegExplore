#ifndef REGEX_EXPLORE_REFERENCE_PAGE_HPP
#define REGEX_EXPLORE_REFERENCE_PAGE_HPP
#include <cppurses/widget/layouts/vertical.hpp>
#include <cppurses/widget/widgets/label.hpp>
#include <cppurses/widget/widgets/push_button.hpp>
#include <cppurses/widget/widgets/textbox.hpp>

namespace regex_explore {

struct Reference_page : cppurses::layout::Vertical {
    Reference_page();

    cppurses::Label& label{this->make_child<cppurses::Label>("Reference")};
    cppurses::Textbox& reference_text{this->make_child<cppurses::Textbox>()};
    cppurses::Push_button& change_page{
        this->make_child<cppurses::Push_button>("> Options <")};
};

}  // namespace regex_explore
#endif  // REGEX_EXPLORE_REFERENCE_PAGE_HPP
