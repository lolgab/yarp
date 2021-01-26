/*
 * Copyright (C) 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms of the
 * BSD-3-Clause license. See the accompanying LICENSE file for details.
 */

// Autogenerated by Thrift Compiler (0.12.0-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#include <yarp/test/Demo.h>

#include <yarp/os/idl/WireTypes.h>

namespace yarp {
namespace test {

class Demo_get_answer_helper :
        public yarp::os::Portable
{
public:
    explicit Demo_get_answer_helper();
    bool write(yarp::os::ConnectionWriter& connection) const override;
    bool read(yarp::os::ConnectionReader& connection) override;

    thread_local static std::int32_t s_return_helper;
};

thread_local std::int32_t Demo_get_answer_helper::s_return_helper = {};

Demo_get_answer_helper::Demo_get_answer_helper()
{
    s_return_helper = {};
}

bool Demo_get_answer_helper::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(2)) {
        return false;
    }
    if (!writer.writeTag("get_answer", 1, 2)) {
        return false;
    }
    return true;
}

bool Demo_get_answer_helper::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) {
        return false;
    }
    if (!reader.readI32(s_return_helper)) {
        reader.fail();
        return false;
    }
    return true;
}

class Demo_add_one_helper :
        public yarp::os::Portable
{
public:
    explicit Demo_add_one_helper(const std::int32_t x);
    bool write(yarp::os::ConnectionWriter& connection) const override;
    bool read(yarp::os::ConnectionReader& connection) override;

    std::int32_t m_x;

    thread_local static std::int32_t s_return_helper;
};

thread_local std::int32_t Demo_add_one_helper::s_return_helper = {};

Demo_add_one_helper::Demo_add_one_helper(const std::int32_t x) :
        m_x{x}
{
    s_return_helper = {};
}

bool Demo_add_one_helper::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(3)) {
        return false;
    }
    if (!writer.writeTag("add_one", 1, 2)) {
        return false;
    }
    if (!writer.writeI32(m_x)) {
        return false;
    }
    return true;
}

bool Demo_add_one_helper::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) {
        return false;
    }
    if (!reader.readI32(s_return_helper)) {
        reader.fail();
        return false;
    }
    return true;
}

class Demo_double_down_helper :
        public yarp::os::Portable
{
public:
    explicit Demo_double_down_helper(const std::int32_t x);
    bool write(yarp::os::ConnectionWriter& connection) const override;
    bool read(yarp::os::ConnectionReader& connection) override;

    std::int32_t m_x;

    thread_local static std::int32_t s_return_helper;
};

thread_local std::int32_t Demo_double_down_helper::s_return_helper = {};

Demo_double_down_helper::Demo_double_down_helper(const std::int32_t x) :
        m_x{x}
{
    s_return_helper = {};
}

bool Demo_double_down_helper::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(3)) {
        return false;
    }
    if (!writer.writeTag("double_down", 1, 2)) {
        return false;
    }
    if (!writer.writeI32(m_x)) {
        return false;
    }
    return true;
}

bool Demo_double_down_helper::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) {
        return false;
    }
    if (!reader.readI32(s_return_helper)) {
        reader.fail();
        return false;
    }
    return true;
}

class Demo_add_point_helper :
        public yarp::os::Portable
{
public:
    explicit Demo_add_point_helper(const yarp::test::PointD& x, const yarp::test::PointD& y);
    bool write(yarp::os::ConnectionWriter& connection) const override;
    bool read(yarp::os::ConnectionReader& connection) override;

    yarp::test::PointD m_x;
    yarp::test::PointD m_y;

    thread_local static yarp::test::PointD s_return_helper;
};

thread_local yarp::test::PointD Demo_add_point_helper::s_return_helper = {};

Demo_add_point_helper::Demo_add_point_helper(const yarp::test::PointD& x, const yarp::test::PointD& y) :
        m_x{x},
        m_y{y}
{
}

bool Demo_add_point_helper::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(8)) {
        return false;
    }
    if (!writer.writeTag("add_point", 1, 2)) {
        return false;
    }
    if (!writer.write(m_x)) {
        return false;
    }
    if (!writer.write(m_y)) {
        return false;
    }
    return true;
}

bool Demo_add_point_helper::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) {
        return false;
    }
    if (!reader.read(s_return_helper)) {
        reader.fail();
        return false;
    }
    return true;
}

// Constructor
Demo::Demo()
{
    yarp().setOwner(*this);
}

std::int32_t Demo::get_answer()
{
    Demo_get_answer_helper helper{};
    if (!yarp().canWrite()) {
        yError("Missing server method '%s'?", "std::int32_t Demo::get_answer()");
    }
    bool ok = yarp().write(helper, helper);
    return ok ? Demo_get_answer_helper::s_return_helper : std::int32_t{};
}

std::int32_t Demo::add_one(const std::int32_t x)
{
    Demo_add_one_helper helper{x};
    if (!yarp().canWrite()) {
        yError("Missing server method '%s'?", "std::int32_t Demo::add_one(const std::int32_t x)");
    }
    bool ok = yarp().write(helper, helper);
    return ok ? Demo_add_one_helper::s_return_helper : std::int32_t{};
}

