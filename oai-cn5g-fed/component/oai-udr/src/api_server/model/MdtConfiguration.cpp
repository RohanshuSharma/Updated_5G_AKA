/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this
 * file except in compliance with the License. You may obtain a copy of the
 * License at
 *
 *      http://www.openairinterface.org/?page_id=698
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */
/**
 * Nudr_DataRepository API OpenAPI file
 * Unified Data Repository Service. © 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.1.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "MdtConfiguration.h"

namespace oai::udr::model {

MdtConfiguration::MdtConfiguration() {
  m_ReportTypeIsSet             = false;
  m_AreaScopeIsSet              = false;
  m_MeasurementLteListIsSet     = false;
  m_MeasurementNrListIsSet      = false;
  m_SensorMeasurementListIsSet  = false;
  m_ReportingTriggerListIsSet   = false;
  m_ReportIntervalIsSet         = false;
  m_ReportIntervalNrIsSet       = false;
  m_ReportAmountIsSet           = false;
  m_EventThresholdRsrp          = 0;
  m_EventThresholdRsrpIsSet     = false;
  m_EventThresholdRsrpNr        = 0;
  m_EventThresholdRsrpNrIsSet   = false;
  m_EventThresholdRsrq          = 0;
  m_EventThresholdRsrqIsSet     = false;
  m_EventThresholdRsrqNr        = 0;
  m_EventThresholdRsrqNrIsSet   = false;
  m_EventListIsSet              = false;
  m_LoggingIntervalIsSet        = false;
  m_LoggingIntervalNrIsSet      = false;
  m_LoggingDurationIsSet        = false;
  m_LoggingDurationNrIsSet      = false;
  m_PositioningMethodIsSet      = false;
  m_CollectionPeriodRmmLteIsSet = false;
  m_CollectionPeriodRmmNrIsSet  = false;
  m_MeasurementPeriodLteIsSet   = false;
  m_MdtAllowedPlmnIdListIsSet   = false;
  m_MbsfnAreaListIsSet          = false;
  m_InterFreqTargetListIsSet    = false;
}

MdtConfiguration::~MdtConfiguration() {}

void MdtConfiguration::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const MdtConfiguration& o) {
  j            = nlohmann::json();
  j["jobType"] = o.m_JobType;
  if (o.reportTypeIsSet()) j["reportType"] = o.m_ReportType;
  if (o.areaScopeIsSet()) j["areaScope"] = o.m_AreaScope;
  if (o.measurementLteListIsSet() || !o.m_MeasurementLteList.empty())
    j["measurementLteList"] = o.m_MeasurementLteList;
  if (o.measurementNrListIsSet() || !o.m_MeasurementNrList.empty())
    j["measurementNrList"] = o.m_MeasurementNrList;
  if (o.sensorMeasurementListIsSet() || !o.m_SensorMeasurementList.empty())
    j["sensorMeasurementList"] = o.m_SensorMeasurementList;
  if (o.reportingTriggerListIsSet() || !o.m_ReportingTriggerList.empty())
    j["reportingTriggerList"] = o.m_ReportingTriggerList;
  if (o.reportIntervalIsSet()) j["reportInterval"] = o.m_ReportInterval;
  if (o.reportIntervalNrIsSet()) j["reportIntervalNr"] = o.m_ReportIntervalNr;
  if (o.reportAmountIsSet()) j["reportAmount"] = o.m_ReportAmount;
  if (o.eventThresholdRsrpIsSet())
    j["eventThresholdRsrp"] = o.m_EventThresholdRsrp;
  if (o.eventThresholdRsrpNrIsSet())
    j["eventThresholdRsrpNr"] = o.m_EventThresholdRsrpNr;
  if (o.eventThresholdRsrqIsSet())
    j["eventThresholdRsrq"] = o.m_EventThresholdRsrq;
  if (o.eventThresholdRsrqNrIsSet())
    j["eventThresholdRsrqNr"] = o.m_EventThresholdRsrqNr;
  if (o.eventListIsSet() || !o.m_EventList.empty())
    j["eventList"] = o.m_EventList;
  if (o.loggingIntervalIsSet()) j["loggingInterval"] = o.m_LoggingInterval;
  if (o.loggingIntervalNrIsSet())
    j["loggingIntervalNr"] = o.m_LoggingIntervalNr;
  if (o.loggingDurationIsSet()) j["loggingDuration"] = o.m_LoggingDuration;
  if (o.loggingDurationNrIsSet())
    j["loggingDurationNr"] = o.m_LoggingDurationNr;
  if (o.positioningMethodIsSet())
    j["positioningMethod"] = o.m_PositioningMethod;
  if (o.collectionPeriodRmmLteIsSet())
    j["collectionPeriodRmmLte"] = o.m_CollectionPeriodRmmLte;
  if (o.collectionPeriodRmmNrIsSet())
    j["collectionPeriodRmmNr"] = o.m_CollectionPeriodRmmNr;
  if (o.measurementPeriodLteIsSet())
    j["measurementPeriodLte"] = o.m_MeasurementPeriodLte;
  if (o.mdtAllowedPlmnIdListIsSet() || !o.m_MdtAllowedPlmnIdList.empty())
    j["mdtAllowedPlmnIdList"] = o.m_MdtAllowedPlmnIdList;
  if (o.mbsfnAreaListIsSet() || !o.m_MbsfnAreaList.empty())
    j["mbsfnAreaList"] = o.m_MbsfnAreaList;
  if (o.interFreqTargetListIsSet() || !o.m_InterFreqTargetList.empty())
    j["interFreqTargetList"] = o.m_InterFreqTargetList;
}

void from_json(const nlohmann::json& j, MdtConfiguration& o) {
  j.at("jobType").get_to(o.m_JobType);
  if (j.find("reportType") != j.end()) {
    j.at("reportType").get_to(o.m_ReportType);
    o.m_ReportTypeIsSet = true;
  }
  if (j.find("areaScope") != j.end()) {
    j.at("areaScope").get_to(o.m_AreaScope);
    o.m_AreaScopeIsSet = true;
  }
  if (j.find("measurementLteList") != j.end()) {
    j.at("measurementLteList").get_to(o.m_MeasurementLteList);
    o.m_MeasurementLteListIsSet = true;
  }
  if (j.find("measurementNrList") != j.end()) {
    j.at("measurementNrList").get_to(o.m_MeasurementNrList);
    o.m_MeasurementNrListIsSet = true;
  }
  if (j.find("sensorMeasurementList") != j.end()) {
    j.at("sensorMeasurementList").get_to(o.m_SensorMeasurementList);
    o.m_SensorMeasurementListIsSet = true;
  }
  if (j.find("reportingTriggerList") != j.end()) {
    j.at("reportingTriggerList").get_to(o.m_ReportingTriggerList);
    o.m_ReportingTriggerListIsSet = true;
  }
  if (j.find("reportInterval") != j.end()) {
    j.at("reportInterval").get_to(o.m_ReportInterval);
    o.m_ReportIntervalIsSet = true;
  }
  if (j.find("reportIntervalNr") != j.end()) {
    j.at("reportIntervalNr").get_to(o.m_ReportIntervalNr);
    o.m_ReportIntervalNrIsSet = true;
  }
  if (j.find("reportAmount") != j.end()) {
    j.at("reportAmount").get_to(o.m_ReportAmount);
    o.m_ReportAmountIsSet = true;
  }
  if (j.find("eventThresholdRsrp") != j.end()) {
    j.at("eventThresholdRsrp").get_to(o.m_EventThresholdRsrp);
    o.m_EventThresholdRsrpIsSet = true;
  }
  if (j.find("eventThresholdRsrpNr") != j.end()) {
    j.at("eventThresholdRsrpNr").get_to(o.m_EventThresholdRsrpNr);
    o.m_EventThresholdRsrpNrIsSet = true;
  }
  if (j.find("eventThresholdRsrq") != j.end()) {
    j.at("eventThresholdRsrq").get_to(o.m_EventThresholdRsrq);
    o.m_EventThresholdRsrqIsSet = true;
  }
  if (j.find("eventThresholdRsrqNr") != j.end()) {
    j.at("eventThresholdRsrqNr").get_to(o.m_EventThresholdRsrqNr);
    o.m_EventThresholdRsrqNrIsSet = true;
  }
  if (j.find("eventList") != j.end()) {
    j.at("eventList").get_to(o.m_EventList);
    o.m_EventListIsSet = true;
  }
  if (j.find("loggingInterval") != j.end()) {
    j.at("loggingInterval").get_to(o.m_LoggingInterval);
    o.m_LoggingIntervalIsSet = true;
  }
  if (j.find("loggingIntervalNr") != j.end()) {
    j.at("loggingIntervalNr").get_to(o.m_LoggingIntervalNr);
    o.m_LoggingIntervalNrIsSet = true;
  }
  if (j.find("loggingDuration") != j.end()) {
    j.at("loggingDuration").get_to(o.m_LoggingDuration);
    o.m_LoggingDurationIsSet = true;
  }
  if (j.find("loggingDurationNr") != j.end()) {
    j.at("loggingDurationNr").get_to(o.m_LoggingDurationNr);
    o.m_LoggingDurationNrIsSet = true;
  }
  if (j.find("positioningMethod") != j.end()) {
    j.at("positioningMethod").get_to(o.m_PositioningMethod);
    o.m_PositioningMethodIsSet = true;
  }
  if (j.find("collectionPeriodRmmLte") != j.end()) {
    j.at("collectionPeriodRmmLte").get_to(o.m_CollectionPeriodRmmLte);
    o.m_CollectionPeriodRmmLteIsSet = true;
  }
  if (j.find("collectionPeriodRmmNr") != j.end()) {
    j.at("collectionPeriodRmmNr").get_to(o.m_CollectionPeriodRmmNr);
    o.m_CollectionPeriodRmmNrIsSet = true;
  }
  if (j.find("measurementPeriodLte") != j.end()) {
    j.at("measurementPeriodLte").get_to(o.m_MeasurementPeriodLte);
    o.m_MeasurementPeriodLteIsSet = true;
  }
  if (j.find("mdtAllowedPlmnIdList") != j.end()) {
    j.at("mdtAllowedPlmnIdList").get_to(o.m_MdtAllowedPlmnIdList);
    o.m_MdtAllowedPlmnIdListIsSet = true;
  }
  if (j.find("mbsfnAreaList") != j.end()) {
    j.at("mbsfnAreaList").get_to(o.m_MbsfnAreaList);
    o.m_MbsfnAreaListIsSet = true;
  }
  if (j.find("interFreqTargetList") != j.end()) {
    j.at("interFreqTargetList").get_to(o.m_InterFreqTargetList);
    o.m_InterFreqTargetListIsSet = true;
  }
}

JobType MdtConfiguration::getJobType() const {
  return m_JobType;
}
void MdtConfiguration::setJobType(JobType const& value) {
  m_JobType = value;
}
ReportTypeMdt MdtConfiguration::getReportType() const {
  return m_ReportType;
}
void MdtConfiguration::setReportType(ReportTypeMdt const& value) {
  m_ReportType      = value;
  m_ReportTypeIsSet = true;
}
bool MdtConfiguration::reportTypeIsSet() const {
  return m_ReportTypeIsSet;
}
void MdtConfiguration::unsetReportType() {
  m_ReportTypeIsSet = false;
}
AreaScope MdtConfiguration::getAreaScope() const {
  return m_AreaScope;
}
void MdtConfiguration::setAreaScope(AreaScope const& value) {
  m_AreaScope      = value;
  m_AreaScopeIsSet = true;
}
bool MdtConfiguration::areaScopeIsSet() const {
  return m_AreaScopeIsSet;
}
void MdtConfiguration::unsetAreaScope() {
  m_AreaScopeIsSet = false;
}
std::vector<MeasurementLteForMdt>& MdtConfiguration::getMeasurementLteList() {
  return m_MeasurementLteList;
}
void MdtConfiguration::setMeasurementLteList(
    std::vector<MeasurementLteForMdt> const& value) {
  m_MeasurementLteList      = value;
  m_MeasurementLteListIsSet = true;
}
bool MdtConfiguration::measurementLteListIsSet() const {
  return m_MeasurementLteListIsSet;
}
void MdtConfiguration::unsetMeasurementLteList() {
  m_MeasurementLteListIsSet = false;
}
std::vector<MeasurementNrForMdt>& MdtConfiguration::getMeasurementNrList() {
  return m_MeasurementNrList;
}
void MdtConfiguration::setMeasurementNrList(
    std::vector<MeasurementNrForMdt> const& value) {
  m_MeasurementNrList      = value;
  m_MeasurementNrListIsSet = true;
}
bool MdtConfiguration::measurementNrListIsSet() const {
  return m_MeasurementNrListIsSet;
}
void MdtConfiguration::unsetMeasurementNrList() {
  m_MeasurementNrListIsSet = false;
}
std::vector<SensorMeasurement>& MdtConfiguration::getSensorMeasurementList() {
  return m_SensorMeasurementList;
}
void MdtConfiguration::setSensorMeasurementList(
    std::vector<SensorMeasurement> const& value) {
  m_SensorMeasurementList      = value;
  m_SensorMeasurementListIsSet = true;
}
bool MdtConfiguration::sensorMeasurementListIsSet() const {
  return m_SensorMeasurementListIsSet;
}
void MdtConfiguration::unsetSensorMeasurementList() {
  m_SensorMeasurementListIsSet = false;
}
std::vector<ReportingTrigger>& MdtConfiguration::getReportingTriggerList() {
  return m_ReportingTriggerList;
}
void MdtConfiguration::setReportingTriggerList(
    std::vector<ReportingTrigger> const& value) {
  m_ReportingTriggerList      = value;
  m_ReportingTriggerListIsSet = true;
}
bool MdtConfiguration::reportingTriggerListIsSet() const {
  return m_ReportingTriggerListIsSet;
}
void MdtConfiguration::unsetReportingTriggerList() {
  m_ReportingTriggerListIsSet = false;
}
ReportIntervalMdt MdtConfiguration::getReportInterval() const {
  return m_ReportInterval;
}
void MdtConfiguration::setReportInterval(ReportIntervalMdt const& value) {
  m_ReportInterval      = value;
  m_ReportIntervalIsSet = true;
}
bool MdtConfiguration::reportIntervalIsSet() const {
  return m_ReportIntervalIsSet;
}
void MdtConfiguration::unsetReportInterval() {
  m_ReportIntervalIsSet = false;
}
ReportIntervalNrMdt MdtConfiguration::getReportIntervalNr() const {
  return m_ReportIntervalNr;
}
void MdtConfiguration::setReportIntervalNr(ReportIntervalNrMdt const& value) {
  m_ReportIntervalNr      = value;
  m_ReportIntervalNrIsSet = true;
}
bool MdtConfiguration::reportIntervalNrIsSet() const {
  return m_ReportIntervalNrIsSet;
}
void MdtConfiguration::unsetReportIntervalNr() {
  m_ReportIntervalNrIsSet = false;
}
ReportAmountMdt MdtConfiguration::getReportAmount() const {
  return m_ReportAmount;
}
void MdtConfiguration::setReportAmount(ReportAmountMdt const& value) {
  m_ReportAmount      = value;
  m_ReportAmountIsSet = true;
}
bool MdtConfiguration::reportAmountIsSet() const {
  return m_ReportAmountIsSet;
}
void MdtConfiguration::unsetReportAmount() {
  m_ReportAmountIsSet = false;
}
int32_t MdtConfiguration::getEventThresholdRsrp() const {
  return m_EventThresholdRsrp;
}
void MdtConfiguration::setEventThresholdRsrp(int32_t const value) {
  m_EventThresholdRsrp      = value;
  m_EventThresholdRsrpIsSet = true;
}
bool MdtConfiguration::eventThresholdRsrpIsSet() const {
  return m_EventThresholdRsrpIsSet;
}
void MdtConfiguration::unsetEventThresholdRsrp() {
  m_EventThresholdRsrpIsSet = false;
}
int32_t MdtConfiguration::getEventThresholdRsrpNr() const {
  return m_EventThresholdRsrpNr;
}
void MdtConfiguration::setEventThresholdRsrpNr(int32_t const value) {
  m_EventThresholdRsrpNr      = value;
  m_EventThresholdRsrpNrIsSet = true;
}
bool MdtConfiguration::eventThresholdRsrpNrIsSet() const {
  return m_EventThresholdRsrpNrIsSet;
}
void MdtConfiguration::unsetEventThresholdRsrpNr() {
  m_EventThresholdRsrpNrIsSet = false;
}
int32_t MdtConfiguration::getEventThresholdRsrq() const {
  return m_EventThresholdRsrq;
}
void MdtConfiguration::setEventThresholdRsrq(int32_t const value) {
  m_EventThresholdRsrq      = value;
  m_EventThresholdRsrqIsSet = true;
}
bool MdtConfiguration::eventThresholdRsrqIsSet() const {
  return m_EventThresholdRsrqIsSet;
}
void MdtConfiguration::unsetEventThresholdRsrq() {
  m_EventThresholdRsrqIsSet = false;
}
int32_t MdtConfiguration::getEventThresholdRsrqNr() const {
  return m_EventThresholdRsrqNr;
}
void MdtConfiguration::setEventThresholdRsrqNr(int32_t const value) {
  m_EventThresholdRsrqNr      = value;
  m_EventThresholdRsrqNrIsSet = true;
}
bool MdtConfiguration::eventThresholdRsrqNrIsSet() const {
  return m_EventThresholdRsrqNrIsSet;
}
void MdtConfiguration::unsetEventThresholdRsrqNr() {
  m_EventThresholdRsrqNrIsSet = false;
}
std::vector<EventForMdt>& MdtConfiguration::getEventList() {
  return m_EventList;
}
void MdtConfiguration::setEventList(std::vector<EventForMdt> const& value) {
  m_EventList      = value;
  m_EventListIsSet = true;
}
bool MdtConfiguration::eventListIsSet() const {
  return m_EventListIsSet;
}
void MdtConfiguration::unsetEventList() {
  m_EventListIsSet = false;
}
LoggingIntervalMdt MdtConfiguration::getLoggingInterval() const {
  return m_LoggingInterval;
}
void MdtConfiguration::setLoggingInterval(LoggingIntervalMdt const& value) {
  m_LoggingInterval      = value;
  m_LoggingIntervalIsSet = true;
}
bool MdtConfiguration::loggingIntervalIsSet() const {
  return m_LoggingIntervalIsSet;
}
void MdtConfiguration::unsetLoggingInterval() {
  m_LoggingIntervalIsSet = false;
}
LoggingIntervalNrMdt MdtConfiguration::getLoggingIntervalNr() const {
  return m_LoggingIntervalNr;
}
void MdtConfiguration::setLoggingIntervalNr(LoggingIntervalNrMdt const& value) {
  m_LoggingIntervalNr      = value;
  m_LoggingIntervalNrIsSet = true;
}
bool MdtConfiguration::loggingIntervalNrIsSet() const {
  return m_LoggingIntervalNrIsSet;
}
void MdtConfiguration::unsetLoggingIntervalNr() {
  m_LoggingIntervalNrIsSet = false;
}
LoggingDurationMdt MdtConfiguration::getLoggingDuration() const {
  return m_LoggingDuration;
}
void MdtConfiguration::setLoggingDuration(LoggingDurationMdt const& value) {
  m_LoggingDuration      = value;
  m_LoggingDurationIsSet = true;
}
bool MdtConfiguration::loggingDurationIsSet() const {
  return m_LoggingDurationIsSet;
}
void MdtConfiguration::unsetLoggingDuration() {
  m_LoggingDurationIsSet = false;
}
LoggingDurationNrMdt MdtConfiguration::getLoggingDurationNr() const {
  return m_LoggingDurationNr;
}
void MdtConfiguration::setLoggingDurationNr(LoggingDurationNrMdt const& value) {
  m_LoggingDurationNr      = value;
  m_LoggingDurationNrIsSet = true;
}
bool MdtConfiguration::loggingDurationNrIsSet() const {
  return m_LoggingDurationNrIsSet;
}
void MdtConfiguration::unsetLoggingDurationNr() {
  m_LoggingDurationNrIsSet = false;
}
PositioningMethodMdt MdtConfiguration::getPositioningMethod() const {
  return m_PositioningMethod;
}
void MdtConfiguration::setPositioningMethod(PositioningMethodMdt const& value) {
  m_PositioningMethod      = value;
  m_PositioningMethodIsSet = true;
}
bool MdtConfiguration::positioningMethodIsSet() const {
  return m_PositioningMethodIsSet;
}
void MdtConfiguration::unsetPositioningMethod() {
  m_PositioningMethodIsSet = false;
}
CollectionPeriodRmmLteMdt MdtConfiguration::getCollectionPeriodRmmLte() const {
  return m_CollectionPeriodRmmLte;
}
void MdtConfiguration::setCollectionPeriodRmmLte(
    CollectionPeriodRmmLteMdt const& value) {
  m_CollectionPeriodRmmLte      = value;
  m_CollectionPeriodRmmLteIsSet = true;
}
bool MdtConfiguration::collectionPeriodRmmLteIsSet() const {
  return m_CollectionPeriodRmmLteIsSet;
}
void MdtConfiguration::unsetCollectionPeriodRmmLte() {
  m_CollectionPeriodRmmLteIsSet = false;
}
CollectionPeriodRmmNrMdt MdtConfiguration::getCollectionPeriodRmmNr() const {
  return m_CollectionPeriodRmmNr;
}
void MdtConfiguration::setCollectionPeriodRmmNr(
    CollectionPeriodRmmNrMdt const& value) {
  m_CollectionPeriodRmmNr      = value;
  m_CollectionPeriodRmmNrIsSet = true;
}
bool MdtConfiguration::collectionPeriodRmmNrIsSet() const {
  return m_CollectionPeriodRmmNrIsSet;
}
void MdtConfiguration::unsetCollectionPeriodRmmNr() {
  m_CollectionPeriodRmmNrIsSet = false;
}
MeasurementPeriodLteMdt MdtConfiguration::getMeasurementPeriodLte() const {
  return m_MeasurementPeriodLte;
}
void MdtConfiguration::setMeasurementPeriodLte(
    MeasurementPeriodLteMdt const& value) {
  m_MeasurementPeriodLte      = value;
  m_MeasurementPeriodLteIsSet = true;
}
bool MdtConfiguration::measurementPeriodLteIsSet() const {
  return m_MeasurementPeriodLteIsSet;
}
void MdtConfiguration::unsetMeasurementPeriodLte() {
  m_MeasurementPeriodLteIsSet = false;
}
std::vector<PlmnId>& MdtConfiguration::getMdtAllowedPlmnIdList() {
  return m_MdtAllowedPlmnIdList;
}
void MdtConfiguration::setMdtAllowedPlmnIdList(
    std::vector<PlmnId> const& value) {
  m_MdtAllowedPlmnIdList      = value;
  m_MdtAllowedPlmnIdListIsSet = true;
}
bool MdtConfiguration::mdtAllowedPlmnIdListIsSet() const {
  return m_MdtAllowedPlmnIdListIsSet;
}
void MdtConfiguration::unsetMdtAllowedPlmnIdList() {
  m_MdtAllowedPlmnIdListIsSet = false;
}
std::vector<MbsfnArea>& MdtConfiguration::getMbsfnAreaList() {
  return m_MbsfnAreaList;
}
void MdtConfiguration::setMbsfnAreaList(std::vector<MbsfnArea> const& value) {
  m_MbsfnAreaList      = value;
  m_MbsfnAreaListIsSet = true;
}
bool MdtConfiguration::mbsfnAreaListIsSet() const {
  return m_MbsfnAreaListIsSet;
}
void MdtConfiguration::unsetMbsfnAreaList() {
  m_MbsfnAreaListIsSet = false;
}
std::vector<InterFreqTargetInfo>& MdtConfiguration::getInterFreqTargetList() {
  return m_InterFreqTargetList;
}
void MdtConfiguration::setInterFreqTargetList(
    std::vector<InterFreqTargetInfo> const& value) {
  m_InterFreqTargetList      = value;
  m_InterFreqTargetListIsSet = true;
}
bool MdtConfiguration::interFreqTargetListIsSet() const {
  return m_InterFreqTargetListIsSet;
}
void MdtConfiguration::unsetInterFreqTargetList() {
  m_InterFreqTargetListIsSet = false;
}

}  // namespace oai::udr::model
