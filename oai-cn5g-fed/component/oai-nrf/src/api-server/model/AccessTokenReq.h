/**
 * NRF OAuth2
 * NRF OAuth2 Authorization. © 2019, 3GPP Organizational Partners (ARIB, ATIS,
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
 * AccessTokenReq.h
 *
 *
 */

#ifndef AccessTokenReq_H_
#define AccessTokenReq_H_

#include "NFType.h"
#include <string>
#include "PlmnId.h"
#include <nlohmann/json.hpp>

namespace oai {
namespace nrf {
namespace model {

/// <summary>
///
/// </summary>
class AccessTokenReq {
 public:
  AccessTokenReq();
  virtual ~AccessTokenReq();

  void validate();

  /////////////////////////////////////////////
  /// AccessTokenReq members

  /// <summary>
  ///
  /// </summary>
  std::string getGrantType() const;
  void setGrantType(std::string const& value);
  /// <summary>
  ///
  /// </summary>
  std::string getNfInstanceId() const;
  void setNfInstanceId(std::string const& value);
  /// <summary>
  ///
  /// </summary>
  NFType getNfType() const;
  void setNfType(NFType const& value);
  bool nfTypeIsSet() const;
  void unsetNfType();
  /// <summary>
  ///
  /// </summary>
  NFType getTargetNfType() const;
  void setTargetNfType(NFType const& value);
  bool targetNfTypeIsSet() const;
  void unsetTargetNfType();
  /// <summary>
  ///
  /// </summary>
  std::string getScope() const;
  void setScope(std::string const& value);
  /// <summary>
  ///
  /// </summary>
  std::string getTargetNfInstanceId() const;
  void setTargetNfInstanceId(std::string const& value);
  bool targetNfInstanceIdIsSet() const;
  void unsetTargetNfInstanceId();
  /// <summary>
  ///
  /// </summary>
  PlmnId getRequesterPlmn() const;
  void setRequesterPlmn(PlmnId const& value);
  bool requesterPlmnIsSet() const;
  void unsetRequesterPlmn();
  /// <summary>
  ///
  /// </summary>
  PlmnId getTargetPlmn() const;
  void setTargetPlmn(PlmnId const& value);
  bool targetPlmnIsSet() const;
  void unsetTargetPlmn();

  friend void to_json(nlohmann::json& j, const AccessTokenReq& o);
  friend void from_json(const nlohmann::json& j, AccessTokenReq& o);

 protected:
  std::string m_Grant_type;

  std::string m_NfInstanceId;

  NFType m_NfType;
  bool m_NfTypeIsSet;
  NFType m_TargetNfType;
  bool m_TargetNfTypeIsSet;
  std::string m_Scope;

  std::string m_TargetNfInstanceId;
  bool m_TargetNfInstanceIdIsSet;
  PlmnId m_RequesterPlmn;
  bool m_RequesterPlmnIsSet;
  PlmnId m_TargetPlmn;
  bool m_TargetPlmnIsSet;
};

}  // namespace model
}  // namespace nrf
}  // namespace oai

#endif /* AccessTokenReq_H_ */
