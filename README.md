# PepeCoin - PEPE  / Memetic - MEME

v. 2.8.1.0
####
Pepecoin is digital decentralized crypto-currency, listed as as Memetic / MEME on Bittrex, Upbit, Coinmarkets and CoinMarketCap.

Pepecoin incorporates both blockchain 2.0 and blockchain 3.0 technologies and is under continued development.

Pepecoin is a Proof of Work (POW) /  Proof of Stake (POS) cryptocurrency with privacy features and masternode technology.

PepeCoin is decentralized, encrypted image storage in IPFS, cryptographically verified against the PepeCoin blockchain. Protect your memes and political information from censorship.

PepeCoin is the base infrastructure for the Kekdaq decentralized meme asset exchange.

PepeCoin is a decentralized, encrypted project that supports the preservation of all freedom of speech that is within the bounds of US law.

See [ANN](https://bitcointalk.org/index.php?topic=1391598.0) for more details.

***

![PepeCoin Logo](http://i.imgur.com/hDXKtDB.png  "PepeCoin Logo")

***
**Blockchain Specifications**

 - Default port 29377 
 - RPC port 29376
 - 60 seconds block time
 - X11 mining algorithm
 - Proof of Stake - POS - 7% at block 600,000, drops by 2% yearly and stays at 3%
 - Proof of Work - POW ended at block 1700000 to reduce chain reorgs to improve the stability of Kekdaq. 
 - PEPE/MEME is Full Proof-of-Stake beginning at block 1700000. The POW reward rate was moved to POS at 3.25% per year, reducing 50% each year.
 - 600 confirmations for newly Proof of Stake minted blocks
  - 6 hour minimum stake age with 16 hour average
  - Additional security improvements
  
 **Features**

- Decentralized encrypted private messaging
- Stealth Addresses
- Fully blockchain based, public decentralized encrypted messaging chat wall in wallet
- Integrated block explorer
- Image timestamping on the blockchain for proof of ownership
- In-wallet hash image verification checking functions
- JSON-RPC functions to externally query blockchain for hashed image datas
- In wallet public messaging wall  - set messagewall=1 in pepecoin.conf to enable
- Integrated Bittrex trading functions
- JSON-RPC functions to externally query all public wall messages
- IPFS-based  data hashing storage currently under development
- Kekdaq decentralized meme asset platform in testing / development stage
- Mastertoads pay 37.5% of all POW and POS blocks distributed among MN runners


See BitcoinTalk post for more info: https://bitcointalk.org/index.php?topic=1391598.0


-------------------------------
Additional Information
------------------------------
 
**Windows Wallet**

https://github.com/pepeteam/pepecoin/releases


**Linux Builds:**

PepeCoin uses libsecp256k1, libgmp, Boost1.55+, Openssl1.01p, Berkeley DB 4.8+, QT5 to compile.

Ubuntu 18.04 you will also need to install the libssl1.0-dev package.


	sudo apt-get install build-essential libtool autotools-dev automake pkg-config libssl-dev libevent-dev bsdmainutils libboost-system-dev libboost-filesystem-dev libboost-chrono-dev libboost-program-options-dev libboost-test-dev libboost-thread-dev libminiupnpc-dev libgmp3-dev libdb-dev libdb++-dev libgmp3-dev
	
	(for Ubuntu 18.04 / Debian 9):  sudo apt install libssl1.0-dev
	
	git clone https://github.com/pepeteam/pepecoin.git
	cd pepecoin/src
	make -f makefile.unix USE_UPNP=-1

To build the GUI with Qt 5 you need the following:

    sudo apt-get install libqt5gui5 libqt5core5a libqt5dbus5 qttools5-dev qttools5-dev-tools libprotobuf-dev protobuf-compiler qt5 qt5-default
    
    git clone https://github.com/pepeteam/pepecoin.git
    cd pepecoin 
    qmake
    make -f Makefile -j2


***
![](http://i.imgur.com/EfYNxub.png) 
***

--------------------
Links
--------------------

**Information**
[Bitcointalk ANN](https://bitcointalk.org/index.php?topic=1391598.0) 

Windows Wallet:  [Download](https://github.com/pepeteam/pepecoin/releases) 


**Website**
https://memetic.ai
https://pepecoin.co


**Exchanges**

[https://bittrex.com/Market/Index?MarketName=BTC-MEME  ](https://bittrex.com/Market/Index?MarketName=BTC-MEME  ) 
[https://www.cryptopia.co.nz/Exchange?market=PEPE_BTC](https://www.cryptopia.co.nz/Exchange?market=PEPE_BTC)
[https://www.coinexchange.io/market/MEME/BTC](https://www.coinexchange.io/market/MEME/BTC) 
[https://upbit.com/exchange?code=CRIX.UPBIT.BTC-MEME ](https://upbit.com/exchange?code=CRIX.UPBIT.BTC-MEME)


**Block Explorers**
[http://explorer.memetic.ai/](http://explorer.memetic.ai/)

[https://prohashing.com/explorer/Memeticcoin/](https://prohashing.com/explorer/Memeticcoin/) 


**Charts**

[https://coinmarketcap.com/currencies/pepecoin/](https://coinmarketcap.com/currencies/pepecoin/) 
https://www.worldcoinindex.com/coin/memetic
https://www.cryptocompare.com/coins/meme/charts/BTC
https://bitinfocharts.com/markets/bittrex/meme-btc-1m.html
https://cryptocoinview.com/MEME

https://www.coingecko.com/en/coins/memetic
https://coinlib.io/coin/MEME/Pepe+Memetic

**Social**
[https://twitter.com/pepecoins](https://twitter.com/pepecoins) https://twitter.com/pepecoins
Telegram group:  [Get invite](https://t.me/pepecoins) 


***

**Nodes**
addnode=seed.pepecoin.co
addnode=seed.kekdaq.com


![pepecoin-256](https://i.imgur.com/xnSJvT9.jpg  "pepecoin-256")

------------------
License
------------------

>Copyright (c) 2009-2010 Satoshi Nakamoto
>Copyright (c) 2009-2012 The Bitcoin developers
>Copyright (c) 2012 Litecoin Developers
>Copyright (c) 2013 Peercoin Developers
>Copyright (c) 2014 DarkCoin Developers
>Copyright (c) 2014 BlackCoin Developers
>Copyright (c) 2014 Digibyte Developers
>Copyright (c) 2014 DashCoin Developers
>Copyright (c) 2015 Transfercoin Developers
>Copyright (c) 2015-2016 PepeCoin Developers
>Copyright (c) 2015-2016 Memetic Developers
>Copyright (c) 2017-2018 PepeCoin / Memetic Developers

>
>Permission is hereby granted, free of charge, to any person obtaining a copy
>of this software and associated documentation files (the "Software"), to deal
>in the Software without restriction, including without limitation the rights
>to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
>copies of the Software, and to permit persons to whom the Software is
>furnished to do so, subject to the following conditions:
>
>The above copyright notice and this permission notice shall be included in
>all copies or substantial portions of the Software.
>
>THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
>IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
>FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
>AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
>LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
>OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
>THE SOFTWARE.
>
