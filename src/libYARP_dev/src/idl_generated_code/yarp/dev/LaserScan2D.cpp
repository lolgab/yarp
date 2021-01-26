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

#include <yarp/dev/LaserScan2D.h>

namespace yarp {
namespace dev {

// Default constructor
LaserScan2D::LaserScan2D() :
        WirePortable(),
        angle_min(0),
        angle_max(0),
        range_min(0),
        range_max(0),
        scans(),
        status(0)
{
}

// Constructor with field values
LaserScan2D::LaserScan2D(const double angle_min,
                         const double angle_max,
                         const double range_min,
                         const double range_max,
                         const yarp::sig::Vector& scans,
                         const std::int32_t status) :
        WirePortable(),
        angle_min(angle_min),
        angle_max(angle_max),
        range_min(range_min),
        range_max(range_max),
        scans(scans),
        status(status)
{
}

// Read structure on a Wire
bool LaserScan2D::read(yarp::os::idl::WireReader& reader)
{
    if (!read_angle_min(reader)) {
        return false;
    }
    if (!read_angle_max(reader)) {
        return false;
    }
    if (!read_range_min(reader)) {
        return false;
    }
    if (!read_range_max(reader)) {
        return false;
    }
    if (!read_scans(reader)) {
        return false;
    }
    if (!read_status(reader)) {
        return false;
    }
    return !reader.isError();
}

// Read structure on a Connection
bool LaserScan2D::read(yarp::os::ConnectionReader& connection)
{
    yarp::os::idl::WireReader reader(connection);
    if (!reader.readListHeader(6)) {
        return false;
    }
    return read(reader);
}

// Write structure on a Wire
bool LaserScan2D::write(const yarp::os::idl::WireWriter& writer) const
{
    if (!write_angle_min(writer)) {
        return false;
    }
    if (!write_angle_max(writer)) {
        return false;
    }
    if (!write_range_min(writer)) {
        return false;
    }
    if (!write_range_max(writer)) {
        return false;
    }
    if (!write_scans(writer)) {
        return false;
    }
    if (!write_status(writer)) {
        return false;
    }
    return !writer.isError();
}

// Write structure on a Connection
bool LaserScan2D::write(yarp::os::ConnectionWriter& connection) const
{
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(6)) {
        return false;
    }
    return write(writer);
}

// Convert to a printable string
std::string LaserScan2D::toString() const
{
    yarp::os::Bottle b;
    b.read(*this);
    return b.toString();
}

// Editor: default constructor
LaserScan2D::Editor::Editor()
{
    group = 0;
    obj_owned = true;
    obj = new LaserScan2D;
    dirty_flags(false);
    yarp().setOwner(*this);
}

// Editor: constructor with base class
LaserScan2D::Editor::Editor(LaserScan2D& obj)
{
    group = 0;
    obj_owned = false;
    edit(obj, false);
    yarp().setOwner(*this);
}

// Editor: destructor
LaserScan2D::Editor::~Editor()
{
    if (obj_owned) {
        delete obj;
    }
}

// Editor: edit
bool LaserScan2D::Editor::edit(LaserScan2D& obj, bool dirty)
{
    if (obj_owned) {
        delete this->obj;
    }
    this->obj = &obj;
    obj_owned = false;
    dirty_flags(dirty);
    return true;
}

// Editor: validity check
bool LaserScan2D::Editor::isValid() const
{
    return obj != nullptr;
}

// Editor: state
LaserScan2D& LaserScan2D::Editor::state()
{
    return *obj;
}

// Editor: grouping begin
void LaserScan2D::Editor::start_editing()
{
    group++;
}

// Editor: grouping end
void LaserScan2D::Editor::stop_editing()
{
    group--;
    if (group == 0 && is_dirty) {
        communicate();
    }
}
// Editor: angle_min setter
void LaserScan2D::Editor::set_angle_min(const double angle_min)
{
    will_set_angle_min();
    obj->angle_min = angle_min;
    mark_dirty_angle_min();
    communicate();
    did_set_angle_min();
}

// Editor: angle_min getter
double LaserScan2D::Editor::get_angle_min() const
{
    return obj->angle_min;
}

// Editor: angle_min will_set
bool LaserScan2D::Editor::will_set_angle_min()
{
    return true;
}

// Editor: angle_min did_set
bool LaserScan2D::Editor::did_set_angle_min()
{
    return true;
}

// Editor: angle_max setter
void LaserScan2D::Editor::set_angle_max(const double angle_max)
{
    will_set_angle_max();
    obj->angle_max = angle_max;
    mark_dirty_angle_max();
    communicate();
    did_set_angle_max();
}

// Editor: angle_max getter
double LaserScan2D::Editor::get_angle_max() const
{
    return obj->angle_max;
}

// Editor: angle_max will_set
bool LaserScan2D::Editor::will_set_angle_max()
{
    return true;
}

// Editor: angle_max did_set
bool LaserScan2D::Editor::did_set_angle_max()
{
    return true;
}

// Editor: range_min setter
void LaserScan2D::Editor::set_range_min(const double range_min)
{
    will_set_range_min();
    obj->range_min = range_min;
    mark_dirty_range_min();
    communicate();
    did_set_range_min();
}

// Editor: range_min getter
double LaserScan2D::Editor::get_range_min() const
{
    return obj->range_min;
}

// Editor: range_min will_set
bool LaserScan2D::Editor::will_set_range_min()
{
    return true;
}

// Editor: range_min did_set
bool LaserScan2D::Editor::did_set_range_min()
{
    return true;
}

// Editor: range_max setter
void LaserScan2D::Editor::set_range_max(const double range_max)
{
    will_set_range_max();
    obj->range_max = range_max;
    mark_dirty_range_max();
    communicate();
    did_set_range_max();
}

// Editor: range_max getter
double LaserScan2D::Editor::get_range_max() const
{
    return obj->range_max;
}

// Editor: range_max will_set
bool LaserScan2D::Editor::will_set_range_max()
{
    return true;
}

// Editor: range_max did_set
bool LaserScan2D::Editor::did_set_range_max()
{
    return true;
}

// Editor: scans setter
void LaserScan2D::Editor::set_scans(const yarp::sig::Vector& scans)
{
    will_set_scans();
    obj->scans = scans;
    mark_dirty_scans();
    communicate();
    did_set_scans();
}

// Editor: scans getter
const yarp::sig::Vector& LaserScan2D::Editor::get_scans() const
{
    return obj->scans;
}

// Editor: scans will_set
bool LaserScan2D::Editor::will_set_scans()
{
    return true;
}

// Editor: scans did_set
bool LaserScan2D::Editor::did_set_scans()
{
    return true;
}

// Editor: status setter
void LaserScan2D::Editor::set_status(const std::int32_t status)
{
    will_set_status();
    obj->status = status;
    mark_dirty_status();
    communicate();
    did_set_status();
}

// Editor: status getter
std::int32_t LaserScan2D::Editor::get_status() const
{
    return obj->status;
}

// Editor: status will_set
bool LaserScan2D::Editor::will_set_status()
{
    return true;
}

// Editor: status did_set
bool LaserScan2D::Editor::did_set_status()
{
    return true;
}

// Editor: clean
void LaserScan2D::Editor::clean()
{
    dirty_flags(false);
}

// Editor: read
bool LaserScan2D::Editor::read(yarp::os::ConnectionReader& connection)
{
    if (!isValid()) {
        return false;
    }
    yarp::os::idl::WireReader reader(connection);
    reader.expectAccept();
    if (!reader.readListHeader()) {
        return false;
    }
    int len = reader.getLength();
    if (len == 0) {
        yarp::os::idl::WireWriter writer(reader);
        if (writer.isNull()) {
            return true;
        }
        if (!writer.writeListHeader(1)) {
            return false;
        }
        writer.writeString("send: 'help' or 'patch (param1 val1) (param2 val2)'");
        return true;
    }
    std::string tag;
    if (!reader.readString(tag)) {
        return false;
    }
    if (tag == "help") {
        yarp::os::idl::WireWriter writer(reader);
        if (writer.isNull()) {
            return true;
        }
        if (!writer.writeListHeader(2)) {
            return false;
        }
        if (!writer.writeTag("many", 1, 0)) {
            return false;
        }
        if (reader.getLength() > 0) {
            std::string field;
            if (!reader.readString(field)) {
                return false;
            }
            if (field == "angle_min") {
                if (!writer.writeListHeader(2)) {
                    return false;
                }
                if (!writer.writeString("double angle_min")) {
                    return false;
                }
                if (!writer.writeString("first angle of the scan [deg]")) {
                    return false;
                }
            }
            if (field == "angle_max") {
                if (!writer.writeListHeader(2)) {
                    return false;
                }
                if (!writer.writeString("double angle_max")) {
                    return false;
                }
                if (!writer.writeString("last angle of the scan [deg]")) {
                    return false;
                }
            }
            if (field == "range_min") {
                if (!writer.writeListHeader(2)) {
                    return false;
                }
                if (!writer.writeString("double range_min")) {
                    return false;
                }
                if (!writer.writeString("the minimum distance of the scan [m]")) {
                    return false;
                }
            }
            if (field == "range_max") {
                if (!writer.writeListHeader(2)) {
                    return false;
                }
                if (!writer.writeString("double range_max")) {
                    return false;
                }
                if (!writer.writeString("the maximum distance of the scan [m]")) {
                    return false;
                }
            }
            if (field == "scans") {
                if (!writer.writeListHeader(2)) {
                    return false;
                }
                if (!writer.writeString("yarp::sig::Vector scans")) {
                    return false;
                }
                if (!writer.writeString("the scan data, measured in [m]. The angular increment of each ray is obtained by (angle_max-angle_min)/num_of_elements. Invalid data are represented as std::inf.")) {
                    return false;
                }
            }
            if (field == "status") {
                if (!writer.writeListHeader(1)) {
                    return false;
                }
                if (!writer.writeString("std::int32_t status")) {
                    return false;
                }
            }
        }
        if (!writer.writeListHeader(7)) {
            return false;
        }
        writer.writeString("*** Available fields:");
        writer.writeString("angle_min");
        writer.writeString("angle_max");
        writer.writeString("range_min");
        writer.writeString("range_max");
        writer.writeString("scans");
        writer.writeString("status");
        return true;
    }
    bool nested = true;
    bool have_act = false;
    if (tag != "patch") {
        if (((len - 1) % 2) != 0) {
            return false;
        }
        len = 1 + ((len - 1) / 2);
        nested = false;
        have_act = true;
    }
    for (int i = 1; i < len; ++i) {
        if (nested && !reader.readListHeader(3)) {
            return false;
        }
        std::string act;
        std::string key;
        if (have_act) {
            act = tag;
        } else if (!reader.readString(act)) {
            return false;
        }
        if (!reader.readString(key)) {
            return false;
        }
        if (key == "angle_min") {
            will_set_angle_min();
            if (!obj->nested_read_angle_min(reader)) {
                return false;
            }
            did_set_angle_min();
        } else if (key == "angle_max") {
            will_set_angle_max();
            if (!obj->nested_read_angle_max(reader)) {
                return false;
            }
            did_set_angle_max();
        } else if (key == "range_min") {
            will_set_range_min();
            if (!obj->nested_read_range_min(reader)) {
                return false;
            }
            did_set_range_min();
        } else if (key == "range_max") {
            will_set_range_max();
            if (!obj->nested_read_range_max(reader)) {
                return false;
            }
            did_set_range_max();
        } else if (key == "scans") {
            will_set_scans();
            if (!obj->nested_read_scans(reader)) {
                return false;
            }
            did_set_scans();
        } else if (key == "status") {
            will_set_status();
            if (!obj->nested_read_status(reader)) {
                return false;
            }
            did_set_status();
        } else {
            // would be useful to have a fallback here
        }
    }
    reader.accept();
    yarp::os::idl::WireWriter writer(reader);
    if (writer.isNull()) {
        return true;
    }
    writer.writeListHeader(1);
    writer.writeVocab(yarp::os::createVocab('o', 'k'));
    return true;
}

// Editor: write
bool LaserScan2D::Editor::write(yarp::os::ConnectionWriter& connection) const
{
    if (!isValid()) {
        return false;
    }
    yarp::os::idl::WireWriter writer(connection);
    if (!writer.writeListHeader(dirty_count + 1)) {
        return false;
    }
    if (!writer.writeString("patch")) {
        return false;
    }
    if (is_dirty_angle_min) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("angle_min")) {
            return false;
        }
        if (!obj->nested_write_angle_min(writer)) {
            return false;
        }
    }
    if (is_dirty_angle_max) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("angle_max")) {
            return false;
        }
        if (!obj->nested_write_angle_max(writer)) {
            return false;
        }
    }
    if (is_dirty_range_min) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("range_min")) {
            return false;
        }
        if (!obj->nested_write_range_min(writer)) {
            return false;
        }
    }
    if (is_dirty_range_max) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("range_max")) {
            return false;
        }
        if (!obj->nested_write_range_max(writer)) {
            return false;
        }
    }
    if (is_dirty_scans) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("scans")) {
            return false;
        }
        if (!obj->nested_write_scans(writer)) {
            return false;
        }
    }
    if (is_dirty_status) {
        if (!writer.writeListHeader(3)) {
            return false;
        }
        if (!writer.writeString("set")) {
            return false;
        }
        if (!writer.writeString("status")) {
            return false;
        }
        if (!obj->nested_write_status(writer)) {
            return false;
        }
    }
    return !writer.isError();
}

