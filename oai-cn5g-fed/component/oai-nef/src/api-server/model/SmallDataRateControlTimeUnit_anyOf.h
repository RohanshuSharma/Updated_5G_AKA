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
/*
 * SmallDataRateControlTimeUnit_anyOf.h
 *
 *
 */

#ifndef SmallDataRateControlTimeUnit_anyOf_H_
#define SmallDataRateControlTimeUnit_anyOf_H_

#include <nlohmann/json.hpp>

namespace oai::nef::model {

/// <summary>
///
/// </summary>
class SmallDataRateControlTimeUnit_anyOf {
 public:
  SmallDataRateControlTimeUnit_anyOf();
  virtual ~SmallDataRateControlTimeUnit_anyOf() = default;

  enum class eSmallDataRateControlTimeUnit_anyOf {
    // To have a valid default value.
    // Avoiding name clashes with user defined
    // enum values
    INVALID_VALUE_OPENAPI_GENERATED = 0,
    MINUTE,
    HOUR,
    DAY,
    WEEK,
    _6MINUTES
  };

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

  bool operator==(const SmallDataRateControlTimeUnit_anyOf& rhs) const;
  bool operator!=(const SmallDataRateControlTimeUnit_anyOf& rhs) const;

  /////////////////////////////////////////////
  /// SmallDataRateControlTimeUnit_anyOf members

  SmallDataRateControlTimeUnit_anyOf::eSmallDataRateControlTimeUnit_anyOf
  getValue() const;
  void setValue(
      SmallDataRateControlTimeUnit_anyOf::eSmallDataRateControlTimeUnit_anyOf
          value);

  friend void to_json(
      nlohmann::json& j, const SmallDataRateControlTimeUnit_anyOf& o);
  friend void from_json(
      const nlohmann::json& j, SmallDataRateControlTimeUnit_anyOf& o);

 protected:
  SmallDataRateControlTimeUnit_anyOf::eSmallDataRateControlTimeUnit_anyOf
      m_value = SmallDataRateControlTimeUnit_anyOf::
          eSmallDataRateControlTimeUnit_anyOf::INVALID_VALUE_OPENAPI_GENERATED;
};

}  // namespace oai::nef::model

#endif /* SmallDataRateControlTimeUnit_anyOf_H_ */
