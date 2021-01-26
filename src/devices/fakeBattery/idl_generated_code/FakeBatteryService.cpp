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

#include <FakeBatteryService.h>

#include <yarp/os/idl/WireTypes.h>

class FakeBatteryService_setBatteryVoltage_helper :
        public yarp::os::Portable
{
public:
    explicit FakeBatteryService_setBatteryVoltage_helper(const double voltage);
    bool write(yarp::os::ConnectionWriter& connection) const override;
    bool read(yarp::os::ConnectionReader& connection) override;

    double m_voltage;
};

FakeBatteryService_setBatteryVoltage_helper::FakeBatteryService_setBatteryVoltage_helper(const double voltage) :
        m_voltage{voltage}
{
}

bool FakeBatteryService_setBatteryVoltage_helper::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(2)) {
        return false;
    }
    if (!writer.writeTag("setBatteryVoltage", 1, 1)) {
        return false;
    }
    if (!writer.writeFloat64(m_voltage)) {
        return false;
    }
    return true;
}

bool FakeBatteryService_setBatteryVoltage_helper::read(yarp::os::ConnectionReader& connection)
{
    YARP_UNUSED(connection);
    return true;
}

class FakeBatteryService_setBatteryCurrent_helper :
        public yarp::os::Portable
{
public:
    explicit FakeBatteryService_setBatteryCurrent_helper(const double current);
    bool write(yarp::os::ConnectionWriter& connection) const override;
    bool read(yarp::os::ConnectionReader& connection) override;

    double m_current;
};

FakeBatteryService_setBatteryCurrent_helper::FakeBatteryService_setBatteryCurrent_helper(const double current) :
        m_current{current}
{
}

bool FakeBatteryService_setBatteryCurrent_helper::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(2)) {
        return false;
    }
    if (!writer.writeTag("setBatteryCurrent", 1, 1)) {
        return false;
    }
    if (!writer.writeFloat64(m_current)) {
        return false;
    }
    return true;
}

bool FakeBatteryService_setBatteryCurrent_helper::read(yarp::os::ConnectionReader& connection)
{
    YARP_UNUSED(connection);
    return true;
}

class FakeBatteryService_setBatteryCharge_helper :
        public yarp::os::Portable
{
public:
    explicit FakeBatteryService_setBatteryCharge_helper(const double charge);
    bool write(yarp::os::ConnectionWriter& connection) const override;
    bool read(yarp::os::ConnectionReader& connection) override;

    double m_charge;
};

FakeBatteryService_setBatteryCharge_helper::FakeBatteryService_setBatteryCharge_helper(const double charge) :
        m_charge{charge}
{
}

bool FakeBatteryService_setBatteryCharge_helper::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(2)) {
        return false;
    }
    if (!writer.writeTag("setBatteryCharge", 1, 1)) {
        return false;
    }
    if (!writer.writeFloat64(m_charge)) {
        return false;
    }
    return true;
}

bool FakeBatteryService_setBatteryCharge_helper::read(yarp::os::ConnectionReader& connection)
{
    YARP_UNUSED(connection);
    return true;
}

class FakeBatteryService_setBatteryInfo_helper :
        public yarp::os::Portable
{
public:
    explicit FakeBatteryService_setBatteryInfo_helper(const std::string& info);
    bool write(yarp::os::ConnectionWriter& connection) const override;
    bool read(yarp::os::ConnectionReader& connection) override;

    std::string m_info;
};

FakeBatteryService_setBatteryInfo_helper::FakeBatteryService_setBatteryInfo_helper(const std::string& info) :
        m_info{info}
{
}

bool FakeBatteryService_setBatteryInfo_helper::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(2)) {
        return false;
    }
    if (!writer.writeTag("setBatteryInfo", 1, 1)) {
        return false;
    }
    if (!writer.writeString(m_info)) {
        return false;
    }
    return true;
}

bool FakeBatteryService_setBatteryInfo_helper::read(yarp::os::ConnectionReader& connection)
{
    YARP_UNUSED(connection);
    return true;
}

class FakeBatteryService_setBatteryTemperature_helper :
        public yarp::os::Portable
{
public:
    explicit FakeBatteryService_setBatteryTemperature_helper(const double temperature);
    bool write(yarp::os::ConnectionWriter& connection) const override;
    bool read(yarp::os::ConnectionReader& connection) override;

    double m_temperature;
};

FakeBatteryService_setBatteryTemperature_helper::FakeBatteryService_setBatteryTemperature_helper(const double temperature) :
        m_temperature{temperature}
{
}

