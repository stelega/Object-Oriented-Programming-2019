#pragma once


class AttFormat{

public:
    enum Option{
        BOLD,
        DIM,
        UNDERLINED,
        RESET
    };

    AttFormat() = default;
    AttFormat( AttFormat::Option x);
    virtual ~AttFormat() = default;

    virtual AttFormat::Option getFormat() const;

protected:
    AttFormat::Option m_format;

};
