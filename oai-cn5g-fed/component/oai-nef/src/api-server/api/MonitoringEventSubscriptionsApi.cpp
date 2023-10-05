/**
 * 3gpp-monitoring-event
 * API for Monitoring Event. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.4
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "MonitoringEventSubscriptionsApi.h"

#include "Helpers.h"
#include "nef_config.hpp"
extern oai::nef::app::nef_config nef_cfg;

namespace oai::nef::api {

using namespace oai::nef::helpers;
using namespace oai::nef::model;

const std::string MonitoringEventSubscriptionsApi::base =
    "/3gpp-monitoring-event/";

MonitoringEventSubscriptionsApi::MonitoringEventSubscriptionsApi(
    const std::shared_ptr<Pistache::Rest::Router>& rtr)
    : router(rtr) {}

void MonitoringEventSubscriptionsApi::init() {
  setupRoutes();
}

void MonitoringEventSubscriptionsApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Post(
      *router, base + nef_cfg.sbi.api_version + "/:scsAsId/subscriptions",
      Routes::bind(
          &MonitoringEventSubscriptionsApi::
              create_monitoring_event_subscription_handler,
          this));
  Routes::Get(
      *router, base + nef_cfg.sbi.api_version + "/:scsAsId/subscriptions",
      Routes::bind(
          &MonitoringEventSubscriptionsApi::
              fetch_all_monitoring_event_subscriptions_handler,
          this));

  // Default handler, called when a route is not found
  router->addCustomHandler(Routes::bind(
      &MonitoringEventSubscriptionsApi::
          monitoring_event_subscriptions_api_default_handler,
      this));
}

std::pair<Pistache::Http::Code, std::string>
MonitoringEventSubscriptionsApi::handleParsingException(
    const std::exception& ex) const noexcept {
  try {
    throw;
  } catch (nlohmann::detail::exception& e) {
    return std::make_pair(Pistache::Http::Code::Bad_Request, e.what());
  } catch (oai::nef::helpers::ValidationException& e) {
    return std::make_pair(Pistache::Http::Code::Bad_Request, e.what());
  } catch (std::exception& e) {
    return std::make_pair(
        Pistache::Http::Code::Internal_Server_Error, e.what());
  }
}

std::pair<Pistache::Http::Code, std::string>
MonitoringEventSubscriptionsApi::handleOperationException(
    const std::exception& ex) const noexcept {
  return std::make_pair(Pistache::Http::Code::Internal_Server_Error, ex.what());
}

void MonitoringEventSubscriptionsApi::
    create_monitoring_event_subscription_handler(
        const Pistache::Rest::Request& request,
        Pistache::Http::ResponseWriter response) {
  try {
    // Getting the path params
    auto scsAsId = request.param(":scsAsId").as<std::string>();

    // Getting the body param

    MonitoringEventSubscription monitoringEventSubscription;

    try {
      nlohmann::json::parse(request.body()).get_to(monitoringEventSubscription);
      monitoringEventSubscription.validate();
    } catch (std::exception& e) {
      const std::pair<Pistache::Http::Code, std::string> errorInfo =
          this->handleParsingException(e);
      response.send(errorInfo.first, errorInfo.second);
      return;
    }

    try {
      this->create_monitoring_event_subscription(
          scsAsId, monitoringEventSubscription, response);
    } catch (Pistache::Http::HttpError& e) {
      response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
      return;
    } catch (std::exception& e) {
      const std::pair<Pistache::Http::Code, std::string> errorInfo =
          this->handleOperationException(e);
      response.send(errorInfo.first, errorInfo.second);
      return;
    }

  } catch (std::exception& e) {
    response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
  }
}
void MonitoringEventSubscriptionsApi::
    fetch_all_monitoring_event_subscriptions_handler(
        const Pistache::Rest::Request& request,
        Pistache::Http::ResponseWriter response) {
  try {
    // Getting the path params
    auto scsAsId = request.param(":scsAsId").as<std::string>();

    // Getting the query params
    auto ipAddrsQuery = request.query().get("ip-addrs");
    std::optional<std::vector<IpAddr>> ipAddrs;
    if (ipAddrsQuery.isEmpty()) {
      std::vector<IpAddr> valueQuery_instance;
      if (fromStringValue(ipAddrsQuery.get(), valueQuery_instance)) {
        ipAddrs = valueQuery_instance;
      }
    }
    auto ipDomainQuery = request.query().get("ip-domain");
    std::optional<std::string> ipDomain;
    if (ipDomainQuery.isEmpty()) {
      std::string valueQuery_instance;
      if (fromStringValue(ipDomainQuery.get(), valueQuery_instance)) {
        ipDomain = valueQuery_instance;
      }
    }
    auto macAddrsQuery = request.query().get("mac-addrs");
    std::optional<std::vector<std::string>> macAddrs;
    if (macAddrsQuery.isEmpty()) {
      std::vector<std::string> valueQuery_instance;
      if (fromStringValue(macAddrsQuery.get(), valueQuery_instance)) {
        macAddrs = valueQuery_instance;
      }
    }

    try {
      this->fetch_all_monitoring_event_subscriptions(
          scsAsId, ipAddrs, ipDomain, macAddrs, response);
    } catch (Pistache::Http::HttpError& e) {
      response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
      return;
    } catch (std::exception& e) {
      const std::pair<Pistache::Http::Code, std::string> errorInfo =
          this->handleOperationException(e);
      response.send(errorInfo.first, errorInfo.second);
      return;
    }

  } catch (std::exception& e) {
    response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
  }
}

void MonitoringEventSubscriptionsApi::
    monitoring_event_subscriptions_api_default_handler(
        const Pistache::Rest::Request&,
        Pistache::Http::ResponseWriter response) {
  response.send(
      Pistache::Http::Code::Not_Found, "The requested method does not exist");
}

}  // namespace oai::nef::api