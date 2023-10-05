/**
 * Npcf_SMPolicyControl API
 * Session Management Policy Control Service © 2020, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.1.alpha-5
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * QosCharacteristics.h
 *
 *
 */

#ifndef QosCharacteristics_H_
#define QosCharacteristics_H_

#include "QosResourceType.h"
#include <string>
#include <nlohmann/json.hpp>

namespace oai {
namespace pcf {
namespace model {

/// <summary>
///
/// </summary>
class QosCharacteristics {
 public:
  QosCharacteristics();
  virtual ~QosCharacteristics() = default;

  /// <summary>
  /// Validate the current data in the model. Throws a ValidationException on
  /// failure.
  /// </summary>
  void validate() const;

  /// <summary>
  /// Validate the current data in the model. Returns false on error and writes
  /// an error message into the given stringstream.
  /// </summary>
  bool validate(std::stringstream& msg) const;

  /// <summary>
  /// Helper overload for validate. Used when one model stores another model and
  /// calls it's validate. Not meant to be called outside that case.
  /// </summary>
  bool validate(std::stringstream& msg, const std::string& pathPrefix) const;

  bool operator==(const QosCharacteristics& rhs) const;
  bool operator!=(const QosCharacteristics& rhs) const;

  /////////////////////////////////////////////
  /// QosCharacteristics members

  /// <summary>
  ///
  /// </summary>
  int32_t getR5qi() const;
  void setR5qi(int32_t const value);
  /// <summary>
  ///
  /// </summary>
  oai::model::common::QosResourceType getResourceType() const;
  void setResourceType(oai::model::common::QosResourceType const& value);
  /// <summary>
  ///
  /// </summary>
  int32_t getPriorityLevel() const;
  void setPriorityLevel(int32_t const value);
  /// <summary>
  ///
  /// </summary>
  int32_t getPacketDelayBudget() const;
  void setPacketDelayBudget(int32_t const value);
  /// <summary>
  ///
  /// </summary>
  std::string getPacketErrorRate() const;
  void setPacketErrorRate(std::string const& value);
  /// <summary>
  ///
  /// </summary>
  int32_t getAveragingWindow() const;
  void setAveragingWindow(int32_t const value);
  bool averagingWindowIsSet() const;
  void unsetAveragingWindow();
  /// <summary>
  ///
  /// </summary>
  int32_t getMaxDataBurstVol() const;
  void setMaxDataBurstVol(int32_t const value);
  bool maxDataBurstVolIsSet() const;
  void unsetMaxDataBurstVol();
  /// <summary>
  ///
  /// </summary>
  int32_t getExtMaxDataBurstVol() const;
  void setExtMaxDataBurstVol(int32_t const value);
  bool extMaxDataBurstVolIsSet() const;
  void unsetExtMaxDataBurstVol();

  friend void to_json(nlohmann::json& j, const QosCharacteristics& o);
  friend void from_json(const nlohmann::json& j, QosCharacteristics& o);

 protected:
  int32_t m_r_5qi;

  oai::model::common::QosResourceType m_ResourceType;

  int32_t m_PriorityLevel;

  int32_t m_PacketDelayBudget;

  std::string m_PacketErrorRate;

  int32_t m_AveragingWindow;
  bool m_AveragingWindowIsSet;
  int32_t m_MaxDataBurstVol;
  bool m_MaxDataBurstVolIsSet;
  int32_t m_ExtMaxDataBurstVol;
  bool m_ExtMaxDataBurstVolIsSet;
};

}  // namespace model
}  // namespace pcf
}  // namespace oai
#endif /* QosCharacteristics_H_ */