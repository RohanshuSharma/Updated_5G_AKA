/**
 * AUSF API
 * AUSF UE Authentication Service. © 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "ResynchronizationInfo.h"

namespace oai {
namespace amf {
namespace model {
ResynchronizationInfo::ResynchronizationInfo() {
  m_Rand = "";
  m_Auts = "";
}
ResynchronizationInfo::~ResynchronizationInfo() {}
void ResynchronizationInfo::validate() {
  // TODO: implement validation
}
void to_json(nlohmann::json& j, const ResynchronizationInfo& o) {
  j         = nlohmann::json();
  j["rand"] = o.m_Rand;
  j["auts"] = o.m_Auts;
}

void from_json(const nlohmann::json& j, ResynchronizationInfo& o) {
  j.at("rand").get_to(o.m_Rand);
  j.at("auts").get_to(o.m_Auts);
}

std::string ResynchronizationInfo::getRand() const {
  return m_Rand;
}
void ResynchronizationInfo::setRand(std::string const& value) {
  m_Rand = value;
}
std::string ResynchronizationInfo::getAuts() const {
  return m_Auts;
}
void ResynchronizationInfo::setAuts(std::string const& value) {
  m_Auts = value;
}

}  // namespace model
}  // namespace amf
}  // namespace oai
