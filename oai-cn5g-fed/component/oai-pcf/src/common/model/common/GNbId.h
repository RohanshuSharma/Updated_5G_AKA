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
/*
 * GNbId.h
 *
 *
 */

#ifndef GNbId_H_
#define GNbId_H_

#include <string>
#include <nlohmann/json.hpp>

namespace oai::model::common {

/// <summary>
///
/// </summary>
class GNbId {
 public:
  GNbId();
  virtual ~GNbId() = default;

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

  bool operator==(const GNbId& rhs) const;
  bool operator!=(const GNbId& rhs) const;

  /////////////////////////////////////////////
  /// GNbId members

  /// <summary>
  ///
  /// </summary>
  int32_t getBitLength() const;
  void setBitLength(int32_t const value);
  /// <summary>
  ///
  /// </summary>
  std::string getGNBValue() const;
  void setGNBValue(std::string const& value);

  friend void to_json(nlohmann::json& j, const GNbId& o);
  friend void from_json(const nlohmann::json& j, GNbId& o);

 protected:
  int32_t m_BitLength;

  std::string m_GNBValue;
};

}  // namespace oai::model::common

#endif /* GNbId_H_ */
