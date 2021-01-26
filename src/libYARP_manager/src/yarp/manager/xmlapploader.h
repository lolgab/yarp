/*
 * Copyright (C) 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms of the
 * BSD-3-Clause license. See the accompanying LICENSE file for details.
 */

#ifndef YARP_MANAGER_XMLAPPLOADER
#define YARP_MANAGER_XMLAPPLOADER

#include <yarp/manager/ymm-types.h>
#include <yarp/manager/manifestloader.h>



namespace yarp {
namespace manager {
class TextParser;

/**
 * Class XmlAppLoader
 */
class XmlAppLoader : public AppLoader {

public:
    XmlAppLoader(const char* szFileName);
    XmlAppLoader(const char* szPath, const char* szAppName);
    ~XmlAppLoader() override;

    bool         init() override;
    void         fini() override;
    void         reset() override;
    Application* getNextApplication() override;

protected:

private:
    std::string         strAppName;
    std::string         strPath;
    std::string         strFileName;
    std::vector<std::string> fileNames;
    Application    app;
    TextParser*    parser;
    Application*   parsXml(const char* szFile);
};

} // namespace yarp
} // namespace manager


#endif // __YARP_MANAGER_XMLAPPLOADER__
