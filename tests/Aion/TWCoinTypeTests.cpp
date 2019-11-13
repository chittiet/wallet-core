// Copyright © 2017-2019 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.
//
// This is a GENERATED FILE, changes made here MAY BE LOST.
// Generated one-time (codegen/bin/cointests)
//

#include "../interface/TWTestUtilities.h"
#include <TrustWalletCore/TWCoinTypeConfiguration.h>
#include <gtest/gtest.h>


TEST(TWAionCoinType, TWCoinType) {
    auto symbol = WRAPS(TWCoinTypeConfigurationGetSymbol(TWCoinTypeAion));
    auto txId = TWStringCreateWithUTF8Bytes("123");
    auto txUrl = WRAPS(TWCoinTypeConfigurationGetTransactionURL(TWCoinTypeAion, txId));
    auto id = WRAPS(TWCoinTypeConfigurationGetID(TWCoinTypeAion));
    auto name = WRAPS(TWCoinTypeConfigurationGetName(TWCoinTypeAion));

    ASSERT_EQ(TWCoinTypeConfigurationGetDecimals(TWCoinTypeAion), 18);
    ASSERT_EQ(TWBlockchainAion, TWCoinTypeBlockchain(TWCoinTypeAion));
    ASSERT_EQ(0x0, TWCoinTypeP2shPrefix(TWCoinTypeAion));
    ASSERT_EQ(0x0, TWCoinTypeStaticPrefix(TWCoinTypeAion));
    assertStringsEqual(symbol, "AION");
    assertStringsEqual(txUrl, "https://mainnet.aion.network/#/transaction/123");
    assertStringsEqual(id, "aion");
    assertStringsEqual(name, "Aion");
}