// Editor: send if possible
void LaserScan2D::Editor::communicate()
{
    if (group != 0) {
        return;
    }
    if (yarp().canWrite()) {
        yarp().write(*this);
        clean();
    }
}

// Editor: mark dirty overall
void LaserScan2D::Editor::mark_dirty()
{
    is_dirty = true;
}

// Editor: angle_min mark_dirty
void LaserScan2D::Editor::mark_dirty_angle_min()
{
    if (is_dirty_angle_min) {
        return;
    }
    dirty_count++;
    is_dirty_angle_min = true;
    mark_dirty();
}

// Editor: angle_max mark_dirty
void LaserScan2D::Editor::mark_dirty_angle_max()
{
    if (is_dirty_angle_max) {
        return;
    }
    dirty_count++;
    is_dirty_angle_max = true;
    mark_dirty();
}

// Editor: range_min mark_dirty
void LaserScan2D::Editor::mark_dirty_range_min()
{
    if (is_dirty_range_min) {
        return;
    }
    dirty_count++;
    is_dirty_range_min = true;
    mark_dirty();
}

// Editor: range_max mark_dirty
void LaserScan2D::Editor::mark_dirty_range_max()
{
    if (is_dirty_range_max) {
        return;
    }
    dirty_count++;
    is_dirty_range_max = true;
    mark_dirty();
}

