/**
 * 3gpp-5glan-pp
 * API for 5G LAN Parameter Provision. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "AppDescriptor.h"

#include <sstream>

#include "Helpers.h"

namespace oai::nef::model {

AppDescriptor::AppDescriptor() {
  m_OsId = "";
}

void AppDescriptor::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::nef::helpers::ValidationException(msg.str());
  }
}

bool AppDescriptor::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool AppDescriptor::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "AppDescriptor" : pathPrefix;

  /* AppIds */ {
    const std::map<std::string, std::string>& value = m_AppIds;
    const std::string currentValuePath              = _pathPrefix + ".appIds";
  }

  return success;
}

bool AppDescriptor::operator==(const AppDescriptor& rhs) const {
  return

      (getOsId() == rhs.getOsId()) &&

      (getAppIds() == rhs.getAppIds())

          ;
}

bool AppDescriptor::operator!=(const AppDescriptor& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const AppDescriptor& o) {
  j           = nlohmann::json();
  j["osId"]   = o.m_OsId;
  j["appIds"] = o.m_AppIds;
}

void from_json(const nlohmann::json& j, AppDescriptor& o) {
  j.at("osId").get_to(o.m_OsId);
  j.at("appIds").get_to(o.m_AppIds);
}

std::string AppDescriptor::getOsId() const {
  return m_OsId;
}
void AppDescriptor::setOsId(std::string const& value) {
  m_OsId = value;
}
std::map<std::string, std::string> AppDescriptor::getAppIds() const {
  return m_AppIds;
}
void AppDescriptor::setAppIds(std::map<std::string, std::string> const& value) {
  m_AppIds = value;
}

}  // namespace oai::nef::model