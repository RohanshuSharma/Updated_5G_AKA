/**
 * Common Data Types
 * Common Data Types for Service Based Interfaces. © 2020, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "OdbData.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::common {

OdbData::OdbData() {
  m_RoamingOdbIsSet = false;
}

void OdbData::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool OdbData::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool OdbData::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success                  = true;
  const std::string _pathPrefix = pathPrefix.empty() ? "OdbData" : pathPrefix;

  return success;
}

bool OdbData::operator==(const OdbData& rhs) const {
  return

      ((!roamingOdbIsSet() && !rhs.roamingOdbIsSet()) ||
       (roamingOdbIsSet() && rhs.roamingOdbIsSet() &&
        getRoamingOdb() == rhs.getRoamingOdb()))

          ;
}

bool OdbData::operator!=(const OdbData& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const OdbData& o) {
  j = nlohmann::json();
  if (o.roamingOdbIsSet()) j["roamingOdb"] = o.m_RoamingOdb;
}

void from_json(const nlohmann::json& j, OdbData& o) {
  if (j.find("roamingOdb") != j.end()) {
    j.at("roamingOdb").get_to(o.m_RoamingOdb);
    o.m_RoamingOdbIsSet = true;
  }
}

oai::model::common::RoamingOdb OdbData::getRoamingOdb() const {
  return m_RoamingOdb;
}
void OdbData::setRoamingOdb(oai::model::common::RoamingOdb const& value) {
  m_RoamingOdb      = value;
  m_RoamingOdbIsSet = true;
}
bool OdbData::roamingOdbIsSet() const {
  return m_RoamingOdbIsSet;
}
void OdbData::unsetRoamingOdb() {
  m_RoamingOdbIsSet = false;
}

}  // namespace oai::model::common