bool FakeBatteryService_setBatteryTemperature_helper::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(2)) {
        return false;
    }
    if (!writer.writeTag("setBatteryTemperature", 1, 1)) {
        return false;
    }
    if (!writer.writeFloat64(m_temperature)) {
        return false;
    }
    return true;
}

bool FakeBatteryService_setBatteryTemperature_helper::read(yarp::os::ConnectionReader& connection)
{
    YARP_UNUSED(connection);
    return true;
}

class FakeBatteryService_getBatteryVoltage_helper :
        public yarp::os::Portable
{
public:
    explicit FakeBatteryService_getBatteryVoltage_helper();
    bool write(yarp::os::ConnectionWriter& connection) const override;
    bool read(yarp::os::ConnectionReader& connection) override;

    thread_local static double s_return_helper;
};

thread_local double FakeBatteryService_getBatteryVoltage_helper::s_return_helper = {};

FakeBatteryService_getBatteryVoltage_helper::FakeBatteryService_getBatteryVoltage_helper()
{
    s_return_helper = {};
}

bool FakeBatteryService_getBatteryVoltage_helper::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(1)) {
        return false;
    }
    if (!writer.writeTag("getBatteryVoltage", 1, 1)) {
        return false;
    }
    return true;
}

bool FakeBatteryService_getBatteryVoltage_helper::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) {
        return false;
    }
    if (!reader.readFloat64(s_return_helper)) {
        reader.fail();
        return false;
    }
    return true;
}

class FakeBatteryService_getBatteryCurrent_helper :
        public yarp::os::Portable
{
public:
    explicit FakeBatteryService_getBatteryCurrent_helper();
    bool write(yarp::os::ConnectionWriter& connection) const override;
    bool read(yarp::os::ConnectionReader& connection) override;

    thread_local static double s_return_helper;
};

thread_local double FakeBatteryService_getBatteryCurrent_helper::s_return_helper = {};

FakeBatteryService_getBatteryCurrent_helper::FakeBatteryService_getBatteryCurrent_helper()
{
    s_return_helper = {};
}

bool FakeBatteryService_getBatteryCurrent_helper::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(1)) {
        return false;
    }
    if (!writer.writeTag("getBatteryCurrent", 1, 1)) {
        return false;
    }
    return true;
}

bool FakeBatteryService_getBatteryCurrent_helper::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) {
        return false;
    }
    if (!reader.readFloat64(s_return_helper)) {
        reader.fail();
        return false;
    }
    return true;
}

class FakeBatteryService_getBatteryCharge_helper :
        public yarp::os::Portable
{
public:
    explicit FakeBatteryService_getBatteryCharge_helper();
    bool write(yarp::os::ConnectionWriter& connection) const override;
    bool read(yarp::os::ConnectionReader& connection) override;

    thread_local static double s_return_helper;
};

thread_local double FakeBatteryService_getBatteryCharge_helper::s_return_helper = {};

FakeBatteryService_getBatteryCharge_helper::FakeBatteryService_getBatteryCharge_helper()
{
    s_return_helper = {};
}

bool FakeBatteryService_getBatteryCharge_helper::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(1)) {
        return false;
    }
    if (!writer.writeTag("getBatteryCharge", 1, 1)) {
        return false;
    }
    return true;
}

bool FakeBatteryService_getBatteryCharge_helper::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) {
        return false;
    }
    if (!reader.readFloat64(s_return_helper)) {
        reader.fail();
        return false;
    }
    return true;
}

class FakeBatteryService_getBatteryStatus_helper :
        public yarp::os::Portable
{
public:
    explicit FakeBatteryService_getBatteryStatus_helper();
    bool write(yarp::os::ConnectionWriter& connection) const override;
    bool read(yarp::os::ConnectionReader& connection) override;

    thread_local static std::string s_return_helper;
};

thread_local std::string FakeBatteryService_getBatteryStatus_helper::s_return_helper = {};

FakeBatteryService_getBatteryStatus_helper::FakeBatteryService_getBatteryStatus_helper()
{
    s_return_helper = {};
}

bool FakeBatteryService_getBatteryStatus_helper::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(1)) {
        return false;
    }
    if (!writer.writeTag("getBatteryStatus", 1, 1)) {
        return false;
    }
    return true;
}

bool FakeBatteryService_getBatteryStatus_helper::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) {
        return false;
    }
    if (!reader.readString(s_return_helper)) {
        reader.fail();
        return false;
    }
    return true;
}

