// Copyright (c) 2018 The PIVX developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef WORX_INVALID_OUTPOINTS_JSON_H
#define WORX_INVALID_OUTPOINTS_JSON_H
#include <string>

std::string LoadInvalidOutPoints()
{
    std::string str = "[\n"
            "  {\n"
            "    \"txid\": \"TXID\",\n"
            "    \"n\": TXINDEX\n"
            "  }\n"
            "]";
    return str;
}

#endif //WORX_INVALID_OUTPOINTS_JSON_H
