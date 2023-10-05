/**
 * Nnef_SMContext
 * Nnef SMContext Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "SmContextStatusNotification.h"

#include <sstream>

#include "Helpers.h"

namespace oai::nef::model {

SmContextStatusNotification::SmContextStatusNotification() {
  m_SmContextId              = "";
  m_CauseIsSet               = false;
  m_SmallDataRateStatusIsSet = false;
  m_ApnRateStatusIsSet       = false;
}

void SmContextStatusNotification::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::nef::helpers::ValidationException(msg.str());
  }
}

bool SmContextStatusNotification::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool SmContextStatusNotification::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "SmContextStatusNotification" : pathPrefix;

  return success;
}

bool SmContextStatusNotification::operator==(
    const SmContextStatusNotification& rhs) const {
  return

      (getStatus() == rhs.getStatus()) &&

      (getSmContextId() == rhs.getSmContextId()) &&

      ((!causeIsSet() && !rhs.causeIsSet()) ||
       (causeIsSet() && rhs.causeIsSet() && getCause() == rhs.getCause())) &&

      ((!smallDataRateStatusIsSet() && !rhs.smallDataRateStatusIsSet()) ||
       (smallDataRateStatusIsSet() && rhs.smallDataRateStatusIsSet() &&
        getSmallDataRateStatus() == rhs.getSmallDataRateStatus())) &&

      ((!apnRateStatusIsSet() && !rhs.apnRateStatusIsSet()) ||
       (apnRateStatusIsSet() && rhs.apnRateStatusIsSet() &&
        getApnRateStatus() == rhs.getApnRateStatus()))

          ;
}

bool SmContextStatusNotification::operator!=(
    const SmContextStatusNotification& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const SmContextStatusNotification& o) {
  j                = nlohmann::json();
  j["status"]      = o.m_Status;
  j["smContextId"] = o.m_SmContextId;
  if (o.causeIsSet()) j["cause"] = o.m_Cause;
  if (o.smallDataRateStatusIsSet())
    j["smallDataRateStatus"] = o.m_SmallDataRateStatus;
  if (o.apnRateStatusIsSet()) j["apnRateStatus"] = o.m_ApnRateStatus;
}

void from_json(const nlohmann::json& j, SmContextStatusNotification& o) {
  j.at("status").get_to(o.m_Status);
  j.at("smContextId").get_to(o.m_SmContextId);
  if (j.find("cause") != j.end()) {
    j.at("cause").get_to(o.m_Cause);
    o.m_CauseIsSet = true;
  }
  if (j.find("smallDataRateStatus") != j.end()) {
    j.at("smallDataRateStatus").get_to(o.m_SmallDataRateStatus);
    o.m_SmallDataRateStatusIsSet = true;
  }
  if (j.find("apnRateStatus") != j.end()) {
    j.at("apnRateStatus").get_to(o.m_ApnRateStatus);
    o.m_ApnRateStatusIsSet = true;
  }
}

SmContextStatus SmContextStatusNotification::getStatus() const {
  return m_Status;
}
void SmContextStatusNotification::setStatus(SmContextStatus const& value) {
  m_Status = value;
}
std::string SmContextStatusNotification::getSmContextId() const {
  return m_SmContextId;
}
void SmContextStatusNotification::setSmContextId(std::string const& value) {
  m_SmContextId = value;
}
ReleaseCause SmContextStatusNotification::getCause() const {
  return m_Cause;
}
void SmContextStatusNotification::setCause(ReleaseCause const& value) {
  m_Cause      = value;
  m_CauseIsSet = true;
}
bool SmContextStatusNotification::causeIsSet() const {
  return m_CauseIsSet;
}
void SmContextStatusNotification::unsetCause() {
  m_CauseIsSet = false;
}
SmallDataRateStatus SmContextStatusNotification::getSmallDataRateStatus()
    const {
  return m_SmallDataRateStatus;
}
void SmContextStatusNotification::setSmallDataRateStatus(
    SmallDataRateStatus const& value) {
  m_SmallDataRateStatus      = value;
  m_SmallDataRateStatusIsSet = true;
}
bool SmContextStatusNotification::smallDataRateStatusIsSet() const {
  return m_SmallDataRateStatusIsSet;
}
void SmContextStatusNotification::unsetSmallDataRateStatus() {
  m_SmallDataRateStatusIsSet = false;
}
ApnRateStatus SmContextStatusNotification::getApnRateStatus() const {
  return m_ApnRateStatus;
}
void SmContextStatusNotification::setApnRateStatus(ApnRateStatus const& value) {
  m_ApnRateStatus      = value;
  m_ApnRateStatusIsSet = true;
}
bool SmContextStatusNotification::apnRateStatusIsSet() const {
  return m_ApnRateStatusIsSet;
}
void SmContextStatusNotification::unsetApnRateStatus() {
  m_ApnRateStatusIsSet = false;
}

}  // namespace oai::nef::model
