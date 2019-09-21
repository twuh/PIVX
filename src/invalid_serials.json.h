// Copyright (c) 2018 The PIVX developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.



#ifndef WORX_INVALID_SERIALS_JSON_H
#define WORX_INVALID_SERIALS_JSON_H

#include <string>

std::string LoadInvalidSerials()
{
    std::string str = "[\n"
            "  {\n"
            "    \"s\": \"SERIAL\"\n"
            "  },\n"
            "]";
    return str;
}

#endif //WORX_INVALID_SERIALS_JSON_H
