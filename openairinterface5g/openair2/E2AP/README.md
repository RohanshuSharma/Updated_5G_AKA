# OpenAirInterface License #

 *  [OAI License Model](http://www.openairinterface.org/?page_id=101)
 *  [OAI License v1.1 on our website](http://www.openairinterface.org/?page_id=698)

It is distributed under **OAI Public License V1.1**.

The license information is distributed under [LICENSE](LICENSE) file in the same directory.

Please see [NOTICE](NOTICE.md) file for third party software that is included in the sources.

# Overview

This tutorial describes the steps of deployment 5G OAI RAN, with integrated E2 agent and a nearRT-RIC using O-RAN compliant FlexRIC.

# 1. Installation

## 1.1 Install prerequisites

- A *recent* CMake (at least v3.15). 

  On Ubuntu, you might want to use [this PPA](https://apt.kitware.com/) to install an up-to-date version.

- SWIG (at least  v.4.0). 

  We use SWIG as an interface generator to enable the multi-language feature (i.e., C/C++ and Python) for the xApps. Please, check your SWIG version (i.e, `swig
  -version`) and install it from scratch if necessary as described here: https://swig.org/svn.html or via the code below: 
  
  ```bash
  git clone https://github.com/swig/swig.git
  cd swig
  git checkout release-4.1 
  ./autogen.sh
  ./configure --prefix=/usr/
  make -j8
  make install
  ```

- Flatbuffer encoding(optional). 
  
  We also provide a flatbuffers encoding/decoding scheme as alternative to ASN.1. In case that you want to use it  follow the
  instructions at https://github.com/dvidelabs/flatcc and provide the path for the lib and include when selecting it at `ccmake ..` from the build directory 

## 1.2 Download the required dependencies. 

Below an example of how to install it in ubuntu
```bash
sudo apt install libsctp-dev python3.8 cmake-curses-gui libpcre2-dev python-dev
```

# 2. Deployment

## 2.1 OAI RAN

### 2.1.1 Clone the OAI repository
```bash
git clone https://gitlab.eurecom.fr/oai/openairinterface5g oai
cd oai/
```

### 2.1.2 Build OAI with E2 Agent

- By default, OAI will build the E2 Agent with E2AP v2 and KPM v2. If you want a different version, edit the variable E2AP\_VERSION and KPM\_VERSION at OAI's CMakeLists.txt file.

```bash
cd cmake_targets/
./build_oai -I -w SIMU --gNB --nrUE --build-e2 --ninja
```
If the openair2/E2AP/flexric folder is empty, try manually the following commands

```bash
git submodule init
git submodule update
```

 * `-I` option is to install pre-requisites, you only need it the first time you build the softmodem or when some oai dependencies have changed.
 * `-w` option is to select the radio head support you want to include in your build. Radio head support is provided via a shared library, which is called the "oai device" The build script creates a soft link from `liboai_device.so` to the true device which will be used at run-time (here the USRP one, liboai_usrpdevif.so). The RF simulatorRF simulator is implemented as a specific device replacing RF hardware, it can be specifically built using `-w SIMU` option, but is also built during any softmodem build.
 * `--gNB` is to build the `nr-softmodem` and `nr-cuup` executables and all required shared libraries
 * `--nrUE` is to build the `nr-uesoftmodem` executable and all required shared libraries
 * `--ninja` is to use the ninja build tool, which speeds up compilation
 * `--build-e2` option is to use the E2 agent, integrated within RAN.

## 2.2 FlexRIC

- By default, FlexRIC will build the nearRT-RIC with E2AP v2 and KPM v2. If you want a different version, edit the variable E2AP\_VERSION and KPM\_VERSION at FlexRIC's CMakeLists.txt file. Note that OAI's and FlexRIC's E2AP\_VERSION and KPM\_VERSION need to match due to O-RAN incompatibilities among versions.


### 2.2.1 Clone the FlexRIC repository
```bash
git clone https://gitlab.eurecom.fr/mosaic5g/flexric flexric
cd flexric/
git checkout 035fd2e8f9a9d2c16df8d44c9e8c13ccddf9ff19
```

### 2.2.2 Build FlexRIC
```bash
mkdir build && cd build && cmake .. && make -j8
```

### 2.2.3 Installation of Service Models (SMs)
```bash
sudo make install
```

By default the service model libraries will be installed in the path `/usr/local/lib/flexric` while the configuration file in `/usr/local/etc/flexric`.

Available SMs in this version are:
* KPM v02.03 and KPM v03.00 (xapp_kpm_moni)
* RC v01.03 (xapp_kpm_rc)
* GTP (xapp_gtp_moni)
* MAC + RLC + PDCP (xapp_mac_rlc_pdcp_moni)

If you are interested in TC and SLICE SMs, please follow the instructions at https://gitlab.eurecom.fr/mosaic5g/flexric.

# 3. Start the process

In order to configure E2 agent, please, add the following block in OAI's configuration file:
```bash
e2_agent = {
  near_ric_ip_addr = "127.0.0.1";
  sm_dir = "/usr/local/lib/flexric/"
}
```

* start the gNB
```bash
cd oai/cmake_targets/ran_build/build
sudo ./nr-softmodem -O ../../../targets/PROJECTS/GENERIC-NR-5GC/CONF/gnb.sa.band78.fr1.106PRB.usrpb210.conf --rfsim --sa -E
```

* if CU-DU split is used, start the gNB as follows
```bash
sudo ./nr-softmodem -O <path_to_du_conf_file> --rfsim --sa -E
sudo ./nr-softmodem -O <path_to_cu_conf_file> --rfsim --sa -E
```

* start the nrUE
```bash
cd oai/cmake_targets/ran_build/build
sudo ./nr-uesoftmodem -r 106 --numerology 1 --band 78 -C 3619200000 --rfsim --sa --uicc0.imsi 001010000000001 --rfsimulator.serveraddr 127.0.0.1
```

* start the nearRT-RIC
```bash
cd flexric
./build/examples/ric/nearRT-RIC
```

* start the KPM xApp
```bash
cd flexric
./build/examples/xApp/c/monitor/xapp_kpm_moni
```

* start the GTP xApp
```bash
cd flexric
./build/examples/xApp/c/monitor/xapp_gtp_moni
```

* start the (MAC + RLC + PDCP) xApp
```bash
cd flexric
./build/examples/xApp/c/monitor/xapp_mac_rlc_pdcp_moni
```

# Optional - Multiple UEs

If you are interested in having multiple UEs in rfsim mode, please, follow the instructions at https://gitlab.eurecom.fr/oaiworkshop/summerworkshop2023/-/tree/main/ran#multiple-ues.