// Editor: scans mark_dirty
void LaserScan2D::Editor::mark_dirty_scans()
{
    if (is_dirty_scans) {
        return;
    }
    dirty_count++;
    is_dirty_scans = true;
    mark_dirty();
}

// Editor: status mark_dirty
void LaserScan2D::Editor::mark_dirty_status()
{
    if (is_dirty_status) {
        return;
    }
    dirty_count++;
    is_dirty_status = true;
    mark_dirty();
}

// Editor: dirty_flags
void LaserScan2D::Editor::dirty_flags(bool flag)
{
    is_dirty = flag;
    is_dirty_angle_min = flag;
    is_dirty_angle_max = flag;
    is_dirty_range_min = flag;
    is_dirty_range_max = flag;
    is_dirty_scans = flag;
    is_dirty_status = flag;
    dirty_count = flag ? 6 : 0;
}

// read angle_min field
bool LaserScan2D::read_angle_min(yarp::os::idl::WireReader& reader)
{
    if (!reader.readFloat64(angle_min)) {
        reader.fail();
        return false;
    }
    return true;
}

// write angle_min field
bool LaserScan2D::write_angle_min(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(angle_min)) {
        return false;
    }
    return true;
}

// read (nested) angle_min field
bool LaserScan2D::nested_read_angle_min(yarp::os::idl::WireReader& reader)
{
    if (!reader.readFloat64(angle_min)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) angle_min field
bool LaserScan2D::nested_write_angle_min(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(angle_min)) {
        return false;
    }
    return true;
}