std::int32_t Demo::double_down(const std::int32_t x)
{
    Demo_double_down_helper helper{x};
    if (!yarp().canWrite()) {
        yError("Missing server method '%s'?", "std::int32_t Demo::double_down(const std::int32_t x)");
    }
    bool ok = yarp().write(helper, helper);
    return ok ? Demo_double_down_helper::s_return_helper : std::int32_t{};
}

yarp::test::PointD Demo::add_point(const yarp::test::PointD& x, const yarp::test::PointD& y)
{
    Demo_add_point_helper helper{x, y};
    if (!yarp().canWrite()) {
        yError("Missing server method '%s'?", "yarp::test::PointD Demo::add_point(const yarp::test::PointD& x, const yarp::test::PointD& y)");
    }
    bool ok = yarp().write(helper, helper);
    return ok ? Demo_add_point_helper::s_return_helper : yarp::test::PointD{};
}

// help method
std::vector<std::string> Demo::help(const std::string& functionName)
{
    bool showAll = (functionName == "--all");
    std::vector<std::string> helpString;
    if (showAll) {
        helpString.emplace_back("*** Available commands:");
        helpString.emplace_back("get_answer");
        helpString.emplace_back("add_one");
        helpString.emplace_back("double_down");
        helpString.emplace_back("add_point");
        helpString.emplace_back("help");
    } else {
        if (functionName == "get_answer") {
            helpString.emplace_back("std::int32_t get_answer() ");
        }
        if (functionName == "add_one") {
            helpString.emplace_back("std::int32_t add_one(const std::int32_t x = 0) ");
        }
        if (functionName == "double_down") {
            helpString.emplace_back("std::int32_t double_down(const std::int32_t x) ");
        }
        if (functionName == "add_point") {
            helpString.emplace_back("yarp::test::PointD add_point(const yarp::test::PointD& x, const yarp::test::PointD& y) ");
        }
        if (functionName == "help") {
            helpString.emplace_back("std::vector<std::string> help(const std::string& functionName = \"--all\")");
            helpString.emplace_back("Return list of available commands, or help message for a specific function");
            helpString.emplace_back("@param functionName name of command for which to get a detailed description. If none or '--all' is provided, print list of available commands");
            helpString.emplace_back("@return list of strings (one string per line)");
        }
    }
    if (helpString.empty()) {
        helpString.emplace_back("Command not found");
    }
    return helpString;
}

// read from ConnectionReader
bool Demo::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    reader.expectAccept();
    if (!reader.readListHeader()) {
        reader.fail();
        return false;
    }

    std::string tag = reader.readTag();
    bool direct = (tag == "__direct__");
    if (direct) {
        tag = reader.readTag();
    }
    while (!reader.isError()) {
        if (tag == "get_answer") {
            Demo_get_answer_helper::s_return_helper = get_answer();
            yarp::os::idl::WireWriter writer(reader);
            if (!writer.isNull()) {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeI32(Demo_get_answer_helper::s_return_helper)) {
                    return false;
                }
            }
            reader.accept();
            return true;
        }
        if (tag == "add_one") {
            std::int32_t x;
            if (!reader.readI32(x)) {
                x = 0;
            }
            Demo_add_one_helper::s_return_helper = add_one(x);
            yarp::os::idl::WireWriter writer(reader);
            if (!writer.isNull()) {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeI32(Demo_add_one_helper::s_return_helper)) {
                    return false;
                }
            }
            reader.accept();
            return true;
        }
        if (tag == "double_down") {
            std::int32_t x;
            if (!reader.readI32(x)) {
                reader.fail();
                return false;
            }
            Demo_double_down_helper::s_return_helper = double_down(x);
            yarp::os::idl::WireWriter writer(reader);
            if (!writer.isNull()) {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeI32(Demo_double_down_helper::s_return_helper)) {
                    return false;
                }
            }
            reader.accept();
            return true;
        }
        if (tag == "add_point") {
            yarp::test::PointD x;
            yarp::test::PointD y;
            if (!reader.read(x)) {
                reader.fail();
                return false;
            }
            if (!reader.read(y)) {
                reader.fail();
                return false;
            }
            Demo_add_point_helper::s_return_helper = add_point(x, y);
            yarp::os::idl::WireWriter writer(reader);
            if (!writer.isNull()) {
                if (!writer.writeListHeader(3)) {
                    return false;
                }
                if (!writer.write(Demo_add_point_helper::s_return_helper)) {
                    return false;
                }
            }
            reader.accept();
            return true;
        }
        if (tag == "help") {
            std::string functionName;
            if (!reader.readString(functionName)) {
                functionName = "--all";
            }
            auto help_strings = help(functionName);
            yarp::os::idl::WireWriter writer(reader);
            if (!writer.isNull()) {
                if (!writer.writeListHeader(2)) {
                    return false;
                }
                if (!writer.writeTag("many", 1, 0)) {
                    return false;
                }
                if (!writer.writeListBegin(BOTTLE_TAG_INT32, static_cast<uint32_t>(help_strings.size()))) {
                    return false;
                }
                for (const auto& help_string : help_strings) {
                    if (!writer.writeString(help_string)) {
                        return false;
                    }
                }
                if (!writer.writeListEnd()) {
                    return false;
                }
            }
            reader.accept();
            return true;
        }
        if (reader.noMore()) {
            reader.fail();
            return false;
        }
        std::string next_tag = reader.readTag();
        if (next_tag == "") {
            break;
        }
        tag.append("_").append(next_tag);
    }
    return false;
}

} // namespace yarp
} // namespace test
