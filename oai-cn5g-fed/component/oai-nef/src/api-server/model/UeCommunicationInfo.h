/**
 * Nnef_EventExposure
 * NEF Event Exposure Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.5
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * UeCommunicationInfo.h
 *
 *
 */

#ifndef UeCommunicationInfo_H_
#define UeCommunicationInfo_H_

#include <nlohmann/json.hpp>
#include <string>
#include <vector>

#include "CommunicationCollection.h"

namespace oai::nef::model {

/// <summary>
///
/// </summary>
class UeCommunicationInfo {
 public:
  UeCommunicationInfo();
  virtual ~UeCommunicationInfo() = default;

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

  bool operator==(const UeCommunicationInfo& rhs) const;
  bool operator!=(const UeCommunicationInfo& rhs) const;

  /////////////////////////////////////////////
  /// UeCommunicationInfo members

  /// <summary>
  ///
  /// </summary>
  std::string getSupi() const;
  void setSupi(std::string const& value);
  bool supiIsSet() const;
  void unsetSupi();
  /// <summary>
  ///
  /// </summary>
  std::string getInterGroupId() const;
  void setInterGroupId(std::string const& value);
  bool interGroupIdIsSet() const;
  void unsetInterGroupId();
  /// <summary>
  ///
  /// </summary>
  std::string getAppId() const;
  void setAppId(std::string const& value);
  bool appIdIsSet() const;
  void unsetAppId();
  /// <summary>
  ///
  /// </summary>
  std::vector<CommunicationCollection> getComms() const;
  void setComms(std::vector<CommunicationCollection> const& value);

  friend void to_json(nlohmann::json& j, const UeCommunicationInfo& o);
  friend void from_json(const nlohmann::json& j, UeCommunicationInfo& o);

 protected:
  std::string m_Supi;
  bool m_SupiIsSet;
  std::string m_InterGroupId;
  bool m_InterGroupIdIsSet;
  std::string m_AppId;
  bool m_AppIdIsSet;
  std::vector<CommunicationCollection> m_Comms;
};

}  // namespace oai::nef::model

#endif /* UeCommunicationInfo_H_ */
