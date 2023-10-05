/**
 * 3gpp-traffic-influence
 * API for AF traffic influence © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "Ipv6Prefix.h"

#include <sstream>

#include "Helpers.h"

namespace oai::nef::model {

Ipv6Prefix::Ipv6Prefix() {}

void Ipv6Prefix::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::nef::helpers::ValidationException(msg.str());
  }
}

bool Ipv6Prefix::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool Ipv6Prefix::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "Ipv6Prefix" : pathPrefix;

  return success;
}

bool Ipv6Prefix::operator==(const Ipv6Prefix& rhs) const {
  return true

      ;
}

bool Ipv6Prefix::operator!=(const Ipv6Prefix& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const Ipv6Prefix& o) {
  j = nlohmann::json();
}

void from_json(const nlohmann::json& j, Ipv6Prefix& o) {}

}  // namespace oai::nef::model
