#include "pch.h"
#include <bakkesmod/wrappers/Engine/EngineTAWrapper.h>
#include <bakkesmod/wrappers/Engine/UnrealStringWrapper.h>
#include <bakkesmod/wrappers/GameEvent/GameSettingPlaylistWrapper.h>
#include <bakkesmod/wrappers/GameObject/BaseCameraWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/AirControlComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/BoostWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/FlipCarComponentWrapper.h>
#include <bakkesmod/wrappers/GameObject/CarComponent/PrimitiveComponentWrapper.h>
#include <bakkesmod/wrappers/StructArrayWrapper.h>
#include <bakkesmod/wrappers/arraywrapper.h>
#include <iterator>
#include <memory>
#include <sstream> // __str__
#include <string>


void bind_bakkesmod_wrappers_Engine_UnrealStringWrapper(py::module &M)
{
	{ // UnrealStringWrapper file:bakkesmod/wrappers/Engine/UnrealStringWrapper.h line:10
		pybind11::class_<UnrealStringWrapper, std::shared_ptr<UnrealStringWrapper>, ArrayWrapper<wchar_t>> cl(M, "UnrealStringWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](UnrealStringWrapper const &o){ return new UnrealStringWrapper(o); } ) );
		cl.def("assign", (class UnrealStringWrapper & (UnrealStringWrapper::*)(class UnrealStringWrapper)) &UnrealStringWrapper::operator=, "C++: UnrealStringWrapper::operator=(class UnrealStringWrapper) --> class UnrealStringWrapper &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("ToString", (std::string (UnrealStringWrapper::*)()) &UnrealStringWrapper::ToString, "C++: UnrealStringWrapper::ToString() --> std::string");
		cl.def("IsNull", (bool (UnrealStringWrapper::*)()) &UnrealStringWrapper::IsNull, "C++: UnrealStringWrapper::IsNull() --> bool");
	}
	{ // GameEventWrapper file: line:14
		pybind11::class_<GameEventWrapper, std::shared_ptr<GameEventWrapper>, ActorWrapper> cl(M, "GameEventWrapper");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init<unsigned long>(), pybind11::arg("mem") );

		cl.def( pybind11::init( [](GameEventWrapper const &o){ return new GameEventWrapper(o); } ) );
		cl.def("assign", (class GameEventWrapper & (GameEventWrapper::*)(class GameEventWrapper)) &GameEventWrapper::operator=, "C++: GameEventWrapper::operator=(class GameEventWrapper) --> class GameEventWrapper &", pybind11::return_value_policy::automatic, pybind11::arg("rhs"));
		cl.def("GetReplicatedStateIndex", (unsigned char (GameEventWrapper::*)()) &GameEventWrapper::GetReplicatedStateIndex, "C++: GameEventWrapper::GetReplicatedStateIndex() --> unsigned char");
		cl.def("SetReplicatedStateIndex", (void (GameEventWrapper::*)(unsigned char)) &GameEventWrapper::SetReplicatedStateIndex, "C++: GameEventWrapper::SetReplicatedStateIndex(unsigned char) --> void", pybind11::arg("newReplicatedStateIndex"));
		cl.def("GetCarArchetype", (class CarWrapper (GameEventWrapper::*)()) &GameEventWrapper::GetCarArchetype, "C++: GameEventWrapper::GetCarArchetype() --> class CarWrapper");
		cl.def("SetCarArchetype", (void (GameEventWrapper::*)(class CarWrapper)) &GameEventWrapper::SetCarArchetype, "C++: GameEventWrapper::SetCarArchetype(class CarWrapper) --> void", pybind11::arg("newCarArchetype"));
		cl.def("GetCountdownTime", (int (GameEventWrapper::*)()) &GameEventWrapper::GetCountdownTime, "C++: GameEventWrapper::GetCountdownTime() --> int");
		cl.def("SetCountdownTime", (void (GameEventWrapper::*)(int)) &GameEventWrapper::SetCountdownTime, "C++: GameEventWrapper::SetCountdownTime(int) --> void", pybind11::arg("newCountdownTime"));
		cl.def("GetFinishTime", (int (GameEventWrapper::*)()) &GameEventWrapper::GetFinishTime, "C++: GameEventWrapper::GetFinishTime() --> int");
		cl.def("SetFinishTime", (void (GameEventWrapper::*)(int)) &GameEventWrapper::SetFinishTime, "C++: GameEventWrapper::SetFinishTime(int) --> void", pybind11::arg("newFinishTime"));
		cl.def("GetbMultiplayer", (unsigned long (GameEventWrapper::*)()) &GameEventWrapper::GetbMultiplayer, "C++: GameEventWrapper::GetbMultiplayer() --> unsigned long");
		cl.def("SetbMultiplayer", (void (GameEventWrapper::*)(unsigned long)) &GameEventWrapper::SetbMultiplayer, "C++: GameEventWrapper::SetbMultiplayer(unsigned long) --> void", pybind11::arg("newbMultiplayer"));
		cl.def("GetbCountdownMessagesDisabled", (unsigned long (GameEventWrapper::*)()) &GameEventWrapper::GetbCountdownMessagesDisabled, "C++: GameEventWrapper::GetbCountdownMessagesDisabled() --> unsigned long");
		cl.def("SetbCountdownMessagesDisabled", (void (GameEventWrapper::*)(unsigned long)) &GameEventWrapper::SetbCountdownMessagesDisabled, "C++: GameEventWrapper::SetbCountdownMessagesDisabled(unsigned long) --> void", pybind11::arg("newbCountdownMessagesDisabled"));
		cl.def("GetbFillWithAI", (unsigned long (GameEventWrapper::*)()) &GameEventWrapper::GetbFillWithAI, "C++: GameEventWrapper::GetbFillWithAI() --> unsigned long");
		cl.def("SetbFillWithAI", (void (GameEventWrapper::*)(unsigned long)) &GameEventWrapper::SetbFillWithAI, "C++: GameEventWrapper::SetbFillWithAI(unsigned long) --> void", pybind11::arg("newbFillWithAI"));
		cl.def("GetbAllowQueueSaveReplay", (unsigned long (GameEventWrapper::*)()) &GameEventWrapper::GetbAllowQueueSaveReplay, "C++: GameEventWrapper::GetbAllowQueueSaveReplay() --> unsigned long");
		cl.def("SetbAllowQueueSaveReplay", (void (GameEventWrapper::*)(unsigned long)) &GameEventWrapper::SetbAllowQueueSaveReplay, "C++: GameEventWrapper::SetbAllowQueueSaveReplay(unsigned long) --> void", pybind11::arg("newbAllowQueueSaveReplay"));
		cl.def("GetbAllowReadyUp", (unsigned long (GameEventWrapper::*)()) &GameEventWrapper::GetbAllowReadyUp, "C++: GameEventWrapper::GetbAllowReadyUp() --> unsigned long");
		cl.def("SetbAllowReadyUp", (void (GameEventWrapper::*)(unsigned long)) &GameEventWrapper::SetbAllowReadyUp, "C++: GameEventWrapper::SetbAllowReadyUp(unsigned long) --> void", pybind11::arg("newbAllowReadyUp"));
		cl.def("GetbRestartingMatch", (unsigned long (GameEventWrapper::*)()) &GameEventWrapper::GetbRestartingMatch, "C++: GameEventWrapper::GetbRestartingMatch() --> unsigned long");
		cl.def("SetbRestartingMatch", (void (GameEventWrapper::*)(unsigned long)) &GameEventWrapper::SetbRestartingMatch, "C++: GameEventWrapper::SetbRestartingMatch(unsigned long) --> void", pybind11::arg("newbRestartingMatch"));
		cl.def("GetbRandomizedBotLoadouts", (unsigned long (GameEventWrapper::*)()) &GameEventWrapper::GetbRandomizedBotLoadouts, "C++: GameEventWrapper::GetbRandomizedBotLoadouts() --> unsigned long");
		cl.def("SetbRandomizedBotLoadouts", (void (GameEventWrapper::*)(unsigned long)) &GameEventWrapper::SetbRandomizedBotLoadouts, "C++: GameEventWrapper::SetbRandomizedBotLoadouts(unsigned long) --> void", pybind11::arg("newbRandomizedBotLoadouts"));
		cl.def("GetbHasLeaveMatchPenalty", (unsigned long (GameEventWrapper::*)()) &GameEventWrapper::GetbHasLeaveMatchPenalty, "C++: GameEventWrapper::GetbHasLeaveMatchPenalty() --> unsigned long");
		cl.def("SetbHasLeaveMatchPenalty", (void (GameEventWrapper::*)(unsigned long)) &GameEventWrapper::SetbHasLeaveMatchPenalty, "C++: GameEventWrapper::SetbHasLeaveMatchPenalty(unsigned long) --> void", pybind11::arg("newbHasLeaveMatchPenalty"));
		cl.def("GetbCanVoteToForfeit", (unsigned long (GameEventWrapper::*)()) &GameEventWrapper::GetbCanVoteToForfeit, "C++: GameEventWrapper::GetbCanVoteToForfeit() --> unsigned long");
		cl.def("SetbCanVoteToForfeit", (void (GameEventWrapper::*)(unsigned long)) &GameEventWrapper::SetbCanVoteToForfeit, "C++: GameEventWrapper::SetbCanVoteToForfeit(unsigned long) --> void", pybind11::arg("newbCanVoteToForfeit"));
		cl.def("GetbDisableAimAssist", (unsigned long (GameEventWrapper::*)()) &GameEventWrapper::GetbDisableAimAssist, "C++: GameEventWrapper::GetbDisableAimAssist() --> unsigned long");
		cl.def("SetbDisableAimAssist", (void (GameEventWrapper::*)(unsigned long)) &GameEventWrapper::SetbDisableAimAssist, "C++: GameEventWrapper::SetbDisableAimAssist(unsigned long) --> void", pybind11::arg("newbDisableAimAssist"));
		cl.def("GetbAwardAchievements", (unsigned long (GameEventWrapper::*)()) &GameEventWrapper::GetbAwardAchievements, "C++: GameEventWrapper::GetbAwardAchievements() --> unsigned long");
		cl.def("SetbAwardAchievements", (void (GameEventWrapper::*)(unsigned long)) &GameEventWrapper::SetbAwardAchievements, "C++: GameEventWrapper::SetbAwardAchievements(unsigned long) --> void", pybind11::arg("newbAwardAchievements"));
		cl.def("GetMinPlayers", (int (GameEventWrapper::*)()) &GameEventWrapper::GetMinPlayers, "C++: GameEventWrapper::GetMinPlayers() --> int");
		cl.def("SetMinPlayers", (void (GameEventWrapper::*)(int)) &GameEventWrapper::SetMinPlayers, "C++: GameEventWrapper::SetMinPlayers(int) --> void", pybind11::arg("newMinPlayers"));
		cl.def("GetMaxPlayers", (int (GameEventWrapper::*)()) &GameEventWrapper::GetMaxPlayers, "C++: GameEventWrapper::GetMaxPlayers() --> int");
		cl.def("SetMaxPlayers", (void (GameEventWrapper::*)(int)) &GameEventWrapper::SetMaxPlayers, "C++: GameEventWrapper::SetMaxPlayers(int) --> void", pybind11::arg("newMaxPlayers"));
		cl.def("GetSpawnPoints", (class ArrayWrapper<class ActorWrapper> (GameEventWrapper::*)()) &GameEventWrapper::GetSpawnPoints, "C++: GameEventWrapper::GetSpawnPoints() --> class ArrayWrapper<class ActorWrapper>");
		cl.def("GetBotSkill", (float (GameEventWrapper::*)()) &GameEventWrapper::GetBotSkill, "C++: GameEventWrapper::GetBotSkill() --> float");
		cl.def("SetBotSkill", (void (GameEventWrapper::*)(float)) &GameEventWrapper::SetBotSkill, "C++: GameEventWrapper::SetBotSkill(float) --> void", pybind11::arg("newBotSkill"));
		cl.def("GetRespawnTime", (int (GameEventWrapper::*)()) &GameEventWrapper::GetRespawnTime, "C++: GameEventWrapper::GetRespawnTime() --> int");
		cl.def("SetRespawnTime", (void (GameEventWrapper::*)(int)) &GameEventWrapper::SetRespawnTime, "C++: GameEventWrapper::SetRespawnTime(int) --> void", pybind11::arg("newRespawnTime"));
		cl.def("GetMatchTimeDilation", (float (GameEventWrapper::*)()) &GameEventWrapper::GetMatchTimeDilation, "C++: GameEventWrapper::GetMatchTimeDilation() --> float");
		cl.def("SetMatchTimeDilation", (void (GameEventWrapper::*)(float)) &GameEventWrapper::SetMatchTimeDilation, "C++: GameEventWrapper::SetMatchTimeDilation(float) --> void", pybind11::arg("newMatchTimeDilation"));
		cl.def("GetActivator", (class PlayerControllerWrapper (GameEventWrapper::*)()) &GameEventWrapper::GetActivator, "C++: GameEventWrapper::GetActivator() --> class PlayerControllerWrapper");
		cl.def("SetActivator", (void (GameEventWrapper::*)(class PlayerControllerWrapper)) &GameEventWrapper::SetActivator, "C++: GameEventWrapper::SetActivator(class PlayerControllerWrapper) --> void", pybind11::arg("newActivator"));
		cl.def("GetActivatorCar", (class CarWrapper (GameEventWrapper::*)()) &GameEventWrapper::GetActivatorCar, "C++: GameEventWrapper::GetActivatorCar() --> class CarWrapper");
		cl.def("SetActivatorCar", (void (GameEventWrapper::*)(class CarWrapper)) &GameEventWrapper::SetActivatorCar, "C++: GameEventWrapper::SetActivatorCar(class CarWrapper) --> void", pybind11::arg("newActivatorCar"));
		cl.def("GetPRIs", (class ArrayWrapper<class PriWrapper> (GameEventWrapper::*)()) &GameEventWrapper::GetPRIs, "C++: GameEventWrapper::GetPRIs() --> class ArrayWrapper<class PriWrapper>");
		cl.def("GetCars", (class ArrayWrapper<class CarWrapper> (GameEventWrapper::*)()) &GameEventWrapper::GetCars, "C++: GameEventWrapper::GetCars() --> class ArrayWrapper<class CarWrapper>");
		cl.def("GetLocalPlayers", (class ArrayWrapper<class PlayerControllerWrapper> (GameEventWrapper::*)()) &GameEventWrapper::GetLocalPlayers, "C++: GameEventWrapper::GetLocalPlayers() --> class ArrayWrapper<class PlayerControllerWrapper>");
		cl.def("GetStartPointIndex", (int (GameEventWrapper::*)()) &GameEventWrapper::GetStartPointIndex, "C++: GameEventWrapper::GetStartPointIndex() --> int");
		cl.def("SetStartPointIndex", (void (GameEventWrapper::*)(int)) &GameEventWrapper::SetStartPointIndex, "C++: GameEventWrapper::SetStartPointIndex(int) --> void", pybind11::arg("newStartPointIndex"));
		cl.def("GetGameStateTimeRemaining", (int (GameEventWrapper::*)()) &GameEventWrapper::GetGameStateTimeRemaining, "C++: GameEventWrapper::GetGameStateTimeRemaining() --> int");
		cl.def("SetGameStateTimeRemaining", (void (GameEventWrapper::*)(int)) &GameEventWrapper::SetGameStateTimeRemaining, "C++: GameEventWrapper::SetGameStateTimeRemaining(int) --> void", pybind11::arg("newGameStateTimeRemaining"));
		cl.def("GetReplicatedGameStateTimeRemaining", (int (GameEventWrapper::*)()) &GameEventWrapper::GetReplicatedGameStateTimeRemaining, "C++: GameEventWrapper::GetReplicatedGameStateTimeRemaining() --> int");
		cl.def("SetReplicatedGameStateTimeRemaining", (void (GameEventWrapper::*)(int)) &GameEventWrapper::SetReplicatedGameStateTimeRemaining, "C++: GameEventWrapper::SetReplicatedGameStateTimeRemaining(int) --> void", pybind11::arg("newReplicatedGameStateTimeRemaining"));
		cl.def("GetBotBoostThreshold_vsAI", (float (GameEventWrapper::*)()) &GameEventWrapper::GetBotBoostThreshold_vsAI, "C++: GameEventWrapper::GetBotBoostThreshold_vsAI() --> float");
		cl.def("SetBotBoostThreshold_vsAI", (void (GameEventWrapper::*)(float)) &GameEventWrapper::SetBotBoostThreshold_vsAI, "C++: GameEventWrapper::SetBotBoostThreshold_vsAI(float) --> void", pybind11::arg("newBotBoostThreshold_vsAI"));
		cl.def("GetForfeitInitiatorIDs", (class StructArrayWrapper<struct SteamID> (GameEventWrapper::*)()) &GameEventWrapper::GetForfeitInitiatorIDs, "C++: GameEventWrapper::GetForfeitInitiatorIDs() --> class StructArrayWrapper<struct SteamID>");
		cl.def("GetBannedPlayers", (class StructArrayWrapper<struct SteamID> (GameEventWrapper::*)()) &GameEventWrapper::GetBannedPlayers, "C++: GameEventWrapper::GetBannedPlayers() --> class StructArrayWrapper<struct SteamID>");
		cl.def("GetGameOwner", (class PriWrapper (GameEventWrapper::*)()) &GameEventWrapper::GetGameOwner, "C++: GameEventWrapper::GetGameOwner() --> class PriWrapper");
		cl.def("SetGameOwner", (void (GameEventWrapper::*)(class PriWrapper)) &GameEventWrapper::SetGameOwner, "C++: GameEventWrapper::SetGameOwner(class PriWrapper) --> void", pybind11::arg("newGameOwner"));
		cl.def("GetRichPresenceString", (class UnrealStringWrapper (GameEventWrapper::*)()) &GameEventWrapper::GetRichPresenceString, "C++: GameEventWrapper::GetRichPresenceString() --> class UnrealStringWrapper");
		cl.def("GetReplicatedRoundCountDownNumber", (int (GameEventWrapper::*)()) &GameEventWrapper::GetReplicatedRoundCountDownNumber, "C++: GameEventWrapper::GetReplicatedRoundCountDownNumber() --> int");
		cl.def("SetReplicatedRoundCountDownNumber", (void (GameEventWrapper::*)(int)) &GameEventWrapper::SetReplicatedRoundCountDownNumber, "C++: GameEventWrapper::SetReplicatedRoundCountDownNumber(int) --> void", pybind11::arg("newReplicatedRoundCountDownNumber"));
		cl.def("InitCountDown", (void (GameEventWrapper::*)()) &GameEventWrapper::InitCountDown, "C++: GameEventWrapper::InitCountDown() --> void");
		cl.def("StartCountdownTimer", (void (GameEventWrapper::*)()) &GameEventWrapper::StartCountdownTimer, "C++: GameEventWrapper::StartCountdownTimer() --> void");
		cl.def("AllowReadyUp2", (void (GameEventWrapper::*)()) &GameEventWrapper::AllowReadyUp2, "C++: GameEventWrapper::AllowReadyUp2() --> void");
		cl.def("FindPlayerPRI", (class PriWrapper (GameEventWrapper::*)(struct SteamID &)) &GameEventWrapper::FindPlayerPRI, "C++: GameEventWrapper::FindPlayerPRI(struct SteamID &) --> class PriWrapper", pybind11::arg("UniqueId"));
		cl.def("HandlePlayerRemoved", (void (GameEventWrapper::*)(class GameEventWrapper, class PriWrapper)) &GameEventWrapper::HandlePlayerRemoved, "C++: GameEventWrapper::HandlePlayerRemoved(class GameEventWrapper, class PriWrapper) --> void", pybind11::arg("GameEvent"), pybind11::arg("PRI"));
		cl.def("UpdateGameOwner", (void (GameEventWrapper::*)()) &GameEventWrapper::UpdateGameOwner, "C++: GameEventWrapper::UpdateGameOwner() --> void");
		cl.def("SetGameOwner2", (void (GameEventWrapper::*)(class PriWrapper)) &GameEventWrapper::SetGameOwner2, "C++: GameEventWrapper::SetGameOwner2(class PriWrapper) --> void", pybind11::arg("NewOwner"));
		cl.def("__GameEvent_TA__SetAllowReadyUp", (void (GameEventWrapper::*)(class PriWrapper)) &GameEventWrapper::__GameEvent_TA__SetAllowReadyUp, "C++: GameEventWrapper::__GameEvent_TA__SetAllowReadyUp(class PriWrapper) --> void", pybind11::arg("P"));
		cl.def("__GameEvent_TA__CheckPlayersReady", (bool (GameEventWrapper::*)(class PriWrapper)) &GameEventWrapper::__GameEvent_TA__CheckPlayersReady, "C++: GameEventWrapper::__GameEvent_TA__CheckPlayersReady(class PriWrapper) --> bool", pybind11::arg("P"));
		cl.def("__GameEvent_TA__CheckForBannedPlayers", (struct SteamID (GameEventWrapper::*)(class PriWrapper)) &GameEventWrapper::__GameEvent_TA__CheckForBannedPlayers, "C++: GameEventWrapper::__GameEvent_TA__CheckForBannedPlayers(class PriWrapper) --> struct SteamID", pybind11::arg("PRI"));
		cl.def("__Pylon__ChangeNotifyFunc", (void (GameEventWrapper::*)()) &GameEventWrapper::__Pylon__ChangeNotifyFunc, "C++: GameEventWrapper::__Pylon__ChangeNotifyFunc() --> void");
		cl.def("PlayerResetTraining", (void (GameEventWrapper::*)()) &GameEventWrapper::PlayerResetTraining, "C++: GameEventWrapper::PlayerResetTraining() --> void");
		cl.def("SuppressModalDialogs", (bool (GameEventWrapper::*)()) &GameEventWrapper::SuppressModalDialogs, "C++: GameEventWrapper::SuppressModalDialogs() --> bool");
		cl.def("ShouldShowBallIndicator", (bool (GameEventWrapper::*)()) &GameEventWrapper::ShouldShowBallIndicator, "C++: GameEventWrapper::ShouldShowBallIndicator() --> bool");
		cl.def("CheckInitiatedForfeit", (void (GameEventWrapper::*)(class PriWrapper)) &GameEventWrapper::CheckInitiatedForfeit, "C++: GameEventWrapper::CheckInitiatedForfeit(class PriWrapper) --> void", pybind11::arg("PRI"));
		cl.def("CheckChatBanned", (void (GameEventWrapper::*)(class PlayerControllerWrapper)) &GameEventWrapper::CheckChatBanned, "C++: GameEventWrapper::CheckChatBanned(class PlayerControllerWrapper) --> void", pybind11::arg("PC"));
		cl.def("FindPCForUniqueID", (class PlayerControllerWrapper (GameEventWrapper::*)(struct SteamID &)) &GameEventWrapper::FindPCForUniqueID, "C++: GameEventWrapper::FindPCForUniqueID(struct SteamID &) --> class PlayerControllerWrapper", pybind11::arg("PlayerID"));
		cl.def("AllowSplitScreenPlayer", (bool (GameEventWrapper::*)()) &GameEventWrapper::AllowSplitScreenPlayer, "C++: GameEventWrapper::AllowSplitScreenPlayer() --> bool");
		cl.def("AddPlayerChatMessage", (void (GameEventWrapper::*)(struct SteamID &, unsigned char, class TeamInfoWrapper, std::string)) &GameEventWrapper::AddPlayerChatMessage, "C++: GameEventWrapper::AddPlayerChatMessage(struct SteamID &, unsigned char, class TeamInfoWrapper, std::string) --> void", pybind11::arg("PlayerID"), pybind11::arg("ChatChannel"), pybind11::arg("Team"), pybind11::arg("Message"));
		cl.def("ConditionalStartSpectatorMatch", (void (GameEventWrapper::*)()) &GameEventWrapper::ConditionalStartSpectatorMatch, "C++: GameEventWrapper::ConditionalStartSpectatorMatch() --> void");
		cl.def("IsPlayingTraining", (bool (GameEventWrapper::*)()) &GameEventWrapper::IsPlayingTraining, "C++: GameEventWrapper::IsPlayingTraining() --> bool");
		cl.def("IsPlayingLan", (bool (GameEventWrapper::*)()) &GameEventWrapper::IsPlayingLan, "C++: GameEventWrapper::IsPlayingLan() --> bool");
		cl.def("IsPlayingOffline", (bool (GameEventWrapper::*)()) &GameEventWrapper::IsPlayingOffline, "C++: GameEventWrapper::IsPlayingOffline() --> bool");
		cl.def("IsPlayingPrivate", (bool (GameEventWrapper::*)()) &GameEventWrapper::IsPlayingPrivate, "C++: GameEventWrapper::IsPlayingPrivate() --> bool");
		cl.def("IsPlayingPublic", (bool (GameEventWrapper::*)()) &GameEventWrapper::IsPlayingPublic, "C++: GameEventWrapper::IsPlayingPublic() --> bool");
		cl.def("IsOnlineMultiplayer", (bool (GameEventWrapper::*)()) &GameEventWrapper::IsOnlineMultiplayer, "C++: GameEventWrapper::IsOnlineMultiplayer() --> bool");
		cl.def("CreateMatchType", (void (GameEventWrapper::*)(std::string)) &GameEventWrapper::CreateMatchType, "C++: GameEventWrapper::CreateMatchType(std::string) --> void", pybind11::arg("Options"));
		cl.def("AllPlayersSelectedTeam", (bool (GameEventWrapper::*)()) &GameEventWrapper::AllPlayersSelectedTeam, "C++: GameEventWrapper::AllPlayersSelectedTeam() --> bool");
		cl.def("CanQueSaveReplay", (bool (GameEventWrapper::*)()) &GameEventWrapper::CanQueSaveReplay, "C++: GameEventWrapper::CanQueSaveReplay() --> bool");
		cl.def("ForceMatchStart", (void (GameEventWrapper::*)()) &GameEventWrapper::ForceMatchStart, "C++: GameEventWrapper::ForceMatchStart() --> void");
		cl.def("ConditionalStartMatch", (void (GameEventWrapper::*)()) &GameEventWrapper::ConditionalStartMatch, "C++: GameEventWrapper::ConditionalStartMatch() --> void");
		cl.def("SaveLocalPlayerStats", (void (GameEventWrapper::*)()) &GameEventWrapper::SaveLocalPlayerStats, "C++: GameEventWrapper::SaveLocalPlayerStats() --> void");
		cl.def("CanUseBallCam", (bool (GameEventWrapper::*)()) &GameEventWrapper::CanUseBallCam, "C++: GameEventWrapper::CanUseBallCam() --> bool");
		cl.def("HandleNextGame", (bool (GameEventWrapper::*)()) &GameEventWrapper::HandleNextGame, "C++: GameEventWrapper::HandleNextGame() --> bool");
		cl.def("SetMaxPlayers2", (void (GameEventWrapper::*)(int)) &GameEventWrapper::SetMaxPlayers2, "C++: GameEventWrapper::SetMaxPlayers2(int) --> void", pybind11::arg("InMaxPlayers"));
		cl.def("SetRestartingMatch", (void (GameEventWrapper::*)(unsigned long)) &GameEventWrapper::SetRestartingMatch, "C++: GameEventWrapper::SetRestartingMatch(unsigned long) --> void", pybind11::arg("bRestart"));
		cl.def("ShouldBeFullScreen", (bool (GameEventWrapper::*)()) &GameEventWrapper::ShouldBeFullScreen, "C++: GameEventWrapper::ShouldBeFullScreen() --> bool");
		cl.def("IsFinished", (bool (GameEventWrapper::*)()) &GameEventWrapper::IsFinished, "C++: GameEventWrapper::IsFinished() --> bool");
		cl.def("OnAllPlayersReady", (void (GameEventWrapper::*)()) &GameEventWrapper::OnAllPlayersReady, "C++: GameEventWrapper::OnAllPlayersReady() --> void");
		cl.def("CheckPlayersReady2", (void (GameEventWrapper::*)()) &GameEventWrapper::CheckPlayersReady2, "C++: GameEventWrapper::CheckPlayersReady2() --> void");
		cl.def("SetAllowReadyUp2", (void (GameEventWrapper::*)(unsigned long)) &GameEventWrapper::SetAllowReadyUp2, "C++: GameEventWrapper::SetAllowReadyUp2(unsigned long) --> void", pybind11::arg("bAllow"));
		cl.def("AutoReadyPlayers", (void (GameEventWrapper::*)()) &GameEventWrapper::AutoReadyPlayers, "C++: GameEventWrapper::AutoReadyPlayers() --> void");
		cl.def("ShouldAutoReadyUp", (bool (GameEventWrapper::*)(class PriWrapper)) &GameEventWrapper::ShouldAutoReadyUp, "C++: GameEventWrapper::ShouldAutoReadyUp(class PriWrapper) --> bool", pybind11::arg("PRI"));
		cl.def("SendGoMessage", (void (GameEventWrapper::*)(class PlayerControllerWrapper)) &GameEventWrapper::SendGoMessage, "C++: GameEventWrapper::SendGoMessage(class PlayerControllerWrapper) --> void", pybind11::arg("Player"));
		cl.def("SendCountdownMessage", (void (GameEventWrapper::*)(int, class PlayerControllerWrapper)) &GameEventWrapper::SendCountdownMessage, "C++: GameEventWrapper::SendCountdownMessage(int, class PlayerControllerWrapper) --> void", pybind11::arg("Seconds"), pybind11::arg("Player"));
		cl.def("BroadcastCountdownMessage", (void (GameEventWrapper::*)(int)) &GameEventWrapper::BroadcastCountdownMessage, "C++: GameEventWrapper::BroadcastCountdownMessage(int) --> void", pybind11::arg("Seconds"));
		cl.def("BroadcastGoMessage", (void (GameEventWrapper::*)()) &GameEventWrapper::BroadcastGoMessage, "C++: GameEventWrapper::BroadcastGoMessage() --> void");
		cl.def("AllowShutdown", (bool (GameEventWrapper::*)()) &GameEventWrapper::AllowShutdown, "C++: GameEventWrapper::AllowShutdown() --> bool");
		cl.def("GetRealDeltaTime", (float (GameEventWrapper::*)(float)) &GameEventWrapper::GetRealDeltaTime, "C++: GameEventWrapper::GetRealDeltaTime(float) --> float", pybind11::arg("ElapsedTime"));
		cl.def("SetTimeDilation", (void (GameEventWrapper::*)(float)) &GameEventWrapper::SetTimeDilation, "C++: GameEventWrapper::SetTimeDilation(float) --> void", pybind11::arg("NewTimeDilation"));
		cl.def("ClearRespawnList", (void (GameEventWrapper::*)()) &GameEventWrapper::ClearRespawnList, "C++: GameEventWrapper::ClearRespawnList() --> void");
		cl.def("ReplaceBotsWithAwaitingPlayers", (void (GameEventWrapper::*)()) &GameEventWrapper::ReplaceBotsWithAwaitingPlayers, "C++: GameEventWrapper::ReplaceBotsWithAwaitingPlayers() --> void");
		cl.def("GetRespawnTime2", (int (GameEventWrapper::*)()) &GameEventWrapper::GetRespawnTime2, "C++: GameEventWrapper::GetRespawnTime2() --> int");
		cl.def("RemoveCar", (void (GameEventWrapper::*)(class CarWrapper)) &GameEventWrapper::RemoveCar, "C++: GameEventWrapper::RemoveCar(class CarWrapper) --> void", pybind11::arg("Car"));
		cl.def("AddCar", (void (GameEventWrapper::*)(class CarWrapper)) &GameEventWrapper::AddCar, "C++: GameEventWrapper::AddCar(class CarWrapper) --> void", pybind11::arg("Car"));
		cl.def("TickRespawnTime", (void (GameEventWrapper::*)(float)) &GameEventWrapper::TickRespawnTime, "C++: GameEventWrapper::TickRespawnTime(float) --> void", pybind11::arg("DeltaTime"));
		cl.def("SetBotSkill2", (void (GameEventWrapper::*)(float)) &GameEventWrapper::SetBotSkill2, "C++: GameEventWrapper::SetBotSkill2(float) --> void", pybind11::arg("NewSkill"));
		cl.def("GetLocalPrimaryPlayer", (class PlayerControllerWrapper (GameEventWrapper::*)()) &GameEventWrapper::GetLocalPrimaryPlayer, "C++: GameEventWrapper::GetLocalPrimaryPlayer() --> class PlayerControllerWrapper");
		cl.def("HasPlayerNamed", (bool (GameEventWrapper::*)(std::string)) &GameEventWrapper::HasPlayerNamed, "C++: GameEventWrapper::HasPlayerNamed(std::string) --> bool", pybind11::arg("PlayerName"));
		cl.def("RandomizeBots", (void (GameEventWrapper::*)()) &GameEventWrapper::RandomizeBots, "C++: GameEventWrapper::RandomizeBots() --> void");
		cl.def("MoveToGround", (bool (GameEventWrapper::*)(class ActorWrapper, float)) &GameEventWrapper::MoveToGround, "C++: GameEventWrapper::MoveToGround(class ActorWrapper, float) --> bool", pybind11::arg("Mover"), pybind11::arg("HeightCheck"));
		cl.def("SetAllDriving", (void (GameEventWrapper::*)(unsigned long)) &GameEventWrapper::SetAllDriving, "C++: GameEventWrapper::SetAllDriving(unsigned long) --> void", pybind11::arg("bDriving"));
		cl.def("OnFinished", (void (GameEventWrapper::*)()) &GameEventWrapper::OnFinished, "C++: GameEventWrapper::OnFinished() --> void");
		cl.def("StartCountDown", (void (GameEventWrapper::*)()) &GameEventWrapper::StartCountDown, "C++: GameEventWrapper::StartCountDown() --> void");
		cl.def("StartInitialCountDown", (void (GameEventWrapper::*)()) &GameEventWrapper::StartInitialCountDown, "C++: GameEventWrapper::StartInitialCountDown() --> void");
		cl.def("OnGameStateTimeLapsed", (void (GameEventWrapper::*)()) &GameEventWrapper::OnGameStateTimeLapsed, "C++: GameEventWrapper::OnGameStateTimeLapsed() --> void");
		cl.def("OnGameStateTimeUpdated", (void (GameEventWrapper::*)()) &GameEventWrapper::OnGameStateTimeUpdated, "C++: GameEventWrapper::OnGameStateTimeUpdated() --> void");
		cl.def("UpdateGameStateTime", (void (GameEventWrapper::*)()) &GameEventWrapper::UpdateGameStateTime, "C++: GameEventWrapper::UpdateGameStateTime() --> void");
		cl.def("SetGameStateTimeRemaining2", (void (GameEventWrapper::*)(int, unsigned long)) &GameEventWrapper::SetGameStateTimeRemaining2, "C++: GameEventWrapper::SetGameStateTimeRemaining2(int, unsigned long) --> void", pybind11::arg("StateTime"), pybind11::arg("bFromReplication"));
		cl.def("SetGameStateTime2", (void (GameEventWrapper::*)(int)) &GameEventWrapper::SetGameStateTime2, "C++: GameEventWrapper::SetGameStateTime2(int) --> void", pybind11::arg("StateTime"));
		cl.def("OnPlayerRestarted", (void (GameEventWrapper::*)(class CarWrapper)) &GameEventWrapper::OnPlayerRestarted, "C++: GameEventWrapper::OnPlayerRestarted(class CarWrapper) --> void", pybind11::arg("PlayerCar"));
		cl.def("TeleportCar", (void (GameEventWrapper::*)(class CarWrapper)) &GameEventWrapper::TeleportCar, "C++: GameEventWrapper::TeleportCar(class CarWrapper) --> void", pybind11::arg("PlayerCar"));
		cl.def("OnCarSpawned", (void (GameEventWrapper::*)(class CarWrapper)) &GameEventWrapper::OnCarSpawned, "C++: GameEventWrapper::OnCarSpawned(class CarWrapper) --> void", pybind11::arg("NewCar"));
		cl.def("SpotIsEncroached", (bool (GameEventWrapper::*)(struct Vector &)) &GameEventWrapper::SpotIsEncroached, "C++: GameEventWrapper::SpotIsEncroached(struct Vector &) --> bool", pybind11::arg("Spot"));
		cl.def("RandomizeSpawnPoints", (void (GameEventWrapper::*)()) &GameEventWrapper::RandomizeSpawnPoints, "C++: GameEventWrapper::RandomizeSpawnPoints() --> void");
		cl.def("RestartPlayers", (void (GameEventWrapper::*)()) &GameEventWrapper::RestartPlayers, "C++: GameEventWrapper::RestartPlayers() --> void");
		cl.def("RemoveLocalPlayer", (void (GameEventWrapper::*)(class PlayerControllerWrapper)) &GameEventWrapper::RemoveLocalPlayer, "C++: GameEventWrapper::RemoveLocalPlayer(class PlayerControllerWrapper) --> void", pybind11::arg("Player"));
		cl.def("AddLocalPlayer", (void (GameEventWrapper::*)(class PlayerControllerWrapper)) &GameEventWrapper::AddLocalPlayer, "C++: GameEventWrapper::AddLocalPlayer(class PlayerControllerWrapper) --> void", pybind11::arg("Player"));
		cl.def("RemovePRI", (void (GameEventWrapper::*)(class PriWrapper)) &GameEventWrapper::RemovePRI, "C++: GameEventWrapper::RemovePRI(class PriWrapper) --> void", pybind11::arg("PRI"));
		cl.def("AddPRI", (void (GameEventWrapper::*)(class PriWrapper)) &GameEventWrapper::AddPRI, "C++: GameEventWrapper::AddPRI(class PriWrapper) --> void", pybind11::arg("PRI"));
		cl.def("AddForfeitInitiator", (void (GameEventWrapper::*)(struct SteamID &)) &GameEventWrapper::AddForfeitInitiator, "C++: GameEventWrapper::AddForfeitInitiator(struct SteamID &) --> void", pybind11::arg("PlayerID"));
		cl.def("BanPlayerID", (void (GameEventWrapper::*)(struct SteamID &)) &GameEventWrapper::BanPlayerID, "C++: GameEventWrapper::BanPlayerID(struct SteamID &) --> void", pybind11::arg("PlayerID"));
		cl.def("GetMaxHumans", (int (GameEventWrapper::*)()) &GameEventWrapper::GetMaxHumans, "C++: GameEventWrapper::GetMaxHumans() --> int");
		cl.def("GetNumHumans", (int (GameEventWrapper::*)()) &GameEventWrapper::GetNumHumans, "C++: GameEventWrapper::GetNumHumans() --> int");
		cl.def("FindBotReplacement", (bool (GameEventWrapper::*)(class PriWrapper)) &GameEventWrapper::FindBotReplacement, "C++: GameEventWrapper::FindBotReplacement(class PriWrapper) --> bool", pybind11::arg("PRI"));
		cl.def("UpdateBotCount", (void (GameEventWrapper::*)()) &GameEventWrapper::UpdateBotCount, "C++: GameEventWrapper::UpdateBotCount() --> void");
		cl.def("TimerUpdateBotCount", (void (GameEventWrapper::*)()) &GameEventWrapper::TimerUpdateBotCount, "C++: GameEventWrapper::TimerUpdateBotCount() --> void");
		cl.def("InitBotSkill", (void (GameEventWrapper::*)()) &GameEventWrapper::InitBotSkill, "C++: GameEventWrapper::InitBotSkill() --> void");
		cl.def("InitMutators", (void (GameEventWrapper::*)()) &GameEventWrapper::InitMutators, "C++: GameEventWrapper::InitMutators() --> void");
		cl.def("HandleFinished", (void (GameEventWrapper::*)(class GameEventWrapper)) &GameEventWrapper::HandleFinished, "C++: GameEventWrapper::HandleFinished(class GameEventWrapper) --> void", pybind11::arg("GameEvent"));
		cl.def("Init2", (void (GameEventWrapper::*)(class PlayerControllerWrapper)) &GameEventWrapper::Init2, "C++: GameEventWrapper::Init2(class PlayerControllerWrapper) --> void", pybind11::arg("InActivator"));
		cl.def("eventInitGame", (void (GameEventWrapper::*)(std::string)) &GameEventWrapper::eventInitGame, "C++: GameEventWrapper::eventInitGame(std::string) --> void", pybind11::arg("Options"));
		cl.def("OnGameStateChanged", (void (GameEventWrapper::*)()) &GameEventWrapper::OnGameStateChanged, "C++: GameEventWrapper::OnGameStateChanged() --> void");
		cl.def("OnCanVoteForfeitChanged", (void (GameEventWrapper::*)()) &GameEventWrapper::OnCanVoteForfeitChanged, "C++: GameEventWrapper::OnCanVoteForfeitChanged() --> void");
		cl.def("UpdateCanVoteToForfeit", (void (GameEventWrapper::*)()) &GameEventWrapper::UpdateCanVoteToForfeit, "C++: GameEventWrapper::UpdateCanVoteToForfeit() --> void");
		cl.def("ShouldAllowVoteToForfeit", (bool (GameEventWrapper::*)()) &GameEventWrapper::ShouldAllowVoteToForfeit, "C++: GameEventWrapper::ShouldAllowVoteToForfeit() --> bool");
		cl.def("OnPenaltyChanged", (void (GameEventWrapper::*)()) &GameEventWrapper::OnPenaltyChanged, "C++: GameEventWrapper::OnPenaltyChanged() --> void");
		cl.def("UpdateLeaveMatchPenalty", (void (GameEventWrapper::*)()) &GameEventWrapper::UpdateLeaveMatchPenalty, "C++: GameEventWrapper::UpdateLeaveMatchPenalty() --> void");
		cl.def("GetPlaylist", (class GameSettingPlaylistWrapper (GameEventWrapper::*)()) &GameEventWrapper::GetPlaylist, "C++: GameEventWrapper::GetPlaylist() --> class GameSettingPlaylistWrapper");
		cl.def("ShouldHaveLeaveMatchPenalty", (bool (GameEventWrapper::*)()) &GameEventWrapper::ShouldHaveLeaveMatchPenalty, "C++: GameEventWrapper::ShouldHaveLeaveMatchPenalty() --> bool");
		cl.def("OnMatchSettingsChanged", (void (GameEventWrapper::*)()) &GameEventWrapper::OnMatchSettingsChanged, "C++: GameEventWrapper::OnMatchSettingsChanged() --> void");
		cl.def("ClearGameScoreFromCustomSettings", (void (GameEventWrapper::*)()) &GameEventWrapper::ClearGameScoreFromCustomSettings, "C++: GameEventWrapper::ClearGameScoreFromCustomSettings() --> void");
		cl.def("EventPlayerResetTraining", (void (GameEventWrapper::*)(class GameEventWrapper)) &GameEventWrapper::EventPlayerResetTraining, "C++: GameEventWrapper::EventPlayerResetTraining(class GameEventWrapper) --> void", pybind11::arg("GameEvent"));
	}
}
