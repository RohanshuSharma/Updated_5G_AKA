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
 * InvalidParam.h
 *
 * Represents the description of invalid parameters, for a request rejected due
 * to invalid parameters.
 */

#ifndef InvalidParam_H_
#define InvalidParam_H_

#include <nlohmann/json.hpp>
#include <string>

namespace oai::nef::model {

/// <summary>
/// Represents the description of invalid parameters, for a request rejected due
/// to invalid parameters.
/// </summary>
class InvalidParam {
 public:
  InvalidParam();
  virtual ~InvalidParam() = default;

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

  bool operator==(const InvalidParam& rhs) const;
  bool operator!=(const InvalidParam& rhs) const;

  /////////////////////////////////////////////
  /// InvalidParam members

  /// <summary>
  /// Attribute&#39;s name encoded as a JSON Pointer, or header&#39;s name.
  /// </summary>
  std::string getParam() const;
  void setParam(std::string const& value);
  /// <summary>
  /// A human-readable reason, e.g. \&quot;must be a positive integer\&quot;.
  /// </summary>
  std::string getReason() const;
  void setReason(std::string const& value);
  bool reasonIsSet() const;
  void unsetReason();

  friend void to_json(nlohmann::json& j, const InvalidParam& o);
  friend void from_json(const nlohmann::json& j, InvalidParam& o);

 protected:
  std::string m_Param;

  std::string m_Reason;
  bool m_ReasonIsSet;
};

}  // namespace oai::nef::model

#endif /* InvalidParam_H_ */