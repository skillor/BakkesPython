#include "pch.h"
#include <bakkesmod/wrappers/Engine/UnrealStringWrapper.h>
#include <bakkesmod/wrappers/GameObject/PerformanceStats/InputBufferGraphWrapper.h>
#include <bakkesmod/wrappers/GameObject/PerformanceStats/NetStatGraphWrapper.h>
#include <bakkesmod/wrappers/GameObject/PerformanceStats/PerfStatGraphWrapper.h>
#include <bakkesmod/wrappers/GameObject/PerformanceStats/SampleHistoryWrapper.h>
#include <bakkesmod/wrappers/GameObject/PerformanceStats/SampleRecordSettingsWrapper.h>
#include <bakkesmod/wrappers/GameObject/PerformanceStats/StatGraphSystemWrapper.h>
#include <bakkesmod/wrappers/StructArrayWrapper.h>
#include <bakkesmod/wrappers/arraywrapper.h>
#include <iterator>
#include <memory>
#include <sstream> // __str__
#include <string>


void bind_bakkesmod_wrappers_GameObject_PerformanceStats_PerfStatGraphWrapper(py::module &M)
{
	{ // PerfStatGraphWrapper file:bakkesmod/wrappers/GameObject/PerformanceStats/PerfStatGraphWrapper.h line:8
		pybind11::class_<PerfStatGraphWrapper, std::shared_ptr<PerfStatGraphWrapper>, StatGraphWrapper> cl(M, "PerfStatGraphWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](PerfStatGraphWrapper const &o){ return new PerfStatGraphWrapper(o); } ) );
		cl.def("assign", (class PerfStatGraphWrapper & (PerfStatGraphWrapper::*)(class PerfStatGraphWrapper)) &PerfStatGraphWrapper::operator=, "C++: PerfStatGraphWrapper::operator=(class PerfStatGraphWrapper) --> class PerfStatGraphWrapper &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("GetFPS", (class SampleHistoryWrapper (PerfStatGraphWrapper::*)()) &PerfStatGraphWrapper::GetFPS, "C++: PerfStatGraphWrapper::GetFPS() --> class SampleHistoryWrapper");
		cl.def("SetFPS", (void (PerfStatGraphWrapper::*)(class SampleHistoryWrapper)) &PerfStatGraphWrapper::SetFPS, "C++: PerfStatGraphWrapper::SetFPS(class SampleHistoryWrapper) --> void", pybind11::arg("newFPS"));
		cl.def("GetFrameTime", (class SampleHistoryWrapper (PerfStatGraphWrapper::*)()) &PerfStatGraphWrapper::GetFrameTime, "C++: PerfStatGraphWrapper::GetFrameTime() --> class SampleHistoryWrapper");
		cl.def("SetFrameTime", (void (PerfStatGraphWrapper::*)(class SampleHistoryWrapper)) &PerfStatGraphWrapper::SetFrameTime, "C++: PerfStatGraphWrapper::SetFrameTime(class SampleHistoryWrapper) --> void", pybind11::arg("newFrameTime"));
		cl.def("GetGameThreadTime", (class SampleHistoryWrapper (PerfStatGraphWrapper::*)()) &PerfStatGraphWrapper::GetGameThreadTime, "C++: PerfStatGraphWrapper::GetGameThreadTime() --> class SampleHistoryWrapper");
		cl.def("SetGameThreadTime", (void (PerfStatGraphWrapper::*)(class SampleHistoryWrapper)) &PerfStatGraphWrapper::SetGameThreadTime, "C++: PerfStatGraphWrapper::SetGameThreadTime(class SampleHistoryWrapper) --> void", pybind11::arg("newGameThreadTime"));
		cl.def("GetRenderThreadTime", (class SampleHistoryWrapper (PerfStatGraphWrapper::*)()) &PerfStatGraphWrapper::GetRenderThreadTime, "C++: PerfStatGraphWrapper::GetRenderThreadTime() --> class SampleHistoryWrapper");
		cl.def("SetRenderThreadTime", (void (PerfStatGraphWrapper::*)(class SampleHistoryWrapper)) &PerfStatGraphWrapper::SetRenderThreadTime, "C++: PerfStatGraphWrapper::SetRenderThreadTime(class SampleHistoryWrapper) --> void", pybind11::arg("newRenderThreadTime"));
		cl.def("GetGPUFrameTime", (class SampleHistoryWrapper (PerfStatGraphWrapper::*)()) &PerfStatGraphWrapper::GetGPUFrameTime, "C++: PerfStatGraphWrapper::GetGPUFrameTime() --> class SampleHistoryWrapper");
		cl.def("SetGPUFrameTime", (void (PerfStatGraphWrapper::*)(class SampleHistoryWrapper)) &PerfStatGraphWrapper::SetGPUFrameTime, "C++: PerfStatGraphWrapper::SetGPUFrameTime(class SampleHistoryWrapper) --> void", pybind11::arg("newGPUFrameTime"));
		cl.def("GetFrameTimeHistories", (class ArrayWrapper<class SampleHistoryWrapper> (PerfStatGraphWrapper::*)()) &PerfStatGraphWrapper::GetFrameTimeHistories, "C++: PerfStatGraphWrapper::GetFrameTimeHistories() --> class ArrayWrapper<class SampleHistoryWrapper>");
		cl.def("GetMaxFPS", (float (PerfStatGraphWrapper::*)()) &PerfStatGraphWrapper::GetMaxFPS, "C++: PerfStatGraphWrapper::GetMaxFPS() --> float");
		cl.def("SetMaxFPS", (void (PerfStatGraphWrapper::*)(float)) &PerfStatGraphWrapper::SetMaxFPS, "C++: PerfStatGraphWrapper::SetMaxFPS(float) --> void", pybind11::arg("newMaxFPS"));
		cl.def("GetTargetFPS", (float (PerfStatGraphWrapper::*)()) &PerfStatGraphWrapper::GetTargetFPS, "C++: PerfStatGraphWrapper::GetTargetFPS() --> float");
		cl.def("SetTargetFPS", (void (PerfStatGraphWrapper::*)(float)) &PerfStatGraphWrapper::SetTargetFPS, "C++: PerfStatGraphWrapper::SetTargetFPS(float) --> void", pybind11::arg("newTargetFPS"));
		cl.def("eventUpdateGraphRanges", (void (PerfStatGraphWrapper::*)()) &PerfStatGraphWrapper::eventUpdateGraphRanges, "C++: PerfStatGraphWrapper::eventUpdateGraphRanges() --> void");
		cl.def("CreateFrameTimeHistory", (class SampleHistoryWrapper (PerfStatGraphWrapper::*)(std::string)) &PerfStatGraphWrapper::CreateFrameTimeHistory, "C++: PerfStatGraphWrapper::CreateFrameTimeHistory(std::string) --> class SampleHistoryWrapper", pybind11::arg("Title"));
		cl.def("CreateFpsHistory", (class SampleHistoryWrapper (PerfStatGraphWrapper::*)(std::string)) &PerfStatGraphWrapper::CreateFpsHistory, "C++: PerfStatGraphWrapper::CreateFpsHistory(std::string) --> class SampleHistoryWrapper", pybind11::arg("Title"));
		cl.def("eventConstruct", (void (PerfStatGraphWrapper::*)()) &PerfStatGraphWrapper::eventConstruct, "C++: PerfStatGraphWrapper::eventConstruct() --> void");
	}
	{ // SampleHistoryWrapper file:bakkesmod/wrappers/GameObject/PerformanceStats/SampleHistoryWrapper.h line:10
		pybind11::class_<SampleHistoryWrapper, std::shared_ptr<SampleHistoryWrapper>, ObjectWrapper> cl(M, "SampleHistoryWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](SampleHistoryWrapper const &o){ return new SampleHistoryWrapper(o); } ) );
		cl.def("assign", (class SampleHistoryWrapper & (SampleHistoryWrapper::*)(class SampleHistoryWrapper)) &SampleHistoryWrapper::operator=, "C++: SampleHistoryWrapper::operator=(class SampleHistoryWrapper) --> class SampleHistoryWrapper &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("GetRecordSettings", (class SampleRecordSettingsWrapper (SampleHistoryWrapper::*)()) &SampleHistoryWrapper::GetRecordSettings, "C++: SampleHistoryWrapper::GetRecordSettings() --> class SampleRecordSettingsWrapper");
		cl.def("SetRecordSettings", (void (SampleHistoryWrapper::*)(class SampleRecordSettingsWrapper)) &SampleHistoryWrapper::SetRecordSettings, "C++: SampleHistoryWrapper::SetRecordSettings(class SampleRecordSettingsWrapper) --> void", pybind11::arg("newRecordSettings"));
		cl.def("GetTitle", (class UnrealStringWrapper (SampleHistoryWrapper::*)()) &SampleHistoryWrapper::GetTitle, "C++: SampleHistoryWrapper::GetTitle() --> class UnrealStringWrapper");
		cl.def("GetYMin", (float (SampleHistoryWrapper::*)()) &SampleHistoryWrapper::GetYMin, "C++: SampleHistoryWrapper::GetYMin() --> float");
		cl.def("SetYMin", (void (SampleHistoryWrapper::*)(float)) &SampleHistoryWrapper::SetYMin, "C++: SampleHistoryWrapper::SetYMin(float) --> void", pybind11::arg("newYMin"));
		cl.def("GetYMax", (float (SampleHistoryWrapper::*)()) &SampleHistoryWrapper::GetYMax, "C++: SampleHistoryWrapper::GetYMax() --> float");
		cl.def("SetYMax", (void (SampleHistoryWrapper::*)(float)) &SampleHistoryWrapper::SetYMax, "C++: SampleHistoryWrapper::SetYMax(float) --> void", pybind11::arg("newYMax"));
		cl.def("GetGoodValue", (float (SampleHistoryWrapper::*)()) &SampleHistoryWrapper::GetGoodValue, "C++: SampleHistoryWrapper::GetGoodValue() --> float");
		cl.def("SetGoodValue", (void (SampleHistoryWrapper::*)(float)) &SampleHistoryWrapper::SetGoodValue, "C++: SampleHistoryWrapper::SetGoodValue(float) --> void", pybind11::arg("newGoodValue"));
		cl.def("GetBadValue", (float (SampleHistoryWrapper::*)()) &SampleHistoryWrapper::GetBadValue, "C++: SampleHistoryWrapper::GetBadValue() --> float");
		cl.def("SetBadValue", (void (SampleHistoryWrapper::*)(float)) &SampleHistoryWrapper::SetBadValue, "C++: SampleHistoryWrapper::SetBadValue(float) --> void", pybind11::arg("newBadValue"));
		cl.def("GetBaseValue", (float (SampleHistoryWrapper::*)()) &SampleHistoryWrapper::GetBaseValue, "C++: SampleHistoryWrapper::GetBaseValue() --> float");
		cl.def("SetBaseValue", (void (SampleHistoryWrapper::*)(float)) &SampleHistoryWrapper::SetBaseValue, "C++: SampleHistoryWrapper::SetBaseValue(float) --> void", pybind11::arg("newBaseValue"));
		cl.def("GetSamples", (class StructArrayWrapper<struct RecordedSample> (SampleHistoryWrapper::*)()) &SampleHistoryWrapper::GetSamples, "C++: SampleHistoryWrapper::GetSamples() --> class StructArrayWrapper<struct RecordedSample>");
		cl.def("GetSampleIndex", (int (SampleHistoryWrapper::*)()) &SampleHistoryWrapper::GetSampleIndex, "C++: SampleHistoryWrapper::GetSampleIndex() --> int");
		cl.def("SetSampleIndex", (void (SampleHistoryWrapper::*)(int)) &SampleHistoryWrapper::SetSampleIndex, "C++: SampleHistoryWrapper::SetSampleIndex(int) --> void", pybind11::arg("newSampleIndex"));
		cl.def("GetAccumTime", (float (SampleHistoryWrapper::*)()) &SampleHistoryWrapper::GetAccumTime, "C++: SampleHistoryWrapper::GetAccumTime() --> float");
		cl.def("SetAccumTime", (void (SampleHistoryWrapper::*)(float)) &SampleHistoryWrapper::SetAccumTime, "C++: SampleHistoryWrapper::SetAccumTime(float) --> void", pybind11::arg("newAccumTime"));
		cl.def("GetPendingSample", (struct RecordedSample (SampleHistoryWrapper::*)()) &SampleHistoryWrapper::GetPendingSample, "C++: SampleHistoryWrapper::GetPendingSample() --> struct RecordedSample");
		cl.def("SetPendingSample", (void (SampleHistoryWrapper::*)(struct RecordedSample)) &SampleHistoryWrapper::SetPendingSample, "C++: SampleHistoryWrapper::SetPendingSample(struct RecordedSample) --> void", pybind11::arg("newPendingSample"));
		cl.def("GetbHasPendingSample", (unsigned long (SampleHistoryWrapper::*)()) &SampleHistoryWrapper::GetbHasPendingSample, "C++: SampleHistoryWrapper::GetbHasPendingSample() --> unsigned long");
		cl.def("SetbHasPendingSample", (void (SampleHistoryWrapper::*)(unsigned long)) &SampleHistoryWrapper::SetbHasPendingSample, "C++: SampleHistoryWrapper::SetbHasPendingSample(unsigned long) --> void", pybind11::arg("newbHasPendingSample"));
		cl.def("Tick", (void (SampleHistoryWrapper::*)(float)) &SampleHistoryWrapper::Tick, "C++: SampleHistoryWrapper::Tick(float) --> void", pybind11::arg("DeltaTime"));
		cl.def("AddSample", (void (SampleHistoryWrapper::*)(float)) &SampleHistoryWrapper::AddSample, "C++: SampleHistoryWrapper::AddSample(float) --> void", pybind11::arg("NewValue"));
		cl.def("GetSummaryValue", (float (SampleHistoryWrapper::*)(unsigned char, float, unsigned long)) &SampleHistoryWrapper::GetSummaryValue, "C++: SampleHistoryWrapper::GetSummaryValue(unsigned char, float, unsigned long) --> float", pybind11::arg("Type"), pybind11::arg("MaxSampleAge"), pybind11::arg("bAbsoluteValue"));
		cl.def("SetBaseValue2", (class SampleHistoryWrapper (SampleHistoryWrapper::*)(float)) &SampleHistoryWrapper::SetBaseValue2, "C++: SampleHistoryWrapper::SetBaseValue2(float) --> class SampleHistoryWrapper", pybind11::arg("InBaseValue"));
		cl.def("SetGoodBadValues", (class SampleHistoryWrapper (SampleHistoryWrapper::*)(float, float)) &SampleHistoryWrapper::SetGoodBadValues, "C++: SampleHistoryWrapper::SetGoodBadValues(float, float) --> class SampleHistoryWrapper", pybind11::arg("InGoodValue"), pybind11::arg("InBadValue"));
		cl.def("SetGraphMaxMin", (class SampleHistoryWrapper (SampleHistoryWrapper::*)(float, float)) &SampleHistoryWrapper::SetGraphMaxMin, "C++: SampleHistoryWrapper::SetGraphMaxMin(float, float) --> class SampleHistoryWrapper", pybind11::arg("MaxValue"), pybind11::arg("MinValue"));
		cl.def("SetTitle", (class SampleHistoryWrapper (SampleHistoryWrapper::*)(std::string)) &SampleHistoryWrapper::SetTitle, "C++: SampleHistoryWrapper::SetTitle(std::string) --> class SampleHistoryWrapper", pybind11::arg("InTitle"));
	}
	{ // SampleRecordSettingsWrapper file:bakkesmod/wrappers/GameObject/PerformanceStats/SampleRecordSettingsWrapper.h line:7
		pybind11::class_<SampleRecordSettingsWrapper, std::shared_ptr<SampleRecordSettingsWrapper>, ObjectWrapper> cl(M, "SampleRecordSettingsWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](SampleRecordSettingsWrapper const &o){ return new SampleRecordSettingsWrapper(o); } ) );
		cl.def("assign", (class SampleRecordSettingsWrapper & (SampleRecordSettingsWrapper::*)(class SampleRecordSettingsWrapper)) &SampleRecordSettingsWrapper::operator=, "C++: SampleRecordSettingsWrapper::operator=(class SampleRecordSettingsWrapper) --> class SampleRecordSettingsWrapper &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("GetMaxSampleAge", (float (SampleRecordSettingsWrapper::*)()) &SampleRecordSettingsWrapper::GetMaxSampleAge, "C++: SampleRecordSettingsWrapper::GetMaxSampleAge() --> float");
		cl.def("SetMaxSampleAge", (void (SampleRecordSettingsWrapper::*)(float)) &SampleRecordSettingsWrapper::SetMaxSampleAge, "C++: SampleRecordSettingsWrapper::SetMaxSampleAge(float) --> void", pybind11::arg("newMaxSampleAge"));
		cl.def("GetRecordRate", (float (SampleRecordSettingsWrapper::*)()) &SampleRecordSettingsWrapper::GetRecordRate, "C++: SampleRecordSettingsWrapper::GetRecordRate() --> float");
		cl.def("SetRecordRate", (void (SampleRecordSettingsWrapper::*)(float)) &SampleRecordSettingsWrapper::SetRecordRate, "C++: SampleRecordSettingsWrapper::SetRecordRate(float) --> void", pybind11::arg("newRecordRate"));
	}
	{ // StatGraphSystemWrapper file:bakkesmod/wrappers/GameObject/PerformanceStats/StatGraphSystemWrapper.h line:11
		pybind11::class_<StatGraphSystemWrapper, std::shared_ptr<StatGraphSystemWrapper>, ObjectWrapper> cl(M, "StatGraphSystemWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](StatGraphSystemWrapper const &o){ return new StatGraphSystemWrapper(o); } ) );
		cl.def("assign", (class StatGraphSystemWrapper & (StatGraphSystemWrapper::*)(class StatGraphSystemWrapper)) &StatGraphSystemWrapper::operator=, "C++: StatGraphSystemWrapper::operator=(class StatGraphSystemWrapper) --> class StatGraphSystemWrapper &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("GetGraphSampleTime", (float (StatGraphSystemWrapper::*)()) &StatGraphSystemWrapper::GetGraphSampleTime, "C++: StatGraphSystemWrapper::GetGraphSampleTime() --> float");
		cl.def("SetGraphSampleTime", (void (StatGraphSystemWrapper::*)(float)) &StatGraphSystemWrapper::SetGraphSampleTime, "C++: StatGraphSystemWrapper::SetGraphSampleTime(float) --> void", pybind11::arg("newGraphSampleTime"));
		cl.def("GetGraphLevel", (unsigned char (StatGraphSystemWrapper::*)()) &StatGraphSystemWrapper::GetGraphLevel, "C++: StatGraphSystemWrapper::GetGraphLevel() --> unsigned char");
		cl.def("SetGraphLevel", (void (StatGraphSystemWrapper::*)(unsigned char)) &StatGraphSystemWrapper::SetGraphLevel, "C++: StatGraphSystemWrapper::SetGraphLevel(unsigned char) --> void", pybind11::arg("newGraphLevel"));
		cl.def("GetPerfStatGraph", (class PerfStatGraphWrapper (StatGraphSystemWrapper::*)()) &StatGraphSystemWrapper::GetPerfStatGraph, "C++: StatGraphSystemWrapper::GetPerfStatGraph() --> class PerfStatGraphWrapper");
		cl.def("SetPerfStatGraph", (void (StatGraphSystemWrapper::*)(class PerfStatGraphWrapper)) &StatGraphSystemWrapper::SetPerfStatGraph, "C++: StatGraphSystemWrapper::SetPerfStatGraph(class PerfStatGraphWrapper) --> void", pybind11::arg("newPerfStatGraph"));
		cl.def("GetNetStatGraph", (class NetStatGraphWrapper (StatGraphSystemWrapper::*)()) &StatGraphSystemWrapper::GetNetStatGraph, "C++: StatGraphSystemWrapper::GetNetStatGraph() --> class NetStatGraphWrapper");
		cl.def("SetNetStatGraph", (void (StatGraphSystemWrapper::*)(class NetStatGraphWrapper)) &StatGraphSystemWrapper::SetNetStatGraph, "C++: StatGraphSystemWrapper::SetNetStatGraph(class NetStatGraphWrapper) --> void", pybind11::arg("newNetStatGraph"));
		cl.def("GetInputBufferGraph", (class InputBufferGraphWrapper (StatGraphSystemWrapper::*)()) &StatGraphSystemWrapper::GetInputBufferGraph, "C++: StatGraphSystemWrapper::GetInputBufferGraph() --> class InputBufferGraphWrapper");
		cl.def("SetInputBufferGraph", (void (StatGraphSystemWrapper::*)(class InputBufferGraphWrapper)) &StatGraphSystemWrapper::SetInputBufferGraph, "C++: StatGraphSystemWrapper::SetInputBufferGraph(class InputBufferGraphWrapper) --> void", pybind11::arg("newInputBufferGraph"));
		cl.def("GetStatGraphs", (class ArrayWrapper<class StatGraphWrapper> (StatGraphSystemWrapper::*)()) &StatGraphSystemWrapper::GetStatGraphs, "C++: StatGraphSystemWrapper::GetStatGraphs() --> class ArrayWrapper<class StatGraphWrapper>");
		cl.def("GetVisibleStatGraphs", (class ArrayWrapper<class StatGraphWrapper> (StatGraphSystemWrapper::*)()) &StatGraphSystemWrapper::GetVisibleStatGraphs, "C++: StatGraphSystemWrapper::GetVisibleStatGraphs() --> class ArrayWrapper<class StatGraphWrapper>");
		cl.def("GetPreallocGraphLines", (int (StatGraphSystemWrapper::*)()) &StatGraphSystemWrapper::GetPreallocGraphLines, "C++: StatGraphSystemWrapper::GetPreallocGraphLines() --> int");
		cl.def("SetPreallocGraphLines", (void (StatGraphSystemWrapper::*)(int)) &StatGraphSystemWrapper::SetPreallocGraphLines, "C++: StatGraphSystemWrapper::SetPreallocGraphLines(int) --> void", pybind11::arg("newPreallocGraphLines"));
		cl.def("__StatGraphSystem_TA__SetGraphLevel", (void (StatGraphSystemWrapper::*)(class StatGraphWrapper)) &StatGraphSystemWrapper::__StatGraphSystem_TA__SetGraphLevel, "C++: StatGraphSystemWrapper::__StatGraphSystem_TA__SetGraphLevel(class StatGraphWrapper) --> void", pybind11::arg("G"));
		cl.def("PacketReceived", (void (StatGraphSystemWrapper::*)(float)) &StatGraphSystemWrapper::PacketReceived, "C++: StatGraphSystemWrapper::PacketReceived(float) --> void", pybind11::arg("Latency"));
		cl.def("Graphtime", (void (StatGraphSystemWrapper::*)(float)) &StatGraphSystemWrapper::Graphtime, "C++: StatGraphSystemWrapper::Graphtime(float) --> void", pybind11::arg("Seconds"));
		cl.def("StatGraphNext", (void (StatGraphSystemWrapper::*)()) &StatGraphSystemWrapper::StatGraphNext, "C++: StatGraphSystemWrapper::StatGraphNext() --> void");
		cl.def("GetGraphSampleTime2", (float (StatGraphSystemWrapper::*)(unsigned char)) &StatGraphSystemWrapper::GetGraphSampleTime2, "C++: StatGraphSystemWrapper::GetGraphSampleTime2(unsigned char) --> float", pybind11::arg("Level"));
		cl.def("SetGraphLevel2", (void (StatGraphSystemWrapper::*)(unsigned char)) &StatGraphSystemWrapper::SetGraphLevel2, "C++: StatGraphSystemWrapper::SetGraphLevel2(unsigned char) --> void", pybind11::arg("Level"));
	}
}
