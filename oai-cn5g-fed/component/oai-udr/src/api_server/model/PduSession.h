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
 * PduSession.h
 *
 *
 */

#ifndef PduSession_H_
#define PduSession_H_

#include <nlohmann/json.hpp>
#include <string>

#include "PlmnId.h"
#include "Snssai.h"

namespace oai::udr::model {

/// <summary>
///
/// </summary>
class PduSession {
 public:
  PduSession();
  virtual ~PduSession();

  void validate();

  /////////////////////////////////////////////
  /// PduSession members

  /// <summary>
  ///
  /// </summary>
  std::string getDnn() const;
  void setDnn(std::string const& value);
  /// <summary>
  ///
  /// </summary>
  std::string getSmfInstanceId() const;
  void setSmfInstanceId(std::string const& value);
  /// <summary>
  ///
  /// </summary>
  PlmnId getPlmnId() const;
  void setPlmnId(PlmnId const& value);
  /// <summary>
  ///
  /// </summary>
  Snssai getSingleNssai() const;
  void setSingleNssai(Snssai const& value);
  bool singleNssaiIsSet() const;
  void unsetSingleNssai();

  friend void to_json(nlohmann::json& j, const PduSession& o);
  friend void from_json(const nlohmann::json& j, PduSession& o);

 protected:
  std::string m_Dnn;

  std::string m_SmfInstanceId;

  PlmnId m_PlmnId;

  Snssai m_SingleNssai;
  bool m_SingleNssaiIsSet;
};

}  // namespace oai::udr::model

#endif /* PduSession_H_ */