// read angle_max field
bool LaserScan2D::read_angle_max(yarp::os::idl::WireReader& reader)
{
    if (!reader.readFloat64(angle_max)) {
        reader.fail();
        return false;
    }
    return true;
}

// write angle_max field
bool LaserScan2D::write_angle_max(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(angle_max)) {
        return false;
    }
    return true;
}

// read (nested) angle_max field
bool LaserScan2D::nested_read_angle_max(yarp::os::idl::WireReader& reader)
{
    if (!reader.readFloat64(angle_max)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) angle_max field
bool LaserScan2D::nested_write_angle_max(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(angle_max)) {
        return false;
    }
    return true;
}

// read range_min field
bool LaserScan2D::read_range_min(yarp::os::idl::WireReader& reader)
{
    if (!reader.readFloat64(range_min)) {
        reader.fail();
        return false;
    }
    return true;
}

// write range_min field
bool LaserScan2D::write_range_min(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(range_min)) {
        return false;
    }
    return true;
}

// read (nested) range_min field
bool LaserScan2D::nested_read_range_min(yarp::os::idl::WireReader& reader)
{
    if (!reader.readFloat64(range_min)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) range_min field
bool LaserScan2D::nested_write_range_min(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(range_min)) {
        return false;
    }
    return true;
}

