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
 * TerminationNotification.h
 *
 *
 */

#ifndef TerminationNotification_H_
#define TerminationNotification_H_

#include "SmPolicyAssociationReleaseCause.h"
#include <string>
#include <nlohmann/json.hpp>

namespace oai {
namespace pcf {
namespace model {

/// <summary>
///
/// </summary>
class TerminationNotification {
 public:
  TerminationNotification();
  virtual ~TerminationNotification() = default;

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

  bool operator==(const TerminationNotification& rhs) const;
  bool operator!=(const TerminationNotification& rhs) const;

  /////////////////////////////////////////////
  /// TerminationNotification members

  /// <summary>
  ///
  /// </summary>
  std::string getResourceUri() const;
  void setResourceUri(std::string const& value);
  /// <summary>
  ///
  /// </summary>
  SmPolicyAssociationReleaseCause getCause() const;
  void setCause(SmPolicyAssociationReleaseCause const& value);

  friend void to_json(nlohmann::json& j, const TerminationNotification& o);
  friend void from_json(const nlohmann::json& j, TerminationNotification& o);

 protected:
  std::string m_ResourceUri;

  SmPolicyAssociationReleaseCause m_Cause;
};

}  // namespace model
}  // namespace pcf
}  // namespace oai
#endif /* TerminationNotification_H_ */