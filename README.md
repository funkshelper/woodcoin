# Woodcoin

## (A Funkenstein the Dwarf Presentation)

============================================

While many dwarfs were content to toil in the mines I have always felt affinity for the forest.  

Now you can chop logs.  

The Woodcoin chain is a log structured database.

The money supply is logarithmic.

The unit is log.
 
============================================

Technical Details:

* RPC Port = 9338

* P2P Ports = 8338 (testnet 18338)

* In Wallet woodcutting = Console, "setgenerate true"

* 120 Second Block Target, Diff Retarget every 1 hour

* 30 Confirms for spendable-coins

* Block reward = Harmonic Series

* 1000000/nHeight logs  (after first 100 blocks which form unspendable forest of 5187377 logs) 

* Money Supply = 1000000*(log(nHeight) + gamma)     gamma=Euler-Mascheroni constant 

* New ECDSA curve: X9_62_prime256v1 

* Algo = Pure Skein (double skein) Bruce Schneier is a lumberjack and NSA didn't choose this algo.

=============================================

## Binary Wallets

Some binaries are stored at https://github.com/paulmadore/woodcoin-dot-org/blob/master/bins. We try to keep Woodcoin accessible to all. 

=============================================
Build Instructions

TYou will need these dependencies or equivalent:

sudo apt-get install git build-essential libboost-all-dev libcurl4-openssl-dev libdb5.1-dev libdb5.1++-dev qt-sdk libminiupnpc-dev libqrencode-dev 

Get the source with this command:

git clone https://github.com/funkshelper/woodcoin.git

To build woodcoin-qt issue “qmake” and then “make“.  qt4 is required, on some systems you may need to issue “export QT_SELECT=qt4” to ensure the proper version is used.

To build woodcoind by itself navigate to /src/ and issue make -f makefile.unix.

--------------------------------------------
## Mining (Woodcutting)

To start woodcutting with woodcoind, simply launch it like this: 

```./woodcoind setgenerate true```

For the graphical client, simply go into the debug window (under Help) and type:

```setgenerate true```

=============================================


## Changelog:

* v1.0 - Baruk Khazad!  Woodcutting for the masses.

* v1.1 - Hard fork to litecoin branch.  Block 3002.

* v1.2 - Add paper wallet and QR code functionality.

### Visit Woodcoin.org for more information. 