class FakeBatteryService_getBatteryInfo_helper :
        public yarp::os::Portable
{
public:
    explicit FakeBatteryService_getBatteryInfo_helper();
    bool write(yarp::os::ConnectionWriter& connection) const override;
    bool read(yarp::os::ConnectionReader& connection) override;

    thread_local static std::string s_return_helper;
};

thread_local std::string FakeBatteryService_getBatteryInfo_helper::s_return_helper = {};

FakeBatteryService_getBatteryInfo_helper::FakeBatteryService_getBatteryInfo_helper()
{
    s_return_helper = {};
}

bool FakeBatteryService_getBatteryInfo_helper::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(1)) {
        return false;
    }
    if (!writer.writeTag("getBatteryInfo", 1, 1)) {
        return false;
    }
    return true;
}

bool FakeBatteryService_getBatteryInfo_helper::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) {
        return false;
    }
    if (!reader.readString(s_return_helper)) {
        reader.fail();
        return false;
    }
    return true;
}

class FakeBatteryService_getBatteryTemperature_helper :
        public yarp::os::Portable
{
public:
    explicit FakeBatteryService_getBatteryTemperature_helper();
    bool write(yarp::os::ConnectionWriter& connection) const override;
    bool read(yarp::os::ConnectionReader& connection) override;

    thread_local static double s_return_helper;
};

thread_local double FakeBatteryService_getBatteryTemperature_helper::s_return_helper = {};

FakeBatteryService_getBatteryTemperature_helper::FakeBatteryService_getBatteryTemperature_helper()
{
    s_return_helper = {};
}

bool FakeBatteryService_getBatteryTemperature_helper::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(1)) {
        return false;
    }
    if (!writer.writeTag("getBatteryTemperature", 1, 1)) {
        return false;
    }
    return true;
}

bool FakeBatteryService_getBatteryTemperature_helper::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListReturn()) {
        return false;
    }
    if (!reader.readFloat64(s_return_helper)) {
        reader.fail();
        return false;
    }
    return true;
}

// Constructor
FakeBatteryService::FakeBatteryService()
{
    yarp().setOwner(*this);
}

void FakeBatteryService::setBatteryVoltage(const double voltage)
{
    FakeBatteryService_setBatteryVoltage_helper helper{voltage};
    if (!yarp().canWrite()) {
        yError("Missing server method '%s'?", "void FakeBatteryService::setBatteryVoltage(const double voltage)");
    }
    yarp().write(helper);
}

void FakeBatteryService::setBatteryCurrent(const double current)
{
    FakeBatteryService_setBatteryCurrent_helper helper{current};
    if (!yarp().canWrite()) {
        yError("Missing server method '%s'?", "void FakeBatteryService::setBatteryCurrent(const double current)");
    }
    yarp().write(helper);
}

void FakeBatteryService::setBatteryCharge(const double charge)
{
    FakeBatteryService_setBatteryCharge_helper helper{charge};
    if (!yarp().canWrite()) {
        yError("Missing server method '%s'?", "void FakeBatteryService::setBatteryCharge(const double charge)");
    }
    yarp().write(helper);
}

void FakeBatteryService::setBatteryInfo(const std::string& info)
{
    FakeBatteryService_setBatteryInfo_helper helper{info};
    if (!yarp().canWrite()) {
        yError("Missing server method '%s'?", "void FakeBatteryService::setBatteryInfo(const std::string& info)");
    }
    yarp().write(helper);
}

void FakeBatteryService::setBatteryTemperature(const double temperature)
{
    FakeBatteryService_setBatteryTemperature_helper helper{temperature};
    if (!yarp().canWrite()) {
        yError("Missing server method '%s'?", "void FakeBatteryService::setBatteryTemperature(const double temperature)");
    }
    yarp().write(helper);
}

double FakeBatteryService::getBatteryVoltage()
{
    FakeBatteryService_getBatteryVoltage_helper helper{};
    if (!yarp().canWrite()) {
        yError("Missing server method '%s'?", "double FakeBatteryService::getBatteryVoltage()");
    }
    bool ok = yarp().write(helper, helper);
    return ok ? FakeBatteryService_getBatteryVoltage_helper::s_return_helper : double{};
}

double FakeBatteryService::getBatteryCurrent()
{
    FakeBatteryService_getBatteryCurrent_helper helper{};
    if (!yarp().canWrite()) {
        yError("Missing server method '%s'?", "double FakeBatteryService::getBatteryCurrent()");
    }
    bool ok = yarp().write(helper, helper);
    return ok ? FakeBatteryService_getBatteryCurrent_helper::s_return_helper : double{};
}

