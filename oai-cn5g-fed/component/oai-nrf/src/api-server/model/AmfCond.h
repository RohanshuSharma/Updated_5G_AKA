/**
 * NRF NFManagement Service
 * NRF NFManagement Service. © 2019, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * AmfCond.h
 *
 *
 */

#ifndef AmfCond_H_
#define AmfCond_H_

#include <string>
#include <nlohmann/json.hpp>

namespace oai {
namespace nrf {
namespace model {

/// <summary>
///
/// </summary>
class AmfCond {
 public:
  AmfCond();
  virtual ~AmfCond();

  void validate();

  /////////////////////////////////////////////
  /// AmfCond members

  /// <summary>
  ///
  /// </summary>
  std::string getAmfSetId() const;
  void setAmfSetId(std::string const& value);
  bool amfSetIdIsSet() const;
  void unsetAmfSetId();
  /// <summary>
  ///
  /// </summary>
  std::string getAmfRegionId() const;
  void setAmfRegionId(std::string const& value);
  bool amfRegionIdIsSet() const;
  void unsetAmfRegionId();

  friend void to_json(nlohmann::json& j, const AmfCond& o);
  friend void from_json(const nlohmann::json& j, AmfCond& o);

 protected:
  std::string m_AmfSetId;
  bool m_AmfSetIdIsSet;
  std::string m_AmfRegionId;
  bool m_AmfRegionIdIsSet;
};

}  // namespace model
}  // namespace nrf
}  // namespace oai

#endif /* AmfCond_H_ */
