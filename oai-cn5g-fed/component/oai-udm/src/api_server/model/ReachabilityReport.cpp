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
 * Nudm_EE
 * Nudm Event Exposure Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "ReachabilityReport.h"
#include "Helpers.h"

#include <sstream>

namespace oai::udm::model {

ReachabilityReport::ReachabilityReport() {
  m_AmfInstanceIdIsSet       = false;
  m_AccessTypeListIsSet      = false;
  m_ReachabilityIsSet        = false;
  m_MaxAvailabilityTimeIsSet = false;
}

void ReachabilityReport::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::udm::helpers::ValidationException(msg.str());
  }
}

bool ReachabilityReport::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool ReachabilityReport::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "ReachabilityReport" : pathPrefix;

  if (accessTypeListIsSet()) {
    const std::vector<std::string>& value = m_AccessTypeList;
    const std::string currentValuePath    = _pathPrefix + ".accessTypeList";

    if (value.size() < 1) {
      success = false;
      msg << currentValuePath << ": must have at least 1 elements;";
    }
    {  // Recursive validation of array elements
      const std::string oldValuePath = currentValuePath;
      int i                          = 0;
      for (const std::string& value : value) {
        const std::string currentValuePath =
            oldValuePath + "[" + std::to_string(i) + "]";

        i++;
      }
    }
  }

  return success;
}

bool ReachabilityReport::operator==(const ReachabilityReport& rhs) const {
  return

      ((!amfInstanceIdIsSet() && !rhs.amfInstanceIdIsSet()) ||
       (amfInstanceIdIsSet() && rhs.amfInstanceIdIsSet() &&
        getAmfInstanceId() == rhs.getAmfInstanceId())) &&

      ((!accessTypeListIsSet() && !rhs.accessTypeListIsSet()) ||
       (accessTypeListIsSet() && rhs.accessTypeListIsSet() &&
        getAccessTypeList() == rhs.getAccessTypeList())) &&

      ((!reachabilityIsSet() && !rhs.reachabilityIsSet()) ||
       (reachabilityIsSet() && rhs.reachabilityIsSet() &&
        getReachability() == rhs.getReachability())) &&

      ((!maxAvailabilityTimeIsSet() && !rhs.maxAvailabilityTimeIsSet()) ||
       (maxAvailabilityTimeIsSet() && rhs.maxAvailabilityTimeIsSet() &&
        getMaxAvailabilityTime() == rhs.getMaxAvailabilityTime()))

          ;
}

bool ReachabilityReport::operator!=(const ReachabilityReport& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const ReachabilityReport& o) {
  j = nlohmann::json();
  if (o.amfInstanceIdIsSet()) j["amfInstanceId"] = o.m_AmfInstanceId;
  if (o.accessTypeListIsSet() || !o.m_AccessTypeList.empty())
    j["accessTypeList"] = o.m_AccessTypeList;
  if (o.reachabilityIsSet()) j["reachability"] = o.m_Reachability;
  if (o.maxAvailabilityTimeIsSet())
    j["maxAvailabilityTime"] = o.m_MaxAvailabilityTime;
}

void from_json(const nlohmann::json& j, ReachabilityReport& o) {
  if (j.find("amfInstanceId") != j.end()) {
    j.at("amfInstanceId").get_to(o.m_AmfInstanceId);
    o.m_AmfInstanceIdIsSet = true;
  }
  if (j.find("accessTypeList") != j.end()) {
    j.at("accessTypeList").get_to(o.m_AccessTypeList);
    o.m_AccessTypeListIsSet = true;
  }
  if (j.find("reachability") != j.end()) {
    j.at("reachability").get_to(o.m_Reachability);
    o.m_ReachabilityIsSet = true;
  }
  if (j.find("maxAvailabilityTime") != j.end()) {
    j.at("maxAvailabilityTime").get_to(o.m_MaxAvailabilityTime);
    o.m_MaxAvailabilityTimeIsSet = true;
  }
}

std::string ReachabilityReport::getAmfInstanceId() const {
  return m_AmfInstanceId;
}
void ReachabilityReport::setAmfInstanceId(std::string const& value) {
  m_AmfInstanceId      = value;
  m_AmfInstanceIdIsSet = true;
}
bool ReachabilityReport::amfInstanceIdIsSet() const {
  return m_AmfInstanceIdIsSet;
}
void ReachabilityReport::unsetAmfInstanceId() {
  m_AmfInstanceIdIsSet = false;
}
std::vector<std::string> ReachabilityReport::getAccessTypeList() const {
  return m_AccessTypeList;
}
void ReachabilityReport::setAccessTypeList(
    std::vector<std::string> const& value) {
  m_AccessTypeList      = value;
  m_AccessTypeListIsSet = true;
}
bool ReachabilityReport::accessTypeListIsSet() const {
  return m_AccessTypeListIsSet;
}
void ReachabilityReport::unsetAccessTypeList() {
  m_AccessTypeListIsSet = false;
}
std::string ReachabilityReport::getReachability() const {
  return m_Reachability;
}
void ReachabilityReport::setReachability(std::string const& value) {
  m_Reachability      = value;
  m_ReachabilityIsSet = true;
}
bool ReachabilityReport::reachabilityIsSet() const {
  return m_ReachabilityIsSet;
}
void ReachabilityReport::unsetReachability() {
  m_ReachabilityIsSet = false;
}
std::string ReachabilityReport::getMaxAvailabilityTime() const {
  return m_MaxAvailabilityTime;
}
void ReachabilityReport::setMaxAvailabilityTime(std::string const& value) {
  m_MaxAvailabilityTime      = value;
  m_MaxAvailabilityTimeIsSet = true;
}
bool ReachabilityReport::maxAvailabilityTimeIsSet() const {
  return m_MaxAvailabilityTimeIsSet;
}
void ReachabilityReport::unsetMaxAvailabilityTime() {
  m_MaxAvailabilityTimeIsSet = false;
}

}  // namespace oai::udm::model