double FakeBatteryService::getBatteryCharge()
{
    FakeBatteryService_getBatteryCharge_helper helper{};
    if (!yarp().canWrite()) {
        yError("Missing server method '%s'?", "double FakeBatteryService::getBatteryCharge()");
    }
    bool ok = yarp().write(helper, helper);
    return ok ? FakeBatteryService_getBatteryCharge_helper::s_return_helper : double{};
}

std::string FakeBatteryService::getBatteryStatus()
{
    FakeBatteryService_getBatteryStatus_helper helper{};
    if (!yarp().canWrite()) {
        yError("Missing server method '%s'?", "std::string FakeBatteryService::getBatteryStatus()");
    }
    bool ok = yarp().write(helper, helper);
    return ok ? FakeBatteryService_getBatteryStatus_helper::s_return_helper : std::string{};
}

std::string FakeBatteryService::getBatteryInfo()
{
    FakeBatteryService_getBatteryInfo_helper helper{};
    if (!yarp().canWrite()) {
        yError("Missing server method '%s'?", "std::string FakeBatteryService::getBatteryInfo()");
    }
    bool ok = yarp().write(helper, helper);
    return ok ? FakeBatteryService_getBatteryInfo_helper::s_return_helper : std::string{};
}

double FakeBatteryService::getBatteryTemperature()
{
    FakeBatteryService_getBatteryTemperature_helper helper{};
    if (!yarp().canWrite()) {
        yError("Missing server method '%s'?", "double FakeBatteryService::getBatteryTemperature()");
    }
    bool ok = yarp().write(helper, helper);
    return ok ? FakeBatteryService_getBatteryTemperature_helper::s_return_helper : double{};
}

