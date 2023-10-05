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
 * NotificationMethod.h
 *
 * Possible values are - PERIODIC - ONE_TIME - ON_EVENT_DETECTION
 */

#ifndef NotificationMethod_H_
#define NotificationMethod_H_

#include <nlohmann/json.hpp>

#include "NotificationMethod_anyOf.h"

namespace oai::nef::model {

/// <summary>
/// Possible values are - PERIODIC - ONE_TIME - ON_EVENT_DETECTION
/// </summary>
class NotificationMethod {
 public:
  NotificationMethod();
  virtual ~NotificationMethod() = default;

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

  bool operator==(const NotificationMethod& rhs) const;
  bool operator!=(const NotificationMethod& rhs) const;

  /////////////////////////////////////////////
  /// NotificationMethod members

  NotificationMethod_anyOf getValue() const;
  void setValue(NotificationMethod_anyOf value);
  NotificationMethod_anyOf::eNotificationMethod_anyOf getEnumValue() const;
  void setEnumValue(NotificationMethod_anyOf::eNotificationMethod_anyOf value);
  friend void to_json(nlohmann::json& j, const NotificationMethod& o);
  friend void from_json(const nlohmann::json& j, NotificationMethod& o);
  friend void to_json(nlohmann::json& j, const NotificationMethod_anyOf& o);
  friend void from_json(const nlohmann::json& j, NotificationMethod_anyOf& o);

 protected:
  NotificationMethod_anyOf m_value;
};

}  // namespace oai::nef::model

#endif /* NotificationMethod_H_ */