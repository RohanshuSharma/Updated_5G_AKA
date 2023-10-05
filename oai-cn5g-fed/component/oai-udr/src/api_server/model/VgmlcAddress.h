/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this
 * file except in compliance with the License. You may obtain a copy of the
 * License at
 *
 *      http://www.openairinterface.org/?page_id=698
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */
/**
 * Nudr_DataRepository API OpenAPI file
 * Unified Data Repository Service. © 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.1.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * VgmlcAddress.h
 *
 *
 */

#ifndef VgmlcAddress_H_
#define VgmlcAddress_H_

#include <nlohmann/json.hpp>
#include <string>

#include "Ipv6Addr.h"

namespace oai::udr::model {

/// <summary>
///
/// </summary>
class VgmlcAddress {
 public:
  VgmlcAddress();
  virtual ~VgmlcAddress();

  void validate();

  /////////////////////////////////////////////
  /// VgmlcAddress members

  /// <summary>
  ///
  /// </summary>
  std::string getVgmlcAddressIpv4() const;
  void setVgmlcAddressIpv4(std::string const& value);
  bool vgmlcAddressIpv4IsSet() const;
  void unsetVgmlcAddressIpv4();
  /// <summary>
  ///
  /// </summary>
  Ipv6Addr getVgmlcAddressIpv6() const;
  void setVgmlcAddressIpv6(Ipv6Addr const& value);
  bool vgmlcAddressIpv6IsSet() const;
  void unsetVgmlcAddressIpv6();
  /// <summary>
  /// Fully Qualified Domain Name
  /// </summary>
  std::string getVgmlcFqdn() const;
  void setVgmlcFqdn(std::string const& value);
  bool vgmlcFqdnIsSet() const;
  void unsetVgmlcFqdn();

  friend void to_json(nlohmann::json& j, const VgmlcAddress& o);
  friend void from_json(const nlohmann::json& j, VgmlcAddress& o);

 protected:
  std::string m_VgmlcAddressIpv4;
  bool m_VgmlcAddressIpv4IsSet;
  Ipv6Addr m_VgmlcAddressIpv6;
  bool m_VgmlcAddressIpv6IsSet;
  std::string m_VgmlcFqdn;
  bool m_VgmlcFqdnIsSet;
};

}  // namespace oai::udr::model

#endif /* VgmlcAddress_H_ */
