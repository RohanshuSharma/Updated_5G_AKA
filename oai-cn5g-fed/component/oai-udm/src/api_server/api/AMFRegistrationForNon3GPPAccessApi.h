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
 * Nudm_UECM
 * Nudm Context Management Service. � 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * AMFRegistrationForNon3GPPAccessApi.h
 *
 *
 */

#ifndef AMFRegistrationForNon3GPPAccessApi_H_
#define AMFRegistrationForNon3GPPAccessApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include <string>

#include "AmfNon3GppAccessRegistration.h"
#include "ProblemDetails.h"

namespace oai::udm::api {

using namespace oai::udm::model;

class AMFRegistrationForNon3GPPAccessApi {
 public:
  AMFRegistrationForNon3GPPAccessApi(std::shared_ptr<Pistache::Rest::Router>);
  virtual ~AMFRegistrationForNon3GPPAccessApi() {}
  void init();

  const std::string base = "/nudm-uecm/";

 private:
  void setupRoutes();

  void non3_gpp_registration_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);
  void amf_registration_for_non3_gpp_access_api_default_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// register as AMF for non-3GPP access
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="ueId">Identifier of the UE</param>
  /// <param name="amfNon3GppAccessRegistration"></param>
  virtual void non3_gpp_registration(
      const std::string& ueId,
      const AmfNon3GppAccessRegistration& amfNon3GppAccessRegistration,
      Pistache::Http::ResponseWriter& response) = 0;
};

}  // namespace oai::udm::api

#endif /* AMFRegistrationForNon3GPPAccessApi_H_ */