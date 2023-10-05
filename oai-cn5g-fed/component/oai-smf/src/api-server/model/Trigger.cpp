/**
 * Nsmf_PDUSession
 * SMF PDU Session Service. © 2019, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "Trigger.h"

namespace oai {
namespace smf_server {
namespace model {

Trigger::Trigger() {
  m_TimeLimit           = 0;
  m_TimeLimitIsSet      = false;
  m_VolumeLimit         = 0;
  m_VolumeLimitIsSet    = false;
  m_VolumeLimit64       = 0L;
  m_VolumeLimit64IsSet  = false;
  m_MaxNumberOfccc      = 0;
  m_MaxNumberOfcccIsSet = false;
}

Trigger::~Trigger() {}

void Trigger::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const Trigger& o) {
  j                    = nlohmann::json();
  j["triggerType"]     = o.m_TriggerType;
  j["triggerCategory"] = o.m_TriggerCategory;
  if (o.timeLimitIsSet()) j["timeLimit"] = o.m_TimeLimit;
  if (o.volumeLimitIsSet()) j["volumeLimit"] = o.m_VolumeLimit;
  if (o.volumeLimit64IsSet()) j["volumeLimit64"] = o.m_VolumeLimit64;
  if (o.maxNumberOfcccIsSet()) j["maxNumberOfccc"] = o.m_MaxNumberOfccc;
}

void from_json(const nlohmann::json& j, Trigger& o) {
  j.at("triggerType").get_to(o.m_TriggerType);
  j.at("triggerCategory").get_to(o.m_TriggerCategory);
  if (j.find("timeLimit") != j.end()) {
    j.at("timeLimit").get_to(o.m_TimeLimit);
    o.m_TimeLimitIsSet = true;
  }
  if (j.find("volumeLimit") != j.end()) {
    j.at("volumeLimit").get_to(o.m_VolumeLimit);
    o.m_VolumeLimitIsSet = true;
  }
  if (j.find("volumeLimit64") != j.end()) {
    j.at("volumeLimit64").get_to(o.m_VolumeLimit64);
    o.m_VolumeLimit64IsSet = true;
  }
  if (j.find("maxNumberOfccc") != j.end()) {
    j.at("maxNumberOfccc").get_to(o.m_MaxNumberOfccc);
    o.m_MaxNumberOfcccIsSet = true;
  }
}

TriggerType Trigger::getTriggerType() const {
  return m_TriggerType;
}
void Trigger::setTriggerType(TriggerType const& value) {
  m_TriggerType = value;
}
TriggerCategory Trigger::getTriggerCategory() const {
  return m_TriggerCategory;
}
void Trigger::setTriggerCategory(TriggerCategory const& value) {
  m_TriggerCategory = value;
}
int32_t Trigger::getTimeLimit() const {
  return m_TimeLimit;
}
void Trigger::setTimeLimit(int32_t const value) {
  m_TimeLimit      = value;
  m_TimeLimitIsSet = true;
}
bool Trigger::timeLimitIsSet() const {
  return m_TimeLimitIsSet;
}
void Trigger::unsetTimeLimit() {
  m_TimeLimitIsSet = false;
}
int32_t Trigger::getVolumeLimit() const {
  return m_VolumeLimit;
}
void Trigger::setVolumeLimit(int32_t const value) {
  m_VolumeLimit      = value;
  m_VolumeLimitIsSet = true;
}
bool Trigger::volumeLimitIsSet() const {
  return m_VolumeLimitIsSet;
}
void Trigger::unsetVolumeLimit() {
  m_VolumeLimitIsSet = false;
}
int64_t Trigger::getVolumeLimit64() const {
  return m_VolumeLimit64;
}
void Trigger::setVolumeLimit64(int64_t const value) {
  m_VolumeLimit64      = value;
  m_VolumeLimit64IsSet = true;
}
bool Trigger::volumeLimit64IsSet() const {
  return m_VolumeLimit64IsSet;
}
void Trigger::unsetVolumeLimit64() {
  m_VolumeLimit64IsSet = false;
}
int32_t Trigger::getMaxNumberOfccc() const {
  return m_MaxNumberOfccc;
}
void Trigger::setMaxNumberOfccc(int32_t const value) {
  m_MaxNumberOfccc      = value;
  m_MaxNumberOfcccIsSet = true;
}
bool Trigger::maxNumberOfcccIsSet() const {
  return m_MaxNumberOfcccIsSet;
}
void Trigger::unsetMaxNumberOfccc() {
  m_MaxNumberOfcccIsSet = false;
}

}  // namespace model
}  // namespace smf_server
}  // namespace oai