// help method
std::vector<std::string> FakeBatteryService::help(const std::string& functionName)
{
    bool showAll = (functionName == "--all");
    std::vector<std::string> helpString;
    if (showAll) {
        helpString.emplace_back("*** Available commands:");
        helpString.emplace_back("setBatteryVoltage");
        helpString.emplace_back("setBatteryCurrent");
        helpString.emplace_back("setBatteryCharge");
        helpString.emplace_back("setBatteryInfo");
        helpString.emplace_back("setBatteryTemperature");
        helpString.emplace_back("getBatteryVoltage");
        helpString.emplace_back("getBatteryCurrent");
        helpString.emplace_back("getBatteryCharge");
        helpString.emplace_back("getBatteryStatus");
        helpString.emplace_back("getBatteryInfo");
        helpString.emplace_back("getBatteryTemperature");
        helpString.emplace_back("help");
    } else {
        if (functionName == "setBatteryVoltage") {
            helpString.emplace_back("void setBatteryVoltage(const double voltage) ");
        }
        if (functionName == "setBatteryCurrent") {
            helpString.emplace_back("void setBatteryCurrent(const double current) ");
        }
        if (functionName == "setBatteryCharge") {
            helpString.emplace_back("void setBatteryCharge(const double charge) ");
        }
        if (functionName == "setBatteryInfo") {
            helpString.emplace_back("void setBatteryInfo(const std::string& info) ");
        }
        if (functionName == "setBatteryTemperature") {
            helpString.emplace_back("void setBatteryTemperature(const double temperature) ");
        }
        if (functionName == "getBatteryVoltage") {
            helpString.emplace_back("double getBatteryVoltage() ");
        }
        if (functionName == "getBatteryCurrent") {
            helpString.emplace_back("double getBatteryCurrent() ");
        }
        if (functionName == "getBatteryCharge") {
            helpString.emplace_back("double getBatteryCharge() ");
        }
        if (functionName == "getBatteryStatus") {
            helpString.emplace_back("std::string getBatteryStatus() ");
        }
        if (functionName == "getBatteryInfo") {
            helpString.emplace_back("std::string getBatteryInfo() ");
        }
        if (functionName == "getBatteryTemperature") {
            helpString.emplace_back("double getBatteryTemperature() ");
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
bool FakeBatteryService::read(yarp::os::ConnectionReader& connection)
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
        if (tag == "setBatteryVoltage") {
            double voltage;
            if (!reader.readFloat64(voltage)) {
                reader.fail();
                return false;
            }
            if (!direct) {
                FakeBatteryService_setBatteryVoltage_helper helper{voltage};
                yarp().callback(helper, *this, "__direct__");
            } else {
                setBatteryVoltage(voltage);
            }
            yarp::os::idl::WireWriter writer(reader);
            if (!writer.isNull()) {
                if (!writer.writeOnewayResponse()) {
                    return false;
                }
            }
            reader.accept();
            return true;
        }
        if (tag == "setBatteryCurrent") {
            double current;
            if (!reader.readFloat64(current)) {
                reader.fail();
                return false;
            }
            if (!direct) {
                FakeBatteryService_setBatteryCurrent_helper helper{current};
                yarp().callback(helper, *this, "__direct__");
            } else {
                setBatteryCurrent(current);
            }
            yarp::os::idl::WireWriter writer(reader);
            if (!writer.isNull()) {
                if (!writer.writeOnewayResponse()) {
                    return false;
                }
            }
            reader.accept();
            return true;
        }
        if (tag == "setBatteryCharge") {
            double charge;
            if (!reader.readFloat64(charge)) {
                reader.fail();
                return false;
            }
            if (!direct) {
                FakeBatteryService_setBatteryCharge_helper helper{charge};
                yarp().callback(helper, *this, "__direct__");
            } else {
                setBatteryCharge(charge);
            }
            yarp::os::idl::WireWriter writer(reader);
            if (!writer.isNull()) {
                if (!writer.writeOnewayResponse()) {
                    return false;
                }
            }
            reader.accept();
            return true;
        }
        if (tag == "setBatteryInfo") {
            std::string info;
            if (!reader.readString(info)) {
                reader.fail();
                return false;
            }
            if (!direct) {
                FakeBatteryService_setBatteryInfo_helper helper{info};
                yarp().callback(helper, *this, "__direct__");
            } else {
                setBatteryInfo(info);
            }
            yarp::os::idl::WireWriter writer(reader);
            if (!writer.isNull()) {
                if (!writer.writeOnewayResponse()) {
                    return false;
                }
            }
            reader.accept();
            return true;
        }
        if (tag == "setBatteryTemperature") {
            double temperature;
            if (!reader.readFloat64(temperature)) {
                reader.fail();
                return false;
            }
            if (!direct) {
                FakeBatteryService_setBatteryTemperature_helper helper{temperature};
                yarp().callback(helper, *this, "__direct__");
            } else {
                setBatteryTemperature(temperature);
            }
            yarp::os::idl::WireWriter writer(reader);
            if (!writer.isNull()) {
                if (!writer.writeOnewayResponse()) {
                    return false;
                }
            }
            reader.accept();
            return true;
        }
        if (tag == "getBatteryVoltage") {
            FakeBatteryService_getBatteryVoltage_helper::s_return_helper = getBatteryVoltage();
            yarp::os::idl::WireWriter writer(reader);
            if (!writer.isNull()) {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeFloat64(FakeBatteryService_getBatteryVoltage_helper::s_return_helper)) {
                    return false;
                }
            }
            reader.accept();
            return true;
        }
        if (tag == "getBatteryCurrent") {
            FakeBatteryService_getBatteryCurrent_helper::s_return_helper = getBatteryCurrent();
            yarp::os::idl::WireWriter writer(reader);
            if (!writer.isNull()) {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeFloat64(FakeBatteryService_getBatteryCurrent_helper::s_return_helper)) {
                    return false;
                }
            }
            reader.accept();
            return true;
        }
        if (tag == "getBatteryCharge") {
            FakeBatteryService_getBatteryCharge_helper::s_return_helper = getBatteryCharge();
            yarp::os::idl::WireWriter writer(reader);
            if (!writer.isNull()) {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeFloat64(FakeBatteryService_getBatteryCharge_helper::s_return_helper)) {
                    return false;
                }
            }
            reader.accept();
            return true;
        }
        if (tag == "getBatteryStatus") {
            FakeBatteryService_getBatteryStatus_helper::s_return_helper = getBatteryStatus();
            yarp::os::idl::WireWriter writer(reader);
            if (!writer.isNull()) {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString(FakeBatteryService_getBatteryStatus_helper::s_return_helper)) {
                    return false;
                }
            }
            reader.accept();
            return true;
        }
        if (tag == "getBatteryInfo") {
            FakeBatteryService_getBatteryInfo_helper::s_return_helper = getBatteryInfo();
            yarp::os::idl::WireWriter writer(reader);
            if (!writer.isNull()) {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString(FakeBatteryService_getBatteryInfo_helper::s_return_helper)) {
                    return false;
                }
            }
            reader.accept();
            return true;
        }
        if (tag == "getBatteryTemperature") {
            FakeBatteryService_getBatteryTemperature_helper::s_return_helper = getBatteryTemperature();
            yarp::os::idl::WireWriter writer(reader);
            if (!writer.isNull()) {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeFloat64(FakeBatteryService_getBatteryTemperature_helper::s_return_helper)) {
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
