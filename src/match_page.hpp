#ifndef REGEX_EXPLORE_MATCH_PAGE_HPP
#define REGEX_EXPLORE_MATCH_PAGE_HPP
#include <cstddef>

#include <cppurses/widget/layouts/vertical.hpp>
#include <cppurses/widget/widgets/label.hpp>

#include "match_box.hpp"

namespace regex_explore {

struct Match_page : cppurses::layout::Vertical {
    Match_page();

    void set_match_count(std::size_t count);

    cppurses::Label& label{this->make_child<cppurses::Label>("Matches(0)")};
    Match_box& match_box{this->make_child<Match_box>()};
};

}  // namespace regex_explore
#endif  // REGEX_EXPLORE_MATCH_PAGE_HPP