// read range_max field
bool LaserScan2D::read_range_max(yarp::os::idl::WireReader& reader)
{
    if (!reader.readFloat64(range_max)) {
        reader.fail();
        return false;
    }
    return true;
}

// write range_max field
bool LaserScan2D::write_range_max(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(range_max)) {
        return false;
    }
    return true;
}

// read (nested) range_max field
bool LaserScan2D::nested_read_range_max(yarp::os::idl::WireReader& reader)
{
    if (!reader.readFloat64(range_max)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) range_max field
bool LaserScan2D::nested_write_range_max(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeFloat64(range_max)) {
        return false;
    }
    return true;
}

// read scans field
bool LaserScan2D::read_scans(yarp::os::idl::WireReader& reader)
{
    if (!reader.read(scans)) {
        reader.fail();
        return false;
    }
    return true;
}

// write scans field
bool LaserScan2D::write_scans(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.write(scans)) {
        return false;
    }
    return true;
}

// read (nested) scans field
bool LaserScan2D::nested_read_scans(yarp::os::idl::WireReader& reader)
{
    if (!reader.readNested(scans)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) scans field
bool LaserScan2D::nested_write_scans(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeNested(scans)) {
        return false;
    }
    return true;
}

// read status field
bool LaserScan2D::read_status(yarp::os::idl::WireReader& reader)
{
    if (!reader.readI32(status)) {
        reader.fail();
        return false;
    }
    return true;
}

// write status field
bool LaserScan2D::write_status(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeI32(status)) {
        return false;
    }
    return true;
}

// read (nested) status field
bool LaserScan2D::nested_read_status(yarp::os::idl::WireReader& reader)
{
    if (!reader.readI32(status)) {
        reader.fail();
        return false;
    }
    return true;
}

// write (nested) status field
bool LaserScan2D::nested_write_status(const yarp::os::idl::WireWriter& writer) const
{
    if (!writer.writeI32(status)) {
        return false;
    }
    return true;
}

} // namespace yarp
} // namespace dev
