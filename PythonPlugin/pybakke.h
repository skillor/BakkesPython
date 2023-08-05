#pragma once
#include <pybind11/pybind11.h>
#include <pybind11/functional.h>
#include <pybind11/operators.h>
#include <pybind11/stl.h>

namespace py = pybind11;

PYBIND11_EMBEDDED_MODULE(pybakke, M) {
	{ // ArrayWrapper file:bakkesmod/wrappers/arraywrapper.h line:58
		pybind11::class_<ArrayWrapper<wchar_t>, std::shared_ptr<ArrayWrapper<wchar_t>>> cl(M, "ArrayWrapper_wchar_t_t");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](ArrayWrapper<wchar_t> const& o) { return new ArrayWrapper<wchar_t>(o); }));
		cl.def("assign", (class ArrayWrapper<wchar_t> &(ArrayWrapper<wchar_t>::*)(class ArrayWrapper<wchar_t>)) & ArrayWrapper<wchar_t>::operator=, "C++: ArrayWrapper<wchar_t>::operator=(class ArrayWrapper<wchar_t>) --> class ArrayWrapper<wchar_t> &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("Count", (int (ArrayWrapper<wchar_t>::*)()) & ArrayWrapper<wchar_t>::Count, "C++: ArrayWrapper<wchar_t>::Count() --> int");
		cl.def("Get", (wchar_t (ArrayWrapper<wchar_t>::*)(int)) & ArrayWrapper<wchar_t>::Get, "C++: ArrayWrapper<wchar_t>::Get(int) --> wchar_t", "index"_a);
	}
	{ // ObjectWrapper file: line:9
		pybind11::class_<ObjectWrapper, std::shared_ptr<ObjectWrapper>> cl(M, "ObjectWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def_readwrite("memory_address", &ObjectWrapper::memory_address);
	}
	{ // ActorWrapper file: line:8
		pybind11::class_<ActorWrapper, std::shared_ptr<ActorWrapper>, ObjectWrapper> cl(M, "ActorWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](ActorWrapper const& o) { return new ActorWrapper(o); }));
		cl.def("assign", (class ActorWrapper& (ActorWrapper::*)(class ActorWrapper)) & ActorWrapper::operator=, "C++: ActorWrapper::operator=(class ActorWrapper) --> class ActorWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetLocation", (struct Vector(ActorWrapper::*)()) & ActorWrapper::GetLocation, "C++: ActorWrapper::GetLocation() --> struct Vector");
		cl.def("SetLocation", (void (ActorWrapper::*)(const struct Vector)) & ActorWrapper::SetLocation, "C++: ActorWrapper::SetLocation(const struct Vector) --> void", "location"_a);
		cl.def("GetVelocity", (struct Vector(ActorWrapper::*)()) & ActorWrapper::GetVelocity, "C++: ActorWrapper::GetVelocity() --> struct Vector");
		cl.def("SetVelocity", (void (ActorWrapper::*)(const struct Vector)) & ActorWrapper::SetVelocity, "C++: ActorWrapper::SetVelocity(const struct Vector) --> void", "velocity"_a);
		cl.def("AddVelocity", (void (ActorWrapper::*)(const struct Vector)) & ActorWrapper::AddVelocity, "C++: ActorWrapper::AddVelocity(const struct Vector) --> void", "velocity"_a);
		cl.def("GetRotation", (struct Rotator(ActorWrapper::*)()) & ActorWrapper::GetRotation, "C++: ActorWrapper::GetRotation() --> struct Rotator");
		cl.def("SetRotation", (void (ActorWrapper::*)(const struct Rotator)) & ActorWrapper::SetRotation, "C++: ActorWrapper::SetRotation(const struct Rotator) --> void", "rotation"_a);
		cl.def("SetTorque", (void (ActorWrapper::*)(const struct Vector)) & ActorWrapper::SetTorque, "C++: ActorWrapper::SetTorque(const struct Vector) --> void", "torq"_a);
		cl.def("Stop", (void (ActorWrapper::*)()) & ActorWrapper::Stop, "C++: ActorWrapper::Stop() --> void");
		cl.def("GetAngularVelocity", (struct Vector(ActorWrapper::*)()) & ActorWrapper::GetAngularVelocity, "C++: ActorWrapper::GetAngularVelocity() --> struct Vector");
		cl.def("SetAngularVelocity", (void (ActorWrapper::*)(const struct Vector, bool)) & ActorWrapper::SetAngularVelocity, "C++: ActorWrapper::SetAngularVelocity(const struct Vector, bool) --> void", "v"_a, "addToCurrent"_a);
		cl.def("IsNull", (bool (ActorWrapper::*)()) & ActorWrapper::IsNull, "C++: ActorWrapper::IsNull() --> bool");
		cl.def("GetDrawScale", (float (ActorWrapper::*)()) & ActorWrapper::GetDrawScale, "C++: ActorWrapper::GetDrawScale() --> float");
		cl.def("SetDrawScale", (void (ActorWrapper::*)(float)) & ActorWrapper::SetDrawScale, "C++: ActorWrapper::SetDrawScale(float) --> void", "newDrawScale"_a);
		cl.def("GetDrawScale3D", (struct Vector(ActorWrapper::*)()) & ActorWrapper::GetDrawScale3D, "C++: ActorWrapper::GetDrawScale3D() --> struct Vector");
		cl.def("SetDrawScale3D", (void (ActorWrapper::*)(struct Vector)) & ActorWrapper::SetDrawScale3D, "C++: ActorWrapper::SetDrawScale3D(struct Vector) --> void", "newDrawScale3D"_a);
		cl.def("GetPrePivot", (struct Vector(ActorWrapper::*)()) & ActorWrapper::GetPrePivot, "C++: ActorWrapper::GetPrePivot() --> struct Vector");
		cl.def("SetPrePivot", (void (ActorWrapper::*)(struct Vector)) & ActorWrapper::SetPrePivot, "C++: ActorWrapper::SetPrePivot(struct Vector) --> void", "newPrePivot"_a);
		cl.def("GetEditorIconColor", (struct UnrealColor(ActorWrapper::*)()) & ActorWrapper::GetEditorIconColor, "C++: ActorWrapper::GetEditorIconColor() --> struct UnrealColor");
		cl.def("SetEditorIconColor", (void (ActorWrapper::*)(struct UnrealColor)) & ActorWrapper::SetEditorIconColor, "C++: ActorWrapper::SetEditorIconColor(struct UnrealColor) --> void", "newEditorIconColor"_a);
		cl.def("GetCustomTimeDilation", (float (ActorWrapper::*)()) & ActorWrapper::GetCustomTimeDilation, "C++: ActorWrapper::GetCustomTimeDilation() --> float");
		cl.def("SetCustomTimeDilation", (void (ActorWrapper::*)(float)) & ActorWrapper::SetCustomTimeDilation, "C++: ActorWrapper::SetCustomTimeDilation(float) --> void", "newCustomTimeDilation"_a);
		cl.def("GetPhysics", (unsigned char (ActorWrapper::*)()) & ActorWrapper::GetPhysics, "C++: ActorWrapper::GetPhysics() --> unsigned char");
		cl.def("SetPhysics", (void (ActorWrapper::*)(unsigned char)) & ActorWrapper::SetPhysics, "C++: ActorWrapper::SetPhysics(unsigned char) --> void", "newPhysics"_a);
		cl.def("GetRemoteRole", (unsigned char (ActorWrapper::*)()) & ActorWrapper::GetRemoteRole, "C++: ActorWrapper::GetRemoteRole() --> unsigned char");
		cl.def("SetRemoteRole", (void (ActorWrapper::*)(unsigned char)) & ActorWrapper::SetRemoteRole, "C++: ActorWrapper::SetRemoteRole(unsigned char) --> void", "newRemoteRole"_a);
		cl.def("GetRole", (unsigned char (ActorWrapper::*)()) & ActorWrapper::GetRole, "C++: ActorWrapper::GetRole() --> unsigned char");
		cl.def("SetRole", (void (ActorWrapper::*)(unsigned char)) & ActorWrapper::SetRole, "C++: ActorWrapper::SetRole(unsigned char) --> void", "newRole"_a);
		cl.def("GetCollisionType", (unsigned char (ActorWrapper::*)()) & ActorWrapper::GetCollisionType, "C++: ActorWrapper::GetCollisionType() --> unsigned char");
		cl.def("SetCollisionType", (void (ActorWrapper::*)(unsigned char)) & ActorWrapper::SetCollisionType, "C++: ActorWrapper::SetCollisionType(unsigned char) --> void", "newCollisionType"_a);
		cl.def("GetReplicatedCollisionType", (unsigned char (ActorWrapper::*)()) & ActorWrapper::GetReplicatedCollisionType, "C++: ActorWrapper::GetReplicatedCollisionType() --> unsigned char");
		cl.def("SetReplicatedCollisionType", (void (ActorWrapper::*)(unsigned char)) & ActorWrapper::SetReplicatedCollisionType, "C++: ActorWrapper::SetReplicatedCollisionType(unsigned char) --> void", "newReplicatedCollisionType"_a);
		cl.def("GetOwner", (class ActorWrapper(ActorWrapper::*)()) & ActorWrapper::GetOwner, "C++: ActorWrapper::GetOwner() --> class ActorWrapper");
		cl.def("GetBase", (class ActorWrapper(ActorWrapper::*)()) & ActorWrapper::GetBase, "C++: ActorWrapper::GetBase() --> class ActorWrapper");
		cl.def("GetbStatic", (unsigned long (ActorWrapper::*)()) & ActorWrapper::GetbStatic, "C++: ActorWrapper::GetbStatic() --> unsigned long");
		cl.def("GetbHidden", (unsigned long (ActorWrapper::*)()) & ActorWrapper::GetbHidden, "C++: ActorWrapper::GetbHidden() --> unsigned long");
		cl.def("GetbHiddenSelf", (unsigned long (ActorWrapper::*)()) & ActorWrapper::GetbHiddenSelf, "C++: ActorWrapper::GetbHiddenSelf() --> unsigned long");
		cl.def("SetbHiddenSelf", (void (ActorWrapper::*)(unsigned long)) & ActorWrapper::SetbHiddenSelf, "C++: ActorWrapper::SetbHiddenSelf(unsigned long) --> void", "newbHiddenSelf"_a);
		cl.def("GetbNoDelete", (unsigned long (ActorWrapper::*)()) & ActorWrapper::GetbNoDelete, "C++: ActorWrapper::GetbNoDelete() --> unsigned long");
		cl.def("SetbNoDelete", (void (ActorWrapper::*)(unsigned long)) & ActorWrapper::SetbNoDelete, "C++: ActorWrapper::SetbNoDelete(unsigned long) --> void", "newbNoDelete"_a);
		cl.def("GetbDeleteMe", (unsigned long (ActorWrapper::*)()) & ActorWrapper::GetbDeleteMe, "C++: ActorWrapper::GetbDeleteMe() --> unsigned long");
		cl.def("SetbDeleteMe", (void (ActorWrapper::*)(unsigned long)) & ActorWrapper::SetbDeleteMe, "C++: ActorWrapper::SetbDeleteMe(unsigned long) --> void", "newbDeleteMe"_a);
		cl.def("GetbTicked", (unsigned long (ActorWrapper::*)()) & ActorWrapper::GetbTicked, "C++: ActorWrapper::GetbTicked() --> unsigned long");
		cl.def("SetbTicked", (void (ActorWrapper::*)(unsigned long)) & ActorWrapper::SetbTicked, "C++: ActorWrapper::SetbTicked(unsigned long) --> void", "newbTicked"_a);
		cl.def("GetbOnlyOwnerSee", (unsigned long (ActorWrapper::*)()) & ActorWrapper::GetbOnlyOwnerSee, "C++: ActorWrapper::GetbOnlyOwnerSee() --> unsigned long");
		cl.def("SetbOnlyOwnerSee", (void (ActorWrapper::*)(unsigned long)) & ActorWrapper::SetbOnlyOwnerSee, "C++: ActorWrapper::SetbOnlyOwnerSee(unsigned long) --> void", "newbOnlyOwnerSee"_a);
		cl.def("GetbTickIsDisabled", (unsigned long (ActorWrapper::*)()) & ActorWrapper::GetbTickIsDisabled, "C++: ActorWrapper::GetbTickIsDisabled() --> unsigned long");
		cl.def("SetbTickIsDisabled", (void (ActorWrapper::*)(unsigned long)) & ActorWrapper::SetbTickIsDisabled, "C++: ActorWrapper::SetbTickIsDisabled(unsigned long) --> void", "newbTickIsDisabled"_a);
		cl.def("GetbWorldGeometry", (unsigned long (ActorWrapper::*)()) & ActorWrapper::GetbWorldGeometry, "C++: ActorWrapper::GetbWorldGeometry() --> unsigned long");
		cl.def("SetbWorldGeometry", (void (ActorWrapper::*)(unsigned long)) & ActorWrapper::SetbWorldGeometry, "C++: ActorWrapper::SetbWorldGeometry(unsigned long) --> void", "newbWorldGeometry"_a);
		cl.def("GetbIgnoreRigidBodyPawns", (unsigned long (ActorWrapper::*)()) & ActorWrapper::GetbIgnoreRigidBodyPawns, "C++: ActorWrapper::GetbIgnoreRigidBodyPawns() --> unsigned long");
		cl.def("SetbIgnoreRigidBodyPawns", (void (ActorWrapper::*)(unsigned long)) & ActorWrapper::SetbIgnoreRigidBodyPawns, "C++: ActorWrapper::SetbIgnoreRigidBodyPawns(unsigned long) --> void", "newbIgnoreRigidBodyPawns"_a);
		cl.def("GetbOrientOnSlope", (unsigned long (ActorWrapper::*)()) & ActorWrapper::GetbOrientOnSlope, "C++: ActorWrapper::GetbOrientOnSlope() --> unsigned long");
		cl.def("SetbOrientOnSlope", (void (ActorWrapper::*)(unsigned long)) & ActorWrapper::SetbOrientOnSlope, "C++: ActorWrapper::SetbOrientOnSlope(unsigned long) --> void", "newbOrientOnSlope"_a);
		cl.def("GetbIsMoving", (unsigned long (ActorWrapper::*)()) & ActorWrapper::GetbIsMoving, "C++: ActorWrapper::GetbIsMoving() --> unsigned long");
		cl.def("GetbAlwaysEncroachCheck", (unsigned long (ActorWrapper::*)()) & ActorWrapper::GetbAlwaysEncroachCheck, "C++: ActorWrapper::GetbAlwaysEncroachCheck() --> unsigned long");
		cl.def("SetbAlwaysEncroachCheck", (void (ActorWrapper::*)(unsigned long)) & ActorWrapper::SetbAlwaysEncroachCheck, "C++: ActorWrapper::SetbAlwaysEncroachCheck(unsigned long) --> void", "newbAlwaysEncroachCheck"_a);
		cl.def("GetbHasAlternateTargetLocation", (unsigned long (ActorWrapper::*)()) & ActorWrapper::GetbHasAlternateTargetLocation, "C++: ActorWrapper::GetbHasAlternateTargetLocation() --> unsigned long");
		cl.def("GetbAlwaysRelevant", (unsigned long (ActorWrapper::*)()) & ActorWrapper::GetbAlwaysRelevant, "C++: ActorWrapper::GetbAlwaysRelevant() --> unsigned long");
		cl.def("GetbReplicateInstigator", (unsigned long (ActorWrapper::*)()) & ActorWrapper::GetbReplicateInstigator, "C++: ActorWrapper::GetbReplicateInstigator() --> unsigned long");
		cl.def("GetbReplicateMovement", (unsigned long (ActorWrapper::*)()) & ActorWrapper::GetbReplicateMovement, "C++: ActorWrapper::GetbReplicateMovement() --> unsigned long");
		cl.def("GetbUpdateSimulatedPosition", (unsigned long (ActorWrapper::*)()) & ActorWrapper::GetbUpdateSimulatedPosition, "C++: ActorWrapper::GetbUpdateSimulatedPosition() --> unsigned long");
		cl.def("SetbUpdateSimulatedPosition", (void (ActorWrapper::*)(unsigned long)) & ActorWrapper::SetbUpdateSimulatedPosition, "C++: ActorWrapper::SetbUpdateSimulatedPosition(unsigned long) --> void", "newbUpdateSimulatedPosition"_a);
		cl.def("GetbDemoRecording", (unsigned long (ActorWrapper::*)()) & ActorWrapper::GetbDemoRecording, "C++: ActorWrapper::GetbDemoRecording() --> unsigned long");
		cl.def("SetbDemoRecording", (void (ActorWrapper::*)(unsigned long)) & ActorWrapper::SetbDemoRecording, "C++: ActorWrapper::SetbDemoRecording(unsigned long) --> void", "newbDemoRecording"_a);
		cl.def("GetbDemoOwner", (unsigned long (ActorWrapper::*)()) & ActorWrapper::GetbDemoOwner, "C++: ActorWrapper::GetbDemoOwner() --> unsigned long");
		cl.def("SetbDemoOwner", (void (ActorWrapper::*)(unsigned long)) & ActorWrapper::SetbDemoOwner, "C++: ActorWrapper::SetbDemoOwner(unsigned long) --> void", "newbDemoOwner"_a);
		cl.def("GetbForceDemoRelevant", (unsigned long (ActorWrapper::*)()) & ActorWrapper::GetbForceDemoRelevant, "C++: ActorWrapper::GetbForceDemoRelevant() --> unsigned long");
		cl.def("SetbForceDemoRelevant", (void (ActorWrapper::*)(unsigned long)) & ActorWrapper::SetbForceDemoRelevant, "C++: ActorWrapper::SetbForceDemoRelevant(unsigned long) --> void", "newbForceDemoRelevant"_a);
		cl.def("GetbNetInitialRotation", (unsigned long (ActorWrapper::*)()) & ActorWrapper::GetbNetInitialRotation, "C++: ActorWrapper::GetbNetInitialRotation() --> unsigned long");
		cl.def("SetbNetInitialRotation", (void (ActorWrapper::*)(unsigned long)) & ActorWrapper::SetbNetInitialRotation, "C++: ActorWrapper::SetbNetInitialRotation(unsigned long) --> void", "newbNetInitialRotation"_a);
		cl.def("GetbReplicateRigidBodyLocation", (unsigned long (ActorWrapper::*)()) & ActorWrapper::GetbReplicateRigidBodyLocation, "C++: ActorWrapper::GetbReplicateRigidBodyLocation() --> unsigned long");
		cl.def("SetbReplicateRigidBodyLocation", (void (ActorWrapper::*)(unsigned long)) & ActorWrapper::SetbReplicateRigidBodyLocation, "C++: ActorWrapper::SetbReplicateRigidBodyLocation(unsigned long) --> void", "newbReplicateRigidBodyLocation"_a);
		cl.def("GetbKillDuringLevelTransition", (unsigned long (ActorWrapper::*)()) & ActorWrapper::GetbKillDuringLevelTransition, "C++: ActorWrapper::GetbKillDuringLevelTransition() --> unsigned long");
		cl.def("SetbKillDuringLevelTransition", (void (ActorWrapper::*)(unsigned long)) & ActorWrapper::SetbKillDuringLevelTransition, "C++: ActorWrapper::SetbKillDuringLevelTransition(unsigned long) --> void", "newbKillDuringLevelTransition"_a);
		cl.def("GetbPostRenderIfNotVisible", (unsigned long (ActorWrapper::*)()) & ActorWrapper::GetbPostRenderIfNotVisible, "C++: ActorWrapper::GetbPostRenderIfNotVisible() --> unsigned long");
		cl.def("SetbPostRenderIfNotVisible", (void (ActorWrapper::*)(unsigned long)) & ActorWrapper::SetbPostRenderIfNotVisible, "C++: ActorWrapper::SetbPostRenderIfNotVisible(unsigned long) --> void", "newbPostRenderIfNotVisible"_a);
		cl.def("GetbForceNetUpdate", (unsigned long (ActorWrapper::*)()) & ActorWrapper::GetbForceNetUpdate, "C++: ActorWrapper::GetbForceNetUpdate() --> unsigned long");
		cl.def("SetbForceNetUpdate", (void (ActorWrapper::*)(unsigned long)) & ActorWrapper::SetbForceNetUpdate, "C++: ActorWrapper::SetbForceNetUpdate(unsigned long) --> void", "newbForceNetUpdate"_a);
		cl.def("GetbForcePacketUpdate", (unsigned long (ActorWrapper::*)()) & ActorWrapper::GetbForcePacketUpdate, "C++: ActorWrapper::GetbForcePacketUpdate() --> unsigned long");
		cl.def("SetbForcePacketUpdate", (void (ActorWrapper::*)(unsigned long)) & ActorWrapper::SetbForcePacketUpdate, "C++: ActorWrapper::SetbForcePacketUpdate(unsigned long) --> void", "newbForcePacketUpdate"_a);
		cl.def("GetbPendingNetUpdate", (unsigned long (ActorWrapper::*)()) & ActorWrapper::GetbPendingNetUpdate, "C++: ActorWrapper::GetbPendingNetUpdate() --> unsigned long");
		cl.def("SetbPendingNetUpdate", (void (ActorWrapper::*)(unsigned long)) & ActorWrapper::SetbPendingNetUpdate, "C++: ActorWrapper::SetbPendingNetUpdate(unsigned long) --> void", "newbPendingNetUpdate"_a);
		cl.def("GetbGameRelevant", (unsigned long (ActorWrapper::*)()) & ActorWrapper::GetbGameRelevant, "C++: ActorWrapper::GetbGameRelevant() --> unsigned long");
		cl.def("SetbGameRelevant", (void (ActorWrapper::*)(unsigned long)) & ActorWrapper::SetbGameRelevant, "C++: ActorWrapper::SetbGameRelevant(unsigned long) --> void", "newbGameRelevant"_a);
		cl.def("GetbMovable", (unsigned long (ActorWrapper::*)()) & ActorWrapper::GetbMovable, "C++: ActorWrapper::GetbMovable() --> unsigned long");
		cl.def("SetbMovable", (void (ActorWrapper::*)(unsigned long)) & ActorWrapper::SetbMovable, "C++: ActorWrapper::SetbMovable(unsigned long) --> void", "newbMovable"_a);
		cl.def("GetbCanTeleport", (unsigned long (ActorWrapper::*)()) & ActorWrapper::GetbCanTeleport, "C++: ActorWrapper::GetbCanTeleport() --> unsigned long");
		cl.def("SetbCanTeleport", (void (ActorWrapper::*)(unsigned long)) & ActorWrapper::SetbCanTeleport, "C++: ActorWrapper::SetbCanTeleport(unsigned long) --> void", "newbCanTeleport"_a);
		cl.def("GetbAlwaysTick", (unsigned long (ActorWrapper::*)()) & ActorWrapper::GetbAlwaysTick, "C++: ActorWrapper::GetbAlwaysTick() --> unsigned long");
		cl.def("SetbAlwaysTick", (void (ActorWrapper::*)(unsigned long)) & ActorWrapper::SetbAlwaysTick, "C++: ActorWrapper::SetbAlwaysTick(unsigned long) --> void", "newbAlwaysTick"_a);
		cl.def("GetbBlocksNavigation", (unsigned long (ActorWrapper::*)()) & ActorWrapper::GetbBlocksNavigation, "C++: ActorWrapper::GetbBlocksNavigation() --> unsigned long");
		cl.def("SetbBlocksNavigation", (void (ActorWrapper::*)(unsigned long)) & ActorWrapper::SetbBlocksNavigation, "C++: ActorWrapper::SetbBlocksNavigation(unsigned long) --> void", "newbBlocksNavigation"_a);
		cl.def("GetBlockRigidBody", (unsigned long (ActorWrapper::*)()) & ActorWrapper::GetBlockRigidBody, "C++: ActorWrapper::GetBlockRigidBody() --> unsigned long");
		cl.def("SetBlockRigidBody", (void (ActorWrapper::*)(unsigned long)) & ActorWrapper::SetBlockRigidBody, "C++: ActorWrapper::SetBlockRigidBody(unsigned long) --> void", "newBlockRigidBody"_a);
		cl.def("GetbCollideWhenPlacing", (unsigned long (ActorWrapper::*)()) & ActorWrapper::GetbCollideWhenPlacing, "C++: ActorWrapper::GetbCollideWhenPlacing() --> unsigned long");
		cl.def("SetbCollideWhenPlacing", (void (ActorWrapper::*)(unsigned long)) & ActorWrapper::SetbCollideWhenPlacing, "C++: ActorWrapper::SetbCollideWhenPlacing(unsigned long) --> void", "newbCollideWhenPlacing"_a);
		cl.def("GetbCollideActors", (unsigned long (ActorWrapper::*)()) & ActorWrapper::GetbCollideActors, "C++: ActorWrapper::GetbCollideActors() --> unsigned long");
		cl.def("SetbCollideActors", (void (ActorWrapper::*)(unsigned long)) & ActorWrapper::SetbCollideActors, "C++: ActorWrapper::SetbCollideActors(unsigned long) --> void", "newbCollideActors"_a);
		cl.def("GetbCollideWorld", (unsigned long (ActorWrapper::*)()) & ActorWrapper::GetbCollideWorld, "C++: ActorWrapper::GetbCollideWorld() --> unsigned long");
		cl.def("SetbCollideWorld", (void (ActorWrapper::*)(unsigned long)) & ActorWrapper::SetbCollideWorld, "C++: ActorWrapper::SetbCollideWorld(unsigned long) --> void", "newbCollideWorld"_a);
		cl.def("GetbCollideComplex", (unsigned long (ActorWrapper::*)()) & ActorWrapper::GetbCollideComplex, "C++: ActorWrapper::GetbCollideComplex() --> unsigned long");
		cl.def("SetbCollideComplex", (void (ActorWrapper::*)(unsigned long)) & ActorWrapper::SetbCollideComplex, "C++: ActorWrapper::SetbCollideComplex(unsigned long) --> void", "newbCollideComplex"_a);
		cl.def("GetbBlockActors", (unsigned long (ActorWrapper::*)()) & ActorWrapper::GetbBlockActors, "C++: ActorWrapper::GetbBlockActors() --> unsigned long");
		cl.def("SetbBlockActors", (void (ActorWrapper::*)(unsigned long)) & ActorWrapper::SetbBlockActors, "C++: ActorWrapper::SetbBlockActors(unsigned long) --> void", "newbBlockActors"_a);
		cl.def("GetbBlocksTeleport", (unsigned long (ActorWrapper::*)()) & ActorWrapper::GetbBlocksTeleport, "C++: ActorWrapper::GetbBlocksTeleport() --> unsigned long");
		cl.def("SetbBlocksTeleport", (void (ActorWrapper::*)(unsigned long)) & ActorWrapper::SetbBlocksTeleport, "C++: ActorWrapper::SetbBlocksTeleport(unsigned long) --> void", "newbBlocksTeleport"_a);
		cl.def("GetbPhysRigidBodyOutOfWorldCheck", (unsigned long (ActorWrapper::*)()) & ActorWrapper::GetbPhysRigidBodyOutOfWorldCheck, "C++: ActorWrapper::GetbPhysRigidBodyOutOfWorldCheck() --> unsigned long");
		cl.def("SetbPhysRigidBodyOutOfWorldCheck", (void (ActorWrapper::*)(unsigned long)) & ActorWrapper::SetbPhysRigidBodyOutOfWorldCheck, "C++: ActorWrapper::SetbPhysRigidBodyOutOfWorldCheck(unsigned long) --> void", "newbPhysRigidBodyOutOfWorldCheck"_a);
		cl.def("GetbComponentOutsideWorld", (unsigned long (ActorWrapper::*)()) & ActorWrapper::GetbComponentOutsideWorld, "C++: ActorWrapper::GetbComponentOutsideWorld() --> unsigned long");
		cl.def("GetbRigidBodyWasAwake", (unsigned long (ActorWrapper::*)()) & ActorWrapper::GetbRigidBodyWasAwake, "C++: ActorWrapper::GetbRigidBodyWasAwake() --> unsigned long");
		cl.def("SetbRigidBodyWasAwake", (void (ActorWrapper::*)(unsigned long)) & ActorWrapper::SetbRigidBodyWasAwake, "C++: ActorWrapper::SetbRigidBodyWasAwake(unsigned long) --> void", "newbRigidBodyWasAwake"_a);
		cl.def("GetbCallRigidBodyWakeEvents", (unsigned long (ActorWrapper::*)()) & ActorWrapper::GetbCallRigidBodyWakeEvents, "C++: ActorWrapper::GetbCallRigidBodyWakeEvents() --> unsigned long");
		cl.def("SetbCallRigidBodyWakeEvents", (void (ActorWrapper::*)(unsigned long)) & ActorWrapper::SetbCallRigidBodyWakeEvents, "C++: ActorWrapper::SetbCallRigidBodyWakeEvents(unsigned long) --> void", "newbCallRigidBodyWakeEvents"_a);
		cl.def("GetbBounce", (unsigned long (ActorWrapper::*)()) & ActorWrapper::GetbBounce, "C++: ActorWrapper::GetbBounce() --> unsigned long");
		cl.def("SetbBounce", (void (ActorWrapper::*)(unsigned long)) & ActorWrapper::SetbBounce, "C++: ActorWrapper::SetbBounce(unsigned long) --> void", "newbBounce"_a);
		cl.def("GetbEditable", (unsigned long (ActorWrapper::*)()) & ActorWrapper::GetbEditable, "C++: ActorWrapper::GetbEditable() --> unsigned long");
		cl.def("SetbEditable", (void (ActorWrapper::*)(unsigned long)) & ActorWrapper::SetbEditable, "C++: ActorWrapper::SetbEditable(unsigned long) --> void", "newbEditable"_a);
		cl.def("GetbLockLocation", (unsigned long (ActorWrapper::*)()) & ActorWrapper::GetbLockLocation, "C++: ActorWrapper::GetbLockLocation() --> unsigned long");
		cl.def("SetbLockLocation", (void (ActorWrapper::*)(unsigned long)) & ActorWrapper::SetbLockLocation, "C++: ActorWrapper::SetbLockLocation(unsigned long) --> void", "newbLockLocation"_a);
		cl.def("GetNetUpdateTime", (float (ActorWrapper::*)()) & ActorWrapper::GetNetUpdateTime, "C++: ActorWrapper::GetNetUpdateTime() --> float");
		cl.def("SetNetUpdateTime", (void (ActorWrapper::*)(float)) & ActorWrapper::SetNetUpdateTime, "C++: ActorWrapper::SetNetUpdateTime(float) --> void", "newNetUpdateTime"_a);
		cl.def("GetNetUpdateFrequency", (float (ActorWrapper::*)()) & ActorWrapper::GetNetUpdateFrequency, "C++: ActorWrapper::GetNetUpdateFrequency() --> float");
		cl.def("SetNetUpdateFrequency", (void (ActorWrapper::*)(float)) & ActorWrapper::SetNetUpdateFrequency, "C++: ActorWrapper::SetNetUpdateFrequency(float) --> void", "newNetUpdateFrequency"_a);
		cl.def("GetNetPriority", (float (ActorWrapper::*)()) & ActorWrapper::GetNetPriority, "C++: ActorWrapper::GetNetPriority() --> float");
		cl.def("SetNetPriority", (void (ActorWrapper::*)(float)) & ActorWrapper::SetNetPriority, "C++: ActorWrapper::SetNetPriority(float) --> void", "newNetPriority"_a);
		cl.def("GetLastNetUpdateTime", (float (ActorWrapper::*)()) & ActorWrapper::GetLastNetUpdateTime, "C++: ActorWrapper::GetLastNetUpdateTime() --> float");
		cl.def("GetLastForcePacketUpdateTime", (float (ActorWrapper::*)()) & ActorWrapper::GetLastForcePacketUpdateTime, "C++: ActorWrapper::GetLastForcePacketUpdateTime() --> float");
		cl.def("SetLastForcePacketUpdateTime", (void (ActorWrapper::*)(float)) & ActorWrapper::SetLastForcePacketUpdateTime, "C++: ActorWrapper::SetLastForcePacketUpdateTime(float) --> void", "newLastForcePacketUpdateTime"_a);
		cl.def("GetTimeSinceLastTick", (float (ActorWrapper::*)()) & ActorWrapper::GetTimeSinceLastTick, "C++: ActorWrapper::GetTimeSinceLastTick() --> float");
		cl.def("GetLifeSpan", (float (ActorWrapper::*)()) & ActorWrapper::GetLifeSpan, "C++: ActorWrapper::GetLifeSpan() --> float");
		cl.def("GetCreationTime", (float (ActorWrapper::*)()) & ActorWrapper::GetCreationTime, "C++: ActorWrapper::GetCreationTime() --> float");
		cl.def("GetLastRenderTime", (float (ActorWrapper::*)()) & ActorWrapper::GetLastRenderTime, "C++: ActorWrapper::GetLastRenderTime() --> float");
		cl.def("GetHiddenEditorViews", (unsigned long long (ActorWrapper::*)()) & ActorWrapper::GetHiddenEditorViews, "C++: ActorWrapper::GetHiddenEditorViews() --> unsigned long long");
		cl.def("SetHiddenEditorViews", (void (ActorWrapper::*)(unsigned long long)) & ActorWrapper::SetHiddenEditorViews, "C++: ActorWrapper::SetHiddenEditorViews(unsigned long long) --> void", "newHiddenEditorViews"_a);
		cl.def("GetAttached", (class ArrayWrapper<class ActorWrapper>(ActorWrapper::*)()) & ActorWrapper::GetAttached, "C++: ActorWrapper::GetAttached() --> class ArrayWrapper<class ActorWrapper>");
		cl.def("GetRelativeLocation", (struct Vector(ActorWrapper::*)()) & ActorWrapper::GetRelativeLocation, "C++: ActorWrapper::GetRelativeLocation() --> struct Vector");
		cl.def("SetRelativeLocation", (void (ActorWrapper::*)(struct Vector)) & ActorWrapper::SetRelativeLocation, "C++: ActorWrapper::SetRelativeLocation(struct Vector) --> void", "newRelativeLocation"_a);
		cl.def("GetRelativeRotation", (struct Rotator(ActorWrapper::*)()) & ActorWrapper::GetRelativeRotation, "C++: ActorWrapper::GetRelativeRotation() --> struct Rotator");
		cl.def("SetRelativeRotation", (void (ActorWrapper::*)(struct Rotator)) & ActorWrapper::SetRelativeRotation, "C++: ActorWrapper::SetRelativeRotation(struct Rotator) --> void", "newRelativeRotation"_a);
		cl.def("GetCollisionComponent", (class PrimitiveComponentWrapper(ActorWrapper::*)()) & ActorWrapper::GetCollisionComponent, "C++: ActorWrapper::GetCollisionComponent() --> class PrimitiveComponentWrapper");
		cl.def("ForceNetUpdatePacket", (void (ActorWrapper::*)()) & ActorWrapper::ForceNetUpdatePacket, "C++: ActorWrapper::ForceNetUpdatePacket() --> void");
		cl.def("ForceNetUpdate2", (void (ActorWrapper::*)()) & ActorWrapper::ForceNetUpdate2, "C++: ActorWrapper::ForceNetUpdate2() --> void");
		cl.def("WillOverlap", (bool (ActorWrapper::*)(struct Vector&, struct Vector&, struct Vector&, struct Vector&, float, float, float*)) & ActorWrapper::WillOverlap, "C++: ActorWrapper::WillOverlap(struct Vector &, struct Vector &, struct Vector &, struct Vector &, float, float, float *) --> bool", "PosA"_a, "VelA"_a, "PosB"_a, "VelB"_a, "StepSize"_a, "Radius"_a, "Time"_a);
		cl.def("eventReplicationEnded", (void (ActorWrapper::*)()) & ActorWrapper::eventReplicationEnded, "C++: ActorWrapper::eventReplicationEnded() --> void");
		cl.def("eventPostDemoRewind", (void (ActorWrapper::*)()) & ActorWrapper::eventPostDemoRewind, "C++: ActorWrapper::eventPostDemoRewind() --> void");
		cl.def("IsInPersistentLevel", (bool (ActorWrapper::*)(unsigned long)) & ActorWrapper::IsInPersistentLevel, "C++: ActorWrapper::IsInPersistentLevel(unsigned long) --> bool", "bIncludeLevelStreamingPersistent"_a);
		cl.def("SetHUDLocation", (void (ActorWrapper::*)(struct Vector&)) & ActorWrapper::SetHUDLocation, "C++: ActorWrapper::SetHUDLocation(struct Vector &) --> void", "NewHUDLocation"_a);
		cl.def("eventSpawnedByKismet", (void (ActorWrapper::*)()) & ActorWrapper::eventSpawnedByKismet, "C++: ActorWrapper::eventSpawnedByKismet() --> void");
		cl.def("GetTargetLocation", (struct Vector(ActorWrapper::*)(class ActorWrapper, unsigned long)) & ActorWrapper::GetTargetLocation, "C++: ActorWrapper::GetTargetLocation(class ActorWrapper, unsigned long) --> struct Vector", "RequestedBy"_a, "bRequestAlternateLoc"_a);
		cl.def("eventScriptGetTeamNum", (unsigned char (ActorWrapper::*)()) & ActorWrapper::eventScriptGetTeamNum, "C++: ActorWrapper::eventScriptGetTeamNum() --> unsigned char");
		cl.def("GetTeamNum2", (unsigned char (ActorWrapper::*)()) & ActorWrapper::GetTeamNum2, "C++: ActorWrapper::GetTeamNum2() --> unsigned char");
		cl.def("IsPlayerOwned", (bool (ActorWrapper::*)()) & ActorWrapper::IsPlayerOwned, "C++: ActorWrapper::IsPlayerOwned() --> bool");
		cl.def("IsStationary", (bool (ActorWrapper::*)()) & ActorWrapper::IsStationary, "C++: ActorWrapper::IsStationary() --> bool");
		cl.def("eventDebugMessagePlayer", (void (ActorWrapper::*)(std::string)) & ActorWrapper::eventDebugMessagePlayer, "C++: ActorWrapper::eventDebugMessagePlayer(std::string) --> void", "msg"_a);
		cl.def("GetGravityAcceleration", (struct Vector(ActorWrapper::*)()) & ActorWrapper::GetGravityAcceleration, "C++: ActorWrapper::GetGravityAcceleration() --> struct Vector");
		cl.def("GetGravityDirection", (struct Vector(ActorWrapper::*)()) & ActorWrapper::GetGravityDirection, "C++: ActorWrapper::GetGravityDirection() --> struct Vector");
		cl.def("GetGravityZ", (float (ActorWrapper::*)()) & ActorWrapper::GetGravityZ, "C++: ActorWrapper::GetGravityZ() --> float");
		cl.def("IsOverlapping", (bool (ActorWrapper::*)(class ActorWrapper)) & ActorWrapper::IsOverlapping, "C++: ActorWrapper::IsOverlapping(class ActorWrapper) --> bool", "A"_a);
		cl.def("ContainsPoint", (bool (ActorWrapper::*)(struct Vector&)) & ActorWrapper::ContainsPoint, "C++: ActorWrapper::ContainsPoint(struct Vector &) --> bool", "Spot"_a);
		cl.def("eventFellOutOfWorld", (void (ActorWrapper::*)()) & ActorWrapper::eventFellOutOfWorld, "C++: ActorWrapper::eventFellOutOfWorld() --> void");
		cl.def("SetTickIsDisabled", (void (ActorWrapper::*)(unsigned long)) & ActorWrapper::SetTickIsDisabled, "C++: ActorWrapper::SetTickIsDisabled(unsigned long) --> void", "bInDisabled"_a);
		cl.def("SetPhysics2", (void (ActorWrapper::*)(unsigned char)) & ActorWrapper::SetPhysics2, "C++: ActorWrapper::SetPhysics2(unsigned char) --> void", "newPhysics"_a);
		cl.def("SetHidden2", (void (ActorWrapper::*)(unsigned long)) & ActorWrapper::SetHidden2, "C++: ActorWrapper::SetHidden2(unsigned long) --> void", "bNewHidden"_a);
		cl.def("ChartData", (void (ActorWrapper::*)(std::string, float)) & ActorWrapper::ChartData, "C++: ActorWrapper::ChartData(std::string, float) --> void", "DataName"_a, "DataValue"_a);
		cl.def("DrawDebugString", (void (ActorWrapper::*)(struct Vector&, std::string, class ActorWrapper, struct UnrealColor&, float)) & ActorWrapper::DrawDebugString, "C++: ActorWrapper::DrawDebugString(struct Vector &, std::string, class ActorWrapper, struct UnrealColor &, float) --> void", "TextLocation"_a, "Text"_a, "TestBaseActor"_a, "TextColor"_a, "Duration"_a);
		cl.def("DrawDebugCone", (void (ActorWrapper::*)(struct Vector&, struct Vector&, float, float, float, int, struct UnrealColor&, unsigned long)) & ActorWrapper::DrawDebugCone, "C++: ActorWrapper::DrawDebugCone(struct Vector &, struct Vector &, float, float, float, int, struct UnrealColor &, unsigned long) --> void", "Origin"_a, "Direction"_a, "Length"_a, "AngleWidth"_a, "AngleHeight"_a, "NumSides"_a, "DrawColor"_a, "bPersistentLines"_a);
		cl.def("GetAggregateBaseVelocity", (struct Vector(ActorWrapper::*)(class ActorWrapper)) & ActorWrapper::GetAggregateBaseVelocity, "C++: ActorWrapper::GetAggregateBaseVelocity(class ActorWrapper) --> struct Vector", "TestBase"_a);
		cl.def("IsOwnedBy", (bool (ActorWrapper::*)(class ActorWrapper)) & ActorWrapper::IsOwnedBy, "C++: ActorWrapper::IsOwnedBy(class ActorWrapper) --> bool", "TestActor"_a);
		cl.def("IsBasedOn", (bool (ActorWrapper::*)(class ActorWrapper)) & ActorWrapper::IsBasedOn, "C++: ActorWrapper::IsBasedOn(class ActorWrapper) --> bool", "TestActor"_a);
		cl.def("GetTerminalVelocity", (float (ActorWrapper::*)()) & ActorWrapper::GetTerminalVelocity, "C++: ActorWrapper::GetTerminalVelocity() --> float");
	}
	{ // RBActorWrapper file: line:8
		pybind11::class_<RBActorWrapper, std::shared_ptr<RBActorWrapper>, ActorWrapper> cl(M, "RBActorWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](RBActorWrapper const& o) { return new RBActorWrapper(o); }));
		cl.def("assign", (class RBActorWrapper& (RBActorWrapper::*)(class RBActorWrapper))& RBActorWrapper::operator=, "C++: RBActorWrapper::operator=(class RBActorWrapper) --> class RBActorWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetMaxLinearSpeed", (float (RBActorWrapper::*)())& RBActorWrapper::GetMaxLinearSpeed, "C++: RBActorWrapper::GetMaxLinearSpeed() --> float");
		cl.def("SetMaxLinearSpeed", (void (RBActorWrapper::*)(float))& RBActorWrapper::SetMaxLinearSpeed, "C++: RBActorWrapper::SetMaxLinearSpeed(float) --> void", "newMaxLinearSpeed"_a);
		cl.def("GetMaxAngularSpeed", (float (RBActorWrapper::*)())& RBActorWrapper::GetMaxAngularSpeed, "C++: RBActorWrapper::GetMaxAngularSpeed() --> float");
		cl.def("SetMaxAngularSpeed", (void (RBActorWrapper::*)(float))& RBActorWrapper::SetMaxAngularSpeed, "C++: RBActorWrapper::SetMaxAngularSpeed(float) --> void", "newMaxAngularSpeed"_a);
		cl.def("GetbDisableSleeping", (unsigned long (RBActorWrapper::*)())& RBActorWrapper::GetbDisableSleeping, "C++: RBActorWrapper::GetbDisableSleeping() --> unsigned long");
		cl.def("SetbDisableSleeping", (void (RBActorWrapper::*)(unsigned long))& RBActorWrapper::SetbDisableSleeping, "C++: RBActorWrapper::SetbDisableSleeping(unsigned long) --> void", "newbDisableSleeping"_a);
		cl.def("GetbReplayActor", (unsigned long (RBActorWrapper::*)())& RBActorWrapper::GetbReplayActor, "C++: RBActorWrapper::GetbReplayActor() --> unsigned long");
		cl.def("SetbReplayActor", (void (RBActorWrapper::*)(unsigned long))& RBActorWrapper::SetbReplayActor, "C++: RBActorWrapper::SetbReplayActor(unsigned long) --> void", "newbReplayActor"_a);
		cl.def("GetbFrozen", (unsigned long (RBActorWrapper::*)())& RBActorWrapper::GetbFrozen, "C++: RBActorWrapper::GetbFrozen() --> unsigned long");
		cl.def("SetbFrozen", (void (RBActorWrapper::*)(unsigned long))& RBActorWrapper::SetbFrozen, "C++: RBActorWrapper::SetbFrozen(unsigned long) --> void", "newbFrozen"_a);
		cl.def("GetbIgnoreSyncing", (unsigned long (RBActorWrapper::*)())& RBActorWrapper::GetbIgnoreSyncing, "C++: RBActorWrapper::GetbIgnoreSyncing() --> unsigned long");
		cl.def("SetbIgnoreSyncing", (void (RBActorWrapper::*)(unsigned long))& RBActorWrapper::SetbIgnoreSyncing, "C++: RBActorWrapper::SetbIgnoreSyncing(unsigned long) --> void", "newbIgnoreSyncing"_a);
		cl.def("GetbPhysInitialized", (unsigned long (RBActorWrapper::*)())& RBActorWrapper::GetbPhysInitialized, "C++: RBActorWrapper::GetbPhysInitialized() --> unsigned long");
		cl.def("GetOldRBState", (struct RBState(RBActorWrapper::*)())& RBActorWrapper::GetOldRBState, "C++: RBActorWrapper::GetOldRBState() --> struct RBState");
		cl.def("SetOldRBState", (void (RBActorWrapper::*)(struct RBState))& RBActorWrapper::SetOldRBState, "C++: RBActorWrapper::SetOldRBState(struct RBState) --> void", "newOldRBState"_a);
		cl.def("GetRBState", (struct RBState(RBActorWrapper::*)())& RBActorWrapper::GetRBState, "C++: RBActorWrapper::GetRBState() --> struct RBState");
		cl.def("SetRBState", (void (RBActorWrapper::*)(struct RBState))& RBActorWrapper::SetRBState, "C++: RBActorWrapper::SetRBState(struct RBState) --> void", "newRBState"_a);
		cl.def("GetReplicatedRBState", (struct RBState(RBActorWrapper::*)())& RBActorWrapper::GetReplicatedRBState, "C++: RBActorWrapper::GetReplicatedRBState() --> struct RBState");
		cl.def("SetReplicatedRBState", (void (RBActorWrapper::*)(struct RBState))& RBActorWrapper::SetReplicatedRBState, "C++: RBActorWrapper::SetReplicatedRBState(struct RBState) --> void", "newReplicatedRBState"_a);
		cl.def("GetClientCorrectionRBState", (struct RBState(RBActorWrapper::*)())& RBActorWrapper::GetClientCorrectionRBState, "C++: RBActorWrapper::GetClientCorrectionRBState() --> struct RBState");
		cl.def("SetClientCorrectionRBState", (void (RBActorWrapper::*)(struct RBState))& RBActorWrapper::SetClientCorrectionRBState, "C++: RBActorWrapper::SetClientCorrectionRBState(struct RBState) --> void", "newClientCorrectionRBState"_a);
		cl.def("GetWorldContact", (struct WorldContactData(RBActorWrapper::*)())& RBActorWrapper::GetWorldContact, "C++: RBActorWrapper::GetWorldContact() --> struct WorldContactData");
		cl.def("SetWorldContact", (void (RBActorWrapper::*)(struct WorldContactData))& RBActorWrapper::SetWorldContact, "C++: RBActorWrapper::SetWorldContact(struct WorldContactData) --> void", "newWorldContact"_a);
		cl.def("GetSyncErrorLocation", (struct Vector(RBActorWrapper::*)())& RBActorWrapper::GetSyncErrorLocation, "C++: RBActorWrapper::GetSyncErrorLocation() --> struct Vector");
		cl.def("GetSyncErrorAngle", (float (RBActorWrapper::*)())& RBActorWrapper::GetSyncErrorAngle, "C++: RBActorWrapper::GetSyncErrorAngle() --> float");
		cl.def("GetSyncErrorAxis", (struct Vector(RBActorWrapper::*)())& RBActorWrapper::GetSyncErrorAxis, "C++: RBActorWrapper::GetSyncErrorAxis() --> struct Vector");
		cl.def("GetFXActorArchetype", (class FXActorWrapper(RBActorWrapper::*)())& RBActorWrapper::GetFXActorArchetype, "C++: RBActorWrapper::GetFXActorArchetype() --> class FXActorWrapper");
		cl.def("SetFXActorArchetype", (void (RBActorWrapper::*)(class FXActorWrapper))& RBActorWrapper::SetFXActorArchetype, "C++: RBActorWrapper::SetFXActorArchetype(class FXActorWrapper) --> void", "newFXActorArchetype"_a);
		cl.def("GetFXActor", (class FXActorWrapper(RBActorWrapper::*)())& RBActorWrapper::GetFXActor, "C++: RBActorWrapper::GetFXActor() --> class FXActorWrapper");
		cl.def("SetFXActor", (void (RBActorWrapper::*)(class FXActorWrapper))& RBActorWrapper::SetFXActor, "C++: RBActorWrapper::SetFXActor(class FXActorWrapper) --> void", "newFXActor"_a);
		cl.def("GetLastRBCollisionsFrame", (int (RBActorWrapper::*)())& RBActorWrapper::GetLastRBCollisionsFrame, "C++: RBActorWrapper::GetLastRBCollisionsFrame() --> int");
		cl.def("GetWeldedActor", (class RBActorWrapper(RBActorWrapper::*)())& RBActorWrapper::GetWeldedActor, "C++: RBActorWrapper::GetWeldedActor() --> class RBActorWrapper");
		cl.def("GetWeldedTo", (class RBActorWrapper(RBActorWrapper::*)())& RBActorWrapper::GetWeldedTo, "C++: RBActorWrapper::GetWeldedTo() --> class RBActorWrapper");
		cl.def("GetPreWeldMass", (float (RBActorWrapper::*)())& RBActorWrapper::GetPreWeldMass, "C++: RBActorWrapper::GetPreWeldMass() --> float");
		cl.def("SetMass", (void (RBActorWrapper::*)(float))& RBActorWrapper::SetMass, "C++: RBActorWrapper::SetMass(float) --> void", "NewMass"_a);
		cl.def("SetConstrained3D", (void (RBActorWrapper::*)(struct Vector&, struct Vector&, struct Vector&, struct Vector&))& RBActorWrapper::SetConstrained3D, "C++: RBActorWrapper::SetConstrained3D(struct Vector &, struct Vector &, struct Vector &, struct Vector &) --> void", "LinearLower"_a, "LinearUpper"_a, "AngularLower"_a, "AngularUpper"_a);
		cl.def("SetConstrained2D", (void (RBActorWrapper::*)(unsigned long))& RBActorWrapper::SetConstrained2D, "C++: RBActorWrapper::SetConstrained2D(unsigned long) --> void", "bConstrain2D"_a);
		cl.def("SetPhysicsState", (void (RBActorWrapper::*)(struct RBState&))& RBActorWrapper::SetPhysicsState, "C++: RBActorWrapper::SetPhysicsState(struct RBState &) --> void", "NewState"_a);
		cl.def("SetFrozen", (void (RBActorWrapper::*)(unsigned long))& RBActorWrapper::SetFrozen, "C++: RBActorWrapper::SetFrozen(unsigned long) --> void", "bEnabled"_a);
		cl.def("SetMaxAngularSpeed2", (void (RBActorWrapper::*)(float))& RBActorWrapper::SetMaxAngularSpeed2, "C++: RBActorWrapper::SetMaxAngularSpeed2(float) --> void", "NewMaxSpeed"_a);
		cl.def("SetMaxLinearSpeed2", (void (RBActorWrapper::*)(float))& RBActorWrapper::SetMaxLinearSpeed2, "C++: RBActorWrapper::SetMaxLinearSpeed2(float) --> void", "NewMaxSpeed"_a);
		cl.def("AddTorque", (void (RBActorWrapper::*)(struct Vector&, unsigned char))& RBActorWrapper::AddTorque, "C++: RBActorWrapper::AddTorque(struct Vector &, unsigned char) --> void", "Torque"_a, "ForceMode"_a);
		cl.def("AddForce", (void (RBActorWrapper::*)(struct Vector&, unsigned char))& RBActorWrapper::AddForce, "C++: RBActorWrapper::AddForce(struct Vector &, unsigned char) --> void", "Force"_a, "ForceMode"_a);
		cl.def("UnWeldRBActor", (void (RBActorWrapper::*)(class RBActorWrapper))& RBActorWrapper::UnWeldRBActor, "C++: RBActorWrapper::UnWeldRBActor(class RBActorWrapper) --> void", "Other"_a);
		cl.def("WeldRBActor2", (void (RBActorWrapper::*)(class RBActorWrapper, struct Vector&, struct Rotator&))& RBActorWrapper::WeldRBActor2, "C++: RBActorWrapper::WeldRBActor2(class RBActorWrapper, struct Vector &, struct Rotator &) --> void", "Other"_a, "WeldOffset"_a, "WeldRotation"_a);
		cl.def("ReInitRBPhys", (void (RBActorWrapper::*)())& RBActorWrapper::ReInitRBPhys, "C++: RBActorWrapper::ReInitRBPhys() --> void");
		cl.def("TerminateRBPhys", (void (RBActorWrapper::*)())& RBActorWrapper::TerminateRBPhys, "C++: RBActorWrapper::TerminateRBPhys() --> void");
		cl.def("GetCurrentRBLocation", (struct Vector(RBActorWrapper::*)())& RBActorWrapper::GetCurrentRBLocation, "C++: RBActorWrapper::GetCurrentRBLocation() --> struct Vector");
		cl.def("GetCurrentRBState", (struct RBState(RBActorWrapper::*)())& RBActorWrapper::GetCurrentRBState, "C++: RBActorWrapper::GetCurrentRBState() --> struct RBState");
		cl.def("GetPhysicsFrame", (int (RBActorWrapper::*)())& RBActorWrapper::GetPhysicsFrame, "C++: RBActorWrapper::GetPhysicsFrame() --> int");
		cl.def("GetPhysicsTime", (float (RBActorWrapper::*)())& RBActorWrapper::GetPhysicsTime, "C++: RBActorWrapper::GetPhysicsTime() --> float");
		cl.def("InitAk", (void (RBActorWrapper::*)())& RBActorWrapper::InitAk, "C++: RBActorWrapper::InitAk() --> void");
		cl.def("eventPreBeginPlay", (void (RBActorWrapper::*)())& RBActorWrapper::eventPreBeginPlay, "C++: RBActorWrapper::eventPreBeginPlay() --> void");
	}
	{ // VehicleWrapper file: line:15
		pybind11::class_<VehicleWrapper, std::shared_ptr<VehicleWrapper>, RBActorWrapper> cl(M, "VehicleWrapper");

		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](VehicleWrapper const& o) { return new VehicleWrapper(o); }));
		cl.def("assign", (class VehicleWrapper& (VehicleWrapper::*)(class VehicleWrapper)) & VehicleWrapper::operator=, "C++: VehicleWrapper::operator=(class VehicleWrapper) --> class VehicleWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetVehicleSim", (class VehicleSimWrapper(VehicleWrapper::*)()) & VehicleWrapper::GetVehicleSim, "C++: VehicleWrapper::GetVehicleSim() --> class VehicleSimWrapper");
		cl.def("SetVehicleSim", (void (VehicleWrapper::*)(class VehicleSimWrapper)) & VehicleWrapper::SetVehicleSim, "C++: VehicleWrapper::SetVehicleSim(class VehicleSimWrapper) --> void", "newVehicleSim"_a);
		cl.def("GetStickyForce", (struct StickyForceData(VehicleWrapper::*)()) & VehicleWrapper::GetStickyForce, "C++: VehicleWrapper::GetStickyForce() --> struct StickyForceData");
		cl.def("SetStickyForce", (void (VehicleWrapper::*)(struct StickyForceData)) & VehicleWrapper::SetStickyForce, "C++: VehicleWrapper::SetStickyForce(struct StickyForceData) --> void", "newStickyForce"_a);
		cl.def("GetbDriving", (unsigned long (VehicleWrapper::*)()) & VehicleWrapper::GetbDriving, "C++: VehicleWrapper::GetbDriving() --> unsigned long");
		cl.def("SetbDriving", (void (VehicleWrapper::*)(unsigned long)) & VehicleWrapper::SetbDriving, "C++: VehicleWrapper::SetbDriving(unsigned long) --> void", "newbDriving"_a);
		cl.def("GetbReplicatedHandbrake", (unsigned long (VehicleWrapper::*)()) & VehicleWrapper::GetbReplicatedHandbrake, "C++: VehicleWrapper::GetbReplicatedHandbrake() --> unsigned long");
		cl.def("SetbReplicatedHandbrake", (void (VehicleWrapper::*)(unsigned long)) & VehicleWrapper::SetbReplicatedHandbrake, "C++: VehicleWrapper::SetbReplicatedHandbrake(unsigned long) --> void", "newbReplicatedHandbrake"_a);
		cl.def("GetbJumped", (unsigned long (VehicleWrapper::*)()) & VehicleWrapper::GetbJumped, "C++: VehicleWrapper::GetbJumped() --> unsigned long");
		cl.def("SetbJumped", (void (VehicleWrapper::*)(unsigned long)) & VehicleWrapper::SetbJumped, "C++: VehicleWrapper::SetbJumped(unsigned long) --> void", "newbJumped"_a);
		cl.def("GetbDoubleJumped", (unsigned long (VehicleWrapper::*)()) & VehicleWrapper::GetbDoubleJumped, "C++: VehicleWrapper::GetbDoubleJumped() --> unsigned long");
		cl.def("SetbDoubleJumped", (void (VehicleWrapper::*)(unsigned long)) & VehicleWrapper::SetbDoubleJumped, "C++: VehicleWrapper::SetbDoubleJumped(unsigned long) --> void", "newbDoubleJumped"_a);
		cl.def("GetbOnGround", (unsigned long (VehicleWrapper::*)()) & VehicleWrapper::GetbOnGround, "C++: VehicleWrapper::GetbOnGround() --> unsigned long");
		cl.def("SetbOnGround", (void (VehicleWrapper::*)(unsigned long)) & VehicleWrapper::SetbOnGround, "C++: VehicleWrapper::SetbOnGround(unsigned long) --> void", "newbOnGround"_a);
		cl.def("GetbSuperSonic", (unsigned long (VehicleWrapper::*)()) & VehicleWrapper::GetbSuperSonic, "C++: VehicleWrapper::GetbSuperSonic() --> unsigned long");
		cl.def("SetbSuperSonic", (void (VehicleWrapper::*)(unsigned long)) & VehicleWrapper::SetbSuperSonic, "C++: VehicleWrapper::SetbSuperSonic(unsigned long) --> void", "newbSuperSonic"_a);
		cl.def("GetbPodiumMode", (unsigned long (VehicleWrapper::*)()) & VehicleWrapper::GetbPodiumMode, "C++: VehicleWrapper::GetbPodiumMode() --> unsigned long");
		cl.def("SetbPodiumMode", (void (VehicleWrapper::*)(unsigned long)) & VehicleWrapper::SetbPodiumMode, "C++: VehicleWrapper::SetbPodiumMode(unsigned long) --> void", "newbPodiumMode"_a);
		cl.def("GetInput", (struct ControllerInput(VehicleWrapper::*)()) & VehicleWrapper::GetInput, "C++: VehicleWrapper::GetInput() --> struct ControllerInput");
		cl.def("SetInput", (void (VehicleWrapper::*)(struct ControllerInput)) & VehicleWrapper::SetInput, "C++: VehicleWrapper::SetInput(struct ControllerInput) --> void", "newInput"_a);
		cl.def("GetReplicatedThrottle", (unsigned char (VehicleWrapper::*)()) & VehicleWrapper::GetReplicatedThrottle, "C++: VehicleWrapper::GetReplicatedThrottle() --> unsigned char");
		cl.def("SetReplicatedThrottle", (void (VehicleWrapper::*)(unsigned char)) & VehicleWrapper::SetReplicatedThrottle, "C++: VehicleWrapper::SetReplicatedThrottle(unsigned char) --> void", "newReplicatedThrottle"_a);
		cl.def("GetReplicatedSteer", (unsigned char (VehicleWrapper::*)()) & VehicleWrapper::GetReplicatedSteer, "C++: VehicleWrapper::GetReplicatedSteer() --> unsigned char");
		cl.def("SetReplicatedSteer", (void (VehicleWrapper::*)(unsigned char)) & VehicleWrapper::SetReplicatedSteer, "C++: VehicleWrapper::SetReplicatedSteer(unsigned char) --> void", "newReplicatedSteer"_a);
		cl.def("GetPlayerController", (class PlayerControllerWrapper(VehicleWrapper::*)()) & VehicleWrapper::GetPlayerController, "C++: VehicleWrapper::GetPlayerController() --> class PlayerControllerWrapper");
		cl.def("SetPlayerController", (void (VehicleWrapper::*)(class PlayerControllerWrapper)) & VehicleWrapper::SetPlayerController, "C++: VehicleWrapper::SetPlayerController(class PlayerControllerWrapper) --> void", "newPlayerController"_a);
		cl.def("GetPRI", (class PriWrapper(VehicleWrapper::*)()) & VehicleWrapper::GetPRI, "C++: VehicleWrapper::GetPRI() --> class PriWrapper");
		cl.def("SetPRI", (void (VehicleWrapper::*)(class PriWrapper)) & VehicleWrapper::SetPRI, "C++: VehicleWrapper::SetPRI(class PriWrapper) --> void", "newPRI"_a);
		cl.def("GetVehicleUpdateTag", (int (VehicleWrapper::*)()) & VehicleWrapper::GetVehicleUpdateTag, "C++: VehicleWrapper::GetVehicleUpdateTag() --> int");
		cl.def("SetVehicleUpdateTag", (void (VehicleWrapper::*)(int)) & VehicleWrapper::SetVehicleUpdateTag, "C++: VehicleWrapper::SetVehicleUpdateTag(int) --> void", "newVehicleUpdateTag"_a);
		cl.def("GetLocalCollisionOffset", (struct Vector(VehicleWrapper::*)()) & VehicleWrapper::GetLocalCollisionOffset, "C++: VehicleWrapper::GetLocalCollisionOffset() --> struct Vector");
		cl.def("SetLocalCollisionOffset", (void (VehicleWrapper::*)(struct Vector)) & VehicleWrapper::SetLocalCollisionOffset, "C++: VehicleWrapper::SetLocalCollisionOffset(struct Vector) --> void", "newLocalCollisionOffset"_a);
		cl.def("GetLocalCollisionExtent", (struct Vector(VehicleWrapper::*)()) & VehicleWrapper::GetLocalCollisionExtent, "C++: VehicleWrapper::GetLocalCollisionExtent() --> struct Vector");
		cl.def("SetLocalCollisionExtent", (void (VehicleWrapper::*)(struct Vector)) & VehicleWrapper::SetLocalCollisionExtent, "C++: VehicleWrapper::SetLocalCollisionExtent(struct Vector) --> void", "newLocalCollisionExtent"_a);
		cl.def("GetLastBallTouchFrame", (int (VehicleWrapper::*)()) & VehicleWrapper::GetLastBallTouchFrame, "C++: VehicleWrapper::GetLastBallTouchFrame() --> int");
		cl.def("SetLastBallTouchFrame", (void (VehicleWrapper::*)(int)) & VehicleWrapper::SetLastBallTouchFrame, "C++: VehicleWrapper::SetLastBallTouchFrame(int) --> void", "newLastBallTouchFrame"_a);
		cl.def("GetLastBallImpactFrame", (int (VehicleWrapper::*)()) & VehicleWrapper::GetLastBallImpactFrame, "C++: VehicleWrapper::GetLastBallImpactFrame() --> int");
		cl.def("SetLastBallImpactFrame", (void (VehicleWrapper::*)(int)) & VehicleWrapper::SetLastBallImpactFrame, "C++: VehicleWrapper::SetLastBallImpactFrame(int) --> void", "newLastBallImpactFrame"_a);
		cl.def("GetBoostComponent", (class BoostWrapper(VehicleWrapper::*)()) & VehicleWrapper::GetBoostComponent, "C++: VehicleWrapper::GetBoostComponent() --> class BoostWrapper");
		cl.def("GetDodgeComponent", (class DodgeComponentWrapper(VehicleWrapper::*)()) & VehicleWrapper::GetDodgeComponent, "C++: VehicleWrapper::GetDodgeComponent() --> class DodgeComponentWrapper");
		cl.def("GetAirControlComponent", (class AirControlComponentWrapper(VehicleWrapper::*)()) & VehicleWrapper::GetAirControlComponent, "C++: VehicleWrapper::GetAirControlComponent() --> class AirControlComponentWrapper");
		cl.def("GetJumpComponent", (class JumpComponentWrapper(VehicleWrapper::*)()) & VehicleWrapper::GetJumpComponent, "C++: VehicleWrapper::GetJumpComponent() --> class JumpComponentWrapper");
		cl.def("GetDoubleJumpComponent", (class DoubleJumpComponentWrapper(VehicleWrapper::*)()) & VehicleWrapper::GetDoubleJumpComponent, "C++: VehicleWrapper::GetDoubleJumpComponent() --> class DoubleJumpComponentWrapper");
		cl.def("SetDoubleJumpComponent", (void (VehicleWrapper::*)(class DoubleJumpComponentWrapper)) & VehicleWrapper::SetDoubleJumpComponent, "C++: VehicleWrapper::SetDoubleJumpComponent(class DoubleJumpComponentWrapper) --> void", "newDoubleJumpComponent"_a);
		cl.def("GetTimeBelowSupersonicSpeed", (float (VehicleWrapper::*)()) & VehicleWrapper::GetTimeBelowSupersonicSpeed, "C++: VehicleWrapper::GetTimeBelowSupersonicSpeed() --> float");
		cl.def("SetTimeBelowSupersonicSpeed", (void (VehicleWrapper::*)(float)) & VehicleWrapper::SetTimeBelowSupersonicSpeed, "C++: VehicleWrapper::SetTimeBelowSupersonicSpeed(float) --> void", "newTimeBelowSupersonicSpeed"_a);
		cl.def("ForceNetPacketIfNearBall", (void (VehicleWrapper::*)()) & VehicleWrapper::ForceNetPacketIfNearBall, "C++: VehicleWrapper::ForceNetPacketIfNearBall() --> void");
		cl.def("IsCarWithinForwardEllipticalCone", (bool (VehicleWrapper::*)(class VehicleWrapper, float, float)) & VehicleWrapper::IsCarWithinForwardEllipticalCone, "C++: VehicleWrapper::IsCarWithinForwardEllipticalCone(class VehicleWrapper, float, float) --> bool", "OtherCar"_a, "YawAngleDegrees"_a, "PitchAngleDegrees"_a);
		cl.def("GetForwardSpeed", (float (VehicleWrapper::*)()) & VehicleWrapper::GetForwardSpeed, "C++: VehicleWrapper::GetForwardSpeed() --> float");
		cl.def("GetTimeOffGround", (float (VehicleWrapper::*)()) & VehicleWrapper::GetTimeOffGround, "C++: VehicleWrapper::GetTimeOffGround() --> float");
		cl.def("GetTimeOnGround", (float (VehicleWrapper::*)()) & VehicleWrapper::GetTimeOnGround, "C++: VehicleWrapper::GetTimeOnGround() --> float");
		cl.def("GetGroundNormal", (struct Vector(VehicleWrapper::*)()) & VehicleWrapper::GetGroundNormal, "C++: VehicleWrapper::GetGroundNormal() --> struct Vector");
		cl.def("IsOnWall", (bool (VehicleWrapper::*)()) & VehicleWrapper::IsOnWall, "C++: VehicleWrapper::IsOnWall() --> bool");
		cl.def("IsOnGround", (bool (VehicleWrapper::*)()) & VehicleWrapper::IsOnGround, "C++: VehicleWrapper::IsOnGround() --> bool");
		cl.def("GetNumWheelWorldContacts", (int (VehicleWrapper::*)()) & VehicleWrapper::GetNumWheelWorldContacts, "C++: VehicleWrapper::GetNumWheelWorldContacts() --> int");
		cl.def("GetNumWheelContacts", (int (VehicleWrapper::*)()) & VehicleWrapper::GetNumWheelContacts, "C++: VehicleWrapper::GetNumWheelContacts() --> int");
		cl.def("ZeroMovementVariables", (void (VehicleWrapper::*)()) & VehicleWrapper::ZeroMovementVariables, "C++: VehicleWrapper::ZeroMovementVariables() --> void");
		cl.def("eventSetVehicleInput", (void (VehicleWrapper::*)(struct ControllerInput&)) & VehicleWrapper::eventSetVehicleInput, "C++: VehicleWrapper::eventSetVehicleInput(struct ControllerInput &) --> void", "NewInput"_a);
		cl.def("EnablePodiumMode", (void (VehicleWrapper::*)()) & VehicleWrapper::EnablePodiumMode, "C++: VehicleWrapper::EnablePodiumMode() --> void");
		cl.def("SetDriving", (void (VehicleWrapper::*)(unsigned long)) & VehicleWrapper::SetDriving, "C++: VehicleWrapper::SetDriving(unsigned long) --> void", "bDrive"_a);
		cl.def("InitAudioParams", (void (VehicleWrapper::*)()) & VehicleWrapper::InitAudioParams, "C++: VehicleWrapper::InitAudioParams() --> void");
		cl.def("OnPRIChanged", (void (VehicleWrapper::*)()) & VehicleWrapper::OnPRIChanged, "C++: VehicleWrapper::OnPRIChanged() --> void");
		cl.def("OnControllerChanged", (void (VehicleWrapper::*)()) & VehicleWrapper::OnControllerChanged, "C++: VehicleWrapper::OnControllerChanged() --> void");
		cl.def("UnPossessed", (void (VehicleWrapper::*)()) & VehicleWrapper::UnPossessed, "C++: VehicleWrapper::UnPossessed() --> void");
		cl.def("EventPRIChanged", (void (VehicleWrapper::*)(class VehicleWrapper)) & VehicleWrapper::EventPRIChanged, "C++: VehicleWrapper::EventPRIChanged(class VehicleWrapper) --> void", "Vehicle"_a);
	}
	{ // CarWrapper file: line:19
		pybind11::class_<CarWrapper, std::shared_ptr<CarWrapper>, VehicleWrapper> cl(M, "CarWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](CarWrapper const& o) { return new CarWrapper(o); }));
		cl.def("assign", (class CarWrapper& (CarWrapper::*)(class CarWrapper)) & CarWrapper::operator=, "C++: CarWrapper::operator=(class CarWrapper) --> class CarWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("IsBoostCheap", (bool (CarWrapper::*)()) & CarWrapper::IsBoostCheap, "C++: CarWrapper::IsBoostCheap() --> bool");
		cl.def("SetBoostCheap", (void (CarWrapper::*)(bool)) & CarWrapper::SetBoostCheap, "C++: CarWrapper::SetBoostCheap(bool) --> void", "b"_a);
		cl.def("SetCarRotation", (void (CarWrapper::*)(struct Rotator)) & CarWrapper::SetCarRotation, "C++: CarWrapper::SetCarRotation(struct Rotator) --> void", "rotation"_a);
		cl.def("ForceBoost", (void (CarWrapper::*)(bool)) & CarWrapper::ForceBoost, "C++: CarWrapper::ForceBoost(bool) --> void", "force"_a);
		cl.def("GetOwnerName", (std::string(CarWrapper::*)()) & CarWrapper::GetOwnerName, "C++: CarWrapper::GetOwnerName() --> std::string");
		cl.def("Unfreeze", (void (CarWrapper::*)()) & CarWrapper::Unfreeze, "C++: CarWrapper::Unfreeze() --> void");
		cl.def("GetInput", (struct ControllerInput(CarWrapper::*)()) & CarWrapper::GetInput, "C++: CarWrapper::GetInput() --> struct ControllerInput");
		cl.def("SetInput", (void (CarWrapper::*)(struct ControllerInput)) & CarWrapper::SetInput, "C++: CarWrapper::SetInput(struct ControllerInput) --> void", "input"_a);
		cl.def("Destroy", (void (CarWrapper::*)()) & CarWrapper::Destroy, "C++: CarWrapper::Destroy() --> void");
		cl.def("Demolish", (void (CarWrapper::*)()) & CarWrapper::Demolish, "C++: CarWrapper::Demolish() --> void");
		cl.def("GetLoadoutBody", (int (CarWrapper::*)()) & CarWrapper::GetLoadoutBody, "C++: CarWrapper::GetLoadoutBody() --> int");
		cl.def("GetDefaultCarComponents", (class ArrayWrapper<class CarComponentWrapper>(CarWrapper::*)()) & CarWrapper::GetDefaultCarComponents, "C++: CarWrapper::GetDefaultCarComponents() --> class ArrayWrapper<class CarComponentWrapper>");
		cl.def("GetFlipComponent", (class FlipCarComponentWrapper(CarWrapper::*)()) & CarWrapper::GetFlipComponent, "C++: CarWrapper::GetFlipComponent() --> class FlipCarComponentWrapper");
		cl.def("GetDemolishTarget", (unsigned char (CarWrapper::*)()) & CarWrapper::GetDemolishTarget, "C++: CarWrapper::GetDemolishTarget() --> unsigned char");
		cl.def("SetDemolishTarget", (void (CarWrapper::*)(unsigned char)) & CarWrapper::SetDemolishTarget, "C++: CarWrapper::SetDemolishTarget(unsigned char) --> void", "newDemolishTarget"_a);
		cl.def("GetDemolishSpeed", (unsigned char (CarWrapper::*)()) & CarWrapper::GetDemolishSpeed, "C++: CarWrapper::GetDemolishSpeed() --> unsigned char");
		cl.def("SetDemolishSpeed", (void (CarWrapper::*)(unsigned char)) & CarWrapper::SetDemolishSpeed, "C++: CarWrapper::SetDemolishSpeed(unsigned char) --> void", "newDemolishSpeed"_a);
		cl.def("GetbLoadoutSet", (unsigned long (CarWrapper::*)()) & CarWrapper::GetbLoadoutSet, "C++: CarWrapper::GetbLoadoutSet() --> unsigned long");
		cl.def("SetbLoadoutSet", (void (CarWrapper::*)(unsigned long)) & CarWrapper::SetbLoadoutSet, "C++: CarWrapper::SetbLoadoutSet(unsigned long) --> void", "newbLoadoutSet"_a);
		cl.def("GetbDemolishOnOpposingGround", (unsigned long (CarWrapper::*)()) & CarWrapper::GetbDemolishOnOpposingGround, "C++: CarWrapper::GetbDemolishOnOpposingGround() --> unsigned long");
		cl.def("SetbDemolishOnOpposingGround", (void (CarWrapper::*)(unsigned long)) & CarWrapper::SetbDemolishOnOpposingGround, "C++: CarWrapper::SetbDemolishOnOpposingGround(unsigned long) --> void", "newbDemolishOnOpposingGround"_a);
		cl.def("GetbWasOnOpposingGround", (unsigned long (CarWrapper::*)()) & CarWrapper::GetbWasOnOpposingGround, "C++: CarWrapper::GetbWasOnOpposingGround() --> unsigned long");
		cl.def("SetbWasOnOpposingGround", (void (CarWrapper::*)(unsigned long)) & CarWrapper::SetbWasOnOpposingGround, "C++: CarWrapper::SetbWasOnOpposingGround(unsigned long) --> void", "newbWasOnOpposingGround"_a);
		cl.def("GetbDemolishOnGoalZone", (unsigned long (CarWrapper::*)()) & CarWrapper::GetbDemolishOnGoalZone, "C++: CarWrapper::GetbDemolishOnGoalZone() --> unsigned long");
		cl.def("SetbDemolishOnGoalZone", (void (CarWrapper::*)(unsigned long)) & CarWrapper::SetbDemolishOnGoalZone, "C++: CarWrapper::SetbDemolishOnGoalZone(unsigned long) --> void", "newbDemolishOnGoalZone"_a);
		cl.def("GetbWasInGoalZone", (unsigned long (CarWrapper::*)()) & CarWrapper::GetbWasInGoalZone, "C++: CarWrapper::GetbWasInGoalZone() --> unsigned long");
		cl.def("SetbWasInGoalZone", (void (CarWrapper::*)(unsigned long)) & CarWrapper::SetbWasInGoalZone, "C++: CarWrapper::SetbWasInGoalZone(unsigned long) --> void", "newbWasInGoalZone"_a);
		cl.def("GetbOverrideHandbrakeOn", (unsigned long (CarWrapper::*)()) & CarWrapper::GetbOverrideHandbrakeOn, "C++: CarWrapper::GetbOverrideHandbrakeOn() --> unsigned long");
		cl.def("SetbOverrideHandbrakeOn", (void (CarWrapper::*)(unsigned long)) & CarWrapper::SetbOverrideHandbrakeOn, "C++: CarWrapper::SetbOverrideHandbrakeOn(unsigned long) --> void", "newbOverrideHandbrakeOn"_a);
		cl.def("GetbCollidesWithVehicles", (unsigned long (CarWrapper::*)()) & CarWrapper::GetbCollidesWithVehicles, "C++: CarWrapper::GetbCollidesWithVehicles() --> unsigned long");
		cl.def("SetbCollidesWithVehicles", (void (CarWrapper::*)(unsigned long)) & CarWrapper::SetbCollidesWithVehicles, "C++: CarWrapper::SetbCollidesWithVehicles(unsigned long) --> void", "newbCollidesWithVehicles"_a);
		cl.def("GetbOverrideBoostOn", (unsigned long (CarWrapper::*)()) & CarWrapper::GetbOverrideBoostOn, "C++: CarWrapper::GetbOverrideBoostOn() --> unsigned long");
		cl.def("SetbOverrideBoostOn", (void (CarWrapper::*)(unsigned long)) & CarWrapper::SetbOverrideBoostOn, "C++: CarWrapper::SetbOverrideBoostOn(unsigned long) --> void", "newbOverrideBoostOn"_a);
		cl.def("GetExitFXArchetype", (class FXActorWrapper(CarWrapper::*)()) & CarWrapper::GetExitFXArchetype, "C++: CarWrapper::GetExitFXArchetype() --> class FXActorWrapper");
		cl.def("SetExitFXArchetype", (void (CarWrapper::*)(class FXActorWrapper)) & CarWrapper::SetExitFXArchetype, "C++: CarWrapper::SetExitFXArchetype(class FXActorWrapper) --> void", "newExitFXArchetype"_a);
		cl.def("GetMaxTimeForDodge", (float (CarWrapper::*)()) & CarWrapper::GetMaxTimeForDodge, "C++: CarWrapper::GetMaxTimeForDodge() --> float");
		cl.def("SetMaxTimeForDodge", (void (CarWrapper::*)(float)) & CarWrapper::SetMaxTimeForDodge, "C++: CarWrapper::SetMaxTimeForDodge(float) --> void", "newMaxTimeForDodge"_a);
		cl.def("GetLastWheelsHitBallTime", (float (CarWrapper::*)()) & CarWrapper::GetLastWheelsHitBallTime, "C++: CarWrapper::GetLastWheelsHitBallTime() --> float");
		cl.def("SetLastWheelsHitBallTime", (void (CarWrapper::*)(float)) & CarWrapper::SetLastWheelsHitBallTime, "C++: CarWrapper::SetLastWheelsHitBallTime(float) --> void", "newLastWheelsHitBallTime"_a);
		cl.def("GetReplicatedCarScale", (float (CarWrapper::*)()) & CarWrapper::GetReplicatedCarScale, "C++: CarWrapper::GetReplicatedCarScale() --> float");
		cl.def("SetReplicatedCarScale", (void (CarWrapper::*)(float)) & CarWrapper::SetReplicatedCarScale, "C++: CarWrapper::SetReplicatedCarScale(float) --> void", "newReplicatedCarScale"_a);
		cl.def("GetBodyFXActor", (class FXActorWrapper(CarWrapper::*)()) & CarWrapper::GetBodyFXActor, "C++: CarWrapper::GetBodyFXActor() --> class FXActorWrapper");
		cl.def("SetBodyFXActor", (void (CarWrapper::*)(class FXActorWrapper)) & CarWrapper::SetBodyFXActor, "C++: CarWrapper::SetBodyFXActor(class FXActorWrapper) --> void", "newBodyFXActor"_a);
		cl.def("GetAttackerPRI", (class PriWrapper(CarWrapper::*)()) & CarWrapper::GetAttackerPRI, "C++: CarWrapper::GetAttackerPRI() --> class PriWrapper");
		cl.def("SetAttackerPRI", (void (CarWrapper::*)(class PriWrapper)) & CarWrapper::SetAttackerPRI, "C++: CarWrapper::SetAttackerPRI(class PriWrapper) --> void", "newAttackerPRI"_a);
		cl.def("GetMouseAccel", (struct Vector(CarWrapper::*)()) & CarWrapper::GetMouseAccel, "C++: CarWrapper::GetMouseAccel() --> struct Vector");
		cl.def("SetMouseAccel", (void (CarWrapper::*)(struct Vector)) & CarWrapper::SetMouseAccel, "C++: CarWrapper::SetMouseAccel(struct Vector) --> void", "newMouseAccel"_a);
		cl.def("GetMouseAirAccel", (struct Vector(CarWrapper::*)()) & CarWrapper::GetMouseAirAccel, "C++: CarWrapper::GetMouseAirAccel() --> struct Vector");
		cl.def("SetMouseAirAccel", (void (CarWrapper::*)(struct Vector)) & CarWrapper::SetMouseAirAccel, "C++: CarWrapper::SetMouseAirAccel(struct Vector) --> void", "newMouseAirAccel"_a);
		cl.def("GetAttachedPickup", (class RumblePickupComponentWrapper(CarWrapper::*)()) & CarWrapper::GetAttachedPickup, "C++: CarWrapper::GetAttachedPickup() --> class RumblePickupComponentWrapper");
		cl.def("SetAttachedPickup", (void (CarWrapper::*)(class RumblePickupComponentWrapper)) & CarWrapper::SetAttachedPickup, "C++: CarWrapper::SetAttachedPickup(class RumblePickupComponentWrapper) --> void", "newAttachedPickup"_a);
		cl.def("GetReplayFocusOffset", (struct Vector(CarWrapper::*)()) & CarWrapper::GetReplayFocusOffset, "C++: CarWrapper::GetReplayFocusOffset() --> struct Vector");
		cl.def("SetReplayFocusOffset", (void (CarWrapper::*)(struct Vector)) & CarWrapper::SetReplayFocusOffset, "C++: CarWrapper::SetReplayFocusOffset(struct Vector) --> void", "newReplayFocusOffset"_a);
		cl.def("GetAddedBallForceMultiplier", (float (CarWrapper::*)()) & CarWrapper::GetAddedBallForceMultiplier, "C++: CarWrapper::GetAddedBallForceMultiplier() --> float");
		cl.def("SetAddedBallForceMultiplier", (void (CarWrapper::*)(float)) & CarWrapper::SetAddedBallForceMultiplier, "C++: CarWrapper::SetAddedBallForceMultiplier(float) --> void", "newAddedBallForceMultiplier"_a);
		cl.def("GetAddedCarForceMultiplier", (float (CarWrapper::*)()) & CarWrapper::GetAddedCarForceMultiplier, "C++: CarWrapper::GetAddedCarForceMultiplier() --> float");
		cl.def("SetAddedCarForceMultiplier", (void (CarWrapper::*)(float)) & CarWrapper::SetAddedCarForceMultiplier, "C++: CarWrapper::SetAddedCarForceMultiplier(float) --> void", "newAddedCarForceMultiplier"_a);
		cl.def("GetGameEvent", (class GameEventWrapper(CarWrapper::*)()) & CarWrapper::GetGameEvent, "C++: CarWrapper::GetGameEvent() --> class GameEventWrapper");
		cl.def("SetGameEvent", (void (CarWrapper::*)(class GameEventWrapper)) & CarWrapper::SetGameEvent, "C++: CarWrapper::SetGameEvent(class GameEventWrapper) --> void", "newGameEvent"_a);
		cl.def("GetMaxDriveBackwardsSpeed", (float (CarWrapper::*)()) & CarWrapper::GetMaxDriveBackwardsSpeed, "C++: CarWrapper::GetMaxDriveBackwardsSpeed() --> float");
		cl.def("GetMaxDriveForwardSpeed", (float (CarWrapper::*)()) & CarWrapper::GetMaxDriveForwardSpeed, "C++: CarWrapper::GetMaxDriveForwardSpeed() --> float");
		cl.def("GetReplayFocusLocation", (struct Vector(CarWrapper::*)()) & CarWrapper::GetReplayFocusLocation, "C++: CarWrapper::GetReplayFocusLocation() --> struct Vector");
		cl.def("OnPickupChanged", (void (CarWrapper::*)(class RumblePickupComponentWrapper)) & CarWrapper::OnPickupChanged, "C++: CarWrapper::OnPickupChanged(class RumblePickupComponentWrapper) --> void", "InPickup"_a);
		cl.def("SetAttachedPickup2", (void (CarWrapper::*)(class RumblePickupComponentWrapper)) & CarWrapper::SetAttachedPickup2, "C++: CarWrapper::SetAttachedPickup2(class RumblePickupComponentWrapper) --> void", "InPickup"_a);
		cl.def("EnablePodiumMode", (void (CarWrapper::*)()) & CarWrapper::EnablePodiumMode, "C++: CarWrapper::EnablePodiumMode() --> void");
		cl.def("CopyPushFactorCurve", (void (CarWrapper::*)()) & CarWrapper::CopyPushFactorCurve, "C++: CarWrapper::CopyPushFactorCurve() --> void");
		cl.def("ClearAttacker", (void (CarWrapper::*)()) & CarWrapper::ClearAttacker, "C++: CarWrapper::ClearAttacker() --> void");
		cl.def("NotifyNewAttacker", (void (CarWrapper::*)(class PriWrapper)) & CarWrapper::NotifyNewAttacker, "C++: CarWrapper::NotifyNewAttacker(class PriWrapper) --> void", "Attacker"_a);
		cl.def("UpdateBallIndicator", (void (CarWrapper::*)()) & CarWrapper::UpdateBallIndicator, "C++: CarWrapper::UpdateBallIndicator() --> void");
		cl.def("eventOnSuperSonicChanged", (void (CarWrapper::*)()) & CarWrapper::eventOnSuperSonicChanged, "C++: CarWrapper::eventOnSuperSonicChanged() --> void");
		cl.def("eventOnGroundChanged", (void (CarWrapper::*)()) & CarWrapper::eventOnGroundChanged, "C++: CarWrapper::eventOnGroundChanged() --> void");
		cl.def("FellOutOfWorld", (void (CarWrapper::*)()) & CarWrapper::FellOutOfWorld, "C++: CarWrapper::FellOutOfWorld() --> void");
		cl.def("DemolishDestroyTimer", (void (CarWrapper::*)()) & CarWrapper::DemolishDestroyTimer, "C++: CarWrapper::DemolishDestroyTimer() --> void");
		cl.def("Demolish2", (void (CarWrapper::*)(class RBActorWrapper)) & CarWrapper::Demolish2, "C++: CarWrapper::Demolish2(class RBActorWrapper) --> void", "Demolisher"_a);
		cl.def("Teleport", (bool (CarWrapper::*)(struct Vector&, struct Rotator&, unsigned long, unsigned long, float)) & CarWrapper::Teleport, "C++: CarWrapper::Teleport(struct Vector &, struct Rotator &, unsigned long, unsigned long, float) --> bool", "SpawnLocation"_a, "SpawnRotation"_a, "bStopVelocity"_a, "bUpdateRotation"_a, "ExtraForce"_a);
		cl.def("OnJumpReleased", (void (CarWrapper::*)()) & CarWrapper::OnJumpReleased, "C++: CarWrapper::OnJumpReleased() --> void");
		cl.def("OnJumpPressed", (void (CarWrapper::*)()) & CarWrapper::OnJumpPressed, "C++: CarWrapper::OnJumpPressed() --> void");
		cl.def("eventSetVehicleInput", (void (CarWrapper::*)(struct ControllerInput&)) & CarWrapper::eventSetVehicleInput, "C++: CarWrapper::eventSetVehicleInput(struct ControllerInput &) --> void", "NewInput"_a);
		cl.def("CanDemolish", (bool (CarWrapper::*)(class CarWrapper)) & CarWrapper::CanDemolish, "C++: CarWrapper::CanDemolish(class CarWrapper) --> bool", "HitCar"_a);
		cl.def("ShouldDemolish", (bool (CarWrapper::*)(class CarWrapper, struct Vector&, struct Vector&, unsigned char*)) & CarWrapper::ShouldDemolish, "C++: CarWrapper::ShouldDemolish(class CarWrapper, struct Vector &, struct Vector &, unsigned char *) --> bool", "HitCar"_a, "HitLocation"_a, "HitNormal"_a, "Result"_a);
		cl.def("ApplyCarImpactForces", (unsigned char (CarWrapper::*)(class CarWrapper, struct Vector&, struct Vector&)) & CarWrapper::ApplyCarImpactForces, "C++: CarWrapper::ApplyCarImpactForces(class CarWrapper, struct Vector &, struct Vector &) --> unsigned char", "OtherCar"_a, "HitLocation"_a, "HitNormal"_a);
		cl.def("IsBumperHit", (bool (CarWrapper::*)(class CarWrapper)) & CarWrapper::IsBumperHit, "C++: CarWrapper::IsBumperHit(class CarWrapper) --> bool", "OtherCar"_a);
		cl.def("ApplyBallImpactForces", (void (CarWrapper::*)(class BallWrapper, struct Vector&)) & CarWrapper::ApplyBallImpactForces, "C++: CarWrapper::ApplyBallImpactForces(class BallWrapper, struct Vector &) --> void", "Ball"_a, "HitLocation"_a);
		cl.def("IsDodging", (bool (CarWrapper::*)()) & CarWrapper::IsDodging, "C++: CarWrapper::IsDodging() --> bool");
		cl.def("OnHitBall", (void (CarWrapper::*)(class BallWrapper, struct Vector&, struct Vector&)) & CarWrapper::OnHitBall, "C++: CarWrapper::OnHitBall(class BallWrapper, struct Vector &, struct Vector &) --> void", "Ball"_a, "HitLocation"_a, "HitNormal"_a);
		cl.def("AnyWheelTouchingGround", (bool (CarWrapper::*)()) & CarWrapper::AnyWheelTouchingGround, "C++: CarWrapper::AnyWheelTouchingGround() --> bool");
		cl.def("GiveCarComponent", (class CarComponentWrapper(CarWrapper::*)(class CarComponentWrapper, class PriWrapper)) & CarWrapper::GiveCarComponent, "C++: CarWrapper::GiveCarComponent(class CarComponentWrapper, class PriWrapper) --> class CarComponentWrapper", "ComponentArchetype"_a, "Activator"_a);
		cl.def("AddDefaultCarComponents", (void (CarWrapper::*)()) & CarWrapper::AddDefaultCarComponents, "C++: CarWrapper::AddDefaultCarComponents() --> void");
		cl.def("DetachPrimitiveComponent", (void (CarWrapper::*)(class PrimitiveComponentWrapper)) & CarWrapper::DetachPrimitiveComponent, "C++: CarWrapper::DetachPrimitiveComponent(class PrimitiveComponentWrapper) --> void", "Component"_a);
		cl.def("HandleWheelBallHit", (void (CarWrapper::*)(class WheelWrapper)) & CarWrapper::HandleWheelBallHit, "C++: CarWrapper::HandleWheelBallHit(class WheelWrapper) --> void", "Wheel"_a);
		cl.def("RespawnInPlace", (void (CarWrapper::*)()) & CarWrapper::RespawnInPlace, "C++: CarWrapper::RespawnInPlace() --> void");
		cl.def("SetCarScale", (void (CarWrapper::*)(float)) & CarWrapper::SetCarScale, "C++: CarWrapper::SetCarScale(float) --> void", "NewScale"_a);
		cl.def("OnClubColorsChanged", (void (CarWrapper::*)()) & CarWrapper::OnClubColorsChanged, "C++: CarWrapper::OnClubColorsChanged() --> void");
		cl.def("HandleTeamChanged", (void (CarWrapper::*)(class PriXWrapper)) & CarWrapper::HandleTeamChanged, "C++: CarWrapper::HandleTeamChanged(class PriXWrapper) --> void", "MyPRI"_a);
		cl.def("UpdateTeamLoadout", (bool (CarWrapper::*)()) & CarWrapper::UpdateTeamLoadout, "C++: CarWrapper::UpdateTeamLoadout() --> bool");
		cl.def("InitTeamPaint", (void (CarWrapper::*)()) & CarWrapper::InitTeamPaint, "C++: CarWrapper::InitTeamPaint() --> void");
		cl.def("GetLoadoutTeamIndex", (int (CarWrapper::*)()) & CarWrapper::GetLoadoutTeamIndex, "C++: CarWrapper::GetLoadoutTeamIndex() --> int");
		cl.def("GetPreviewTeamIndex", (int (CarWrapper::*)()) & CarWrapper::GetPreviewTeamIndex, "C++: CarWrapper::GetPreviewTeamIndex() --> int");
		cl.def("HasTeam", (bool (CarWrapper::*)()) & CarWrapper::HasTeam, "C++: CarWrapper::HasTeam() --> bool");
		cl.def("HandleLoadoutSelected", (void (CarWrapper::*)(class PriWrapper)) & CarWrapper::HandleLoadoutSelected, "C++: CarWrapper::HandleLoadoutSelected(class PriWrapper) --> void", "MyPRI"_a);
		cl.def("HandleGameEventChanged", (void (CarWrapper::*)(class PriWrapper)) & CarWrapper::HandleGameEventChanged, "C++: CarWrapper::HandleGameEventChanged(class PriWrapper) --> void", "MyPRI"_a);
		cl.def("OnPRIChanged", (void (CarWrapper::*)()) & CarWrapper::OnPRIChanged, "C++: CarWrapper::OnPRIChanged() --> void");
		cl.def("OnControllerChanged", (void (CarWrapper::*)()) & CarWrapper::OnControllerChanged, "C++: CarWrapper::OnControllerChanged() --> void");
	}
	{ // CanvasWrapper file:bakkesmod/wrappers/canvaswrapper.h line:6
		pybind11::class_<CanvasWrapper, std::shared_ptr<CanvasWrapper>> cl(M, "CanvasWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](CanvasWrapper const& o) { return new CanvasWrapper(o); }));
		cl.def("assign", (class CanvasWrapper& (CanvasWrapper::*)(class CanvasWrapper)) & CanvasWrapper::operator=, "C++: CanvasWrapper::operator=(class CanvasWrapper) --> class CanvasWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("SetPosition", (void (CanvasWrapper::*)(struct Vector2F)) & CanvasWrapper::SetPosition, "C++: CanvasWrapper::SetPosition(struct Vector2F) --> void", "pos"_a);
		cl.def("GetPositionFloat", (struct Vector2F(CanvasWrapper::*)()) & CanvasWrapper::GetPositionFloat, "C++: CanvasWrapper::GetPositionFloat() --> struct Vector2F");
		cl.def("SetColor", (void (CanvasWrapper::*)(char, char, char, char)) & CanvasWrapper::SetColor, "C++: CanvasWrapper::SetColor(char, char, char, char) --> void", "Red"_a, "Green"_a, "Blue"_a, "Alpha"_a);
		cl.def("DrawBox", (void (CanvasWrapper::*)(struct Vector2F)) & CanvasWrapper::DrawBox, "C++: CanvasWrapper::DrawBox(struct Vector2F) --> void", "size"_a);
		cl.def("FillBox", (void (CanvasWrapper::*)(struct Vector2F)) & CanvasWrapper::FillBox, "C++: CanvasWrapper::FillBox(struct Vector2F) --> void", "size"_a);
		cl.def("FillTriangle", (void (CanvasWrapper::*)(struct Vector2F, struct Vector2F, struct Vector2F, struct LinearColor)) & CanvasWrapper::FillTriangle, "C++: CanvasWrapper::FillTriangle(struct Vector2F, struct Vector2F, struct Vector2F, struct LinearColor) --> void", "p1"_a, "p2"_a, "p3"_a, "color"_a);
		cl.def("DrawString", (void (CanvasWrapper::*)(std::string)) & CanvasWrapper::DrawString, "C++: CanvasWrapper::DrawString(std::string) --> void", "text"_a);
		cl.def("DrawString", (void (CanvasWrapper::*)(std::string, float, float)) & CanvasWrapper::DrawString, "C++: CanvasWrapper::DrawString(std::string, float, float) --> void", "text"_a, "xScale"_a, "yScale"_a);
		cl.def("DrawLine", (void (CanvasWrapper::*)(struct Vector2F, struct Vector2F)) & CanvasWrapper::DrawLine, "C++: CanvasWrapper::DrawLine(struct Vector2F, struct Vector2F) --> void", "start"_a, "end"_a);
		cl.def("DrawLine", (void (CanvasWrapper::*)(struct Vector2F, struct Vector2F, float)) & CanvasWrapper::DrawLine, "C++: CanvasWrapper::DrawLine(struct Vector2F, struct Vector2F, float) --> void", "start"_a, "end"_a, "width"_a);
		cl.def("DrawRect", (void (CanvasWrapper::*)(struct Vector2F, struct Vector2F)) & CanvasWrapper::DrawRect, "C++: CanvasWrapper::DrawRect(struct Vector2F, struct Vector2F) --> void", "start"_a, "end"_a);
		cl.def("SetPosition", (void (CanvasWrapper::*)(struct Vector2)) & CanvasWrapper::SetPosition, "C++: CanvasWrapper::SetPosition(struct Vector2) --> void", "pos"_a);
		cl.def("GetPosition", (struct Vector2(CanvasWrapper::*)()) & CanvasWrapper::GetPosition, "C++: CanvasWrapper::GetPosition() --> struct Vector2");
		cl.def("DrawBox", (void (CanvasWrapper::*)(struct Vector2)) & CanvasWrapper::DrawBox, "C++: CanvasWrapper::DrawBox(struct Vector2) --> void", "size"_a);
		cl.def("FillBox", (void (CanvasWrapper::*)(struct Vector2)) & CanvasWrapper::FillBox, "C++: CanvasWrapper::FillBox(struct Vector2) --> void", "size"_a);
		cl.def("FillTriangle", (void (CanvasWrapper::*)(struct Vector2, struct Vector2, struct Vector2, struct LinearColor)) & CanvasWrapper::FillTriangle, "C++: CanvasWrapper::FillTriangle(struct Vector2, struct Vector2, struct Vector2, struct LinearColor) --> void", "p1"_a, "p2"_a, "p3"_a, "color"_a);
		cl.def("DrawLine", (void (CanvasWrapper::*)(struct Vector2, struct Vector2)) & CanvasWrapper::DrawLine, "C++: CanvasWrapper::DrawLine(struct Vector2, struct Vector2) --> void", "start"_a, "end"_a);
		cl.def("DrawLine", (void (CanvasWrapper::*)(struct Vector2, struct Vector2, float)) & CanvasWrapper::DrawLine, "C++: CanvasWrapper::DrawLine(struct Vector2, struct Vector2, float) --> void", "start"_a, "end"_a, "width"_a);
		cl.def("DrawRect", (void (CanvasWrapper::*)(struct Vector2, struct Vector2)) & CanvasWrapper::DrawRect, "C++: CanvasWrapper::DrawRect(struct Vector2, struct Vector2) --> void", "start"_a, "end"_a);
		cl.def("Project", (struct Vector2(CanvasWrapper::*)(struct Vector)) & CanvasWrapper::Project, "C++: CanvasWrapper::Project(struct Vector) --> struct Vector2", "location"_a);
		cl.def("GetSize", (struct Vector2(CanvasWrapper::*)()) & CanvasWrapper::GetSize, "C++: CanvasWrapper::GetSize() --> struct Vector2");
	}
	{ // BaseCameraWrapper file:bakkesmod/wrappers/GameObject/BaseCameraWrapper.h line:7
		pybind11::class_<BaseCameraWrapper, std::shared_ptr<BaseCameraWrapper>, ActorWrapper> cl(M, "BaseCameraWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](BaseCameraWrapper const& o) { return new BaseCameraWrapper(o); }));
		cl.def("assign", (class BaseCameraWrapper& (BaseCameraWrapper::*)(class BaseCameraWrapper)) & BaseCameraWrapper::operator=, "C++: BaseCameraWrapper::operator=(class BaseCameraWrapper) --> class BaseCameraWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetDefaultFOV", (float (BaseCameraWrapper::*)()) & BaseCameraWrapper::GetDefaultFOV, "C++: BaseCameraWrapper::GetDefaultFOV() --> float");
		cl.def("SetDefaultFOV", (void (BaseCameraWrapper::*)(float)) & BaseCameraWrapper::SetDefaultFOV, "C++: BaseCameraWrapper::SetDefaultFOV(float) --> void", "newDefaultFOV"_a);
		cl.def("GetbLockedFOV", (unsigned long (BaseCameraWrapper::*)()) & BaseCameraWrapper::GetbLockedFOV, "C++: BaseCameraWrapper::GetbLockedFOV() --> unsigned long");
		cl.def("SetbLockedFOV", (void (BaseCameraWrapper::*)(unsigned long)) & BaseCameraWrapper::SetbLockedFOV, "C++: BaseCameraWrapper::SetbLockedFOV(unsigned long) --> void", "newbLockedFOV"_a);
		cl.def("GetbConstrainAspectRatio", (unsigned long (BaseCameraWrapper::*)()) & BaseCameraWrapper::GetbConstrainAspectRatio, "C++: BaseCameraWrapper::GetbConstrainAspectRatio() --> unsigned long");
		cl.def("SetbConstrainAspectRatio", (void (BaseCameraWrapper::*)(unsigned long)) & BaseCameraWrapper::SetbConstrainAspectRatio, "C++: BaseCameraWrapper::SetbConstrainAspectRatio(unsigned long) --> void", "newbConstrainAspectRatio"_a);
		cl.def("GetbEnableFading", (unsigned long (BaseCameraWrapper::*)()) & BaseCameraWrapper::GetbEnableFading, "C++: BaseCameraWrapper::GetbEnableFading() --> unsigned long");
		cl.def("SetbEnableFading", (void (BaseCameraWrapper::*)(unsigned long)) & BaseCameraWrapper::SetbEnableFading, "C++: BaseCameraWrapper::SetbEnableFading(unsigned long) --> void", "newbEnableFading"_a);
		cl.def("GetbFadeAudio", (unsigned long (BaseCameraWrapper::*)()) & BaseCameraWrapper::GetbFadeAudio, "C++: BaseCameraWrapper::GetbFadeAudio() --> unsigned long");
		cl.def("SetbFadeAudio", (void (BaseCameraWrapper::*)(unsigned long)) & BaseCameraWrapper::SetbFadeAudio, "C++: BaseCameraWrapper::SetbFadeAudio(unsigned long) --> void", "newbFadeAudio"_a);
		cl.def("GetbForceDisableTemporalAA", (unsigned long (BaseCameraWrapper::*)()) & BaseCameraWrapper::GetbForceDisableTemporalAA, "C++: BaseCameraWrapper::GetbForceDisableTemporalAA() --> unsigned long");
		cl.def("SetbForceDisableTemporalAA", (void (BaseCameraWrapper::*)(unsigned long)) & BaseCameraWrapper::SetbForceDisableTemporalAA, "C++: BaseCameraWrapper::SetbForceDisableTemporalAA(unsigned long) --> void", "newbForceDisableTemporalAA"_a);
		cl.def("GetbEnableColorScaling", (unsigned long (BaseCameraWrapper::*)()) & BaseCameraWrapper::GetbEnableColorScaling, "C++: BaseCameraWrapper::GetbEnableColorScaling() --> unsigned long");
		cl.def("SetbEnableColorScaling", (void (BaseCameraWrapper::*)(unsigned long)) & BaseCameraWrapper::SetbEnableColorScaling, "C++: BaseCameraWrapper::SetbEnableColorScaling(unsigned long) --> void", "newbEnableColorScaling"_a);
		cl.def("GetbEnableColorScaleInterp", (unsigned long (BaseCameraWrapper::*)()) & BaseCameraWrapper::GetbEnableColorScaleInterp, "C++: BaseCameraWrapper::GetbEnableColorScaleInterp() --> unsigned long");
		cl.def("SetbEnableColorScaleInterp", (void (BaseCameraWrapper::*)(unsigned long)) & BaseCameraWrapper::SetbEnableColorScaleInterp, "C++: BaseCameraWrapper::SetbEnableColorScaleInterp(unsigned long) --> void", "newbEnableColorScaleInterp"_a);
		cl.def("GetbUseClientSideCameraUpdates", (unsigned long (BaseCameraWrapper::*)()) & BaseCameraWrapper::GetbUseClientSideCameraUpdates, "C++: BaseCameraWrapper::GetbUseClientSideCameraUpdates() --> unsigned long");
		cl.def("SetbUseClientSideCameraUpdates", (void (BaseCameraWrapper::*)(unsigned long)) & BaseCameraWrapper::SetbUseClientSideCameraUpdates, "C++: BaseCameraWrapper::SetbUseClientSideCameraUpdates(unsigned long) --> void", "newbUseClientSideCameraUpdates"_a);
		cl.def("GetbDebugClientSideCamera", (unsigned long (BaseCameraWrapper::*)()) & BaseCameraWrapper::GetbDebugClientSideCamera, "C++: BaseCameraWrapper::GetbDebugClientSideCamera() --> unsigned long");
		cl.def("SetbDebugClientSideCamera", (void (BaseCameraWrapper::*)(unsigned long)) & BaseCameraWrapper::SetbDebugClientSideCamera, "C++: BaseCameraWrapper::SetbDebugClientSideCamera(unsigned long) --> void", "newbDebugClientSideCamera"_a);
		cl.def("GetbShouldSendClientSideCameraUpdate", (unsigned long (BaseCameraWrapper::*)()) & BaseCameraWrapper::GetbShouldSendClientSideCameraUpdate, "C++: BaseCameraWrapper::GetbShouldSendClientSideCameraUpdate() --> unsigned long");
		cl.def("SetbShouldSendClientSideCameraUpdate", (void (BaseCameraWrapper::*)(unsigned long)) & BaseCameraWrapper::SetbShouldSendClientSideCameraUpdate, "C++: BaseCameraWrapper::SetbShouldSendClientSideCameraUpdate(unsigned long) --> void", "newbShouldSendClientSideCameraUpdate"_a);
		cl.def("GetLockedFOV", (float (BaseCameraWrapper::*)()) & BaseCameraWrapper::GetLockedFOV, "C++: BaseCameraWrapper::GetLockedFOV() --> float");
		cl.def("SetLockedFOV", (void (BaseCameraWrapper::*)(float)) & BaseCameraWrapper::SetLockedFOV, "C++: BaseCameraWrapper::SetLockedFOV(float) --> void", "newLockedFOV"_a);
		cl.def("GetConstrainedAspectRatio", (float (BaseCameraWrapper::*)()) & BaseCameraWrapper::GetConstrainedAspectRatio, "C++: BaseCameraWrapper::GetConstrainedAspectRatio() --> float");
		cl.def("SetConstrainedAspectRatio", (void (BaseCameraWrapper::*)(float)) & BaseCameraWrapper::SetConstrainedAspectRatio, "C++: BaseCameraWrapper::SetConstrainedAspectRatio(float) --> void", "newConstrainedAspectRatio"_a);
		cl.def("GetDefaultAspectRatio", (float (BaseCameraWrapper::*)()) & BaseCameraWrapper::GetDefaultAspectRatio, "C++: BaseCameraWrapper::GetDefaultAspectRatio() --> float");
		cl.def("SetDefaultAspectRatio", (void (BaseCameraWrapper::*)(float)) & BaseCameraWrapper::SetDefaultAspectRatio, "C++: BaseCameraWrapper::SetDefaultAspectRatio(float) --> void", "newDefaultAspectRatio"_a);
		cl.def("GetOffAxisYawAngle", (float (BaseCameraWrapper::*)()) & BaseCameraWrapper::GetOffAxisYawAngle, "C++: BaseCameraWrapper::GetOffAxisYawAngle() --> float");
		cl.def("SetOffAxisYawAngle", (void (BaseCameraWrapper::*)(float)) & BaseCameraWrapper::SetOffAxisYawAngle, "C++: BaseCameraWrapper::SetOffAxisYawAngle(float) --> void", "newOffAxisYawAngle"_a);
		cl.def("GetOffAxisPitchAngle", (float (BaseCameraWrapper::*)()) & BaseCameraWrapper::GetOffAxisPitchAngle, "C++: BaseCameraWrapper::GetOffAxisPitchAngle() --> float");
		cl.def("SetOffAxisPitchAngle", (void (BaseCameraWrapper::*)(float)) & BaseCameraWrapper::SetOffAxisPitchAngle, "C++: BaseCameraWrapper::SetOffAxisPitchAngle(float) --> void", "newOffAxisPitchAngle"_a);
		cl.def("GetFadeColor", (struct UnrealColor(BaseCameraWrapper::*)()) & BaseCameraWrapper::GetFadeColor, "C++: BaseCameraWrapper::GetFadeColor() --> struct UnrealColor");
		cl.def("SetFadeColor", (void (BaseCameraWrapper::*)(struct UnrealColor)) & BaseCameraWrapper::SetFadeColor, "C++: BaseCameraWrapper::SetFadeColor(struct UnrealColor) --> void", "newFadeColor"_a);
		cl.def("GetFadeAmount", (float (BaseCameraWrapper::*)()) & BaseCameraWrapper::GetFadeAmount, "C++: BaseCameraWrapper::GetFadeAmount() --> float");
		cl.def("SetFadeAmount", (void (BaseCameraWrapper::*)(float)) & BaseCameraWrapper::SetFadeAmount, "C++: BaseCameraWrapper::SetFadeAmount(float) --> void", "newFadeAmount"_a);
		cl.def("GetCamOverridePostProcessAlpha", (float (BaseCameraWrapper::*)()) & BaseCameraWrapper::GetCamOverridePostProcessAlpha, "C++: BaseCameraWrapper::GetCamOverridePostProcessAlpha() --> float");
		cl.def("SetCamOverridePostProcessAlpha", (void (BaseCameraWrapper::*)(float)) & BaseCameraWrapper::SetCamOverridePostProcessAlpha, "C++: BaseCameraWrapper::SetCamOverridePostProcessAlpha(float) --> void", "newCamOverridePostProcessAlpha"_a);
		cl.def("GetColorScale", (struct Vector(BaseCameraWrapper::*)()) & BaseCameraWrapper::GetColorScale, "C++: BaseCameraWrapper::GetColorScale() --> struct Vector");
		cl.def("SetColorScale", (void (BaseCameraWrapper::*)(struct Vector)) & BaseCameraWrapper::SetColorScale, "C++: BaseCameraWrapper::SetColorScale(struct Vector) --> void", "newColorScale"_a);
		cl.def("GetDesiredColorScale", (struct Vector(BaseCameraWrapper::*)()) & BaseCameraWrapper::GetDesiredColorScale, "C++: BaseCameraWrapper::GetDesiredColorScale() --> struct Vector");
		cl.def("SetDesiredColorScale", (void (BaseCameraWrapper::*)(struct Vector)) & BaseCameraWrapper::SetDesiredColorScale, "C++: BaseCameraWrapper::SetDesiredColorScale(struct Vector) --> void", "newDesiredColorScale"_a);
		cl.def("GetOriginalColorScale", (struct Vector(BaseCameraWrapper::*)()) & BaseCameraWrapper::GetOriginalColorScale, "C++: BaseCameraWrapper::GetOriginalColorScale() --> struct Vector");
		cl.def("SetOriginalColorScale", (void (BaseCameraWrapper::*)(struct Vector)) & BaseCameraWrapper::SetOriginalColorScale, "C++: BaseCameraWrapper::SetOriginalColorScale(struct Vector) --> void", "newOriginalColorScale"_a);
		cl.def("GetColorScaleInterpDuration", (float (BaseCameraWrapper::*)()) & BaseCameraWrapper::GetColorScaleInterpDuration, "C++: BaseCameraWrapper::GetColorScaleInterpDuration() --> float");
		cl.def("SetColorScaleInterpDuration", (void (BaseCameraWrapper::*)(float)) & BaseCameraWrapper::SetColorScaleInterpDuration, "C++: BaseCameraWrapper::SetColorScaleInterpDuration(float) --> void", "newColorScaleInterpDuration"_a);
		cl.def("GetColorScaleInterpStartTime", (float (BaseCameraWrapper::*)()) & BaseCameraWrapper::GetColorScaleInterpStartTime, "C++: BaseCameraWrapper::GetColorScaleInterpStartTime() --> float");
		cl.def("SetColorScaleInterpStartTime", (void (BaseCameraWrapper::*)(float)) & BaseCameraWrapper::SetColorScaleInterpStartTime, "C++: BaseCameraWrapper::SetColorScaleInterpStartTime(float) --> void", "newColorScaleInterpStartTime"_a);
		cl.def("GetViewTarget", (struct ViewTarget(BaseCameraWrapper::*)()) & BaseCameraWrapper::GetViewTarget, "C++: BaseCameraWrapper::GetViewTarget() --> struct ViewTarget");
		cl.def("SetViewTarget", (void (BaseCameraWrapper::*)(struct ViewTarget)) & BaseCameraWrapper::SetViewTarget, "C++: BaseCameraWrapper::SetViewTarget(struct ViewTarget) --> void", "newViewTarget"_a);
		cl.def("GetPendingViewTarget", (struct ViewTarget(BaseCameraWrapper::*)()) & BaseCameraWrapper::GetPendingViewTarget, "C++: BaseCameraWrapper::GetPendingViewTarget() --> struct ViewTarget");
		cl.def("SetPendingViewTarget", (void (BaseCameraWrapper::*)(struct ViewTarget)) & BaseCameraWrapper::SetPendingViewTarget, "C++: BaseCameraWrapper::SetPendingViewTarget(struct ViewTarget) --> void", "newPendingViewTarget"_a);
		cl.def("GetBlendTimeToGo", (float (BaseCameraWrapper::*)()) & BaseCameraWrapper::GetBlendTimeToGo, "C++: BaseCameraWrapper::GetBlendTimeToGo() --> float");
		cl.def("SetBlendTimeToGo", (void (BaseCameraWrapper::*)(float)) & BaseCameraWrapper::SetBlendTimeToGo, "C++: BaseCameraWrapper::SetBlendTimeToGo(float) --> void", "newBlendTimeToGo"_a);
		cl.def("GetFreeCamDistance", (float (BaseCameraWrapper::*)()) & BaseCameraWrapper::GetFreeCamDistance, "C++: BaseCameraWrapper::GetFreeCamDistance() --> float");
		cl.def("SetFreeCamDistance", (void (BaseCameraWrapper::*)(float)) & BaseCameraWrapper::SetFreeCamDistance, "C++: BaseCameraWrapper::SetFreeCamDistance(float) --> void", "newFreeCamDistance"_a);
		cl.def("GetFreeCamOffset", (struct Vector(BaseCameraWrapper::*)()) & BaseCameraWrapper::GetFreeCamOffset, "C++: BaseCameraWrapper::GetFreeCamOffset() --> struct Vector");
		cl.def("SetFreeCamOffset", (void (BaseCameraWrapper::*)(struct Vector)) & BaseCameraWrapper::SetFreeCamOffset, "C++: BaseCameraWrapper::SetFreeCamOffset(struct Vector) --> void", "newFreeCamOffset"_a);
		cl.def("GetFadeTime", (float (BaseCameraWrapper::*)()) & BaseCameraWrapper::GetFadeTime, "C++: BaseCameraWrapper::GetFadeTime() --> float");
		cl.def("SetFadeTime", (void (BaseCameraWrapper::*)(float)) & BaseCameraWrapper::SetFadeTime, "C++: BaseCameraWrapper::SetFadeTime(float) --> void", "newFadeTime"_a);
		cl.def("GetFadeTimeRemaining", (float (BaseCameraWrapper::*)()) & BaseCameraWrapper::GetFadeTimeRemaining, "C++: BaseCameraWrapper::GetFadeTimeRemaining() --> float");
		cl.def("SetFadeTimeRemaining", (void (BaseCameraWrapper::*)(float)) & BaseCameraWrapper::SetFadeTimeRemaining, "C++: BaseCameraWrapper::SetFadeTimeRemaining(float) --> void", "newFadeTimeRemaining"_a);
		cl.def("StopAllCameraAnims", (void (BaseCameraWrapper::*)(unsigned long)) & BaseCameraWrapper::StopAllCameraAnims, "C++: BaseCameraWrapper::StopAllCameraAnims(unsigned long) --> void", "bImmediate"_a);
		cl.def("ClearAllCameraShakes", (void (BaseCameraWrapper::*)()) & BaseCameraWrapper::ClearAllCameraShakes, "C++: BaseCameraWrapper::ClearAllCameraShakes() --> void");
		cl.def("CalcRadialShakeScale", (float (BaseCameraWrapper::*)(class BaseCameraWrapper, struct Vector&, float, float, float)) & BaseCameraWrapper::CalcRadialShakeScale, "C++: BaseCameraWrapper::CalcRadialShakeScale(class BaseCameraWrapper, struct Vector &, float, float, float) --> float", "Cam"_a, "Epicenter"_a, "InnerRadius"_a, "OuterRadius"_a, "Falloff"_a);
		cl.def("ClearCameraLensEffects", (void (BaseCameraWrapper::*)()) & BaseCameraWrapper::ClearCameraLensEffects, "C++: BaseCameraWrapper::ClearCameraLensEffects() --> void");
		cl.def("ApplyAudioFade", (void (BaseCameraWrapper::*)()) & BaseCameraWrapper::ApplyAudioFade, "C++: BaseCameraWrapper::ApplyAudioFade() --> void");
		cl.def("UpdateFade", (void (BaseCameraWrapper::*)(float)) & BaseCameraWrapper::UpdateFade, "C++: BaseCameraWrapper::UpdateFade(float) --> void", "DeltaTime"_a);
		cl.def("DoUpdateCamera", (void (BaseCameraWrapper::*)(float)) & BaseCameraWrapper::DoUpdateCamera, "C++: BaseCameraWrapper::DoUpdateCamera(float) --> void", "DeltaTime"_a);
		cl.def("eventUpdateCamera", (void (BaseCameraWrapper::*)(float)) & BaseCameraWrapper::eventUpdateCamera, "C++: BaseCameraWrapper::eventUpdateCamera(float) --> void", "DeltaTime"_a);
		cl.def("SetDesiredColorScale2", (void (BaseCameraWrapper::*)(struct Vector&, float)) & BaseCameraWrapper::SetDesiredColorScale2, "C++: BaseCameraWrapper::SetDesiredColorScale2(struct Vector &, float) --> void", "NewColorScale"_a, "InterpTime"_a);
		cl.def("GetCameraRotation", (struct Rotator(BaseCameraWrapper::*)()) & BaseCameraWrapper::GetCameraRotation, "C++: BaseCameraWrapper::GetCameraRotation() --> struct Rotator");
		cl.def("SetFOV", (void (BaseCameraWrapper::*)(float)) & BaseCameraWrapper::SetFOV, "C++: BaseCameraWrapper::SetFOV(float) --> void", "NewFOV"_a);
		cl.def("GetFOVAngle", (float (BaseCameraWrapper::*)()) & BaseCameraWrapper::GetFOVAngle, "C++: BaseCameraWrapper::GetFOVAngle() --> float");
		cl.def("eventDestroyed", (void (BaseCameraWrapper::*)()) & BaseCameraWrapper::eventDestroyed, "C++: BaseCameraWrapper::eventDestroyed() --> void");
		cl.def("PostBeginPlay", (void (BaseCameraWrapper::*)()) & BaseCameraWrapper::PostBeginPlay, "C++: BaseCameraWrapper::PostBeginPlay() --> void");
	}
	{ // CameraXWrapper file: line:8
		pybind11::class_<CameraXWrapper, std::shared_ptr<CameraXWrapper>, BaseCameraWrapper> cl(M, "CameraXWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](CameraXWrapper const& o) { return new CameraXWrapper(o); }));
		cl.def("assign", (class CameraXWrapper& (CameraXWrapper::*)(class CameraXWrapper)) & CameraXWrapper::operator=, "C++: CameraXWrapper::operator=(class CameraXWrapper) --> class CameraXWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetPCDeltaRotation", (struct Rotator(CameraXWrapper::*)()) & CameraXWrapper::GetPCDeltaRotation, "C++: CameraXWrapper::GetPCDeltaRotation() --> struct Rotator");
		cl.def("SetPCDeltaRotation", (void (CameraXWrapper::*)(struct Rotator)) & CameraXWrapper::SetPCDeltaRotation, "C++: CameraXWrapper::SetPCDeltaRotation(struct Rotator) --> void", "newPCDeltaRotation"_a);
		cl.def("GetOldControllerRotation", (struct Rotator(CameraXWrapper::*)()) & CameraXWrapper::GetOldControllerRotation, "C++: CameraXWrapper::GetOldControllerRotation() --> struct Rotator");
		cl.def("SetOldControllerRotation", (void (CameraXWrapper::*)(struct Rotator)) & CameraXWrapper::SetOldControllerRotation, "C++: CameraXWrapper::SetOldControllerRotation(struct Rotator) --> void", "newOldControllerRotation"_a);
		cl.def("GetPCDeltaLocation", (struct Vector(CameraXWrapper::*)()) & CameraXWrapper::GetPCDeltaLocation, "C++: CameraXWrapper::GetPCDeltaLocation() --> struct Vector");
		cl.def("SetPCDeltaLocation", (void (CameraXWrapper::*)(struct Vector)) & CameraXWrapper::SetPCDeltaLocation, "C++: CameraXWrapper::SetPCDeltaLocation(struct Vector) --> void", "newPCDeltaLocation"_a);
		cl.def("GetOldControllerLocation", (struct Vector(CameraXWrapper::*)()) & CameraXWrapper::GetOldControllerLocation, "C++: CameraXWrapper::GetOldControllerLocation() --> struct Vector");
		cl.def("SetOldControllerLocation", (void (CameraXWrapper::*)(struct Vector)) & CameraXWrapper::SetOldControllerLocation, "C++: CameraXWrapper::SetOldControllerLocation(struct Vector) --> void", "newOldControllerLocation"_a);
		cl.def("GetShakeLocationOffset", (struct Vector(CameraXWrapper::*)()) & CameraXWrapper::GetShakeLocationOffset, "C++: CameraXWrapper::GetShakeLocationOffset() --> struct Vector");
		cl.def("SetShakeLocationOffset", (void (CameraXWrapper::*)(struct Vector)) & CameraXWrapper::SetShakeLocationOffset, "C++: CameraXWrapper::SetShakeLocationOffset(struct Vector) --> void", "newShakeLocationOffset"_a);
		cl.def("GetShakeRotationOffset", (struct Rotator(CameraXWrapper::*)()) & CameraXWrapper::GetShakeRotationOffset, "C++: CameraXWrapper::GetShakeRotationOffset() --> struct Rotator");
		cl.def("SetShakeRotationOffset", (void (CameraXWrapper::*)(struct Rotator)) & CameraXWrapper::SetShakeRotationOffset, "C++: CameraXWrapper::SetShakeRotationOffset(struct Rotator) --> void", "newShakeRotationOffset"_a);
		cl.def("GetShakeFOVOffset", (float (CameraXWrapper::*)()) & CameraXWrapper::GetShakeFOVOffset, "C++: CameraXWrapper::GetShakeFOVOffset() --> float");
		cl.def("SetShakeFOVOffset", (void (CameraXWrapper::*)(float)) & CameraXWrapper::SetShakeFOVOffset, "C++: CameraXWrapper::SetShakeFOVOffset(float) --> void", "newShakeFOVOffset"_a);
		cl.def("GetStartFadeColor", (struct UnrealColor(CameraXWrapper::*)()) & CameraXWrapper::GetStartFadeColor, "C++: CameraXWrapper::GetStartFadeColor() --> struct UnrealColor");
		cl.def("SetStartFadeColor", (void (CameraXWrapper::*)(struct UnrealColor)) & CameraXWrapper::SetStartFadeColor, "C++: CameraXWrapper::SetStartFadeColor(struct UnrealColor) --> void", "newStartFadeColor"_a);
		cl.def("GetEndFadeColor", (struct UnrealColor(CameraXWrapper::*)()) & CameraXWrapper::GetEndFadeColor, "C++: CameraXWrapper::GetEndFadeColor() --> struct UnrealColor");
		cl.def("SetEndFadeColor", (void (CameraXWrapper::*)(struct UnrealColor)) & CameraXWrapper::SetEndFadeColor, "C++: CameraXWrapper::SetEndFadeColor(struct UnrealColor) --> void", "newEndFadeColor"_a);
		cl.def("GetClipOffset", (struct Vector(CameraXWrapper::*)()) & CameraXWrapper::GetClipOffset, "C++: CameraXWrapper::GetClipOffset() --> struct Vector");
		cl.def("SetClipOffset", (void (CameraXWrapper::*)(struct Vector)) & CameraXWrapper::SetClipOffset, "C++: CameraXWrapper::SetClipOffset(struct Vector) --> void", "newClipOffset"_a);
		cl.def("GetbDisableCameraShake", (unsigned long (CameraXWrapper::*)()) & CameraXWrapper::GetbDisableCameraShake, "C++: CameraXWrapper::GetbDisableCameraShake() --> unsigned long");
		cl.def("SetbDisableCameraShake", (void (CameraXWrapper::*)(unsigned long)) & CameraXWrapper::SetbDisableCameraShake, "C++: CameraXWrapper::SetbDisableCameraShake(unsigned long) --> void", "newbDisableCameraShake"_a);
		cl.def("GetbSnapNextTransition", (unsigned long (CameraXWrapper::*)()) & CameraXWrapper::GetbSnapNextTransition, "C++: CameraXWrapper::GetbSnapNextTransition() --> unsigned long");
		cl.def("SetbSnapNextTransition", (void (CameraXWrapper::*)(unsigned long)) & CameraXWrapper::SetbSnapNextTransition, "C++: CameraXWrapper::SetbSnapNextTransition(unsigned long) --> void", "newbSnapNextTransition"_a);
		cl.def("eventOnViewTargetChanged", (void (CameraXWrapper::*)()) & CameraXWrapper::eventOnViewTargetChanged, "C++: CameraXWrapper::eventOnViewTargetChanged() --> void");
		cl.def("IsTransitioning", (bool (CameraXWrapper::*)()) & CameraXWrapper::IsTransitioning, "C++: CameraXWrapper::IsTransitioning() --> bool");
		cl.def("SnapTransition", (void (CameraXWrapper::*)()) & CameraXWrapper::SnapTransition, "C++: CameraXWrapper::SnapTransition() --> void");
		cl.def("CopyFade", (void (CameraXWrapper::*)(class CameraXWrapper)) & CameraXWrapper::CopyFade, "C++: CameraXWrapper::CopyFade(class CameraXWrapper) --> void", "Other"_a);
		cl.def("UpdateFade", (void (CameraXWrapper::*)(float)) & CameraXWrapper::UpdateFade, "C++: CameraXWrapper::UpdateFade(float) --> void", "DeltaTime"_a);
		cl.def("eventUpdateCamera", (void (CameraXWrapper::*)(float)) & CameraXWrapper::eventUpdateCamera, "C++: CameraXWrapper::eventUpdateCamera(float) --> void", "DeltaTime"_a);
		cl.def("RemoveRoll", (struct Rotator(CameraXWrapper::*)(struct Rotator&)) & CameraXWrapper::RemoveRoll, "C++: CameraXWrapper::RemoveRoll(struct Rotator &) --> struct Rotator", "InRot"_a);
		cl.def("UpdateCameraState", (void (CameraXWrapper::*)()) & CameraXWrapper::UpdateCameraState, "C++: CameraXWrapper::UpdateCameraState() --> void");
		cl.def("InstanceCameraStates", (void (CameraXWrapper::*)()) & CameraXWrapper::InstanceCameraStates, "C++: CameraXWrapper::InstanceCameraStates() --> void");
		cl.def("OnLoadingMovieClosesd", (void (CameraXWrapper::*)()) & CameraXWrapper::OnLoadingMovieClosesd, "C++: CameraXWrapper::OnLoadingMovieClosesd() --> void");
		cl.def("eventPostBeginPlay", (void (CameraXWrapper::*)()) & CameraXWrapper::eventPostBeginPlay, "C++: CameraXWrapper::eventPostBeginPlay() --> void");
	}
	{ // CameraWrapper file:bakkesmod/wrappers/GameObject/CameraWrapper.h line:10
		pybind11::class_<CameraWrapper, std::shared_ptr<CameraWrapper>, CameraXWrapper> cl(M, "CameraWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](CameraWrapper const& o) { return new CameraWrapper(o); }));
		cl.def("assign", (class CameraWrapper& (CameraWrapper::*)(class CameraWrapper)) & CameraWrapper::operator=, "C++: CameraWrapper::operator=(class CameraWrapper) --> class CameraWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetLocation", (struct Vector(CameraWrapper::*)()) & CameraWrapper::GetLocation, "C++: CameraWrapper::GetLocation() --> struct Vector");
		cl.def("SetLocation", (void (CameraWrapper::*)(struct Vector)) & CameraWrapper::SetLocation, "C++: CameraWrapper::SetLocation(struct Vector) --> void", "location"_a);
		cl.def("GetRotation", (struct Rotator(CameraWrapper::*)()) & CameraWrapper::GetRotation, "C++: CameraWrapper::GetRotation() --> struct Rotator");
		cl.def("SetRotation", (void (CameraWrapper::*)(struct Rotator)) & CameraWrapper::SetRotation, "C++: CameraWrapper::SetRotation(struct Rotator) --> void", "rotation"_a);
		cl.def("GetCameraSettings", (struct ProfileCameraSettings(CameraWrapper::*)()) & CameraWrapper::GetCameraSettings, "C++: CameraWrapper::GetCameraSettings() --> struct ProfileCameraSettings");
		cl.def("SetCameraSettings", (void (CameraWrapper::*)(struct ProfileCameraSettings)) & CameraWrapper::SetCameraSettings, "C++: CameraWrapper::SetCameraSettings(struct ProfileCameraSettings) --> void", "settings"_a);
		cl.def("IsCameraShakeOn", (bool (CameraWrapper::*)()) & CameraWrapper::IsCameraShakeOn, "C++: CameraWrapper::IsCameraShakeOn() --> bool");
		cl.def("GetPOV", (struct POV(CameraWrapper::*)()) & CameraWrapper::GetPOV, "C++: CameraWrapper::GetPOV() --> struct POV");
		cl.def("SetPOV", (void (CameraWrapper::*)(struct POV)) & CameraWrapper::SetPOV, "C++: CameraWrapper::SetPOV(struct POV) --> void", "pov"_a);
		cl.def("SetFOV", (void (CameraWrapper::*)(float)) & CameraWrapper::SetFOV, "C++: CameraWrapper::SetFOV(float) --> void", "fov"_a);
		cl.def("GetFOV", (float (CameraWrapper::*)()) & CameraWrapper::GetFOV, "C++: CameraWrapper::GetFOV() --> float");
		cl.def("SetLockedFOV", (void (CameraWrapper::*)(bool)) & CameraWrapper::SetLockedFOV, "C++: CameraWrapper::SetLockedFOV(bool) --> void", "lock"_a);
		cl.def("GetCameraAsActor", (class ActorWrapper(CameraWrapper::*)()) & CameraWrapper::GetCameraAsActor, "C++: CameraWrapper::GetCameraAsActor() --> class ActorWrapper");
		cl.def("GetCameraState", (std::string(CameraWrapper::*)()) & CameraWrapper::GetCameraState, "C++: CameraWrapper::GetCameraState() --> std::string");
		cl.def("linterp", (struct Vector(CameraWrapper::*)(struct Vector, struct Vector, float, float)) & CameraWrapper::linterp, "C++: CameraWrapper::linterp(struct Vector, struct Vector, float, float) --> struct Vector", "start"_a, "end"_a, "elapsed"_a, "speed"_a);
		cl.def("GetSwivelFastSpeed", (float (CameraWrapper::*)()) & CameraWrapper::GetSwivelFastSpeed, "C++: CameraWrapper::GetSwivelFastSpeed() --> float");
		cl.def("SetSwivelFastSpeed", (void (CameraWrapper::*)(float)) & CameraWrapper::SetSwivelFastSpeed, "C++: CameraWrapper::SetSwivelFastSpeed(float) --> void", "newSwivelFastSpeed"_a);
		cl.def("GetSwivelDieRate", (float (CameraWrapper::*)()) & CameraWrapper::GetSwivelDieRate, "C++: CameraWrapper::GetSwivelDieRate() --> float");
		cl.def("SetSwivelDieRate", (void (CameraWrapper::*)(float)) & CameraWrapper::SetSwivelDieRate, "C++: CameraWrapper::SetSwivelDieRate(float) --> void", "newSwivelDieRate"_a);
		cl.def("GetCameraPresetSettings", (class StructArrayWrapper<struct ProfileCameraSettings>(CameraWrapper::*)()) & CameraWrapper::GetCameraPresetSettings, "C++: CameraWrapper::GetCameraPresetSettings() --> class StructArrayWrapper<struct ProfileCameraSettings>");
		cl.def("GetHorizontalSplitscreenHeightOffset", (float (CameraWrapper::*)()) & CameraWrapper::GetHorizontalSplitscreenHeightOffset, "C++: CameraWrapper::GetHorizontalSplitscreenHeightOffset() --> float");
		cl.def("SetHorizontalSplitscreenHeightOffset", (void (CameraWrapper::*)(float)) & CameraWrapper::SetHorizontalSplitscreenHeightOffset, "C++: CameraWrapper::SetHorizontalSplitscreenHeightOffset(float) --> void", "newHorizontalSplitscreenHeightOffset"_a);
		cl.def("GetHorizontalSplitscreenFOVOffset", (float (CameraWrapper::*)()) & CameraWrapper::GetHorizontalSplitscreenFOVOffset, "C++: CameraWrapper::GetHorizontalSplitscreenFOVOffset() --> float");
		cl.def("SetHorizontalSplitscreenFOVOffset", (void (CameraWrapper::*)(float)) & CameraWrapper::SetHorizontalSplitscreenFOVOffset, "C++: CameraWrapper::SetHorizontalSplitscreenFOVOffset(float) --> void", "newHorizontalSplitscreenFOVOffset"_a);
		cl.def("GetVerticalSplitscreenFOVOffset", (float (CameraWrapper::*)()) & CameraWrapper::GetVerticalSplitscreenFOVOffset, "C++: CameraWrapper::GetVerticalSplitscreenFOVOffset() --> float");
		cl.def("SetVerticalSplitscreenFOVOffset", (void (CameraWrapper::*)(float)) & CameraWrapper::SetVerticalSplitscreenFOVOffset, "C++: CameraWrapper::SetVerticalSplitscreenFOVOffset(float) --> void", "newVerticalSplitscreenFOVOffset"_a);
		cl.def("GetClipRate", (float (CameraWrapper::*)()) & CameraWrapper::GetClipRate, "C++: CameraWrapper::GetClipRate() --> float");
		cl.def("SetClipRate", (void (CameraWrapper::*)(float)) & CameraWrapper::SetClipRate, "C++: CameraWrapper::SetClipRate(float) --> void", "newClipRate"_a);
		cl.def("GetCurrentSwivel", (struct Rotator(CameraWrapper::*)()) & CameraWrapper::GetCurrentSwivel, "C++: CameraWrapper::GetCurrentSwivel() --> struct Rotator");
		cl.def("SetCurrentSwivel", (void (CameraWrapper::*)(struct Rotator)) & CameraWrapper::SetCurrentSwivel, "C++: CameraWrapper::SetCurrentSwivel(struct Rotator) --> void", "newCurrentSwivel"_a);
		cl.def("GetDemolisher", (class RBActorWrapper(CameraWrapper::*)()) & CameraWrapper::GetDemolisher, "C++: CameraWrapper::GetDemolisher() --> class RBActorWrapper");
		cl.def("SetDemolisher", (void (CameraWrapper::*)(class RBActorWrapper)) & CameraWrapper::SetDemolisher, "C++: CameraWrapper::SetDemolisher(class RBActorWrapper) --> void", "newDemolisher"_a);
		cl.def("GetbDemolished", (unsigned long (CameraWrapper::*)()) & CameraWrapper::GetbDemolished, "C++: CameraWrapper::GetbDemolished() --> unsigned long");
		cl.def("SetbDemolished", (void (CameraWrapper::*)(unsigned long)) & CameraWrapper::SetbDemolished, "C++: CameraWrapper::SetbDemolished(unsigned long) --> void", "newbDemolished"_a);
		cl.def("ClipToField", (float (CameraWrapper::*)(float)) & CameraWrapper::ClipToField, "C++: CameraWrapper::ClipToField(float) --> float", "CameraLocationZ"_a);
		cl.def("Demolished2", (void (CameraWrapper::*)(class RBActorWrapper)) & CameraWrapper::Demolished2, "C++: CameraWrapper::Demolished2(class RBActorWrapper) --> void", "InDemolisher"_a);
		cl.def("GetDesiredSwivel", (struct Rotator(CameraWrapper::*)(float, float)) & CameraWrapper::GetDesiredSwivel, "C++: CameraWrapper::GetDesiredSwivel(float, float) --> struct Rotator", "LookUp"_a, "LookRight"_a);
		cl.def("UpdateSwivel", (void (CameraWrapper::*)(float)) & CameraWrapper::UpdateSwivel, "C++: CameraWrapper::UpdateSwivel(float) --> void", "DeltaTime"_a);
		cl.def("GetDefaultFOVOffset", (float (CameraWrapper::*)()) & CameraWrapper::GetDefaultFOVOffset, "C++: CameraWrapper::GetDefaultFOVOffset() --> float");
		cl.def("GetDefaultViewHeightOffset", (float (CameraWrapper::*)()) & CameraWrapper::GetDefaultViewHeightOffset, "C++: CameraWrapper::GetDefaultViewHeightOffset() --> float");
		cl.def("UpdateFOV", (void (CameraWrapper::*)()) & CameraWrapper::UpdateFOV, "C++: CameraWrapper::UpdateFOV() --> void");
		cl.def("EventCameraTargetChanged", (void (CameraWrapper::*)(class CameraWrapper, class ActorWrapper)) & CameraWrapper::EventCameraTargetChanged, "C++: CameraWrapper::EventCameraTargetChanged(class CameraWrapper, class ActorWrapper) --> void", "Camera"_a, "Target"_a);
	}
	{ // CarComponentWrapper file: line:11
		pybind11::class_<CarComponentWrapper, std::shared_ptr<CarComponentWrapper>, ActorWrapper> cl(M, "CarComponentWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](CarComponentWrapper const& o) { return new CarComponentWrapper(o); }));
		cl.def("assign", (class CarComponentWrapper& (CarComponentWrapper::*)(class CarComponentWrapper)) & CarComponentWrapper::operator=, "C++: CarComponentWrapper::operator=(class CarComponentWrapper) --> class CarComponentWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetFXActorArchetype", (class FXActorWrapper(CarComponentWrapper::*)()) & CarComponentWrapper::GetFXActorArchetype, "C++: CarComponentWrapper::GetFXActorArchetype() --> class FXActorWrapper");
		cl.def("SetFXActorArchetype", (void (CarComponentWrapper::*)(class FXActorWrapper)) & CarComponentWrapper::SetFXActorArchetype, "C++: CarComponentWrapper::SetFXActorArchetype(class FXActorWrapper) --> void", "newFXActorArchetype"_a);
		cl.def("GetbDisabled", (unsigned long (CarComponentWrapper::*)()) & CarComponentWrapper::GetbDisabled, "C++: CarComponentWrapper::GetbDisabled() --> unsigned long");
		cl.def("SetbDisabled", (void (CarComponentWrapper::*)(unsigned long)) & CarComponentWrapper::SetbDisabled, "C++: CarComponentWrapper::SetbDisabled(unsigned long) --> void", "newbDisabled"_a);
		cl.def("GetbAutoActivate", (unsigned long (CarComponentWrapper::*)()) & CarComponentWrapper::GetbAutoActivate, "C++: CarComponentWrapper::GetbAutoActivate() --> unsigned long");
		cl.def("SetbAutoActivate", (void (CarComponentWrapper::*)(unsigned long)) & CarComponentWrapper::SetbAutoActivate, "C++: CarComponentWrapper::SetbAutoActivate(unsigned long) --> void", "newbAutoActivate"_a);
		cl.def("GetbSimulateComponent", (unsigned long (CarComponentWrapper::*)()) & CarComponentWrapper::GetbSimulateComponent, "C++: CarComponentWrapper::GetbSimulateComponent() --> unsigned long");
		cl.def("SetbSimulateComponent", (void (CarComponentWrapper::*)(unsigned long)) & CarComponentWrapper::SetbSimulateComponent, "C++: CarComponentWrapper::SetbSimulateComponent(unsigned long) --> void", "newbSimulateComponent"_a);
		cl.def("GetbCreated", (unsigned long (CarComponentWrapper::*)()) & CarComponentWrapper::GetbCreated, "C++: CarComponentWrapper::GetbCreated() --> unsigned long");
		cl.def("SetbCreated", (void (CarComponentWrapper::*)(unsigned long)) & CarComponentWrapper::SetbCreated, "C++: CarComponentWrapper::SetbCreated(unsigned long) --> void", "newbCreated"_a);
		cl.def("GetbActive", (unsigned long (CarComponentWrapper::*)()) & CarComponentWrapper::GetbActive, "C++: CarComponentWrapper::GetbActive() --> unsigned long");
		cl.def("SetbActive", (void (CarComponentWrapper::*)(unsigned long)) & CarComponentWrapper::SetbActive, "C++: CarComponentWrapper::SetbActive(unsigned long) --> void", "newbActive"_a);
		cl.def("GetbRemovedFromCar", (unsigned long (CarComponentWrapper::*)()) & CarComponentWrapper::GetbRemovedFromCar, "C++: CarComponentWrapper::GetbRemovedFromCar() --> unsigned long");
		cl.def("SetbRemovedFromCar", (void (CarComponentWrapper::*)(unsigned long)) & CarComponentWrapper::SetbRemovedFromCar, "C++: CarComponentWrapper::SetbRemovedFromCar(unsigned long) --> void", "newbRemovedFromCar"_a);
		cl.def("GetComponentData", (unsigned char (CarComponentWrapper::*)()) & CarComponentWrapper::GetComponentData, "C++: CarComponentWrapper::GetComponentData() --> unsigned char");
		cl.def("SetComponentData", (void (CarComponentWrapper::*)(unsigned char)) & CarComponentWrapper::SetComponentData, "C++: CarComponentWrapper::SetComponentData(unsigned char) --> void", "newComponentData"_a);
		cl.def("GetReplicatedActive", (unsigned char (CarComponentWrapper::*)()) & CarComponentWrapper::GetReplicatedActive, "C++: CarComponentWrapper::GetReplicatedActive() --> unsigned char");
		cl.def("SetReplicatedActive", (void (CarComponentWrapper::*)(unsigned char)) & CarComponentWrapper::SetReplicatedActive, "C++: CarComponentWrapper::SetReplicatedActive(unsigned char) --> void", "newReplicatedActive"_a);
		cl.def("GetActivator", (class PriWrapper(CarComponentWrapper::*)()) & CarComponentWrapper::GetActivator, "C++: CarComponentWrapper::GetActivator() --> class PriWrapper");
		cl.def("SetActivator", (void (CarComponentWrapper::*)(class PriWrapper)) & CarComponentWrapper::SetActivator, "C++: CarComponentWrapper::SetActivator(class PriWrapper) --> void", "newActivator"_a);
		cl.def("GetVehicle", (class VehicleWrapper(CarComponentWrapper::*)()) & CarComponentWrapper::GetVehicle, "C++: CarComponentWrapper::GetVehicle() --> class VehicleWrapper");
		cl.def("SetVehicle", (void (CarComponentWrapper::*)(class VehicleWrapper)) & CarComponentWrapper::SetVehicle, "C++: CarComponentWrapper::SetVehicle(class VehicleWrapper) --> void", "newVehicle"_a);
		cl.def("GetCar", (class CarWrapper(CarComponentWrapper::*)()) & CarComponentWrapper::GetCar, "C++: CarComponentWrapper::GetCar() --> class CarWrapper");
		cl.def("SetCar", (void (CarComponentWrapper::*)(class CarWrapper)) & CarComponentWrapper::SetCar, "C++: CarComponentWrapper::SetCar(class CarWrapper) --> void", "newCar"_a);
		cl.def("GetActivityTime", (float (CarComponentWrapper::*)()) & CarComponentWrapper::GetActivityTime, "C++: CarComponentWrapper::GetActivityTime() --> float");
		cl.def("SetActivityTime", (void (CarComponentWrapper::*)(float)) & CarComponentWrapper::SetActivityTime, "C++: CarComponentWrapper::SetActivityTime(float) --> void", "newActivityTime"_a);
		cl.def("GetReplicatedActivityTime", (float (CarComponentWrapper::*)()) & CarComponentWrapper::GetReplicatedActivityTime, "C++: CarComponentWrapper::GetReplicatedActivityTime() --> float");
		cl.def("SetReplicatedActivityTime", (void (CarComponentWrapper::*)(float)) & CarComponentWrapper::SetReplicatedActivityTime, "C++: CarComponentWrapper::SetReplicatedActivityTime(float) --> void", "newReplicatedActivityTime"_a);
		cl.def("GetFXActor", (class FXActorWrapper(CarComponentWrapper::*)()) & CarComponentWrapper::GetFXActor, "C++: CarComponentWrapper::GetFXActor() --> class FXActorWrapper");
		cl.def("SetFXActor", (void (CarComponentWrapper::*)(class FXActorWrapper)) & CarComponentWrapper::SetFXActor, "C++: CarComponentWrapper::SetFXActor(class FXActorWrapper) --> void", "newFXActor"_a);
		cl.def("eventFellOutOfWorld", (void (CarComponentWrapper::*)()) & CarComponentWrapper::eventFellOutOfWorld, "C++: CarComponentWrapper::eventFellOutOfWorld() --> void");
		cl.def("GetInactiveTime", (float (CarComponentWrapper::*)()) & CarComponentWrapper::GetInactiveTime, "C++: CarComponentWrapper::GetInactiveTime() --> float");
		cl.def("GetActiveTime", (float (CarComponentWrapper::*)()) & CarComponentWrapper::GetActiveTime, "C++: CarComponentWrapper::GetActiveTime() --> float");
		cl.def("ApplyForces", (void (CarComponentWrapper::*)(float)) & CarComponentWrapper::ApplyForces, "C++: CarComponentWrapper::ApplyForces(float) --> void", "ActiveTime"_a);
		cl.def("PrePhysicsStep", (void (CarComponentWrapper::*)(float)) & CarComponentWrapper::PrePhysicsStep, "C++: CarComponentWrapper::PrePhysicsStep(float) --> void", "DeltaTime"_a);
		cl.def("RemoveFromCar", (void (CarComponentWrapper::*)()) & CarComponentWrapper::RemoveFromCar, "C++: CarComponentWrapper::RemoveFromCar() --> void");
		cl.def("CanDeactivate", (bool (CarComponentWrapper::*)()) & CarComponentWrapper::CanDeactivate, "C++: CarComponentWrapper::CanDeactivate() --> bool");
		cl.def("ConditionalDeactivate", (bool (CarComponentWrapper::*)()) & CarComponentWrapper::ConditionalDeactivate, "C++: CarComponentWrapper::ConditionalDeactivate() --> bool");
		cl.def("CanActivate", (bool (CarComponentWrapper::*)()) & CarComponentWrapper::CanActivate, "C++: CarComponentWrapper::CanActivate() --> bool");
		cl.def("ConditionalActivate", (bool (CarComponentWrapper::*)()) & CarComponentWrapper::ConditionalActivate, "C++: CarComponentWrapper::ConditionalActivate() --> bool");
		cl.def("SetActive", (void (CarComponentWrapper::*)(unsigned long)) & CarComponentWrapper::SetActive, "C++: CarComponentWrapper::SetActive(unsigned long) --> void", "bNewActive"_a);
		cl.def("Deactivate2", (void (CarComponentWrapper::*)()) & CarComponentWrapper::Deactivate2, "C++: CarComponentWrapper::Deactivate2() --> void");
		cl.def("Activate2", (void (CarComponentWrapper::*)()) & CarComponentWrapper::Activate2, "C++: CarComponentWrapper::Activate2() --> void");
		cl.def("UnregisterCarEvents", (void (CarComponentWrapper::*)()) & CarComponentWrapper::UnregisterCarEvents, "C++: CarComponentWrapper::UnregisterCarEvents() --> void");
		cl.def("RegisterCarEvents", (void (CarComponentWrapper::*)()) & CarComponentWrapper::RegisterCarEvents, "C++: CarComponentWrapper::RegisterCarEvents() --> void");
		cl.def("HandleVehicleSetup", (void (CarComponentWrapper::*)(class CarWrapper)) & CarComponentWrapper::HandleVehicleSetup, "C++: CarComponentWrapper::HandleVehicleSetup(class CarWrapper) --> void", "InCar"_a);
		cl.def("OnVehicleSetupComplete", (void (CarComponentWrapper::*)()) & CarComponentWrapper::OnVehicleSetupComplete, "C++: CarComponentWrapper::OnVehicleSetupComplete() --> void");
		cl.def("Create2", (void (CarComponentWrapper::*)(class CarWrapper, class PriWrapper)) & CarComponentWrapper::Create2, "C++: CarComponentWrapper::Create2(class CarWrapper, class PriWrapper) --> void", "OwnerCar"_a, "InActivator"_a);
		cl.def("ClientUpdateActive", (void (CarComponentWrapper::*)()) & CarComponentWrapper::ClientUpdateActive, "C++: CarComponentWrapper::ClientUpdateActive() --> void");
		cl.def("EventActivationChanged", (void (CarComponentWrapper::*)(class CarComponentWrapper)) & CarComponentWrapper::EventActivationChanged, "C++: CarComponentWrapper::EventActivationChanged(class CarComponentWrapper) --> void", "CarComponent"_a);
	}
	{ // AirControlComponentWrapper file:bakkesmod/wrappers/GameObject/CarComponent/AirControlComponentWrapper.h line:7
		pybind11::class_<AirControlComponentWrapper, std::shared_ptr<AirControlComponentWrapper>, CarComponentWrapper> cl(M, "AirControlComponentWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](AirControlComponentWrapper const& o) { return new AirControlComponentWrapper(o); }));
		cl.def("assign", (class AirControlComponentWrapper& (AirControlComponentWrapper::*)(class AirControlComponentWrapper)) & AirControlComponentWrapper::operator=, "C++: AirControlComponentWrapper::operator=(class AirControlComponentWrapper) --> class AirControlComponentWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetAirTorque", (struct Rotator(AirControlComponentWrapper::*)()) & AirControlComponentWrapper::GetAirTorque, "C++: AirControlComponentWrapper::GetAirTorque() --> struct Rotator");
		cl.def("SetAirTorque", (void (AirControlComponentWrapper::*)(struct Rotator)) & AirControlComponentWrapper::SetAirTorque, "C++: AirControlComponentWrapper::SetAirTorque(struct Rotator) --> void", "newAirTorque"_a);
		cl.def("GetAirDamping", (struct Rotator(AirControlComponentWrapper::*)()) & AirControlComponentWrapper::GetAirDamping, "C++: AirControlComponentWrapper::GetAirDamping() --> struct Rotator");
		cl.def("SetAirDamping", (void (AirControlComponentWrapper::*)(struct Rotator)) & AirControlComponentWrapper::SetAirDamping, "C++: AirControlComponentWrapper::SetAirDamping(struct Rotator) --> void", "newAirDamping"_a);
		cl.def("GetThrottleForce", (float (AirControlComponentWrapper::*)()) & AirControlComponentWrapper::GetThrottleForce, "C++: AirControlComponentWrapper::GetThrottleForce() --> float");
		cl.def("SetThrottleForce", (void (AirControlComponentWrapper::*)(float)) & AirControlComponentWrapper::SetThrottleForce, "C++: AirControlComponentWrapper::SetThrottleForce(float) --> void", "newThrottleForce"_a);
		cl.def("GetDodgeDisableTimeRemaining", (float (AirControlComponentWrapper::*)()) & AirControlComponentWrapper::GetDodgeDisableTimeRemaining, "C++: AirControlComponentWrapper::GetDodgeDisableTimeRemaining() --> float");
		cl.def("SetDodgeDisableTimeRemaining", (void (AirControlComponentWrapper::*)(float)) & AirControlComponentWrapper::SetDodgeDisableTimeRemaining, "C++: AirControlComponentWrapper::SetDodgeDisableTimeRemaining(float) --> void", "newDodgeDisableTimeRemaining"_a);
		cl.def("GetControlScale", (float (AirControlComponentWrapper::*)()) & AirControlComponentWrapper::GetControlScale, "C++: AirControlComponentWrapper::GetControlScale() --> float");
		cl.def("SetControlScale", (void (AirControlComponentWrapper::*)(float)) & AirControlComponentWrapper::SetControlScale, "C++: AirControlComponentWrapper::SetControlScale(float) --> void", "newControlScale"_a);
		cl.def("GetAirControlSensitivity", (float (AirControlComponentWrapper::*)()) & AirControlComponentWrapper::GetAirControlSensitivity, "C++: AirControlComponentWrapper::GetAirControlSensitivity() --> float");
		cl.def("SetAirControlSensitivity", (void (AirControlComponentWrapper::*)(float)) & AirControlComponentWrapper::SetAirControlSensitivity, "C++: AirControlComponentWrapper::SetAirControlSensitivity(float) --> void", "newAirControlSensitivity"_a);
		cl.def("ApplyForces", (void (AirControlComponentWrapper::*)(float)) & AirControlComponentWrapper::ApplyForces, "C++: AirControlComponentWrapper::ApplyForces(float) --> void", "ActiveTime"_a);
		cl.def("OnCreated", (void (AirControlComponentWrapper::*)()) & AirControlComponentWrapper::OnCreated, "C++: AirControlComponentWrapper::OnCreated() --> void");
	}
	{ // BoostWrapper file:bakkesmod/wrappers/GameObject/CarComponent/BoostWrapper.h line:7
		pybind11::class_<BoostWrapper, std::shared_ptr<BoostWrapper>, CarComponentWrapper> cl(M, "BoostWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](BoostWrapper const& o) { return new BoostWrapper(o); }));
		cl.def("assign", (class BoostWrapper& (BoostWrapper::*)(class BoostWrapper)) & BoostWrapper::operator=, "C++: BoostWrapper::operator=(class BoostWrapper) --> class BoostWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetBoostConsumptionRate", (float (BoostWrapper::*)()) & BoostWrapper::GetBoostConsumptionRate, "C++: BoostWrapper::GetBoostConsumptionRate() --> float");
		cl.def("SetBoostConsumptionRate", (void (BoostWrapper::*)(float)) & BoostWrapper::SetBoostConsumptionRate, "C++: BoostWrapper::SetBoostConsumptionRate(float) --> void", "newBoostConsumptionRate"_a);
		cl.def("GetMaxBoostAmount", (float (BoostWrapper::*)()) & BoostWrapper::GetMaxBoostAmount, "C++: BoostWrapper::GetMaxBoostAmount() --> float");
		cl.def("SetMaxBoostAmount", (void (BoostWrapper::*)(float)) & BoostWrapper::SetMaxBoostAmount, "C++: BoostWrapper::SetMaxBoostAmount(float) --> void", "newMaxBoostAmount"_a);
		cl.def("GetStartBoostAmount", (float (BoostWrapper::*)()) & BoostWrapper::GetStartBoostAmount, "C++: BoostWrapper::GetStartBoostAmount() --> float");
		cl.def("SetStartBoostAmount", (void (BoostWrapper::*)(float)) & BoostWrapper::SetStartBoostAmount, "C++: BoostWrapper::SetStartBoostAmount(float) --> void", "newStartBoostAmount"_a);
		cl.def("GetCurrentBoostAmount", (float (BoostWrapper::*)()) & BoostWrapper::GetCurrentBoostAmount, "C++: BoostWrapper::GetCurrentBoostAmount() --> float");
		cl.def("SetCurrentBoostAmount", (void (BoostWrapper::*)(float)) & BoostWrapper::SetCurrentBoostAmount, "C++: BoostWrapper::SetCurrentBoostAmount(float) --> void", "newCurrentBoostAmount"_a);
		cl.def("GetBoostModifier", (float (BoostWrapper::*)()) & BoostWrapper::GetBoostModifier, "C++: BoostWrapper::GetBoostModifier() --> float");
		cl.def("SetBoostModifier", (void (BoostWrapper::*)(float)) & BoostWrapper::SetBoostModifier, "C++: BoostWrapper::SetBoostModifier(float) --> void", "newBoostModifier"_a);
		cl.def("GetLastBoostAmountRequestTime", (float (BoostWrapper::*)()) & BoostWrapper::GetLastBoostAmountRequestTime, "C++: BoostWrapper::GetLastBoostAmountRequestTime() --> float");
		cl.def("SetLastBoostAmountRequestTime", (void (BoostWrapper::*)(float)) & BoostWrapper::SetLastBoostAmountRequestTime, "C++: BoostWrapper::SetLastBoostAmountRequestTime(float) --> void", "newLastBoostAmountRequestTime"_a);
		cl.def("GetLastBoostAmount", (float (BoostWrapper::*)()) & BoostWrapper::GetLastBoostAmount, "C++: BoostWrapper::GetLastBoostAmount() --> float");
		cl.def("SetLastBoostAmount", (void (BoostWrapper::*)(float)) & BoostWrapper::SetLastBoostAmount, "C++: BoostWrapper::SetLastBoostAmount(float) --> void", "newLastBoostAmount"_a);
		cl.def("GetbPendingConfirmBoostAmount", (unsigned long (BoostWrapper::*)()) & BoostWrapper::GetbPendingConfirmBoostAmount, "C++: BoostWrapper::GetbPendingConfirmBoostAmount() --> unsigned long");
		cl.def("SetbPendingConfirmBoostAmount", (void (BoostWrapper::*)(unsigned long)) & BoostWrapper::SetbPendingConfirmBoostAmount, "C++: BoostWrapper::SetbPendingConfirmBoostAmount(unsigned long) --> void", "newbPendingConfirmBoostAmount"_a);
		cl.def("GetbNoBoost", (unsigned long (BoostWrapper::*)()) & BoostWrapper::GetbNoBoost, "C++: BoostWrapper::GetbNoBoost() --> unsigned long");
		cl.def("SetbNoBoost", (void (BoostWrapper::*)(unsigned long)) & BoostWrapper::SetbNoBoost, "C++: BoostWrapper::SetbNoBoost(unsigned long) --> void", "newbNoBoost"_a);
		cl.def("GetBoostForce", (float (BoostWrapper::*)()) & BoostWrapper::GetBoostForce, "C++: BoostWrapper::GetBoostForce() --> float");
		cl.def("SetBoostForce", (void (BoostWrapper::*)(float)) & BoostWrapper::SetBoostForce, "C++: BoostWrapper::SetBoostForce(float) --> void", "newBoostForce"_a);
		cl.def("GetMinBoostTime", (float (BoostWrapper::*)()) & BoostWrapper::GetMinBoostTime, "C++: BoostWrapper::GetMinBoostTime() --> float");
		cl.def("SetMinBoostTime", (void (BoostWrapper::*)(float)) & BoostWrapper::SetMinBoostTime, "C++: BoostWrapper::SetMinBoostTime(float) --> void", "newMinBoostTime"_a);
		cl.def("GetRechargeRate", (float (BoostWrapper::*)()) & BoostWrapper::GetRechargeRate, "C++: BoostWrapper::GetRechargeRate() --> float");
		cl.def("SetRechargeRate", (void (BoostWrapper::*)(float)) & BoostWrapper::SetRechargeRate, "C++: BoostWrapper::SetRechargeRate(float) --> void", "newRechargeRate"_a);
		cl.def("GetRechargeDelay", (float (BoostWrapper::*)()) & BoostWrapper::GetRechargeDelay, "C++: BoostWrapper::GetRechargeDelay() --> float");
		cl.def("SetRechargeDelay", (void (BoostWrapper::*)(float)) & BoostWrapper::SetRechargeDelay, "C++: BoostWrapper::SetRechargeDelay(float) --> void", "newRechargeDelay"_a);
		cl.def("GetUnlimitedBoostRefCount", (int (BoostWrapper::*)()) & BoostWrapper::GetUnlimitedBoostRefCount, "C++: BoostWrapper::GetUnlimitedBoostRefCount() --> int");
		cl.def("SetUnlimitedBoostRefCount", (void (BoostWrapper::*)(int)) & BoostWrapper::SetUnlimitedBoostRefCount, "C++: BoostWrapper::SetUnlimitedBoostRefCount(int) --> void", "newUnlimitedBoostRefCount"_a);
		cl.def("GetReplicatedBoostAmount", (unsigned char (BoostWrapper::*)()) & BoostWrapper::GetReplicatedBoostAmount, "C++: BoostWrapper::GetReplicatedBoostAmount() --> unsigned char");
		cl.def("SetReplicatedBoostAmount", (void (BoostWrapper::*)(unsigned char)) & BoostWrapper::SetReplicatedBoostAmount, "C++: BoostWrapper::SetReplicatedBoostAmount(unsigned char) --> void", "newReplicatedBoostAmount"_a);
		cl.def("ShouldPredictBoostConsumption", (bool (BoostWrapper::*)()) & BoostWrapper::ShouldPredictBoostConsumption, "C++: BoostWrapper::ShouldPredictBoostConsumption() --> bool");
		cl.def("ReadReplicatedBoostAmount", (void (BoostWrapper::*)()) & BoostWrapper::ReadReplicatedBoostAmount, "C++: BoostWrapper::ReadReplicatedBoostAmount() --> void");
		cl.def("eventSetReplicatedBoostAmount", (void (BoostWrapper::*)()) & BoostWrapper::eventSetReplicatedBoostAmount, "C++: BoostWrapper::eventSetReplicatedBoostAmount() --> void");
		cl.def("ApplyForces", (void (BoostWrapper::*)(float)) & BoostWrapper::ApplyForces, "C++: BoostWrapper::ApplyForces(float) --> void", "ActiveTime"_a);
		cl.def("ClientGiveBoost", (void (BoostWrapper::*)(float)) & BoostWrapper::ClientGiveBoost, "C++: BoostWrapper::ClientGiveBoost(float) --> void", "Amount"_a);
		cl.def("ConfirmBoostAmount2", (void (BoostWrapper::*)()) & BoostWrapper::ConfirmBoostAmount2, "C++: BoostWrapper::ConfirmBoostAmount2() --> void");
		cl.def("SendConfirmBoostAmount", (void (BoostWrapper::*)()) & BoostWrapper::SendConfirmBoostAmount, "C++: BoostWrapper::SendConfirmBoostAmount() --> void");
		cl.def("ClientFixBoostAmount", (void (BoostWrapper::*)(float, float)) & BoostWrapper::ClientFixBoostAmount, "C++: BoostWrapper::ClientFixBoostAmount(float, float) --> void", "TimeStamp"_a, "Amount"_a);
		cl.def("ServerConfirmBoostAmount", (void (BoostWrapper::*)(float, float)) & BoostWrapper::ServerConfirmBoostAmount, "C++: BoostWrapper::ServerConfirmBoostAmount(float, float) --> void", "TimeStamp"_a, "Amount"_a);
		cl.def("SetRechargeDelay2", (void (BoostWrapper::*)(float)) & BoostWrapper::SetRechargeDelay2, "C++: BoostWrapper::SetRechargeDelay2(float) --> void", "InRechargeDelay"_a);
		cl.def("SetRechargeRate2", (void (BoostWrapper::*)(float)) & BoostWrapper::SetRechargeRate2, "C++: BoostWrapper::SetRechargeRate2(float) --> void", "InRechargeRate"_a);
		cl.def("SetNoBoost", (void (BoostWrapper::*)(unsigned long)) & BoostWrapper::SetNoBoost, "C++: BoostWrapper::SetNoBoost(unsigned long) --> void", "Enabled"_a);
		cl.def("SetUnlimitedBoost2", (void (BoostWrapper::*)(unsigned long)) & BoostWrapper::SetUnlimitedBoost2, "C++: BoostWrapper::SetUnlimitedBoost2(unsigned long) --> void", "Enabled"_a);
		cl.def("SetUnlimitedBoostDelayed", (void (BoostWrapper::*)(unsigned long)) & BoostWrapper::SetUnlimitedBoostDelayed, "C++: BoostWrapper::SetUnlimitedBoostDelayed(unsigned long) --> void", "Enabled"_a);
		cl.def("SetBoostModifier2", (void (BoostWrapper::*)(float)) & BoostWrapper::SetBoostModifier2, "C++: BoostWrapper::SetBoostModifier2(float) --> void", "Modifier"_a);
		cl.def("SetBoostAmount", (void (BoostWrapper::*)(float)) & BoostWrapper::SetBoostAmount, "C++: BoostWrapper::SetBoostAmount(float) --> void", "Amount"_a);
		cl.def("GiveBoost2", (void (BoostWrapper::*)(float)) & BoostWrapper::GiveBoost2, "C++: BoostWrapper::GiveBoost2(float) --> void", "Amount"_a);
		cl.def("GiveStartingBoost", (void (BoostWrapper::*)()) & BoostWrapper::GiveStartingBoost, "C++: BoostWrapper::GiveStartingBoost() --> void");
		cl.def("GiveFullBoost", (void (BoostWrapper::*)()) & BoostWrapper::GiveFullBoost, "C++: BoostWrapper::GiveFullBoost() --> void");
		cl.def("GetPercentBoostFull", (float (BoostWrapper::*)()) & BoostWrapper::GetPercentBoostFull, "C++: BoostWrapper::GetPercentBoostFull() --> float");
		cl.def("IsFull", (bool (BoostWrapper::*)()) & BoostWrapper::IsFull, "C++: BoostWrapper::IsFull() --> bool");
		cl.def("RemoveFromCar", (void (BoostWrapper::*)()) & BoostWrapper::RemoveFromCar, "C++: BoostWrapper::RemoveFromCar() --> void");
		cl.def("CanDeactivate", (bool (BoostWrapper::*)()) & BoostWrapper::CanDeactivate, "C++: BoostWrapper::CanDeactivate() --> bool");
		cl.def("CanActivate", (bool (BoostWrapper::*)()) & BoostWrapper::CanActivate, "C++: BoostWrapper::CanActivate() --> bool");
	}
	{ // DodgeComponentWrapper file:bakkesmod/wrappers/GameObject/CarComponent/DodgeComponentWrapper.h line:7
		pybind11::class_<DodgeComponentWrapper, std::shared_ptr<DodgeComponentWrapper>, CarComponentWrapper> cl(M, "DodgeComponentWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](DodgeComponentWrapper const& o) { return new DodgeComponentWrapper(o); }));
		cl.def("assign", (class DodgeComponentWrapper& (DodgeComponentWrapper::*)(class DodgeComponentWrapper)) & DodgeComponentWrapper::operator=, "C++: DodgeComponentWrapper::operator=(class DodgeComponentWrapper) --> class DodgeComponentWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetDodgeInputThreshold", (float (DodgeComponentWrapper::*)()) & DodgeComponentWrapper::GetDodgeInputThreshold, "C++: DodgeComponentWrapper::GetDodgeInputThreshold() --> float");
		cl.def("SetDodgeInputThreshold", (void (DodgeComponentWrapper::*)(float)) & DodgeComponentWrapper::SetDodgeInputThreshold, "C++: DodgeComponentWrapper::SetDodgeInputThreshold(float) --> void", "newDodgeInputThreshold"_a);
		cl.def("GetSideDodgeImpulse", (float (DodgeComponentWrapper::*)()) & DodgeComponentWrapper::GetSideDodgeImpulse, "C++: DodgeComponentWrapper::GetSideDodgeImpulse() --> float");
		cl.def("SetSideDodgeImpulse", (void (DodgeComponentWrapper::*)(float)) & DodgeComponentWrapper::SetSideDodgeImpulse, "C++: DodgeComponentWrapper::SetSideDodgeImpulse(float) --> void", "newSideDodgeImpulse"_a);
		cl.def("GetSideDodgeImpulseMaxSpeedScale", (float (DodgeComponentWrapper::*)()) & DodgeComponentWrapper::GetSideDodgeImpulseMaxSpeedScale, "C++: DodgeComponentWrapper::GetSideDodgeImpulseMaxSpeedScale() --> float");
		cl.def("SetSideDodgeImpulseMaxSpeedScale", (void (DodgeComponentWrapper::*)(float)) & DodgeComponentWrapper::SetSideDodgeImpulseMaxSpeedScale, "C++: DodgeComponentWrapper::SetSideDodgeImpulseMaxSpeedScale(float) --> void", "newSideDodgeImpulseMaxSpeedScale"_a);
		cl.def("GetForwardDodgeImpulse", (float (DodgeComponentWrapper::*)()) & DodgeComponentWrapper::GetForwardDodgeImpulse, "C++: DodgeComponentWrapper::GetForwardDodgeImpulse() --> float");
		cl.def("SetForwardDodgeImpulse", (void (DodgeComponentWrapper::*)(float)) & DodgeComponentWrapper::SetForwardDodgeImpulse, "C++: DodgeComponentWrapper::SetForwardDodgeImpulse(float) --> void", "newForwardDodgeImpulse"_a);
		cl.def("GetForwardDodgeImpulseMaxSpeedScale", (float (DodgeComponentWrapper::*)()) & DodgeComponentWrapper::GetForwardDodgeImpulseMaxSpeedScale, "C++: DodgeComponentWrapper::GetForwardDodgeImpulseMaxSpeedScale() --> float");
		cl.def("SetForwardDodgeImpulseMaxSpeedScale", (void (DodgeComponentWrapper::*)(float)) & DodgeComponentWrapper::SetForwardDodgeImpulseMaxSpeedScale, "C++: DodgeComponentWrapper::SetForwardDodgeImpulseMaxSpeedScale(float) --> void", "newForwardDodgeImpulseMaxSpeedScale"_a);
		cl.def("GetBackwardDodgeImpulse", (float (DodgeComponentWrapper::*)()) & DodgeComponentWrapper::GetBackwardDodgeImpulse, "C++: DodgeComponentWrapper::GetBackwardDodgeImpulse() --> float");
		cl.def("SetBackwardDodgeImpulse", (void (DodgeComponentWrapper::*)(float)) & DodgeComponentWrapper::SetBackwardDodgeImpulse, "C++: DodgeComponentWrapper::SetBackwardDodgeImpulse(float) --> void", "newBackwardDodgeImpulse"_a);
		cl.def("GetBackwardDodgeImpulseMaxSpeedScale", (float (DodgeComponentWrapper::*)()) & DodgeComponentWrapper::GetBackwardDodgeImpulseMaxSpeedScale, "C++: DodgeComponentWrapper::GetBackwardDodgeImpulseMaxSpeedScale() --> float");
		cl.def("SetBackwardDodgeImpulseMaxSpeedScale", (void (DodgeComponentWrapper::*)(float)) & DodgeComponentWrapper::SetBackwardDodgeImpulseMaxSpeedScale, "C++: DodgeComponentWrapper::SetBackwardDodgeImpulseMaxSpeedScale(float) --> void", "newBackwardDodgeImpulseMaxSpeedScale"_a);
		cl.def("GetSideDodgeTorque", (float (DodgeComponentWrapper::*)()) & DodgeComponentWrapper::GetSideDodgeTorque, "C++: DodgeComponentWrapper::GetSideDodgeTorque() --> float");
		cl.def("SetSideDodgeTorque", (void (DodgeComponentWrapper::*)(float)) & DodgeComponentWrapper::SetSideDodgeTorque, "C++: DodgeComponentWrapper::SetSideDodgeTorque(float) --> void", "newSideDodgeTorque"_a);
		cl.def("GetForwardDodgeTorque", (float (DodgeComponentWrapper::*)()) & DodgeComponentWrapper::GetForwardDodgeTorque, "C++: DodgeComponentWrapper::GetForwardDodgeTorque() --> float");
		cl.def("SetForwardDodgeTorque", (void (DodgeComponentWrapper::*)(float)) & DodgeComponentWrapper::SetForwardDodgeTorque, "C++: DodgeComponentWrapper::SetForwardDodgeTorque(float) --> void", "newForwardDodgeTorque"_a);
		cl.def("GetDodgeTorqueTime", (float (DodgeComponentWrapper::*)()) & DodgeComponentWrapper::GetDodgeTorqueTime, "C++: DodgeComponentWrapper::GetDodgeTorqueTime() --> float");
		cl.def("SetDodgeTorqueTime", (void (DodgeComponentWrapper::*)(float)) & DodgeComponentWrapper::SetDodgeTorqueTime, "C++: DodgeComponentWrapper::SetDodgeTorqueTime(float) --> void", "newDodgeTorqueTime"_a);
		cl.def("GetMinDodgeTorqueTime", (float (DodgeComponentWrapper::*)()) & DodgeComponentWrapper::GetMinDodgeTorqueTime, "C++: DodgeComponentWrapper::GetMinDodgeTorqueTime() --> float");
		cl.def("SetMinDodgeTorqueTime", (void (DodgeComponentWrapper::*)(float)) & DodgeComponentWrapper::SetMinDodgeTorqueTime, "C++: DodgeComponentWrapper::SetMinDodgeTorqueTime(float) --> void", "newMinDodgeTorqueTime"_a);
		cl.def("GetDodgeZDamping", (float (DodgeComponentWrapper::*)()) & DodgeComponentWrapper::GetDodgeZDamping, "C++: DodgeComponentWrapper::GetDodgeZDamping() --> float");
		cl.def("SetDodgeZDamping", (void (DodgeComponentWrapper::*)(float)) & DodgeComponentWrapper::SetDodgeZDamping, "C++: DodgeComponentWrapper::SetDodgeZDamping(float) --> void", "newDodgeZDamping"_a);
		cl.def("GetDodgeZDampingDelay", (float (DodgeComponentWrapper::*)()) & DodgeComponentWrapper::GetDodgeZDampingDelay, "C++: DodgeComponentWrapper::GetDodgeZDampingDelay() --> float");
		cl.def("SetDodgeZDampingDelay", (void (DodgeComponentWrapper::*)(float)) & DodgeComponentWrapper::SetDodgeZDampingDelay, "C++: DodgeComponentWrapper::SetDodgeZDampingDelay(float) --> void", "newDodgeZDampingDelay"_a);
		cl.def("GetDodgeZDampingUpTime", (float (DodgeComponentWrapper::*)()) & DodgeComponentWrapper::GetDodgeZDampingUpTime, "C++: DodgeComponentWrapper::GetDodgeZDampingUpTime() --> float");
		cl.def("SetDodgeZDampingUpTime", (void (DodgeComponentWrapper::*)(float)) & DodgeComponentWrapper::SetDodgeZDampingUpTime, "C++: DodgeComponentWrapper::SetDodgeZDampingUpTime(float) --> void", "newDodgeZDampingUpTime"_a);
		cl.def("GetDodgeImpulseScale", (float (DodgeComponentWrapper::*)()) & DodgeComponentWrapper::GetDodgeImpulseScale, "C++: DodgeComponentWrapper::GetDodgeImpulseScale() --> float");
		cl.def("SetDodgeImpulseScale", (void (DodgeComponentWrapper::*)(float)) & DodgeComponentWrapper::SetDodgeImpulseScale, "C++: DodgeComponentWrapper::SetDodgeImpulseScale(float) --> void", "newDodgeImpulseScale"_a);
		cl.def("GetDodgeTorqueScale", (float (DodgeComponentWrapper::*)()) & DodgeComponentWrapper::GetDodgeTorqueScale, "C++: DodgeComponentWrapper::GetDodgeTorqueScale() --> float");
		cl.def("SetDodgeTorqueScale", (void (DodgeComponentWrapper::*)(float)) & DodgeComponentWrapper::SetDodgeTorqueScale, "C++: DodgeComponentWrapper::SetDodgeTorqueScale(float) --> void", "newDodgeTorqueScale"_a);
		cl.def("GetDodgeTorque", (struct Vector(DodgeComponentWrapper::*)()) & DodgeComponentWrapper::GetDodgeTorque, "C++: DodgeComponentWrapper::GetDodgeTorque() --> struct Vector");
		cl.def("SetDodgeTorque", (void (DodgeComponentWrapper::*)(struct Vector)) & DodgeComponentWrapper::SetDodgeTorque, "C++: DodgeComponentWrapper::SetDodgeTorque(struct Vector) --> void", "newDodgeTorque"_a);
		cl.def("GetDodgeDirection", (struct Vector(DodgeComponentWrapper::*)()) & DodgeComponentWrapper::GetDodgeDirection, "C++: DodgeComponentWrapper::GetDodgeDirection() --> struct Vector");
		cl.def("SetDodgeDirection", (void (DodgeComponentWrapper::*)(struct Vector)) & DodgeComponentWrapper::SetDodgeDirection, "C++: DodgeComponentWrapper::SetDodgeDirection(struct Vector) --> void", "newDodgeDirection"_a);
		cl.def("SetDodgeSettings", (void (DodgeComponentWrapper::*)()) & DodgeComponentWrapper::SetDodgeSettings, "C++: DodgeComponentWrapper::SetDodgeSettings() --> void");
		cl.def("ApplyTorqueForces", (void (DodgeComponentWrapper::*)(float)) & DodgeComponentWrapper::ApplyTorqueForces, "C++: DodgeComponentWrapper::ApplyTorqueForces(float) --> void", "ActiveTime"_a);
		cl.def("ApplyDodgeImpulse", (void (DodgeComponentWrapper::*)()) & DodgeComponentWrapper::ApplyDodgeImpulse, "C++: DodgeComponentWrapper::ApplyDodgeImpulse() --> void");
		cl.def("GetDodgeImpulse2", (struct Vector(DodgeComponentWrapper::*)(struct Vector&)) & DodgeComponentWrapper::GetDodgeImpulse2, "C++: DodgeComponentWrapper::GetDodgeImpulse2(struct Vector &) --> struct Vector", "DodgeDir"_a);
		cl.def("ApplyForces", (void (DodgeComponentWrapper::*)(float)) & DodgeComponentWrapper::ApplyForces, "C++: DodgeComponentWrapper::ApplyForces(float) --> void", "ActiveTime"_a);
		cl.def("CanActivate", (bool (DodgeComponentWrapper::*)()) & DodgeComponentWrapper::CanActivate, "C++: DodgeComponentWrapper::CanActivate() --> bool");
		cl.def("OnCreated", (void (DodgeComponentWrapper::*)()) & DodgeComponentWrapper::OnCreated, "C++: DodgeComponentWrapper::OnCreated() --> void");
	}
	{ // DoubleJumpComponentWrapper file:bakkesmod/wrappers/GameObject/CarComponent/DoubleJumpComponentWrapper.h line:7
		pybind11::class_<DoubleJumpComponentWrapper, std::shared_ptr<DoubleJumpComponentWrapper>, CarComponentWrapper> cl(M, "DoubleJumpComponentWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](DoubleJumpComponentWrapper const& o) { return new DoubleJumpComponentWrapper(o); }));
		cl.def("assign", (class DoubleJumpComponentWrapper& (DoubleJumpComponentWrapper::*)(class DoubleJumpComponentWrapper)) & DoubleJumpComponentWrapper::operator=, "C++: DoubleJumpComponentWrapper::operator=(class DoubleJumpComponentWrapper) --> class DoubleJumpComponentWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("SetJumpImpulse", (void (DoubleJumpComponentWrapper::*)(float)) & DoubleJumpComponentWrapper::SetJumpImpulse, "C++: DoubleJumpComponentWrapper::SetJumpImpulse(float) --> void", "newJumpImpulse"_a);
		cl.def("GetImpulseScale", (float (DoubleJumpComponentWrapper::*)()) & DoubleJumpComponentWrapper::GetImpulseScale, "C++: DoubleJumpComponentWrapper::GetImpulseScale() --> float");
		cl.def("SetImpulseScale", (void (DoubleJumpComponentWrapper::*)(float)) & DoubleJumpComponentWrapper::SetImpulseScale, "C++: DoubleJumpComponentWrapper::SetImpulseScale(float) --> void", "newImpulseScale"_a);
		cl.def("ApplyForces", (void (DoubleJumpComponentWrapper::*)(float)) & DoubleJumpComponentWrapper::ApplyForces, "C++: DoubleJumpComponentWrapper::ApplyForces(float) --> void", "ActiveTime"_a);
		cl.def("OnCreated", (void (DoubleJumpComponentWrapper::*)()) & DoubleJumpComponentWrapper::OnCreated, "C++: DoubleJumpComponentWrapper::OnCreated() --> void");
	}
	{ // FlipCarComponentWrapper file:bakkesmod/wrappers/GameObject/CarComponent/FlipCarComponentWrapper.h line:7
		pybind11::class_<FlipCarComponentWrapper, std::shared_ptr<FlipCarComponentWrapper>, CarComponentWrapper> cl(M, "FlipCarComponentWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](FlipCarComponentWrapper const& o) { return new FlipCarComponentWrapper(o); }));
		cl.def("assign", (class FlipCarComponentWrapper& (FlipCarComponentWrapper::*)(class FlipCarComponentWrapper)) & FlipCarComponentWrapper::operator=, "C++: FlipCarComponentWrapper::operator=(class FlipCarComponentWrapper) --> class FlipCarComponentWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetFlipCarImpulse", (float (FlipCarComponentWrapper::*)()) & FlipCarComponentWrapper::GetFlipCarImpulse, "C++: FlipCarComponentWrapper::GetFlipCarImpulse() --> float");
		cl.def("SetFlipCarImpulse", (void (FlipCarComponentWrapper::*)(float)) & FlipCarComponentWrapper::SetFlipCarImpulse, "C++: FlipCarComponentWrapper::SetFlipCarImpulse(float) --> void", "newFlipCarImpulse"_a);
		cl.def("GetFlipCarTorque", (float (FlipCarComponentWrapper::*)()) & FlipCarComponentWrapper::GetFlipCarTorque, "C++: FlipCarComponentWrapper::GetFlipCarTorque() --> float");
		cl.def("SetFlipCarTorque", (void (FlipCarComponentWrapper::*)(float)) & FlipCarComponentWrapper::SetFlipCarTorque, "C++: FlipCarComponentWrapper::SetFlipCarTorque(float) --> void", "newFlipCarTorque"_a);
		cl.def("GetFlipCarTime", (float (FlipCarComponentWrapper::*)()) & FlipCarComponentWrapper::GetFlipCarTime, "C++: FlipCarComponentWrapper::GetFlipCarTime() --> float");
		cl.def("SetFlipCarTime", (void (FlipCarComponentWrapper::*)(float)) & FlipCarComponentWrapper::SetFlipCarTime, "C++: FlipCarComponentWrapper::SetFlipCarTime(float) --> void", "newFlipCarTime"_a);
		cl.def("GetbFlipRight", (unsigned long (FlipCarComponentWrapper::*)()) & FlipCarComponentWrapper::GetbFlipRight, "C++: FlipCarComponentWrapper::GetbFlipRight() --> unsigned long");
		cl.def("SetbFlipRight", (void (FlipCarComponentWrapper::*)(unsigned long)) & FlipCarComponentWrapper::SetbFlipRight, "C++: FlipCarComponentWrapper::SetbFlipRight(unsigned long) --> void", "newbFlipRight"_a);
		cl.def("InitFlip", (void (FlipCarComponentWrapper::*)()) & FlipCarComponentWrapper::InitFlip, "C++: FlipCarComponentWrapper::InitFlip() --> void");
		cl.def("ApplyForces", (void (FlipCarComponentWrapper::*)(float)) & FlipCarComponentWrapper::ApplyForces, "C++: FlipCarComponentWrapper::ApplyForces(float) --> void", "ActiveTime"_a);
		cl.def("CanActivate", (bool (FlipCarComponentWrapper::*)()) & FlipCarComponentWrapper::CanActivate, "C++: FlipCarComponentWrapper::CanActivate() --> bool");
		cl.def("OnCreated", (void (FlipCarComponentWrapper::*)()) & FlipCarComponentWrapper::OnCreated, "C++: FlipCarComponentWrapper::OnCreated() --> void");
	}
	{ // JumpComponentWrapper file:bakkesmod/wrappers/GameObject/CarComponent/JumpComponentWrapper.h line:7
		pybind11::class_<JumpComponentWrapper, std::shared_ptr<JumpComponentWrapper>, CarComponentWrapper> cl(M, "JumpComponentWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](JumpComponentWrapper const& o) { return new JumpComponentWrapper(o); }));
		cl.def("assign", (class JumpComponentWrapper& (JumpComponentWrapper::*)(class JumpComponentWrapper)) & JumpComponentWrapper::operator=, "C++: JumpComponentWrapper::operator=(class JumpComponentWrapper) --> class JumpComponentWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetMinJumpTime", (float (JumpComponentWrapper::*)()) & JumpComponentWrapper::GetMinJumpTime, "C++: JumpComponentWrapper::GetMinJumpTime() --> float");
		cl.def("SetMinJumpTime", (void (JumpComponentWrapper::*)(float)) & JumpComponentWrapper::SetMinJumpTime, "C++: JumpComponentWrapper::SetMinJumpTime(float) --> void", "newMinJumpTime"_a);
		cl.def("GetJumpImpulse", (float (JumpComponentWrapper::*)()) & JumpComponentWrapper::GetJumpImpulse, "C++: JumpComponentWrapper::GetJumpImpulse() --> float");
		cl.def("SetJumpImpulse", (void (JumpComponentWrapper::*)(float)) & JumpComponentWrapper::SetJumpImpulse, "C++: JumpComponentWrapper::SetJumpImpulse(float) --> void", "newJumpImpulse"_a);
		cl.def("GetJumpForce", (float (JumpComponentWrapper::*)()) & JumpComponentWrapper::GetJumpForce, "C++: JumpComponentWrapper::GetJumpForce() --> float");
		cl.def("SetJumpForce", (void (JumpComponentWrapper::*)(float)) & JumpComponentWrapper::SetJumpForce, "C++: JumpComponentWrapper::SetJumpForce(float) --> void", "newJumpForce"_a);
		cl.def("GetJumpForceTime", (float (JumpComponentWrapper::*)()) & JumpComponentWrapper::GetJumpForceTime, "C++: JumpComponentWrapper::GetJumpForceTime() --> float");
		cl.def("SetJumpForceTime", (void (JumpComponentWrapper::*)(float)) & JumpComponentWrapper::SetJumpForceTime, "C++: JumpComponentWrapper::SetJumpForceTime(float) --> void", "newJumpForceTime"_a);
		cl.def("GetPodiumJumpForceTime", (float (JumpComponentWrapper::*)()) & JumpComponentWrapper::GetPodiumJumpForceTime, "C++: JumpComponentWrapper::GetPodiumJumpForceTime() --> float");
		cl.def("SetPodiumJumpForceTime", (void (JumpComponentWrapper::*)(float)) & JumpComponentWrapper::SetPodiumJumpForceTime, "C++: JumpComponentWrapper::SetPodiumJumpForceTime(float) --> void", "newPodiumJumpForceTime"_a);
		cl.def("GetJumpImpulseSpeed", (float (JumpComponentWrapper::*)()) & JumpComponentWrapper::GetJumpImpulseSpeed, "C++: JumpComponentWrapper::GetJumpImpulseSpeed() --> float");
		cl.def("SetJumpImpulseSpeed", (void (JumpComponentWrapper::*)(float)) & JumpComponentWrapper::SetJumpImpulseSpeed, "C++: JumpComponentWrapper::SetJumpImpulseSpeed(float) --> void", "newJumpImpulseSpeed"_a);
		cl.def("GetJumpAccel", (float (JumpComponentWrapper::*)()) & JumpComponentWrapper::GetJumpAccel, "C++: JumpComponentWrapper::GetJumpAccel() --> float");
		cl.def("SetJumpAccel", (void (JumpComponentWrapper::*)(float)) & JumpComponentWrapper::SetJumpAccel, "C++: JumpComponentWrapper::SetJumpAccel(float) --> void", "newJumpAccel"_a);
		cl.def("GetMaxJumpHeight", (float (JumpComponentWrapper::*)()) & JumpComponentWrapper::GetMaxJumpHeight, "C++: JumpComponentWrapper::GetMaxJumpHeight() --> float");
		cl.def("SetMaxJumpHeight", (void (JumpComponentWrapper::*)(float)) & JumpComponentWrapper::SetMaxJumpHeight, "C++: JumpComponentWrapper::SetMaxJumpHeight(float) --> void", "newMaxJumpHeight"_a);
		cl.def("GetMaxJumpHeightTime", (float (JumpComponentWrapper::*)()) & JumpComponentWrapper::GetMaxJumpHeightTime, "C++: JumpComponentWrapper::GetMaxJumpHeightTime() --> float");
		cl.def("SetMaxJumpHeightTime", (void (JumpComponentWrapper::*)(float)) & JumpComponentWrapper::SetMaxJumpHeightTime, "C++: JumpComponentWrapper::SetMaxJumpHeightTime(float) --> void", "newMaxJumpHeightTime"_a);
		cl.def("GetbDeactivate", (unsigned long (JumpComponentWrapper::*)()) & JumpComponentWrapper::GetbDeactivate, "C++: JumpComponentWrapper::GetbDeactivate() --> unsigned long");
		cl.def("SetbDeactivate", (void (JumpComponentWrapper::*)(unsigned long)) & JumpComponentWrapper::SetbDeactivate, "C++: JumpComponentWrapper::SetbDeactivate(unsigned long) --> void", "newbDeactivate"_a);
		cl.def("ApplyForces", (void (JumpComponentWrapper::*)(float)) & JumpComponentWrapper::ApplyForces, "C++: JumpComponentWrapper::ApplyForces(float) --> void", "ActiveTime"_a);
		cl.def("CacheJumpData", (void (JumpComponentWrapper::*)()) & JumpComponentWrapper::CacheJumpData, "C++: JumpComponentWrapper::CacheJumpData() --> void");
		cl.def("OnCreated", (void (JumpComponentWrapper::*)()) & JumpComponentWrapper::OnCreated, "C++: JumpComponentWrapper::OnCreated() --> void");
	}
	{ // UnrealStringWrapper file:bakkesmod/wrappers/Engine/UnrealStringWrapper.h line:10
		pybind11::class_<UnrealStringWrapper, std::shared_ptr<UnrealStringWrapper>, ArrayWrapper<wchar_t>> cl(M, "UnrealStringWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](UnrealStringWrapper const& o) { return new UnrealStringWrapper(o); }));
		cl.def("assign", (class UnrealStringWrapper& (UnrealStringWrapper::*)(class UnrealStringWrapper)) & UnrealStringWrapper::operator=, "C++: UnrealStringWrapper::operator=(class UnrealStringWrapper) --> class UnrealStringWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("ToString", (std::string(UnrealStringWrapper::*)()) & UnrealStringWrapper::ToString, "C++: UnrealStringWrapper::ToString() --> std::string");
		cl.def("IsNull", (bool (UnrealStringWrapper::*)()) & UnrealStringWrapper::IsNull, "C++: UnrealStringWrapper::IsNull() --> bool");
	}
	{ // GameEventWrapper file: line:14
		pybind11::class_<GameEventWrapper, std::shared_ptr<GameEventWrapper>, ActorWrapper> cl(M, "GameEventWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](GameEventWrapper const& o) { return new GameEventWrapper(o); }));
		cl.def("assign", (class GameEventWrapper& (GameEventWrapper::*)(class GameEventWrapper)) & GameEventWrapper::operator=, "C++: GameEventWrapper::operator=(class GameEventWrapper) --> class GameEventWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetReplicatedStateIndex", (unsigned char (GameEventWrapper::*)()) & GameEventWrapper::GetReplicatedStateIndex, "C++: GameEventWrapper::GetReplicatedStateIndex() --> unsigned char");
		cl.def("SetReplicatedStateIndex", (void (GameEventWrapper::*)(unsigned char)) & GameEventWrapper::SetReplicatedStateIndex, "C++: GameEventWrapper::SetReplicatedStateIndex(unsigned char) --> void", "newReplicatedStateIndex"_a);
		cl.def("GetCarArchetype", (class CarWrapper(GameEventWrapper::*)()) & GameEventWrapper::GetCarArchetype, "C++: GameEventWrapper::GetCarArchetype() --> class CarWrapper");
		cl.def("SetCarArchetype", (void (GameEventWrapper::*)(class CarWrapper)) & GameEventWrapper::SetCarArchetype, "C++: GameEventWrapper::SetCarArchetype(class CarWrapper) --> void", "newCarArchetype"_a);
		cl.def("GetCountdownTime", (int (GameEventWrapper::*)()) & GameEventWrapper::GetCountdownTime, "C++: GameEventWrapper::GetCountdownTime() --> int");
		cl.def("SetCountdownTime", (void (GameEventWrapper::*)(int)) & GameEventWrapper::SetCountdownTime, "C++: GameEventWrapper::SetCountdownTime(int) --> void", "newCountdownTime"_a);
		cl.def("GetFinishTime", (int (GameEventWrapper::*)()) & GameEventWrapper::GetFinishTime, "C++: GameEventWrapper::GetFinishTime() --> int");
		cl.def("SetFinishTime", (void (GameEventWrapper::*)(int)) & GameEventWrapper::SetFinishTime, "C++: GameEventWrapper::SetFinishTime(int) --> void", "newFinishTime"_a);
		cl.def("GetbMultiplayer", (unsigned long (GameEventWrapper::*)()) & GameEventWrapper::GetbMultiplayer, "C++: GameEventWrapper::GetbMultiplayer() --> unsigned long");
		cl.def("SetbMultiplayer", (void (GameEventWrapper::*)(unsigned long)) & GameEventWrapper::SetbMultiplayer, "C++: GameEventWrapper::SetbMultiplayer(unsigned long) --> void", "newbMultiplayer"_a);
		cl.def("GetbCountdownMessagesDisabled", (unsigned long (GameEventWrapper::*)()) & GameEventWrapper::GetbCountdownMessagesDisabled, "C++: GameEventWrapper::GetbCountdownMessagesDisabled() --> unsigned long");
		cl.def("SetbCountdownMessagesDisabled", (void (GameEventWrapper::*)(unsigned long)) & GameEventWrapper::SetbCountdownMessagesDisabled, "C++: GameEventWrapper::SetbCountdownMessagesDisabled(unsigned long) --> void", "newbCountdownMessagesDisabled"_a);
		cl.def("GetbFillWithAI", (unsigned long (GameEventWrapper::*)()) & GameEventWrapper::GetbFillWithAI, "C++: GameEventWrapper::GetbFillWithAI() --> unsigned long");
		cl.def("SetbFillWithAI", (void (GameEventWrapper::*)(unsigned long)) & GameEventWrapper::SetbFillWithAI, "C++: GameEventWrapper::SetbFillWithAI(unsigned long) --> void", "newbFillWithAI"_a);
		cl.def("GetbAllowQueueSaveReplay", (unsigned long (GameEventWrapper::*)()) & GameEventWrapper::GetbAllowQueueSaveReplay, "C++: GameEventWrapper::GetbAllowQueueSaveReplay() --> unsigned long");
		cl.def("SetbAllowQueueSaveReplay", (void (GameEventWrapper::*)(unsigned long)) & GameEventWrapper::SetbAllowQueueSaveReplay, "C++: GameEventWrapper::SetbAllowQueueSaveReplay(unsigned long) --> void", "newbAllowQueueSaveReplay"_a);
		cl.def("GetbAllowReadyUp", (unsigned long (GameEventWrapper::*)()) & GameEventWrapper::GetbAllowReadyUp, "C++: GameEventWrapper::GetbAllowReadyUp() --> unsigned long");
		cl.def("SetbAllowReadyUp", (void (GameEventWrapper::*)(unsigned long)) & GameEventWrapper::SetbAllowReadyUp, "C++: GameEventWrapper::SetbAllowReadyUp(unsigned long) --> void", "newbAllowReadyUp"_a);
		cl.def("GetbRestartingMatch", (unsigned long (GameEventWrapper::*)()) & GameEventWrapper::GetbRestartingMatch, "C++: GameEventWrapper::GetbRestartingMatch() --> unsigned long");
		cl.def("SetbRestartingMatch", (void (GameEventWrapper::*)(unsigned long)) & GameEventWrapper::SetbRestartingMatch, "C++: GameEventWrapper::SetbRestartingMatch(unsigned long) --> void", "newbRestartingMatch"_a);
		cl.def("GetbRandomizedBotLoadouts", (unsigned long (GameEventWrapper::*)()) & GameEventWrapper::GetbRandomizedBotLoadouts, "C++: GameEventWrapper::GetbRandomizedBotLoadouts() --> unsigned long");
		cl.def("SetbRandomizedBotLoadouts", (void (GameEventWrapper::*)(unsigned long)) & GameEventWrapper::SetbRandomizedBotLoadouts, "C++: GameEventWrapper::SetbRandomizedBotLoadouts(unsigned long) --> void", "newbRandomizedBotLoadouts"_a);
		cl.def("GetbHasLeaveMatchPenalty", (unsigned long (GameEventWrapper::*)()) & GameEventWrapper::GetbHasLeaveMatchPenalty, "C++: GameEventWrapper::GetbHasLeaveMatchPenalty() --> unsigned long");
		cl.def("SetbHasLeaveMatchPenalty", (void (GameEventWrapper::*)(unsigned long)) & GameEventWrapper::SetbHasLeaveMatchPenalty, "C++: GameEventWrapper::SetbHasLeaveMatchPenalty(unsigned long) --> void", "newbHasLeaveMatchPenalty"_a);
		cl.def("GetbCanVoteToForfeit", (unsigned long (GameEventWrapper::*)()) & GameEventWrapper::GetbCanVoteToForfeit, "C++: GameEventWrapper::GetbCanVoteToForfeit() --> unsigned long");
		cl.def("SetbCanVoteToForfeit", (void (GameEventWrapper::*)(unsigned long)) & GameEventWrapper::SetbCanVoteToForfeit, "C++: GameEventWrapper::SetbCanVoteToForfeit(unsigned long) --> void", "newbCanVoteToForfeit"_a);
		cl.def("GetbDisableAimAssist", (unsigned long (GameEventWrapper::*)()) & GameEventWrapper::GetbDisableAimAssist, "C++: GameEventWrapper::GetbDisableAimAssist() --> unsigned long");
		cl.def("SetbDisableAimAssist", (void (GameEventWrapper::*)(unsigned long)) & GameEventWrapper::SetbDisableAimAssist, "C++: GameEventWrapper::SetbDisableAimAssist(unsigned long) --> void", "newbDisableAimAssist"_a);
		cl.def("GetbAwardAchievements", (unsigned long (GameEventWrapper::*)()) & GameEventWrapper::GetbAwardAchievements, "C++: GameEventWrapper::GetbAwardAchievements() --> unsigned long");
		cl.def("SetbAwardAchievements", (void (GameEventWrapper::*)(unsigned long)) & GameEventWrapper::SetbAwardAchievements, "C++: GameEventWrapper::SetbAwardAchievements(unsigned long) --> void", "newbAwardAchievements"_a);
		cl.def("GetMinPlayers", (int (GameEventWrapper::*)()) & GameEventWrapper::GetMinPlayers, "C++: GameEventWrapper::GetMinPlayers() --> int");
		cl.def("SetMinPlayers", (void (GameEventWrapper::*)(int)) & GameEventWrapper::SetMinPlayers, "C++: GameEventWrapper::SetMinPlayers(int) --> void", "newMinPlayers"_a);
		cl.def("GetMaxPlayers", (int (GameEventWrapper::*)()) & GameEventWrapper::GetMaxPlayers, "C++: GameEventWrapper::GetMaxPlayers() --> int");
		cl.def("SetMaxPlayers", (void (GameEventWrapper::*)(int)) & GameEventWrapper::SetMaxPlayers, "C++: GameEventWrapper::SetMaxPlayers(int) --> void", "newMaxPlayers"_a);
		cl.def("GetSpawnPoints", (class ArrayWrapper<class ActorWrapper>(GameEventWrapper::*)()) & GameEventWrapper::GetSpawnPoints, "C++: GameEventWrapper::GetSpawnPoints() --> class ArrayWrapper<class ActorWrapper>");
		cl.def("GetBotSkill", (float (GameEventWrapper::*)()) & GameEventWrapper::GetBotSkill, "C++: GameEventWrapper::GetBotSkill() --> float");
		cl.def("SetBotSkill", (void (GameEventWrapper::*)(float)) & GameEventWrapper::SetBotSkill, "C++: GameEventWrapper::SetBotSkill(float) --> void", "newBotSkill"_a);
		cl.def("GetRespawnTime", (int (GameEventWrapper::*)()) & GameEventWrapper::GetRespawnTime, "C++: GameEventWrapper::GetRespawnTime() --> int");
		cl.def("SetRespawnTime", (void (GameEventWrapper::*)(int)) & GameEventWrapper::SetRespawnTime, "C++: GameEventWrapper::SetRespawnTime(int) --> void", "newRespawnTime"_a);
		cl.def("GetMatchTimeDilation", (float (GameEventWrapper::*)()) & GameEventWrapper::GetMatchTimeDilation, "C++: GameEventWrapper::GetMatchTimeDilation() --> float");
		cl.def("SetMatchTimeDilation", (void (GameEventWrapper::*)(float)) & GameEventWrapper::SetMatchTimeDilation, "C++: GameEventWrapper::SetMatchTimeDilation(float) --> void", "newMatchTimeDilation"_a);
		cl.def("GetActivator", (class PlayerControllerWrapper(GameEventWrapper::*)()) & GameEventWrapper::GetActivator, "C++: GameEventWrapper::GetActivator() --> class PlayerControllerWrapper");
		cl.def("SetActivator", (void (GameEventWrapper::*)(class PlayerControllerWrapper)) & GameEventWrapper::SetActivator, "C++: GameEventWrapper::SetActivator(class PlayerControllerWrapper) --> void", "newActivator"_a);
		cl.def("GetActivatorCar", (class CarWrapper(GameEventWrapper::*)()) & GameEventWrapper::GetActivatorCar, "C++: GameEventWrapper::GetActivatorCar() --> class CarWrapper");
		cl.def("SetActivatorCar", (void (GameEventWrapper::*)(class CarWrapper)) & GameEventWrapper::SetActivatorCar, "C++: GameEventWrapper::SetActivatorCar(class CarWrapper) --> void", "newActivatorCar"_a);
		cl.def("GetPRIs", (class ArrayWrapper<class PriWrapper>(GameEventWrapper::*)()) & GameEventWrapper::GetPRIs, "C++: GameEventWrapper::GetPRIs() --> class ArrayWrapper<class PriWrapper>");
		cl.def("GetCars", (class ArrayWrapper<class CarWrapper>(GameEventWrapper::*)()) & GameEventWrapper::GetCars, "C++: GameEventWrapper::GetCars() --> class ArrayWrapper<class CarWrapper>");
		cl.def("GetLocalPlayers", (class ArrayWrapper<class PlayerControllerWrapper>(GameEventWrapper::*)()) & GameEventWrapper::GetLocalPlayers, "C++: GameEventWrapper::GetLocalPlayers() --> class ArrayWrapper<class PlayerControllerWrapper>");
		cl.def("GetStartPointIndex", (int (GameEventWrapper::*)()) & GameEventWrapper::GetStartPointIndex, "C++: GameEventWrapper::GetStartPointIndex() --> int");
		cl.def("SetStartPointIndex", (void (GameEventWrapper::*)(int)) & GameEventWrapper::SetStartPointIndex, "C++: GameEventWrapper::SetStartPointIndex(int) --> void", "newStartPointIndex"_a);
		cl.def("GetGameStateTimeRemaining", (int (GameEventWrapper::*)()) & GameEventWrapper::GetGameStateTimeRemaining, "C++: GameEventWrapper::GetGameStateTimeRemaining() --> int");
		cl.def("SetGameStateTimeRemaining", (void (GameEventWrapper::*)(int)) & GameEventWrapper::SetGameStateTimeRemaining, "C++: GameEventWrapper::SetGameStateTimeRemaining(int) --> void", "newGameStateTimeRemaining"_a);
		cl.def("GetReplicatedGameStateTimeRemaining", (int (GameEventWrapper::*)()) & GameEventWrapper::GetReplicatedGameStateTimeRemaining, "C++: GameEventWrapper::GetReplicatedGameStateTimeRemaining() --> int");
		cl.def("SetReplicatedGameStateTimeRemaining", (void (GameEventWrapper::*)(int)) & GameEventWrapper::SetReplicatedGameStateTimeRemaining, "C++: GameEventWrapper::SetReplicatedGameStateTimeRemaining(int) --> void", "newReplicatedGameStateTimeRemaining"_a);
		cl.def("GetBotBoostThreshold_vsAI", (float (GameEventWrapper::*)()) & GameEventWrapper::GetBotBoostThreshold_vsAI, "C++: GameEventWrapper::GetBotBoostThreshold_vsAI() --> float");
		cl.def("SetBotBoostThreshold_vsAI", (void (GameEventWrapper::*)(float)) & GameEventWrapper::SetBotBoostThreshold_vsAI, "C++: GameEventWrapper::SetBotBoostThreshold_vsAI(float) --> void", "newBotBoostThreshold_vsAI"_a);
		cl.def("GetForfeitInitiatorIDs", (class StructArrayWrapper<struct SteamID>(GameEventWrapper::*)()) & GameEventWrapper::GetForfeitInitiatorIDs, "C++: GameEventWrapper::GetForfeitInitiatorIDs() --> class StructArrayWrapper<struct SteamID>");
		cl.def("GetBannedPlayers", (class StructArrayWrapper<struct SteamID>(GameEventWrapper::*)()) & GameEventWrapper::GetBannedPlayers, "C++: GameEventWrapper::GetBannedPlayers() --> class StructArrayWrapper<struct SteamID>");
		cl.def("GetGameOwner", (class PriWrapper(GameEventWrapper::*)()) & GameEventWrapper::GetGameOwner, "C++: GameEventWrapper::GetGameOwner() --> class PriWrapper");
		cl.def("SetGameOwner", (void (GameEventWrapper::*)(class PriWrapper)) & GameEventWrapper::SetGameOwner, "C++: GameEventWrapper::SetGameOwner(class PriWrapper) --> void", "newGameOwner"_a);
		cl.def("GetRichPresenceString", (class UnrealStringWrapper(GameEventWrapper::*)()) & GameEventWrapper::GetRichPresenceString, "C++: GameEventWrapper::GetRichPresenceString() --> class UnrealStringWrapper");
		cl.def("GetReplicatedRoundCountDownNumber", (int (GameEventWrapper::*)()) & GameEventWrapper::GetReplicatedRoundCountDownNumber, "C++: GameEventWrapper::GetReplicatedRoundCountDownNumber() --> int");
		cl.def("SetReplicatedRoundCountDownNumber", (void (GameEventWrapper::*)(int)) & GameEventWrapper::SetReplicatedRoundCountDownNumber, "C++: GameEventWrapper::SetReplicatedRoundCountDownNumber(int) --> void", "newReplicatedRoundCountDownNumber"_a);
		cl.def("InitCountDown", (void (GameEventWrapper::*)()) & GameEventWrapper::InitCountDown, "C++: GameEventWrapper::InitCountDown() --> void");
		cl.def("StartCountdownTimer", (void (GameEventWrapper::*)()) & GameEventWrapper::StartCountdownTimer, "C++: GameEventWrapper::StartCountdownTimer() --> void");
		cl.def("AllowReadyUp2", (void (GameEventWrapper::*)()) & GameEventWrapper::AllowReadyUp2, "C++: GameEventWrapper::AllowReadyUp2() --> void");
		cl.def("FindPlayerPRI", (class PriWrapper(GameEventWrapper::*)(struct SteamID&)) & GameEventWrapper::FindPlayerPRI, "C++: GameEventWrapper::FindPlayerPRI(struct SteamID &) --> class PriWrapper", "UniqueId"_a);
		cl.def("HandlePlayerRemoved", (void (GameEventWrapper::*)(class GameEventWrapper, class PriWrapper)) & GameEventWrapper::HandlePlayerRemoved, "C++: GameEventWrapper::HandlePlayerRemoved(class GameEventWrapper, class PriWrapper) --> void", "GameEvent"_a, "PRI"_a);
		cl.def("UpdateGameOwner", (void (GameEventWrapper::*)()) & GameEventWrapper::UpdateGameOwner, "C++: GameEventWrapper::UpdateGameOwner() --> void");
		cl.def("SetGameOwner2", (void (GameEventWrapper::*)(class PriWrapper)) & GameEventWrapper::SetGameOwner2, "C++: GameEventWrapper::SetGameOwner2(class PriWrapper) --> void", "NewOwner"_a);
		cl.def("__GameEvent_TA__SetAllowReadyUp", (void (GameEventWrapper::*)(class PriWrapper)) & GameEventWrapper::__GameEvent_TA__SetAllowReadyUp, "C++: GameEventWrapper::__GameEvent_TA__SetAllowReadyUp(class PriWrapper) --> void", "P"_a);
		cl.def("__GameEvent_TA__CheckPlayersReady", (bool (GameEventWrapper::*)(class PriWrapper)) & GameEventWrapper::__GameEvent_TA__CheckPlayersReady, "C++: GameEventWrapper::__GameEvent_TA__CheckPlayersReady(class PriWrapper) --> bool", "P"_a);
		cl.def("__GameEvent_TA__CheckForBannedPlayers", (struct SteamID(GameEventWrapper::*)(class PriWrapper)) & GameEventWrapper::__GameEvent_TA__CheckForBannedPlayers, "C++: GameEventWrapper::__GameEvent_TA__CheckForBannedPlayers(class PriWrapper) --> struct SteamID", "PRI"_a);
		cl.def("__Pylon__ChangeNotifyFunc", (void (GameEventWrapper::*)()) & GameEventWrapper::__Pylon__ChangeNotifyFunc, "C++: GameEventWrapper::__Pylon__ChangeNotifyFunc() --> void");
		cl.def("PlayerResetTraining", (void (GameEventWrapper::*)()) & GameEventWrapper::PlayerResetTraining, "C++: GameEventWrapper::PlayerResetTraining() --> void");
		cl.def("SuppressModalDialogs", (bool (GameEventWrapper::*)()) & GameEventWrapper::SuppressModalDialogs, "C++: GameEventWrapper::SuppressModalDialogs() --> bool");
		cl.def("ShouldShowBallIndicator", (bool (GameEventWrapper::*)()) & GameEventWrapper::ShouldShowBallIndicator, "C++: GameEventWrapper::ShouldShowBallIndicator() --> bool");
		cl.def("CheckInitiatedForfeit", (void (GameEventWrapper::*)(class PriWrapper)) & GameEventWrapper::CheckInitiatedForfeit, "C++: GameEventWrapper::CheckInitiatedForfeit(class PriWrapper) --> void", "PRI"_a);
		cl.def("CheckChatBanned", (void (GameEventWrapper::*)(class PlayerControllerWrapper)) & GameEventWrapper::CheckChatBanned, "C++: GameEventWrapper::CheckChatBanned(class PlayerControllerWrapper) --> void", "PC"_a);
		cl.def("FindPCForUniqueID", (class PlayerControllerWrapper(GameEventWrapper::*)(struct SteamID&)) & GameEventWrapper::FindPCForUniqueID, "C++: GameEventWrapper::FindPCForUniqueID(struct SteamID &) --> class PlayerControllerWrapper", "PlayerID"_a);
		cl.def("AllowSplitScreenPlayer", (bool (GameEventWrapper::*)()) & GameEventWrapper::AllowSplitScreenPlayer, "C++: GameEventWrapper::AllowSplitScreenPlayer() --> bool");
		cl.def("AddPlayerChatMessage", (void (GameEventWrapper::*)(struct SteamID&, unsigned char, class TeamInfoWrapper, std::string)) & GameEventWrapper::AddPlayerChatMessage, "C++: GameEventWrapper::AddPlayerChatMessage(struct SteamID &, unsigned char, class TeamInfoWrapper, std::string) --> void", "PlayerID"_a, "ChatChannel"_a, "Team"_a, "Message"_a);
		cl.def("ConditionalStartSpectatorMatch", (void (GameEventWrapper::*)()) & GameEventWrapper::ConditionalStartSpectatorMatch, "C++: GameEventWrapper::ConditionalStartSpectatorMatch() --> void");
		cl.def("IsPlayingTraining", (bool (GameEventWrapper::*)()) & GameEventWrapper::IsPlayingTraining, "C++: GameEventWrapper::IsPlayingTraining() --> bool");
		cl.def("IsPlayingLan", (bool (GameEventWrapper::*)()) & GameEventWrapper::IsPlayingLan, "C++: GameEventWrapper::IsPlayingLan() --> bool");
		cl.def("IsPlayingOffline", (bool (GameEventWrapper::*)()) & GameEventWrapper::IsPlayingOffline, "C++: GameEventWrapper::IsPlayingOffline() --> bool");
		cl.def("IsPlayingPrivate", (bool (GameEventWrapper::*)()) & GameEventWrapper::IsPlayingPrivate, "C++: GameEventWrapper::IsPlayingPrivate() --> bool");
		cl.def("IsPlayingPublic", (bool (GameEventWrapper::*)()) & GameEventWrapper::IsPlayingPublic, "C++: GameEventWrapper::IsPlayingPublic() --> bool");
		cl.def("IsOnlineMultiplayer", (bool (GameEventWrapper::*)()) & GameEventWrapper::IsOnlineMultiplayer, "C++: GameEventWrapper::IsOnlineMultiplayer() --> bool");
		cl.def("CreateMatchType", (void (GameEventWrapper::*)(std::string)) & GameEventWrapper::CreateMatchType, "C++: GameEventWrapper::CreateMatchType(std::string) --> void", "Options"_a);
		cl.def("AllPlayersSelectedTeam", (bool (GameEventWrapper::*)()) & GameEventWrapper::AllPlayersSelectedTeam, "C++: GameEventWrapper::AllPlayersSelectedTeam() --> bool");
		cl.def("CanQueSaveReplay", (bool (GameEventWrapper::*)()) & GameEventWrapper::CanQueSaveReplay, "C++: GameEventWrapper::CanQueSaveReplay() --> bool");
		cl.def("ForceMatchStart", (void (GameEventWrapper::*)()) & GameEventWrapper::ForceMatchStart, "C++: GameEventWrapper::ForceMatchStart() --> void");
		cl.def("ConditionalStartMatch", (void (GameEventWrapper::*)()) & GameEventWrapper::ConditionalStartMatch, "C++: GameEventWrapper::ConditionalStartMatch() --> void");
		cl.def("SaveLocalPlayerStats", (void (GameEventWrapper::*)()) & GameEventWrapper::SaveLocalPlayerStats, "C++: GameEventWrapper::SaveLocalPlayerStats() --> void");
		cl.def("CanUseBallCam", (bool (GameEventWrapper::*)()) & GameEventWrapper::CanUseBallCam, "C++: GameEventWrapper::CanUseBallCam() --> bool");
		cl.def("HandleNextGame", (bool (GameEventWrapper::*)()) & GameEventWrapper::HandleNextGame, "C++: GameEventWrapper::HandleNextGame() --> bool");
		cl.def("SetMaxPlayers2", (void (GameEventWrapper::*)(int)) & GameEventWrapper::SetMaxPlayers2, "C++: GameEventWrapper::SetMaxPlayers2(int) --> void", "InMaxPlayers"_a);
		cl.def("SetRestartingMatch", (void (GameEventWrapper::*)(unsigned long)) & GameEventWrapper::SetRestartingMatch, "C++: GameEventWrapper::SetRestartingMatch(unsigned long) --> void", "bRestart"_a);
		cl.def("ShouldBeFullScreen", (bool (GameEventWrapper::*)()) & GameEventWrapper::ShouldBeFullScreen, "C++: GameEventWrapper::ShouldBeFullScreen() --> bool");
		cl.def("IsFinished", (bool (GameEventWrapper::*)()) & GameEventWrapper::IsFinished, "C++: GameEventWrapper::IsFinished() --> bool");
		cl.def("OnAllPlayersReady", (void (GameEventWrapper::*)()) & GameEventWrapper::OnAllPlayersReady, "C++: GameEventWrapper::OnAllPlayersReady() --> void");
		cl.def("CheckPlayersReady2", (void (GameEventWrapper::*)()) & GameEventWrapper::CheckPlayersReady2, "C++: GameEventWrapper::CheckPlayersReady2() --> void");
		cl.def("SetAllowReadyUp2", (void (GameEventWrapper::*)(unsigned long)) & GameEventWrapper::SetAllowReadyUp2, "C++: GameEventWrapper::SetAllowReadyUp2(unsigned long) --> void", "bAllow"_a);
		cl.def("AutoReadyPlayers", (void (GameEventWrapper::*)()) & GameEventWrapper::AutoReadyPlayers, "C++: GameEventWrapper::AutoReadyPlayers() --> void");
		cl.def("ShouldAutoReadyUp", (bool (GameEventWrapper::*)(class PriWrapper)) & GameEventWrapper::ShouldAutoReadyUp, "C++: GameEventWrapper::ShouldAutoReadyUp(class PriWrapper) --> bool", "PRI"_a);
		cl.def("SendGoMessage", (void (GameEventWrapper::*)(class PlayerControllerWrapper)) & GameEventWrapper::SendGoMessage, "C++: GameEventWrapper::SendGoMessage(class PlayerControllerWrapper) --> void", "Player"_a);
		cl.def("SendCountdownMessage", (void (GameEventWrapper::*)(int, class PlayerControllerWrapper)) & GameEventWrapper::SendCountdownMessage, "C++: GameEventWrapper::SendCountdownMessage(int, class PlayerControllerWrapper) --> void", "Seconds"_a, "Player"_a);
		cl.def("BroadcastCountdownMessage", (void (GameEventWrapper::*)(int)) & GameEventWrapper::BroadcastCountdownMessage, "C++: GameEventWrapper::BroadcastCountdownMessage(int) --> void", "Seconds"_a);
		cl.def("BroadcastGoMessage", (void (GameEventWrapper::*)()) & GameEventWrapper::BroadcastGoMessage, "C++: GameEventWrapper::BroadcastGoMessage() --> void");
		cl.def("AllowShutdown", (bool (GameEventWrapper::*)()) & GameEventWrapper::AllowShutdown, "C++: GameEventWrapper::AllowShutdown() --> bool");
		cl.def("GetRealDeltaTime", (float (GameEventWrapper::*)(float)) & GameEventWrapper::GetRealDeltaTime, "C++: GameEventWrapper::GetRealDeltaTime(float) --> float", "ElapsedTime"_a);
		cl.def("SetTimeDilation", (void (GameEventWrapper::*)(float)) & GameEventWrapper::SetTimeDilation, "C++: GameEventWrapper::SetTimeDilation(float) --> void", "NewTimeDilation"_a);
		cl.def("ClearRespawnList", (void (GameEventWrapper::*)()) & GameEventWrapper::ClearRespawnList, "C++: GameEventWrapper::ClearRespawnList() --> void");
		cl.def("ReplaceBotsWithAwaitingPlayers", (void (GameEventWrapper::*)()) & GameEventWrapper::ReplaceBotsWithAwaitingPlayers, "C++: GameEventWrapper::ReplaceBotsWithAwaitingPlayers() --> void");
		cl.def("GetRespawnTime2", (int (GameEventWrapper::*)()) & GameEventWrapper::GetRespawnTime2, "C++: GameEventWrapper::GetRespawnTime2() --> int");
		cl.def("RemoveCar", (void (GameEventWrapper::*)(class CarWrapper)) & GameEventWrapper::RemoveCar, "C++: GameEventWrapper::RemoveCar(class CarWrapper) --> void", "Car"_a);
		cl.def("AddCar", (void (GameEventWrapper::*)(class CarWrapper)) & GameEventWrapper::AddCar, "C++: GameEventWrapper::AddCar(class CarWrapper) --> void", "Car"_a);
		cl.def("TickRespawnTime", (void (GameEventWrapper::*)(float)) & GameEventWrapper::TickRespawnTime, "C++: GameEventWrapper::TickRespawnTime(float) --> void", "DeltaTime"_a);
		cl.def("SetBotSkill2", (void (GameEventWrapper::*)(float)) & GameEventWrapper::SetBotSkill2, "C++: GameEventWrapper::SetBotSkill2(float) --> void", "NewSkill"_a);
		cl.def("GetLocalPrimaryPlayer", (class PlayerControllerWrapper(GameEventWrapper::*)()) & GameEventWrapper::GetLocalPrimaryPlayer, "C++: GameEventWrapper::GetLocalPrimaryPlayer() --> class PlayerControllerWrapper");
		cl.def("HasPlayerNamed", (bool (GameEventWrapper::*)(std::string)) & GameEventWrapper::HasPlayerNamed, "C++: GameEventWrapper::HasPlayerNamed(std::string) --> bool", "PlayerName"_a);
		cl.def("RandomizeBots", (void (GameEventWrapper::*)()) & GameEventWrapper::RandomizeBots, "C++: GameEventWrapper::RandomizeBots() --> void");
		cl.def("MoveToGround", (bool (GameEventWrapper::*)(class ActorWrapper, float)) & GameEventWrapper::MoveToGround, "C++: GameEventWrapper::MoveToGround(class ActorWrapper, float) --> bool", "Mover"_a, "HeightCheck"_a);
		cl.def("SetAllDriving", (void (GameEventWrapper::*)(unsigned long)) & GameEventWrapper::SetAllDriving, "C++: GameEventWrapper::SetAllDriving(unsigned long) --> void", "bDriving"_a);
		cl.def("OnFinished", (void (GameEventWrapper::*)()) & GameEventWrapper::OnFinished, "C++: GameEventWrapper::OnFinished() --> void");
		cl.def("StartCountDown", (void (GameEventWrapper::*)()) & GameEventWrapper::StartCountDown, "C++: GameEventWrapper::StartCountDown() --> void");
		cl.def("StartInitialCountDown", (void (GameEventWrapper::*)()) & GameEventWrapper::StartInitialCountDown, "C++: GameEventWrapper::StartInitialCountDown() --> void");
		cl.def("OnGameStateTimeLapsed", (void (GameEventWrapper::*)()) & GameEventWrapper::OnGameStateTimeLapsed, "C++: GameEventWrapper::OnGameStateTimeLapsed() --> void");
		cl.def("OnGameStateTimeUpdated", (void (GameEventWrapper::*)()) & GameEventWrapper::OnGameStateTimeUpdated, "C++: GameEventWrapper::OnGameStateTimeUpdated() --> void");
		cl.def("UpdateGameStateTime", (void (GameEventWrapper::*)()) & GameEventWrapper::UpdateGameStateTime, "C++: GameEventWrapper::UpdateGameStateTime() --> void");
		cl.def("SetGameStateTimeRemaining2", (void (GameEventWrapper::*)(int, unsigned long)) & GameEventWrapper::SetGameStateTimeRemaining2, "C++: GameEventWrapper::SetGameStateTimeRemaining2(int, unsigned long) --> void", "StateTime"_a, "bFromReplication"_a);
		cl.def("SetGameStateTime2", (void (GameEventWrapper::*)(int)) & GameEventWrapper::SetGameStateTime2, "C++: GameEventWrapper::SetGameStateTime2(int) --> void", "StateTime"_a);
		cl.def("OnPlayerRestarted", (void (GameEventWrapper::*)(class CarWrapper)) & GameEventWrapper::OnPlayerRestarted, "C++: GameEventWrapper::OnPlayerRestarted(class CarWrapper) --> void", "PlayerCar"_a);
		cl.def("TeleportCar", (void (GameEventWrapper::*)(class CarWrapper)) & GameEventWrapper::TeleportCar, "C++: GameEventWrapper::TeleportCar(class CarWrapper) --> void", "PlayerCar"_a);
		cl.def("OnCarSpawned", (void (GameEventWrapper::*)(class CarWrapper)) & GameEventWrapper::OnCarSpawned, "C++: GameEventWrapper::OnCarSpawned(class CarWrapper) --> void", "NewCar"_a);
		cl.def("SpotIsEncroached", (bool (GameEventWrapper::*)(struct Vector&)) & GameEventWrapper::SpotIsEncroached, "C++: GameEventWrapper::SpotIsEncroached(struct Vector &) --> bool", "Spot"_a);
		cl.def("RandomizeSpawnPoints", (void (GameEventWrapper::*)()) & GameEventWrapper::RandomizeSpawnPoints, "C++: GameEventWrapper::RandomizeSpawnPoints() --> void");
		cl.def("RestartPlayers", (void (GameEventWrapper::*)()) & GameEventWrapper::RestartPlayers, "C++: GameEventWrapper::RestartPlayers() --> void");
		cl.def("RemoveLocalPlayer", (void (GameEventWrapper::*)(class PlayerControllerWrapper)) & GameEventWrapper::RemoveLocalPlayer, "C++: GameEventWrapper::RemoveLocalPlayer(class PlayerControllerWrapper) --> void", "Player"_a);
		cl.def("AddLocalPlayer", (void (GameEventWrapper::*)(class PlayerControllerWrapper)) & GameEventWrapper::AddLocalPlayer, "C++: GameEventWrapper::AddLocalPlayer(class PlayerControllerWrapper) --> void", "Player"_a);
		cl.def("RemovePRI", (void (GameEventWrapper::*)(class PriWrapper)) & GameEventWrapper::RemovePRI, "C++: GameEventWrapper::RemovePRI(class PriWrapper) --> void", "PRI"_a);
		cl.def("AddPRI", (void (GameEventWrapper::*)(class PriWrapper)) & GameEventWrapper::AddPRI, "C++: GameEventWrapper::AddPRI(class PriWrapper) --> void", "PRI"_a);
		cl.def("AddForfeitInitiator", (void (GameEventWrapper::*)(struct SteamID&)) & GameEventWrapper::AddForfeitInitiator, "C++: GameEventWrapper::AddForfeitInitiator(struct SteamID &) --> void", "PlayerID"_a);
		cl.def("BanPlayerID", (void (GameEventWrapper::*)(struct SteamID&)) & GameEventWrapper::BanPlayerID, "C++: GameEventWrapper::BanPlayerID(struct SteamID &) --> void", "PlayerID"_a);
		cl.def("GetMaxHumans", (int (GameEventWrapper::*)()) & GameEventWrapper::GetMaxHumans, "C++: GameEventWrapper::GetMaxHumans() --> int");
		cl.def("GetNumHumans", (int (GameEventWrapper::*)()) & GameEventWrapper::GetNumHumans, "C++: GameEventWrapper::GetNumHumans() --> int");
		cl.def("FindBotReplacement", (bool (GameEventWrapper::*)(class PriWrapper)) & GameEventWrapper::FindBotReplacement, "C++: GameEventWrapper::FindBotReplacement(class PriWrapper) --> bool", "PRI"_a);
		cl.def("UpdateBotCount", (void (GameEventWrapper::*)()) & GameEventWrapper::UpdateBotCount, "C++: GameEventWrapper::UpdateBotCount() --> void");
		cl.def("TimerUpdateBotCount", (void (GameEventWrapper::*)()) & GameEventWrapper::TimerUpdateBotCount, "C++: GameEventWrapper::TimerUpdateBotCount() --> void");
		cl.def("InitBotSkill", (void (GameEventWrapper::*)()) & GameEventWrapper::InitBotSkill, "C++: GameEventWrapper::InitBotSkill() --> void");
		cl.def("InitMutators", (void (GameEventWrapper::*)()) & GameEventWrapper::InitMutators, "C++: GameEventWrapper::InitMutators() --> void");
		cl.def("HandleFinished", (void (GameEventWrapper::*)(class GameEventWrapper)) & GameEventWrapper::HandleFinished, "C++: GameEventWrapper::HandleFinished(class GameEventWrapper) --> void", "GameEvent"_a);
		cl.def("Init2", (void (GameEventWrapper::*)(class PlayerControllerWrapper)) & GameEventWrapper::Init2, "C++: GameEventWrapper::Init2(class PlayerControllerWrapper) --> void", "InActivator"_a);
		cl.def("eventInitGame", (void (GameEventWrapper::*)(std::string)) & GameEventWrapper::eventInitGame, "C++: GameEventWrapper::eventInitGame(std::string) --> void", "Options"_a);
		cl.def("OnGameStateChanged", (void (GameEventWrapper::*)()) & GameEventWrapper::OnGameStateChanged, "C++: GameEventWrapper::OnGameStateChanged() --> void");
		cl.def("OnCanVoteForfeitChanged", (void (GameEventWrapper::*)()) & GameEventWrapper::OnCanVoteForfeitChanged, "C++: GameEventWrapper::OnCanVoteForfeitChanged() --> void");
		cl.def("UpdateCanVoteToForfeit", (void (GameEventWrapper::*)()) & GameEventWrapper::UpdateCanVoteToForfeit, "C++: GameEventWrapper::UpdateCanVoteToForfeit() --> void");
		cl.def("ShouldAllowVoteToForfeit", (bool (GameEventWrapper::*)()) & GameEventWrapper::ShouldAllowVoteToForfeit, "C++: GameEventWrapper::ShouldAllowVoteToForfeit() --> bool");
		cl.def("OnPenaltyChanged", (void (GameEventWrapper::*)()) & GameEventWrapper::OnPenaltyChanged, "C++: GameEventWrapper::OnPenaltyChanged() --> void");
		cl.def("UpdateLeaveMatchPenalty", (void (GameEventWrapper::*)()) & GameEventWrapper::UpdateLeaveMatchPenalty, "C++: GameEventWrapper::UpdateLeaveMatchPenalty() --> void");
		cl.def("GetPlaylist", (class GameSettingPlaylistWrapper(GameEventWrapper::*)()) & GameEventWrapper::GetPlaylist, "C++: GameEventWrapper::GetPlaylist() --> class GameSettingPlaylistWrapper");
		cl.def("ShouldHaveLeaveMatchPenalty", (bool (GameEventWrapper::*)()) & GameEventWrapper::ShouldHaveLeaveMatchPenalty, "C++: GameEventWrapper::ShouldHaveLeaveMatchPenalty() --> bool");
		cl.def("OnMatchSettingsChanged", (void (GameEventWrapper::*)()) & GameEventWrapper::OnMatchSettingsChanged, "C++: GameEventWrapper::OnMatchSettingsChanged() --> void");
		cl.def("ClearGameScoreFromCustomSettings", (void (GameEventWrapper::*)()) & GameEventWrapper::ClearGameScoreFromCustomSettings, "C++: GameEventWrapper::ClearGameScoreFromCustomSettings() --> void");
		cl.def("EventPlayerResetTraining", (void (GameEventWrapper::*)(class GameEventWrapper)) & GameEventWrapper::EventPlayerResetTraining, "C++: GameEventWrapper::EventPlayerResetTraining(class GameEventWrapper) --> void", "GameEvent"_a);
	}
	{ // TeamGameEventWrapper file: line:11
		pybind11::class_<TeamGameEventWrapper, std::shared_ptr<TeamGameEventWrapper>, GameEventWrapper> cl(M, "TeamGameEventWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](TeamGameEventWrapper const& o) { return new TeamGameEventWrapper(o); }));
		cl.def("assign", (class TeamGameEventWrapper& (TeamGameEventWrapper::*)(class TeamGameEventWrapper)) & TeamGameEventWrapper::operator=, "C++: TeamGameEventWrapper::operator=(class TeamGameEventWrapper) --> class TeamGameEventWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetTeamArchetypes", (class ArrayWrapper<class TeamWrapper>(TeamGameEventWrapper::*)()) & TeamGameEventWrapper::GetTeamArchetypes, "C++: TeamGameEventWrapper::GetTeamArchetypes() --> class ArrayWrapper<class TeamWrapper>");
		cl.def("GetTeams", (class ArrayWrapper<class TeamWrapper>(TeamGameEventWrapper::*)()) & TeamGameEventWrapper::GetTeams, "C++: TeamGameEventWrapper::GetTeams() --> class ArrayWrapper<class TeamWrapper>");
		cl.def("GetMaxTeamSize", (int (TeamGameEventWrapper::*)()) & TeamGameEventWrapper::GetMaxTeamSize, "C++: TeamGameEventWrapper::GetMaxTeamSize() --> int");
		cl.def("SetMaxTeamSize", (void (TeamGameEventWrapper::*)(int)) & TeamGameEventWrapper::SetMaxTeamSize, "C++: TeamGameEventWrapper::SetMaxTeamSize(int) --> void", "newMaxTeamSize"_a);
		cl.def("GetNumBots", (int (TeamGameEventWrapper::*)()) & TeamGameEventWrapper::GetNumBots, "C++: TeamGameEventWrapper::GetNumBots() --> int");
		cl.def("SetNumBots", (void (TeamGameEventWrapper::*)(int)) & TeamGameEventWrapper::SetNumBots, "C++: TeamGameEventWrapper::SetNumBots(int) --> void", "newNumBots"_a);
		cl.def("GetbMuteOppositeTeams", (unsigned long (TeamGameEventWrapper::*)()) & TeamGameEventWrapper::GetbMuteOppositeTeams, "C++: TeamGameEventWrapper::GetbMuteOppositeTeams() --> unsigned long");
		cl.def("SetbMuteOppositeTeams", (void (TeamGameEventWrapper::*)(unsigned long)) & TeamGameEventWrapper::SetbMuteOppositeTeams, "C++: TeamGameEventWrapper::SetbMuteOppositeTeams(unsigned long) --> void", "newbMuteOppositeTeams"_a);
		cl.def("GetbDisableMutingOtherTeam", (unsigned long (TeamGameEventWrapper::*)()) & TeamGameEventWrapper::GetbDisableMutingOtherTeam, "C++: TeamGameEventWrapper::GetbDisableMutingOtherTeam() --> unsigned long");
		cl.def("SetbDisableMutingOtherTeam", (void (TeamGameEventWrapper::*)(unsigned long)) & TeamGameEventWrapper::SetbDisableMutingOtherTeam, "C++: TeamGameEventWrapper::SetbDisableMutingOtherTeam(unsigned long) --> void", "newbDisableMutingOtherTeam"_a);
		cl.def("GetbForfeit", (unsigned long (TeamGameEventWrapper::*)()) & TeamGameEventWrapper::GetbForfeit, "C++: TeamGameEventWrapper::GetbForfeit() --> unsigned long");
		cl.def("SetbForfeit", (void (TeamGameEventWrapper::*)(unsigned long)) & TeamGameEventWrapper::SetbForfeit, "C++: TeamGameEventWrapper::SetbForfeit(unsigned long) --> void", "newbForfeit"_a);
		cl.def("GetbUnfairTeams", (unsigned long (TeamGameEventWrapper::*)()) & TeamGameEventWrapper::GetbUnfairTeams, "C++: TeamGameEventWrapper::GetbUnfairTeams() --> unsigned long");
		cl.def("SetbUnfairTeams", (void (TeamGameEventWrapper::*)(unsigned long)) & TeamGameEventWrapper::SetbUnfairTeams, "C++: TeamGameEventWrapper::SetbUnfairTeams(unsigned long) --> void", "newbUnfairTeams"_a);
		cl.def("GetbAlwaysAutoSelectTeam", (unsigned long (TeamGameEventWrapper::*)()) & TeamGameEventWrapper::GetbAlwaysAutoSelectTeam, "C++: TeamGameEventWrapper::GetbAlwaysAutoSelectTeam() --> unsigned long");
		cl.def("SetbAlwaysAutoSelectTeam", (void (TeamGameEventWrapper::*)(unsigned long)) & TeamGameEventWrapper::SetbAlwaysAutoSelectTeam, "C++: TeamGameEventWrapper::SetbAlwaysAutoSelectTeam(unsigned long) --> void", "newbAlwaysAutoSelectTeam"_a);
		cl.def("StartRematchVote", (void (TeamGameEventWrapper::*)()) & TeamGameEventWrapper::StartRematchVote, "C++: TeamGameEventWrapper::StartRematchVote() --> void");
		cl.def("CheckRematchVote", (void (TeamGameEventWrapper::*)()) & TeamGameEventWrapper::CheckRematchVote, "C++: TeamGameEventWrapper::CheckRematchVote() --> void");
		cl.def("__GameEvent_Team_TA__AllTeamsHaveHumans", (bool (TeamGameEventWrapper::*)(class TeamWrapper)) & TeamGameEventWrapper::__GameEvent_Team_TA__AllTeamsHaveHumans, "C++: TeamGameEventWrapper::__GameEvent_Team_TA__AllTeamsHaveHumans(class TeamWrapper) --> bool", "Team"_a);
		cl.def("UpdatePlayerShortcuts", (void (TeamGameEventWrapper::*)()) & TeamGameEventWrapper::UpdatePlayerShortcuts, "C++: TeamGameEventWrapper::UpdatePlayerShortcuts() --> void");
		cl.def("ClearTemporarySpawnSpots", (void (TeamGameEventWrapper::*)()) & TeamGameEventWrapper::ClearTemporarySpawnSpots, "C++: TeamGameEventWrapper::ClearTemporarySpawnSpots() --> void");
		cl.def("ChooseTeam", (bool (TeamGameEventWrapper::*)(int, class PlayerControllerWrapper)) & TeamGameEventWrapper::ChooseTeam, "C++: TeamGameEventWrapper::ChooseTeam(int, class PlayerControllerWrapper) --> bool", "TeamIndex"_a, "Player"_a);
		// 'TeamGameEventWrapper::CanChangeTeam': Removed from Rocket League, defaults to false
		// cl.def("CanChangeTeam", (bool (TeamGameEventWrapper::*)()) & TeamGameEventWrapper::CanChangeTeam, "C++: TeamGameEventWrapper::CanChangeTeam() --> bool");
		cl.def("OnPenaltyChanged", (void (TeamGameEventWrapper::*)()) & TeamGameEventWrapper::OnPenaltyChanged, "C++: TeamGameEventWrapper::OnPenaltyChanged() --> void");
		cl.def("OnTeamForfeited", (void (TeamGameEventWrapper::*)(class TeamWrapper)) & TeamGameEventWrapper::OnTeamForfeited, "C++: TeamGameEventWrapper::OnTeamForfeited(class TeamWrapper) --> void", "Team"_a);
		cl.def("HandleTeamForfeit", (void (TeamGameEventWrapper::*)(class TeamWrapper)) & TeamGameEventWrapper::HandleTeamForfeit, "C++: TeamGameEventWrapper::HandleTeamForfeit(class TeamWrapper) --> void", "Team"_a);
		cl.def("MuteOppositeTeams2", (void (TeamGameEventWrapper::*)(unsigned long)) & TeamGameEventWrapper::MuteOppositeTeams2, "C++: TeamGameEventWrapper::MuteOppositeTeams2(unsigned long) --> void", "bMute"_a);
		cl.def("UpdateBotCount", (void (TeamGameEventWrapper::*)()) & TeamGameEventWrapper::UpdateBotCount, "C++: TeamGameEventWrapper::UpdateBotCount() --> void");
		cl.def("FindBotReplacement", (bool (TeamGameEventWrapper::*)(class PriWrapper)) & TeamGameEventWrapper::FindBotReplacement, "C++: TeamGameEventWrapper::FindBotReplacement(class PriWrapper) --> bool", "PRI"_a);
		cl.def("EndGame", (void (TeamGameEventWrapper::*)()) & TeamGameEventWrapper::EndGame, "C++: TeamGameEventWrapper::EndGame() --> void");
		cl.def("ForceNoContest", (void (TeamGameEventWrapper::*)()) & TeamGameEventWrapper::ForceNoContest, "C++: TeamGameEventWrapper::ForceNoContest() --> void");
		cl.def("AddTemporarySpawnSpot", (void (TeamGameEventWrapper::*)(class TeamWrapper, class CarWrapper)) & TeamGameEventWrapper::AddTemporarySpawnSpot, "C++: TeamGameEventWrapper::AddTemporarySpawnSpot(class TeamWrapper, class CarWrapper) --> void", "Team"_a, "Car"_a);
		cl.def("HandleSelectedLoadout", (void (TeamGameEventWrapper::*)(class PriWrapper)) & TeamGameEventWrapper::HandleSelectedLoadout, "C++: TeamGameEventWrapper::HandleSelectedLoadout(class PriWrapper) --> void", "PlayerPRI"_a);
		cl.def("DestroyTeams", (void (TeamGameEventWrapper::*)()) & TeamGameEventWrapper::DestroyTeams, "C++: TeamGameEventWrapper::DestroyTeams() --> void");
		cl.def("OnAllTeamsCreated", (void (TeamGameEventWrapper::*)()) & TeamGameEventWrapper::OnAllTeamsCreated, "C++: TeamGameEventWrapper::OnAllTeamsCreated() --> void");
		cl.def("AssignCustomTeamSettings", (void (TeamGameEventWrapper::*)()) & TeamGameEventWrapper::AssignCustomTeamSettings, "C++: TeamGameEventWrapper::AssignCustomTeamSettings() --> void");
		cl.def("OnMatchSettingsChanged", (void (TeamGameEventWrapper::*)()) & TeamGameEventWrapper::OnMatchSettingsChanged, "C++: TeamGameEventWrapper::OnMatchSettingsChanged() --> void");
		cl.def("AllTeamsHaveHumans2", (bool (TeamGameEventWrapper::*)()) & TeamGameEventWrapper::AllTeamsHaveHumans2, "C++: TeamGameEventWrapper::AllTeamsHaveHumans2() --> bool");
		cl.def("AllTeamsCreated2", (bool (TeamGameEventWrapper::*)()) & TeamGameEventWrapper::AllTeamsCreated2, "C++: TeamGameEventWrapper::AllTeamsCreated2() --> bool");
		cl.def("SetTeam", (void (TeamGameEventWrapper::*)(int, class TeamWrapper)) & TeamGameEventWrapper::SetTeam, "C++: TeamGameEventWrapper::SetTeam(int, class TeamWrapper) --> void", "TeamNum"_a, "NewTeam"_a);
		cl.def("CreateTeams", (void (TeamGameEventWrapper::*)()) & TeamGameEventWrapper::CreateTeams, "C++: TeamGameEventWrapper::CreateTeams() --> void");
		cl.def("PreloadBots", (void (TeamGameEventWrapper::*)()) & TeamGameEventWrapper::PreloadBots, "C++: TeamGameEventWrapper::PreloadBots() --> void");
		cl.def("OnInit", (void (TeamGameEventWrapper::*)()) & TeamGameEventWrapper::OnInit, "C++: TeamGameEventWrapper::OnInit() --> void");
		cl.def("SetMaxTeamSize2", (void (TeamGameEventWrapper::*)(int)) & TeamGameEventWrapper::SetMaxTeamSize2, "C++: TeamGameEventWrapper::SetMaxTeamSize2(int) --> void", "MaxSize"_a);
		cl.def("UpdateMaxTeamSize", (void (TeamGameEventWrapper::*)()) & TeamGameEventWrapper::UpdateMaxTeamSize, "C++: TeamGameEventWrapper::UpdateMaxTeamSize() --> void");
		cl.def("SetUnfairTeams", (void (TeamGameEventWrapper::*)(unsigned long)) & TeamGameEventWrapper::SetUnfairTeams, "C++: TeamGameEventWrapper::SetUnfairTeams(unsigned long) --> void", "bUnfair"_a);
		cl.def("InitBotSkill", (void (TeamGameEventWrapper::*)()) & TeamGameEventWrapper::InitBotSkill, "C++: TeamGameEventWrapper::InitBotSkill() --> void");
		cl.def("eventInitGame", (void (TeamGameEventWrapper::*)(std::string)) & TeamGameEventWrapper::eventInitGame, "C++: TeamGameEventWrapper::eventInitGame(std::string) --> void", "Options"_a);
	}
	{ // ServerWrapper file: line:15
		pybind11::class_<ServerWrapper, std::shared_ptr<ServerWrapper>, TeamGameEventWrapper> cl(M, "ServerWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](ServerWrapper const& o) { return new ServerWrapper(o); }));
		cl.def("assign", (class ServerWrapper& (ServerWrapper::*)(class ServerWrapper)) & ServerWrapper::operator=, "C++: ServerWrapper::operator=(class ServerWrapper) --> class ServerWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetBall", (class BallWrapper(ServerWrapper::*)()) & ServerWrapper::GetBall, "C++: ServerWrapper::GetBall() --> class BallWrapper");
		cl.def("SpawnCar", (void (ServerWrapper::*)(int, std::string)) & ServerWrapper::SpawnCar, "C++: ServerWrapper::SpawnCar(int, std::string) --> void", "carBody"_a, "name"_a);
		cl.def("SpawnBot", (void (ServerWrapper::*)(int, std::string)) & ServerWrapper::SpawnBot, "C++: ServerWrapper::SpawnBot(int, std::string) --> void", "carBody"_a, "name"_a);
		cl.def("SpawnBall", (class BallWrapper(ServerWrapper::*)(const struct Vector, bool, bool)) & ServerWrapper::SpawnBall, "C++: ServerWrapper::SpawnBall(const struct Vector, bool, bool) --> class BallWrapper", "position"_a, "wake"_a, "spawnCannon"_a);
		cl.def("HasAuthority", (bool (ServerWrapper::*)()) & ServerWrapper::HasAuthority, "C++: ServerWrapper::HasAuthority() --> bool");
		cl.def("SetGameSpeed", (void (ServerWrapper::*)(float)) & ServerWrapper::SetGameSpeed, "C++: ServerWrapper::SetGameSpeed(float) --> void", "GameSpeed"_a);
		cl.def("GetGameSpeed", (float (ServerWrapper::*)()) & ServerWrapper::GetGameSpeed, "C++: ServerWrapper::GetGameSpeed() --> float");
		cl.def("SetSecondsElapsed", (void (ServerWrapper::*)(float)) & ServerWrapper::SetSecondsElapsed, "C++: ServerWrapper::SetSecondsElapsed(float) --> void", "SecondsElapsed"_a);
		cl.def("GetSecondsElapsed", (float (ServerWrapper::*)()) & ServerWrapper::GetSecondsElapsed, "C++: ServerWrapper::GetSecondsElapsed() --> float");
		cl.def("GetGameCar", (class CarWrapper(ServerWrapper::*)()) & ServerWrapper::GetGameCar, "C++: ServerWrapper::GetGameCar() --> class CarWrapper");
		cl.def("IsBallMovingTowardsGoal", (bool (ServerWrapper::*)(int, class BallWrapper)) & ServerWrapper::IsBallMovingTowardsGoal, "C++: ServerWrapper::IsBallMovingTowardsGoal(int, class BallWrapper) --> bool", "goalNo"_a, "bw"_a);
		cl.def("IsInGoal", (bool (ServerWrapper::*)(struct Vector)) & ServerWrapper::IsInGoal, "C++: ServerWrapper::IsInGoal(struct Vector) --> bool", "vec"_a);
		cl.def("DisableGoalReset", (void (ServerWrapper::*)()) & ServerWrapper::DisableGoalReset, "C++: ServerWrapper::DisableGoalReset() --> void");
		cl.def("EnableGoalReset", (void (ServerWrapper::*)()) & ServerWrapper::EnableGoalReset, "C++: ServerWrapper::EnableGoalReset() --> void");
		cl.def("GenerateShot", (struct Vector(ServerWrapper::*)(struct Vector, struct Vector, float)) & ServerWrapper::GenerateShot, "C++: ServerWrapper::GenerateShot(struct Vector, struct Vector, float) --> struct Vector", "startPos"_a, "destination"_a, "speed"_a);
		cl.def("GenerateGoalAimLocation", (struct Vector(ServerWrapper::*)(int, struct Vector)) & ServerWrapper::GenerateGoalAimLocation, "C++: ServerWrapper::GenerateGoalAimLocation(int, struct Vector) --> struct Vector", "goalNumber"_a, "currentBallLocation"_a);
		cl.def("GetGoalExtent", [](ServerWrapper& o) -> Vector { return o.GetGoalExtent(); }, "");
		cl.def("GetGoalExtent", (struct Vector(ServerWrapper::*)(int)) & ServerWrapper::GetGoalExtent, "C++: ServerWrapper::GetGoalExtent(int) --> struct Vector", "goalNumber"_a = 0);
		cl.def("GetGoalLocation", [](ServerWrapper& o) -> Vector { return o.GetGoalLocation(); }, "");
		cl.def("GetGoalLocation", (struct Vector(ServerWrapper::*)(int)) & ServerWrapper::GetGoalLocation, "C++: ServerWrapper::GetGoalLocation(int) --> struct Vector", "goalNumber"_a = 0);
		cl.def("GetTestCarArchetype", (class CarWrapper(ServerWrapper::*)()) & ServerWrapper::GetTestCarArchetype, "C++: ServerWrapper::GetTestCarArchetype() --> class CarWrapper");
		cl.def("SetTestCarArchetype", (void (ServerWrapper::*)(class CarWrapper)) & ServerWrapper::SetTestCarArchetype, "C++: ServerWrapper::SetTestCarArchetype(class CarWrapper) --> void", "newTestCarArchetype"_a);
		cl.def("GetBallArchetype", (class BallWrapper(ServerWrapper::*)()) & ServerWrapper::GetBallArchetype, "C++: ServerWrapper::GetBallArchetype() --> class BallWrapper");
		cl.def("SetBallArchetype", (void (ServerWrapper::*)(class BallWrapper)) & ServerWrapper::SetBallArchetype, "C++: ServerWrapper::SetBallArchetype(class BallWrapper) --> void", "newBallArchetype"_a);
		cl.def("GetBallSpawnPoint", (class ActorWrapper(ServerWrapper::*)()) & ServerWrapper::GetBallSpawnPoint, "C++: ServerWrapper::GetBallSpawnPoint() --> class ActorWrapper");
		cl.def("SetBallSpawnPoint", (void (ServerWrapper::*)(class ActorWrapper)) & ServerWrapper::SetBallSpawnPoint, "C++: ServerWrapper::SetBallSpawnPoint(class ActorWrapper) --> void", "newBallSpawnPoint"_a);
		cl.def("GetSeriesLength", (int (ServerWrapper::*)()) & ServerWrapper::GetSeriesLength, "C++: ServerWrapper::GetSeriesLength() --> int");
		cl.def("SetSeriesLength", (void (ServerWrapper::*)(int)) & ServerWrapper::SetSeriesLength, "C++: ServerWrapper::SetSeriesLength(int) --> void", "newSeriesLength"_a);
		cl.def("GetGameTime", (int (ServerWrapper::*)()) & ServerWrapper::GetGameTime, "C++: ServerWrapper::GetGameTime() --> int");
		cl.def("SetGameTime", (void (ServerWrapper::*)(int)) & ServerWrapper::SetGameTime, "C++: ServerWrapper::SetGameTime(int) --> void", "newGameTime"_a);
		cl.def("GetWarmupTime", (int (ServerWrapper::*)()) & ServerWrapper::GetWarmupTime, "C++: ServerWrapper::GetWarmupTime() --> int");
		cl.def("SetWarmupTime", (void (ServerWrapper::*)(int)) & ServerWrapper::SetWarmupTime, "C++: ServerWrapper::SetWarmupTime(int) --> void", "newWarmupTime"_a);
		cl.def("GetMaxScore", (int (ServerWrapper::*)()) & ServerWrapper::GetMaxScore, "C++: ServerWrapper::GetMaxScore() --> int");
		cl.def("SetMaxScore", (void (ServerWrapper::*)(int)) & ServerWrapper::SetMaxScore, "C++: ServerWrapper::SetMaxScore(int) --> void", "newMaxScore"_a);
		cl.def("GetAutoBalanceDifference", (int (ServerWrapper::*)()) & ServerWrapper::GetAutoBalanceDifference, "C++: ServerWrapper::GetAutoBalanceDifference() --> int");
		cl.def("SetAutoBalanceDifference", (void (ServerWrapper::*)(int)) & ServerWrapper::SetAutoBalanceDifference, "C++: ServerWrapper::SetAutoBalanceDifference(int) --> void", "newAutoBalanceDifference"_a);
		cl.def("GetScoreSlomoTime", (float (ServerWrapper::*)()) & ServerWrapper::GetScoreSlomoTime, "C++: ServerWrapper::GetScoreSlomoTime() --> float");
		cl.def("SetScoreSlomoTime", (void (ServerWrapper::*)(float)) & ServerWrapper::SetScoreSlomoTime, "C++: ServerWrapper::SetScoreSlomoTime(float) --> void", "newScoreSlomoTime"_a);
		cl.def("GetGameTimeRemaining", (float (ServerWrapper::*)()) & ServerWrapper::GetGameTimeRemaining, "C++: ServerWrapper::GetGameTimeRemaining() --> float");
		cl.def("SetGameTimeRemaining", (void (ServerWrapper::*)(float)) & ServerWrapper::SetGameTimeRemaining, "C++: ServerWrapper::SetGameTimeRemaining(float) --> void", "newGameTimeRemaining"_a);
		cl.def("GetSecondsRemaining", (int (ServerWrapper::*)()) & ServerWrapper::GetSecondsRemaining, "C++: ServerWrapper::GetSecondsRemaining() --> int");
		cl.def("SetSecondsRemaining", (void (ServerWrapper::*)(int)) & ServerWrapper::SetSecondsRemaining, "C++: ServerWrapper::SetSecondsRemaining(int) --> void", "newSecondsRemaining"_a);
		cl.def("GetWaitTimeRemaining", (int (ServerWrapper::*)()) & ServerWrapper::GetWaitTimeRemaining, "C++: ServerWrapper::GetWaitTimeRemaining() --> int");
		cl.def("SetWaitTimeRemaining", (void (ServerWrapper::*)(int)) & ServerWrapper::SetWaitTimeRemaining, "C++: ServerWrapper::SetWaitTimeRemaining(int) --> void", "newWaitTimeRemaining"_a);
		cl.def("GetTotalGameTimePlayed", (float (ServerWrapper::*)()) & ServerWrapper::GetTotalGameTimePlayed, "C++: ServerWrapper::GetTotalGameTimePlayed() --> float");
		cl.def("SetTotalGameTimePlayed", (void (ServerWrapper::*)(float)) & ServerWrapper::SetTotalGameTimePlayed, "C++: ServerWrapper::SetTotalGameTimePlayed(float) --> void", "newTotalGameTimePlayed"_a);
		cl.def("GetOvertimeTimePlayed", (float (ServerWrapper::*)()) & ServerWrapper::GetOvertimeTimePlayed, "C++: ServerWrapper::GetOvertimeTimePlayed() --> float");
		cl.def("SetOvertimeTimePlayed", (void (ServerWrapper::*)(float)) & ServerWrapper::SetOvertimeTimePlayed, "C++: ServerWrapper::SetOvertimeTimePlayed(float) --> void", "newOvertimeTimePlayed"_a);
		cl.def("GetbRoundActive", (unsigned long (ServerWrapper::*)()) & ServerWrapper::GetbRoundActive, "C++: ServerWrapper::GetbRoundActive() --> unsigned long");
		cl.def("SetbRoundActive", (void (ServerWrapper::*)(unsigned long)) & ServerWrapper::SetbRoundActive, "C++: ServerWrapper::SetbRoundActive(unsigned long) --> void", "newbRoundActive"_a);
		cl.def("GetbPlayReplays", (unsigned long (ServerWrapper::*)()) & ServerWrapper::GetbPlayReplays, "C++: ServerWrapper::GetbPlayReplays() --> unsigned long");
		cl.def("SetbPlayReplays", (void (ServerWrapper::*)(unsigned long)) & ServerWrapper::SetbPlayReplays, "C++: ServerWrapper::SetbPlayReplays(unsigned long) --> void", "newbPlayReplays"_a);
		cl.def("GetbBallHasBeenHit", (unsigned long (ServerWrapper::*)()) & ServerWrapper::GetbBallHasBeenHit, "C++: ServerWrapper::GetbBallHasBeenHit() --> unsigned long");
		cl.def("SetbBallHasBeenHit", (void (ServerWrapper::*)(unsigned long)) & ServerWrapper::SetbBallHasBeenHit, "C++: ServerWrapper::SetbBallHasBeenHit(unsigned long) --> void", "newbBallHasBeenHit"_a);
		cl.def("GetbOverTime", (unsigned long (ServerWrapper::*)()) & ServerWrapper::GetbOverTime, "C++: ServerWrapper::GetbOverTime() --> unsigned long");
		cl.def("SetbOverTime", (void (ServerWrapper::*)(unsigned long)) & ServerWrapper::SetbOverTime, "C++: ServerWrapper::SetbOverTime(unsigned long) --> void", "newbOverTime"_a);
		cl.def("GetbUnlimitedTime", (unsigned long (ServerWrapper::*)()) & ServerWrapper::GetbUnlimitedTime, "C++: ServerWrapper::GetbUnlimitedTime() --> unsigned long");
		cl.def("SetbUnlimitedTime", (void (ServerWrapper::*)(unsigned long)) & ServerWrapper::SetbUnlimitedTime, "C++: ServerWrapper::SetbUnlimitedTime(unsigned long) --> void", "newbUnlimitedTime"_a);
		cl.def("GetbNoContest", (unsigned long (ServerWrapper::*)()) & ServerWrapper::GetbNoContest, "C++: ServerWrapper::GetbNoContest() --> unsigned long");
		cl.def("SetbNoContest", (void (ServerWrapper::*)(unsigned long)) & ServerWrapper::SetbNoContest, "C++: ServerWrapper::SetbNoContest(unsigned long) --> void", "newbNoContest"_a);
		cl.def("GetbDisableGoalDelay", (unsigned long (ServerWrapper::*)()) & ServerWrapper::GetbDisableGoalDelay, "C++: ServerWrapper::GetbDisableGoalDelay() --> unsigned long");
		cl.def("SetbDisableGoalDelay", (void (ServerWrapper::*)(unsigned long)) & ServerWrapper::SetbDisableGoalDelay, "C++: ServerWrapper::SetbDisableGoalDelay(unsigned long) --> void", "newbDisableGoalDelay"_a);
		cl.def("GetbShowNoScorerGoalMessage", (unsigned long (ServerWrapper::*)()) & ServerWrapper::GetbShowNoScorerGoalMessage, "C++: ServerWrapper::GetbShowNoScorerGoalMessage() --> unsigned long");
		cl.def("SetbShowNoScorerGoalMessage", (void (ServerWrapper::*)(unsigned long)) & ServerWrapper::SetbShowNoScorerGoalMessage, "C++: ServerWrapper::SetbShowNoScorerGoalMessage(unsigned long) --> void", "newbShowNoScorerGoalMessage"_a);
		cl.def("GetbMatchEnded", (unsigned long (ServerWrapper::*)()) & ServerWrapper::GetbMatchEnded, "C++: ServerWrapper::GetbMatchEnded() --> unsigned long");
		cl.def("SetbMatchEnded", (void (ServerWrapper::*)(unsigned long)) & ServerWrapper::SetbMatchEnded, "C++: ServerWrapper::SetbMatchEnded(unsigned long) --> void", "newbMatchEnded"_a);
		cl.def("GetbShowIntroScene", (unsigned long (ServerWrapper::*)()) & ServerWrapper::GetbShowIntroScene, "C++: ServerWrapper::GetbShowIntroScene() --> unsigned long");
		cl.def("SetbShowIntroScene", (void (ServerWrapper::*)(unsigned long)) & ServerWrapper::SetbShowIntroScene, "C++: ServerWrapper::SetbShowIntroScene(unsigned long) --> void", "newbShowIntroScene"_a);
		cl.def("GetbClubMatch", (unsigned long (ServerWrapper::*)()) & ServerWrapper::GetbClubMatch, "C++: ServerWrapper::GetbClubMatch() --> unsigned long");
		cl.def("SetbClubMatch", (void (ServerWrapper::*)(unsigned long)) & ServerWrapper::SetbClubMatch, "C++: ServerWrapper::SetbClubMatch(unsigned long) --> void", "newbClubMatch"_a);
		cl.def("GetNextSpawnIndex", (int (ServerWrapper::*)()) & ServerWrapper::GetNextSpawnIndex, "C++: ServerWrapper::GetNextSpawnIndex() --> int");
		cl.def("SetNextSpawnIndex", (void (ServerWrapper::*)(int)) & ServerWrapper::SetNextSpawnIndex, "C++: ServerWrapper::SetNextSpawnIndex(int) --> void", "newNextSpawnIndex"_a);
		cl.def("GetReplayDirectorArchetype", (class ReplayDirectorWrapper(ServerWrapper::*)()) & ServerWrapper::GetReplayDirectorArchetype, "C++: ServerWrapper::GetReplayDirectorArchetype() --> class ReplayDirectorWrapper");
		cl.def("SetReplayDirectorArchetype", (void (ServerWrapper::*)(class ReplayDirectorWrapper)) & ServerWrapper::SetReplayDirectorArchetype, "C++: ServerWrapper::SetReplayDirectorArchetype(class ReplayDirectorWrapper) --> void", "newReplayDirectorArchetype"_a);
		cl.def("GetReplayDirector", (class ReplayDirectorWrapper(ServerWrapper::*)()) & ServerWrapper::GetReplayDirector, "C++: ServerWrapper::GetReplayDirector() --> class ReplayDirectorWrapper");
		cl.def("SetReplayDirector", (void (ServerWrapper::*)(class ReplayDirectorWrapper)) & ServerWrapper::SetReplayDirector, "C++: ServerWrapper::SetReplayDirector(class ReplayDirectorWrapper) --> void", "newReplayDirector"_a);
		cl.def("GetGameBalls", (class ArrayWrapper<class BallWrapper>(ServerWrapper::*)()) & ServerWrapper::GetGameBalls, "C++: ServerWrapper::GetGameBalls() --> class ArrayWrapper<class BallWrapper>");
		cl.def("GetTotalGameBalls", (int (ServerWrapper::*)()) & ServerWrapper::GetTotalGameBalls, "C++: ServerWrapper::GetTotalGameBalls() --> int");
		cl.def("SetTotalGameBalls", (void (ServerWrapper::*)(int)) & ServerWrapper::SetTotalGameBalls, "C++: ServerWrapper::SetTotalGameBalls(int) --> void", "newTotalGameBalls"_a);
		cl.def("GetPostGoalTime", (float (ServerWrapper::*)()) & ServerWrapper::GetPostGoalTime, "C++: ServerWrapper::GetPostGoalTime() --> float");
		cl.def("SetPostGoalTime", (void (ServerWrapper::*)(float)) & ServerWrapper::SetPostGoalTime, "C++: ServerWrapper::SetPostGoalTime(float) --> void", "newPostGoalTime"_a);
		cl.def("GetGoals", (class ArrayWrapper<class GoalWrapper>(ServerWrapper::*)()) & ServerWrapper::GetGoals, "C++: ServerWrapper::GetGoals() --> class ArrayWrapper<class GoalWrapper>");
		cl.def("GetSecondsRemainingCountdown", (int (ServerWrapper::*)()) & ServerWrapper::GetSecondsRemainingCountdown, "C++: ServerWrapper::GetSecondsRemainingCountdown() --> int");
		cl.def("SetSecondsRemainingCountdown", (void (ServerWrapper::*)(int)) & ServerWrapper::SetSecondsRemainingCountdown, "C++: ServerWrapper::SetSecondsRemainingCountdown(int) --> void", "newSecondsRemainingCountdown"_a);
		cl.def("GetFieldCenter", (struct Vector(ServerWrapper::*)()) & ServerWrapper::GetFieldCenter, "C++: ServerWrapper::GetFieldCenter() --> struct Vector");
		cl.def("SetFieldCenter", (void (ServerWrapper::*)(struct Vector)) & ServerWrapper::SetFieldCenter, "C++: ServerWrapper::SetFieldCenter(struct Vector) --> void", "newFieldCenter"_a);
		cl.def("GetGameWinner", (class TeamWrapper(ServerWrapper::*)()) & ServerWrapper::GetGameWinner, "C++: ServerWrapper::GetGameWinner() --> class TeamWrapper");
		cl.def("SetGameWinner", (void (ServerWrapper::*)(class TeamWrapper)) & ServerWrapper::SetGameWinner, "C++: ServerWrapper::SetGameWinner(class TeamWrapper) --> void", "newGameWinner"_a);
		cl.def("GetMatchWinner", (class TeamWrapper(ServerWrapper::*)()) & ServerWrapper::GetMatchWinner, "C++: ServerWrapper::GetMatchWinner() --> class TeamWrapper");
		cl.def("SetMatchWinner", (void (ServerWrapper::*)(class TeamWrapper)) & ServerWrapper::SetMatchWinner, "C++: ServerWrapper::SetMatchWinner(class TeamWrapper) --> void", "newMatchWinner"_a);
		cl.def("GetMVP", (class PriWrapper(ServerWrapper::*)()) & ServerWrapper::GetMVP, "C++: ServerWrapper::GetMVP() --> class PriWrapper");
		cl.def("SetMVP", (void (ServerWrapper::*)(class PriWrapper)) & ServerWrapper::SetMVP, "C++: ServerWrapper::SetMVP(class PriWrapper) --> void", "newMVP"_a);
		cl.def("GetFastestGoalPlayer", (class PriWrapper(ServerWrapper::*)()) & ServerWrapper::GetFastestGoalPlayer, "C++: ServerWrapper::GetFastestGoalPlayer() --> class PriWrapper");
		cl.def("SetFastestGoalPlayer", (void (ServerWrapper::*)(class PriWrapper)) & ServerWrapper::SetFastestGoalPlayer, "C++: ServerWrapper::SetFastestGoalPlayer(class PriWrapper) --> void", "newFastestGoalPlayer"_a);
		cl.def("GetSlowestGoalPlayer", (class PriWrapper(ServerWrapper::*)()) & ServerWrapper::GetSlowestGoalPlayer, "C++: ServerWrapper::GetSlowestGoalPlayer() --> class PriWrapper");
		cl.def("SetSlowestGoalPlayer", (void (ServerWrapper::*)(class PriWrapper)) & ServerWrapper::SetSlowestGoalPlayer, "C++: ServerWrapper::SetSlowestGoalPlayer(class PriWrapper) --> void", "newSlowestGoalPlayer"_a);
		cl.def("GetFurthestGoalPlayer", (class PriWrapper(ServerWrapper::*)()) & ServerWrapper::GetFurthestGoalPlayer, "C++: ServerWrapper::GetFurthestGoalPlayer() --> class PriWrapper");
		cl.def("SetFurthestGoalPlayer", (void (ServerWrapper::*)(class PriWrapper)) & ServerWrapper::SetFurthestGoalPlayer, "C++: ServerWrapper::SetFurthestGoalPlayer(class PriWrapper) --> void", "newFurthestGoalPlayer"_a);
		cl.def("GetFastestGoalSpeed", (float (ServerWrapper::*)()) & ServerWrapper::GetFastestGoalSpeed, "C++: ServerWrapper::GetFastestGoalSpeed() --> float");
		cl.def("SetFastestGoalSpeed", (void (ServerWrapper::*)(float)) & ServerWrapper::SetFastestGoalSpeed, "C++: ServerWrapper::SetFastestGoalSpeed(float) --> void", "newFastestGoalSpeed"_a);
		cl.def("GetSlowestGoalSpeed", (float (ServerWrapper::*)()) & ServerWrapper::GetSlowestGoalSpeed, "C++: ServerWrapper::GetSlowestGoalSpeed() --> float");
		cl.def("SetSlowestGoalSpeed", (void (ServerWrapper::*)(float)) & ServerWrapper::SetSlowestGoalSpeed, "C++: ServerWrapper::SetSlowestGoalSpeed(float) --> void", "newSlowestGoalSpeed"_a);
		cl.def("GetFurthestGoal", (float (ServerWrapper::*)()) & ServerWrapper::GetFurthestGoal, "C++: ServerWrapper::GetFurthestGoal() --> float");
		cl.def("SetFurthestGoal", (void (ServerWrapper::*)(float)) & ServerWrapper::SetFurthestGoal, "C++: ServerWrapper::SetFurthestGoal(float) --> void", "newFurthestGoal"_a);
		cl.def("GetReplicatedScoredOnTeam", (unsigned char (ServerWrapper::*)()) & ServerWrapper::GetReplicatedScoredOnTeam, "C++: ServerWrapper::GetReplicatedScoredOnTeam() --> unsigned char");
		cl.def("SetReplicatedScoredOnTeam", (void (ServerWrapper::*)(unsigned char)) & ServerWrapper::SetReplicatedScoredOnTeam, "C++: ServerWrapper::SetReplicatedScoredOnTeam(unsigned char) --> void", "newReplicatedScoredOnTeam"_a);
		cl.def("GetReplicatedServerPerformanceState", (unsigned char (ServerWrapper::*)()) & ServerWrapper::GetReplicatedServerPerformanceState, "C++: ServerWrapper::GetReplicatedServerPerformanceState() --> unsigned char");
		cl.def("SetReplicatedServerPerformanceState", (void (ServerWrapper::*)(unsigned char)) & ServerWrapper::SetReplicatedServerPerformanceState, "C++: ServerWrapper::SetReplicatedServerPerformanceState(unsigned char) --> void", "newReplicatedServerPerformanceState"_a);
		cl.def("GetRoundNum", (int (ServerWrapper::*)()) & ServerWrapper::GetRoundNum, "C++: ServerWrapper::GetRoundNum() --> int");
		cl.def("SetRoundNum", (void (ServerWrapper::*)(int)) & ServerWrapper::SetRoundNum, "C++: ServerWrapper::SetRoundNum(int) --> void", "newRoundNum"_a);
		cl.def("GetAssistMaxTime", (float (ServerWrapper::*)()) & ServerWrapper::GetAssistMaxTime, "C++: ServerWrapper::GetAssistMaxTime() --> float");
		cl.def("SetAssistMaxTime", (void (ServerWrapper::*)(float)) & ServerWrapper::SetAssistMaxTime, "C++: ServerWrapper::SetAssistMaxTime(float) --> void", "newAssistMaxTime"_a);
		cl.def("GetBallHasBeenHitStartDelay", (float (ServerWrapper::*)()) & ServerWrapper::GetBallHasBeenHitStartDelay, "C++: ServerWrapper::GetBallHasBeenHitStartDelay() --> float");
		cl.def("SetBallHasBeenHitStartDelay", (void (ServerWrapper::*)(float)) & ServerWrapper::SetBallHasBeenHitStartDelay, "C++: ServerWrapper::SetBallHasBeenHitStartDelay(float) --> void", "newBallHasBeenHitStartDelay"_a);
		cl.def("GetPodiumDelay", (float (ServerWrapper::*)()) & ServerWrapper::GetPodiumDelay, "C++: ServerWrapper::GetPodiumDelay() --> float");
		cl.def("SetPodiumDelay", (void (ServerWrapper::*)(float)) & ServerWrapper::SetPodiumDelay, "C++: ServerWrapper::SetPodiumDelay(float) --> void", "newPodiumDelay"_a);
		cl.def("GetPodiumTime", (float (ServerWrapper::*)()) & ServerWrapper::GetPodiumTime, "C++: ServerWrapper::GetPodiumTime() --> float");
		cl.def("SetPodiumTime", (void (ServerWrapper::*)(float)) & ServerWrapper::SetPodiumTime, "C++: ServerWrapper::SetPodiumTime(float) --> void", "newPodiumTime"_a);
		cl.def("GetLobbyEndCountdown", (int (ServerWrapper::*)()) & ServerWrapper::GetLobbyEndCountdown, "C++: ServerWrapper::GetLobbyEndCountdown() --> int");
		cl.def("SetLobbyEndCountdown", (void (ServerWrapper::*)(int)) & ServerWrapper::SetLobbyEndCountdown, "C++: ServerWrapper::SetLobbyEndCountdown(int) --> void", "newLobbyEndCountdown"_a);
		cl.def("GetLobbyCountdown", (int (ServerWrapper::*)()) & ServerWrapper::GetLobbyCountdown, "C++: ServerWrapper::GetLobbyCountdown() --> int");
		cl.def("SetLobbyCountdown", (void (ServerWrapper::*)(int)) & ServerWrapper::SetLobbyCountdown, "C++: ServerWrapper::SetLobbyCountdown(int) --> void", "newLobbyCountdown"_a);
		cl.def("GetLobbyTime", (float (ServerWrapper::*)()) & ServerWrapper::GetLobbyTime, "C++: ServerWrapper::GetLobbyTime() --> float");
		cl.def("SetLobbyTime", (void (ServerWrapper::*)(float)) & ServerWrapper::SetLobbyTime, "C++: ServerWrapper::SetLobbyTime(float) --> void", "newLobbyTime"_a);
		cl.def("GetLobbySpawnRestartTime", (int (ServerWrapper::*)()) & ServerWrapper::GetLobbySpawnRestartTime, "C++: ServerWrapper::GetLobbySpawnRestartTime() --> int");
		cl.def("SetLobbySpawnRestartTime", (void (ServerWrapper::*)(int)) & ServerWrapper::SetLobbySpawnRestartTime, "C++: ServerWrapper::SetLobbySpawnRestartTime(int) --> void", "newLobbySpawnRestartTime"_a);
		cl.def("GetPauser", (class PlayerControllerWrapper(ServerWrapper::*)()) & ServerWrapper::GetPauser, "C++: ServerWrapper::GetPauser() --> class PlayerControllerWrapper");
		cl.def("SetPauser", (void (ServerWrapper::*)(class PlayerControllerWrapper)) & ServerWrapper::SetPauser, "C++: ServerWrapper::SetPauser(class PlayerControllerWrapper) --> void", "newPauser"_a);
		cl.def("GetPlayerCarCount", (int (ServerWrapper::*)()) & ServerWrapper::GetPlayerCarCount, "C++: ServerWrapper::GetPlayerCarCount() --> int");
		cl.def("ReplicateSkillTiers", (void (ServerWrapper::*)()) & ServerWrapper::ReplicateSkillTiers, "C++: ServerWrapper::ReplicateSkillTiers() --> void");
		cl.def("RemoveTeamSelection", (void (ServerWrapper::*)()) & ServerWrapper::RemoveTeamSelection, "C++: ServerWrapper::RemoveTeamSelection() --> void");
		cl.def("CheckStart", (void (ServerWrapper::*)()) & ServerWrapper::CheckStart, "C++: ServerWrapper::CheckStart() --> void");
		cl.def("StartLobbyTimer", (void (ServerWrapper::*)()) & ServerWrapper::StartLobbyTimer, "C++: ServerWrapper::StartLobbyTimer() --> void");
		cl.def("HandleCountdownTick", (void (ServerWrapper::*)()) & ServerWrapper::HandleCountdownTick, "C++: ServerWrapper::HandleCountdownTick() --> void");
		cl.def("CheckForCountdownAction", (void (ServerWrapper::*)()) & ServerWrapper::CheckForCountdownAction, "C++: ServerWrapper::CheckForCountdownAction() --> void");
		cl.def("LobbyCountdownTick", (void (ServerWrapper::*)()) & ServerWrapper::LobbyCountdownTick, "C++: ServerWrapper::LobbyCountdownTick() --> void");
		cl.def("CanSpawnBots", (bool (ServerWrapper::*)()) & ServerWrapper::CanSpawnBots, "C++: ServerWrapper::CanSpawnBots() --> bool");
		cl.def("StartRound", (void (ServerWrapper::*)()) & ServerWrapper::StartRound, "C++: ServerWrapper::StartRound() --> void");
		cl.def("EndRound", (void (ServerWrapper::*)()) & ServerWrapper::EndRound, "C++: ServerWrapper::EndRound() --> void");
		cl.def("SetBallEventListeners", (void (ServerWrapper::*)(class BallWrapper, unsigned long)) & ServerWrapper::SetBallEventListeners, "C++: ServerWrapper::SetBallEventListeners(class BallWrapper, unsigned long) --> void", "Ball"_a, "bListen"_a);
		cl.def("CanAwardPoints", (bool (ServerWrapper::*)()) & ServerWrapper::CanAwardPoints, "C++: ServerWrapper::CanAwardPoints() --> bool");
		cl.def("HandleCarTouch", (void (ServerWrapper::*)(class BallWrapper, class CarWrapper, unsigned char)) & ServerWrapper::HandleCarTouch, "C++: ServerWrapper::HandleCarTouch(class BallWrapper, class CarWrapper, unsigned char) --> void", "Ball"_a, "HitCar"_a, "HitType"_a);
		cl.def("SetBallHasBeenHit2", (void (ServerWrapper::*)()) & ServerWrapper::SetBallHasBeenHit2, "C++: ServerWrapper::SetBallHasBeenHit2() --> void");
		cl.def("DetermineScoreTouchIndex", (int (ServerWrapper::*)(class BallWrapper, class GoalWrapper)) & ServerWrapper::DetermineScoreTouchIndex, "C++: ServerWrapper::DetermineScoreTouchIndex(class BallWrapper, class GoalWrapper) --> int", "Ball"_a, "Goal"_a);
		cl.def("DetermineAssistTouchIndex", (int (ServerWrapper::*)(class BallWrapper, int)) & ServerWrapper::DetermineAssistTouchIndex, "C++: ServerWrapper::DetermineAssistTouchIndex(class BallWrapper, int) --> int", "Ball"_a, "ScoreIdx"_a);
		cl.def("UpdateTotalGameTimePlayed", (void (ServerWrapper::*)(float)) & ServerWrapper::UpdateTotalGameTimePlayed, "C++: ServerWrapper::UpdateTotalGameTimePlayed(float) --> void", "DeltaTime"_a);
		cl.def("UpdateGameTime", (void (ServerWrapper::*)(float)) & ServerWrapper::UpdateGameTime, "C++: ServerWrapper::UpdateGameTime(float) --> void", "DeltaTime"_a);
		cl.def("CanUpdateGameTime", (bool (ServerWrapper::*)()) & ServerWrapper::CanUpdateGameTime, "C++: ServerWrapper::CanUpdateGameTime() --> bool");
		cl.def("StartReplay", (void (ServerWrapper::*)()) & ServerWrapper::StartReplay, "C++: ServerWrapper::StartReplay() --> void");
		cl.def("HandleReplayFinished", (void (ServerWrapper::*)(class ReplayDirectorWrapper)) & ServerWrapper::HandleReplayFinished, "C++: ServerWrapper::HandleReplayFinished(class ReplayDirectorWrapper) --> void", "InReplay"_a);
		cl.def("GotoPodiumSpotlight", (void (ServerWrapper::*)()) & ServerWrapper::GotoPodiumSpotlight, "C++: ServerWrapper::GotoPodiumSpotlight() --> void");
		cl.def("UpdateSpotlight", (void (ServerWrapper::*)()) & ServerWrapper::UpdateSpotlight, "C++: ServerWrapper::UpdateSpotlight() --> void");
		cl.def("SpawnPodiumCars", (void (ServerWrapper::*)()) & ServerWrapper::SpawnPodiumCars, "C++: ServerWrapper::SpawnPodiumCars() --> void");
		cl.def("CanEnableCarPodiumMovement", (bool (ServerWrapper::*)()) & ServerWrapper::CanEnableCarPodiumMovement, "C++: ServerWrapper::CanEnableCarPodiumMovement() --> bool");
		cl.def("FinishEvent", (void (ServerWrapper::*)()) & ServerWrapper::FinishEvent, "C++: ServerWrapper::FinishEvent() --> void");
		cl.def("__GameEvent_Soccar_TA__UpdateTeamScores", (bool (ServerWrapper::*)(class TeamWrapper)) & ServerWrapper::__GameEvent_Soccar_TA__UpdateTeamScores, "C++: ServerWrapper::__GameEvent_Soccar_TA__UpdateTeamScores(class TeamWrapper) --> bool", "T"_a);
		cl.def("__GameEvent_Soccar_TA__SubmitMatchComplete", (void (ServerWrapper::*)(class PriWrapper)) & ServerWrapper::__GameEvent_Soccar_TA__SubmitMatchComplete, "C++: ServerWrapper::__GameEvent_Soccar_TA__SubmitMatchComplete(class PriWrapper) --> void", "PRI"_a);
		cl.def("__GameEvent_Soccar_TA__CheckStart", (void (ServerWrapper::*)(class TeamWrapper)) & ServerWrapper::__GameEvent_Soccar_TA__CheckStart, "C++: ServerWrapper::__GameEvent_Soccar_TA__CheckStart(class TeamWrapper) --> void", "T"_a);
		cl.def("__GameEvent_Soccar_TA__EndState", (void (ServerWrapper::*)(class TeamWrapper)) & ServerWrapper::__GameEvent_Soccar_TA__EndState, "C++: ServerWrapper::__GameEvent_Soccar_TA__EndState(class TeamWrapper) --> void", "T"_a);
		cl.def("__ReplicatedServerPerformanceState__ChangeNotifyFunc", (void (ServerWrapper::*)()) & ServerWrapper::__ReplicatedServerPerformanceState__ChangeNotifyFunc, "C++: ServerWrapper::__ReplicatedServerPerformanceState__ChangeNotifyFunc() --> void");
		cl.def("__bClubMatch__ChangeNotifyFunc", (void (ServerWrapper::*)()) & ServerWrapper::__bClubMatch__ChangeNotifyFunc, "C++: ServerWrapper::__bClubMatch__ChangeNotifyFunc() --> void");
		cl.def("__bShowIntroScene__ChangeNotifyFunc", (void (ServerWrapper::*)()) & ServerWrapper::__bShowIntroScene__ChangeNotifyFunc, "C++: ServerWrapper::__bShowIntroScene__ChangeNotifyFunc() --> void");
		cl.def("__WaitTimeRemaining__ChangeNotifyFunc", (void (ServerWrapper::*)()) & ServerWrapper::__WaitTimeRemaining__ChangeNotifyFunc, "C++: ServerWrapper::__WaitTimeRemaining__ChangeNotifyFunc() --> void");
		cl.def("CheckJoinInProgress", (void (ServerWrapper::*)(class PriWrapper)) & ServerWrapper::CheckJoinInProgress, "C++: ServerWrapper::CheckJoinInProgress(class PriWrapper) --> void", "PRI"_a);
		cl.def("AllowDynamicCrowd", (bool (ServerWrapper::*)()) & ServerWrapper::AllowDynamicCrowd, "C++: ServerWrapper::AllowDynamicCrowd() --> bool");
		cl.def("AddBallTrajectory", (void (ServerWrapper::*)(class BallWrapper)) & ServerWrapper::AddBallTrajectory, "C++: ServerWrapper::AddBallTrajectory(class BallWrapper) --> void", "InBall"_a);
		cl.def("ShowScorerGoalMessage", (bool (ServerWrapper::*)()) & ServerWrapper::ShowScorerGoalMessage, "C++: ServerWrapper::ShowScorerGoalMessage() --> bool");
		cl.def("CanUseBallCam", (bool (ServerWrapper::*)()) & ServerWrapper::CanUseBallCam, "C++: ServerWrapper::CanUseBallCam() --> bool");
		cl.def("DisableStatXP", (bool (ServerWrapper::*)()) & ServerWrapper::DisableStatXP, "C++: ServerWrapper::DisableStatXP() --> bool");
		cl.def("SetDisableGoalDelay", (void (ServerWrapper::*)(unsigned long)) & ServerWrapper::SetDisableGoalDelay, "C++: ServerWrapper::SetDisableGoalDelay(unsigned long) --> void", "bInDisableGoalDelay"_a);
		cl.def("ForceMatchStart", (void (ServerWrapper::*)()) & ServerWrapper::ForceMatchStart, "C++: ServerWrapper::ForceMatchStart() --> void");
		cl.def("RemoveLocalPlayer", (void (ServerWrapper::*)(class PlayerControllerWrapper)) & ServerWrapper::RemoveLocalPlayer, "C++: ServerWrapper::RemoveLocalPlayer(class PlayerControllerWrapper) --> void", "Player"_a);
		cl.def("AddLocalPlayer", (void (ServerWrapper::*)(class PlayerControllerWrapper)) & ServerWrapper::AddLocalPlayer, "C++: ServerWrapper::AddLocalPlayer(class PlayerControllerWrapper) --> void", "Player"_a);
		cl.def("DestroyGoalIndicators", (void (ServerWrapper::*)(class PlayerControllerWrapper)) & ServerWrapper::DestroyGoalIndicators, "C++: ServerWrapper::DestroyGoalIndicators(class PlayerControllerWrapper) --> void", "Player"_a);
		cl.def("CreateGoalIndicators", (void (ServerWrapper::*)(class PlayerControllerWrapper)) & ServerWrapper::CreateGoalIndicators, "C++: ServerWrapper::CreateGoalIndicators(class PlayerControllerWrapper) --> void", "Player"_a);
		cl.def("BeginHighlightsReplay", (void (ServerWrapper::*)()) & ServerWrapper::BeginHighlightsReplay, "C++: ServerWrapper::BeginHighlightsReplay() --> void");
		cl.def("ShouldCountUp", (bool (ServerWrapper::*)()) & ServerWrapper::ShouldCountUp, "C++: ServerWrapper::ShouldCountUp() --> bool");
		cl.def("ShouldAllowVoteToForfeit", (bool (ServerWrapper::*)()) & ServerWrapper::ShouldAllowVoteToForfeit, "C++: ServerWrapper::ShouldAllowVoteToForfeit() --> bool");
		cl.def("ShouldHaveLeaveMatchPenalty", (bool (ServerWrapper::*)()) & ServerWrapper::ShouldHaveLeaveMatchPenalty, "C++: ServerWrapper::ShouldHaveLeaveMatchPenalty() --> bool");
		cl.def("SetPaused", (void (ServerWrapper::*)(class PlayerControllerWrapper, unsigned long)) & ServerWrapper::SetPaused, "C++: ServerWrapper::SetPaused(class PlayerControllerWrapper, unsigned long) --> void", "InPauser"_a, "bInPaused"_a);
		cl.def("ShouldCountdownResumeFromPause", (bool (ServerWrapper::*)()) & ServerWrapper::ShouldCountdownResumeFromPause, "C++: ServerWrapper::ShouldCountdownResumeFromPause() --> bool");
		cl.def("SetScoreAndTime", (void (ServerWrapper::*)(class PlayerControllerWrapper, int, int, int, unsigned long, unsigned long)) & ServerWrapper::SetScoreAndTime, "C++: ServerWrapper::SetScoreAndTime(class PlayerControllerWrapper, int, int, int, unsigned long, unsigned long) --> void", "PC"_a, "NewScoreTeam0"_a, "NewScoreTeam1"_a, "InGameTimeRemaining"_a, "bInOvertime"_a, "bRestartRound"_a);
		cl.def("SaveLocalPlayerStats", (void (ServerWrapper::*)()) & ServerWrapper::SaveLocalPlayerStats, "C++: ServerWrapper::SaveLocalPlayerStats() --> void");
		cl.def("ShouldPlayReplay", (bool (ServerWrapper::*)()) & ServerWrapper::ShouldPlayReplay, "C++: ServerWrapper::ShouldPlayReplay() --> bool");
		cl.def("ShouldRecordReplay", (bool (ServerWrapper::*)()) & ServerWrapper::ShouldRecordReplay, "C++: ServerWrapper::ShouldRecordReplay() --> bool");
		cl.def("OnBallHasBeenHit", (void (ServerWrapper::*)()) & ServerWrapper::OnBallHasBeenHit, "C++: ServerWrapper::OnBallHasBeenHit() --> void");
		cl.def("SpawnBall2", (class BallWrapper(ServerWrapper::*)(struct Vector&, unsigned long, unsigned long, std::string)) & ServerWrapper::SpawnBall2, "C++: ServerWrapper::SpawnBall2(struct Vector &, unsigned long, unsigned long, std::string) --> class BallWrapper", "SpawnLoc"_a, "bWake"_a, "bSpawnCannon"_a, "BallArch"_a);
		cl.def("GetTotalScore", (int (ServerWrapper::*)()) & ServerWrapper::GetTotalScore, "C++: ServerWrapper::GetTotalScore() --> int");
		cl.def("HandleCarSet", (void (ServerWrapper::*)(class PriWrapper)) & ServerWrapper::HandleCarSet, "C++: ServerWrapper::HandleCarSet(class PriWrapper) --> void", "InPRI"_a);
		cl.def("RemovePRI", (void (ServerWrapper::*)(class PriWrapper)) & ServerWrapper::RemovePRI, "C++: ServerWrapper::RemovePRI(class PriWrapper) --> void", "PRI"_a);
		cl.def("AddPRI", (void (ServerWrapper::*)(class PriWrapper)) & ServerWrapper::AddPRI, "C++: ServerWrapper::AddPRI(class PriWrapper) --> void", "PRI"_a);
		cl.def("OnMatchWinnerSet", (void (ServerWrapper::*)()) & ServerWrapper::OnMatchWinnerSet, "C++: ServerWrapper::OnMatchWinnerSet() --> void");
		cl.def("OnGameWinnerSet", (void (ServerWrapper::*)()) & ServerWrapper::OnGameWinnerSet, "C++: ServerWrapper::OnGameWinnerSet() --> void");
		cl.def("MVPSort", (int (ServerWrapper::*)(class PriWrapper, class PriWrapper)) & ServerWrapper::MVPSort, "C++: ServerWrapper::MVPSort(class PriWrapper, class PriWrapper) --> int", "A"_a, "B"_a);
		cl.def("HandleHitGoal", (void (ServerWrapper::*)(class BallWrapper, class GoalWrapper)) & ServerWrapper::HandleHitGoal, "C++: ServerWrapper::HandleHitGoal(class BallWrapper, class GoalWrapper) --> void", "Ball"_a, "Goal"_a);
		cl.def("ClearReplicatedScoredOnTeam", (void (ServerWrapper::*)()) & ServerWrapper::ClearReplicatedScoredOnTeam, "C++: ServerWrapper::ClearReplicatedScoredOnTeam() --> void");
		cl.def("TriggerScoreChangedEvent", (void (ServerWrapper::*)()) & ServerWrapper::TriggerScoreChangedEvent, "C++: ServerWrapper::TriggerScoreChangedEvent() --> void");
		cl.def("HandleScoreUpdated", (void (ServerWrapper::*)(class TeamWrapper)) & ServerWrapper::HandleScoreUpdated, "C++: ServerWrapper::HandleScoreUpdated(class TeamWrapper) --> void", "Team"_a);
		cl.def("OnAllTeamsCreated", (void (ServerWrapper::*)()) & ServerWrapper::OnAllTeamsCreated, "C++: ServerWrapper::OnAllTeamsCreated() --> void");
		cl.def("TriggerGoalScoreEvent", (void (ServerWrapper::*)(int, class CarWrapper)) & ServerWrapper::TriggerGoalScoreEvent, "C++: ServerWrapper::TriggerGoalScoreEvent(int, class CarWrapper) --> void", "TeamScoredOn"_a, "Scorer"_a);
		cl.def("SetTotalGameBalls2", (void (ServerWrapper::*)(int)) & ServerWrapper::SetTotalGameBalls2, "C++: ServerWrapper::SetTotalGameBalls2(int) --> void", "TotalBalls"_a);
		cl.def("RecordRecentPlayers", (void (ServerWrapper::*)()) & ServerWrapper::RecordRecentPlayers, "C++: ServerWrapper::RecordRecentPlayers() --> void");
		cl.def("UpdateStats", (void (ServerWrapper::*)()) & ServerWrapper::UpdateStats, "C++: ServerWrapper::UpdateStats() --> void");
		cl.def("NotifyKismetOfCurrentTime", (void (ServerWrapper::*)()) & ServerWrapper::NotifyKismetOfCurrentTime, "C++: ServerWrapper::NotifyKismetOfCurrentTime() --> void");
		cl.def("EnoughTimePassedToForfeit", (bool (ServerWrapper::*)()) & ServerWrapper::EnoughTimePassedToForfeit, "C++: ServerWrapper::EnoughTimePassedToForfeit() --> bool");
		cl.def("OnGameTimeUpdated", (void (ServerWrapper::*)()) & ServerWrapper::OnGameTimeUpdated, "C++: ServerWrapper::OnGameTimeUpdated() --> void");
		cl.def("OnOvertimeUpdated", (void (ServerWrapper::*)()) & ServerWrapper::OnOvertimeUpdated, "C++: ServerWrapper::OnOvertimeUpdated() --> void");
		cl.def("ForceOvertime", (void (ServerWrapper::*)()) & ServerWrapper::ForceOvertime, "C++: ServerWrapper::ForceOvertime() --> void");
		cl.def("StartOvertime", (void (ServerWrapper::*)()) & ServerWrapper::StartOvertime, "C++: ServerWrapper::StartOvertime() --> void");
		cl.def("OnMyHalf", (bool (ServerWrapper::*)(struct Vector&, unsigned char)) & ServerWrapper::OnMyHalf, "C++: ServerWrapper::OnMyHalf(struct Vector &, unsigned char) --> bool", "TestLocation"_a, "TeamNum"_a);
		cl.def("GetWinningTeam", (class TeamWrapper(ServerWrapper::*)()) & ServerWrapper::GetWinningTeam, "C++: ServerWrapper::GetWinningTeam() --> class TeamWrapper");
		cl.def("ResetPickups", (void (ServerWrapper::*)()) & ServerWrapper::ResetPickups, "C++: ServerWrapper::ResetPickups() --> void");
		cl.def("ResetPlayers", (void (ServerWrapper::*)()) & ServerWrapper::ResetPlayers, "C++: ServerWrapper::ResetPlayers() --> void");
		cl.def("OnBallSpawned", (void (ServerWrapper::*)(class BallWrapper)) & ServerWrapper::OnBallSpawned, "C++: ServerWrapper::OnBallSpawned(class BallWrapper) --> void", "NewBall"_a);
		cl.def("ResetBalls", (void (ServerWrapper::*)()) & ServerWrapper::ResetBalls, "C++: ServerWrapper::ResetBalls() --> void");
		cl.def("DestroyCars", (void (ServerWrapper::*)()) & ServerWrapper::DestroyCars, "C++: ServerWrapper::DestroyCars() --> void");
		cl.def("FreezePawns", (void (ServerWrapper::*)()) & ServerWrapper::FreezePawns, "C++: ServerWrapper::FreezePawns() --> void");
		cl.def("DestroyBalls", (void (ServerWrapper::*)()) & ServerWrapper::DestroyBalls, "C++: ServerWrapper::DestroyBalls() --> void");
		cl.def("RemoveGameBall", (void (ServerWrapper::*)(class BallWrapper)) & ServerWrapper::RemoveGameBall, "C++: ServerWrapper::RemoveGameBall(class BallWrapper) --> void", "Ball"_a);
		cl.def("AddGameBall", (void (ServerWrapper::*)(class BallWrapper)) & ServerWrapper::AddGameBall, "C++: ServerWrapper::AddGameBall(class BallWrapper) --> void", "Ball"_a);
		cl.def("StartNewRound", (void (ServerWrapper::*)()) & ServerWrapper::StartNewRound, "C++: ServerWrapper::StartNewRound() --> void");
		cl.def("CheckForAutoBalance", (void (ServerWrapper::*)()) & ServerWrapper::CheckForAutoBalance, "C++: ServerWrapper::CheckForAutoBalance() --> void");
		cl.def("HasWinner", (bool (ServerWrapper::*)()) & ServerWrapper::HasWinner, "C++: ServerWrapper::HasWinner() --> bool");
		cl.def("SubmitMatch2", (void (ServerWrapper::*)()) & ServerWrapper::SubmitMatch2, "C++: ServerWrapper::SubmitMatch2() --> void");
		cl.def("SubmitMatchComplete2", (void (ServerWrapper::*)()) & ServerWrapper::SubmitMatchComplete2, "C++: ServerWrapper::SubmitMatchComplete2() --> void");
		cl.def("OnMatchEnded", (void (ServerWrapper::*)()) & ServerWrapper::OnMatchEnded, "C++: ServerWrapper::OnMatchEnded() --> void");
		cl.def("ShouldDoPodiumSpotlight", (bool (ServerWrapper::*)()) & ServerWrapper::ShouldDoPodiumSpotlight, "C++: ServerWrapper::ShouldDoPodiumSpotlight() --> bool");
		cl.def("EndGame", (void (ServerWrapper::*)()) & ServerWrapper::EndGame, "C++: ServerWrapper::EndGame() --> void");
		cl.def("UpdateTeamScores2", (void (ServerWrapper::*)()) & ServerWrapper::UpdateTeamScores2, "C++: ServerWrapper::UpdateTeamScores2() --> void");
		cl.def("StartNewGame", (void (ServerWrapper::*)()) & ServerWrapper::StartNewGame, "C++: ServerWrapper::StartNewGame() --> void");
		cl.def("ResetGame", (void (ServerWrapper::*)()) & ServerWrapper::ResetGame, "C++: ServerWrapper::ResetGame() --> void");
		cl.def("ClearReplicatedStatEvent", (void (ServerWrapper::*)()) & ServerWrapper::ClearReplicatedStatEvent, "C++: ServerWrapper::ClearReplicatedStatEvent() --> void");
		cl.def("eventDestroyed", (void (ServerWrapper::*)()) & ServerWrapper::eventDestroyed, "C++: ServerWrapper::eventDestroyed() --> void");
		cl.def("InitBotDetection", (void (ServerWrapper::*)()) & ServerWrapper::InitBotDetection, "C++: ServerWrapper::InitBotDetection() --> void");
		cl.def("InitCrowdManager", (void (ServerWrapper::*)()) & ServerWrapper::InitCrowdManager, "C++: ServerWrapper::InitCrowdManager() --> void");
		cl.def("InitField", (void (ServerWrapper::*)()) & ServerWrapper::InitField, "C++: ServerWrapper::InitField() --> void");
		cl.def("InitGameObserver", (void (ServerWrapper::*)()) & ServerWrapper::InitGameObserver, "C++: ServerWrapper::InitGameObserver() --> void");
		cl.def("OnInit", (void (ServerWrapper::*)()) & ServerWrapper::OnInit, "C++: ServerWrapper::OnInit() --> void");
		cl.def("InitMutators", (void (ServerWrapper::*)()) & ServerWrapper::InitMutators, "C++: ServerWrapper::InitMutators() --> void");
		cl.def("OnClubMatch", (void (ServerWrapper::*)()) & ServerWrapper::OnClubMatch, "C++: ServerWrapper::OnClubMatch() --> void");
		cl.def("CanInitClubMatch", (bool (ServerWrapper::*)()) & ServerWrapper::CanInitClubMatch, "C++: ServerWrapper::CanInitClubMatch() --> bool");
		cl.def("AssignCustomTeamSettings", (void (ServerWrapper::*)()) & ServerWrapper::AssignCustomTeamSettings, "C++: ServerWrapper::AssignCustomTeamSettings() --> void");
		cl.def("InitGame2", (void (ServerWrapper::*)(std::string)) & ServerWrapper::InitGame2, "C++: ServerWrapper::InitGame2(std::string) --> void", "Options"_a);
		cl.def("EventGameWinnerSet", (void (ServerWrapper::*)(class ServerWrapper)) & ServerWrapper::EventGameWinnerSet, "C++: ServerWrapper::EventGameWinnerSet(class ServerWrapper) --> void", "GameEvent"_a);
		cl.def("EventGoalScored", (void (ServerWrapper::*)(class ServerWrapper, class BallWrapper, class GoalWrapper, int, int)) & ServerWrapper::EventGoalScored, "C++: ServerWrapper::EventGoalScored(class ServerWrapper, class BallWrapper, class GoalWrapper, int, int) --> void", "GameEvent"_a, "Ball"_a, "Goal"_a, "ScoreIndex"_a, "AssistIdx"_a);
	}
	{ // GameEditorWrapper file:bakkesmod/wrappers/GameEvent/GameEditorWrapper.h line:11
		pybind11::class_<GameEditorWrapper, std::shared_ptr<GameEditorWrapper>, ServerWrapper> cl(M, "GameEditorWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](GameEditorWrapper const& o) { return new GameEditorWrapper(o); }));
		cl.def("assign", (class GameEditorWrapper& (GameEditorWrapper::*)(class GameEditorWrapper)) & GameEditorWrapper::operator=, "C++: GameEditorWrapper::operator=(class GameEditorWrapper) --> class GameEditorWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetActiveRoundNumber", (int (GameEditorWrapper::*)()) & GameEditorWrapper::GetActiveRoundNumber, "C++: GameEditorWrapper::GetActiveRoundNumber() --> int");
		cl.def("SetActiveRoundNumber", (void (GameEditorWrapper::*)(int)) & GameEditorWrapper::SetActiveRoundNumber, "C++: GameEditorWrapper::SetActiveRoundNumber(int) --> void", "newActiveRoundNumber"_a);
		cl.def("GetMaxRounds", (int (GameEditorWrapper::*)()) & GameEditorWrapper::GetMaxRounds, "C++: GameEditorWrapper::GetMaxRounds() --> int");
		cl.def("SetMaxRounds", (void (GameEditorWrapper::*)(int)) & GameEditorWrapper::SetMaxRounds, "C++: GameEditorWrapper::SetMaxRounds(int) --> void", "newMaxRounds"_a);
		cl.def("GetHistoryPosition", (int (GameEditorWrapper::*)()) & GameEditorWrapper::GetHistoryPosition, "C++: GameEditorWrapper::GetHistoryPosition() --> int");
		cl.def("SetHistoryPosition", (void (GameEditorWrapper::*)(int)) & GameEditorWrapper::SetHistoryPosition, "C++: GameEditorWrapper::SetHistoryPosition(int) --> void", "newHistoryPosition"_a);
		cl.def("GetMaxUndoHistory", (int (GameEditorWrapper::*)()) & GameEditorWrapper::GetMaxUndoHistory, "C++: GameEditorWrapper::GetMaxUndoHistory() --> int");
		cl.def("SetMaxUndoHistory", (void (GameEditorWrapper::*)(int)) & GameEditorWrapper::SetMaxUndoHistory, "C++: GameEditorWrapper::SetMaxUndoHistory(int) --> void", "newMaxUndoHistory"_a);
		cl.def("GetFXActorArchetype", (class FXActorWrapper(GameEditorWrapper::*)()) & GameEditorWrapper::GetFXActorArchetype, "C++: GameEditorWrapper::GetFXActorArchetype() --> class FXActorWrapper");
		cl.def("SetFXActorArchetype", (void (GameEditorWrapper::*)(class FXActorWrapper)) & GameEditorWrapper::SetFXActorArchetype, "C++: GameEditorWrapper::SetFXActorArchetype(class FXActorWrapper) --> void", "newFXActorArchetype"_a);
		cl.def("GetFXActor", (class FXActorWrapper(GameEditorWrapper::*)()) & GameEditorWrapper::GetFXActor, "C++: GameEditorWrapper::GetFXActor() --> class FXActorWrapper");
		cl.def("SetFXActor", (void (GameEditorWrapper::*)(class FXActorWrapper)) & GameEditorWrapper::SetFXActor, "C++: GameEditorWrapper::SetFXActor(class FXActorWrapper) --> void", "newFXActor"_a);
		cl.def("RotateActor", (void (GameEditorWrapper::*)(class PlayerControllerWrapper, unsigned long)) & GameEditorWrapper::RotateActor, "C++: GameEditorWrapper::RotateActor(class PlayerControllerWrapper, unsigned long) --> void", "PC"_a, "bSnapOrientation"_a);
		cl.def("PrevRound", (void (GameEditorWrapper::*)()) & GameEditorWrapper::PrevRound, "C++: GameEditorWrapper::PrevRound() --> void");
		cl.def("NextRound", (void (GameEditorWrapper::*)()) & GameEditorWrapper::NextRound, "C++: GameEditorWrapper::NextRound() --> void");
		cl.def("DecreaseTime", (void (GameEditorWrapper::*)()) & GameEditorWrapper::DecreaseTime, "C++: GameEditorWrapper::DecreaseTime() --> void");
		cl.def("IncreaseTime", (void (GameEditorWrapper::*)()) & GameEditorWrapper::IncreaseTime, "C++: GameEditorWrapper::IncreaseTime() --> void");
		cl.def("StopEditing", (void (GameEditorWrapper::*)(class PlayerControllerWrapper)) & GameEditorWrapper::StopEditing, "C++: GameEditorWrapper::StopEditing(class PlayerControllerWrapper) --> void", "PC"_a);
		cl.def("StartEditing", (void (GameEditorWrapper::*)()) & GameEditorWrapper::StartEditing, "C++: GameEditorWrapper::StartEditing() --> void");
		cl.def("CycleActor", (void (GameEditorWrapper::*)(class PlayerControllerWrapper)) & GameEditorWrapper::CycleActor, "C++: GameEditorWrapper::CycleActor(class PlayerControllerWrapper) --> void", "PC"_a);
		cl.def("ReleaseGrabbedActor", (void (GameEditorWrapper::*)(class PlayerControllerWrapper)) & GameEditorWrapper::ReleaseGrabbedActor, "C++: GameEditorWrapper::ReleaseGrabbedActor(class PlayerControllerWrapper) --> void", "PC"_a);
		cl.def("ReleaseRotateActor", (void (GameEditorWrapper::*)(class PlayerControllerWrapper)) & GameEditorWrapper::ReleaseRotateActor, "C++: GameEditorWrapper::ReleaseRotateActor(class PlayerControllerWrapper) --> void", "PC"_a);
		cl.def("ToggleRotateActor", (void (GameEditorWrapper::*)(class PlayerControllerWrapper)) & GameEditorWrapper::ToggleRotateActor, "C++: GameEditorWrapper::ToggleRotateActor(class PlayerControllerWrapper) --> void", "PC"_a);
		cl.def("ToggleGrabActor", (void (GameEditorWrapper::*)(class PlayerControllerWrapper)) & GameEditorWrapper::ToggleGrabActor, "C++: GameEditorWrapper::ToggleGrabActor(class PlayerControllerWrapper) --> void", "PC"_a);
		cl.def("ToggleReleaseActor", (void (GameEditorWrapper::*)(class PlayerControllerWrapper)) & GameEditorWrapper::ToggleReleaseActor, "C++: GameEditorWrapper::ToggleReleaseActor(class PlayerControllerWrapper) --> void", "PC"_a);
		cl.def("ReleaseActor2", (void (GameEditorWrapper::*)(class PlayerControllerWrapper)) & GameEditorWrapper::ReleaseActor2, "C++: GameEditorWrapper::ReleaseActor2(class PlayerControllerWrapper) --> void", "PC"_a);
		cl.def("GrabActor2", (void (GameEditorWrapper::*)(class PlayerControllerWrapper)) & GameEditorWrapper::GrabActor2, "C++: GameEditorWrapper::GrabActor2(class PlayerControllerWrapper) --> void", "PC"_a);
		cl.def("CanQueSaveReplay", (bool (GameEditorWrapper::*)()) & GameEditorWrapper::CanQueSaveReplay, "C++: GameEditorWrapper::CanQueSaveReplay() --> bool");
		cl.def("ShouldUpdateCrosshair", (bool (GameEditorWrapper::*)()) & GameEditorWrapper::ShouldUpdateCrosshair, "C++: GameEditorWrapper::ShouldUpdateCrosshair() --> bool");
		cl.def("GetPlayerTeamNumber", (int (GameEditorWrapper::*)()) & GameEditorWrapper::GetPlayerTeamNumber, "C++: GameEditorWrapper::GetPlayerTeamNumber() --> int");
		cl.def("CanAddHistory", (bool (GameEditorWrapper::*)()) & GameEditorWrapper::CanAddHistory, "C++: GameEditorWrapper::CanAddHistory() --> bool");
		cl.def("ToggleEditorRound", (void (GameEditorWrapper::*)()) & GameEditorWrapper::ToggleEditorRound, "C++: GameEditorWrapper::ToggleEditorRound() --> void");
		cl.def("CommitRedoRound", (void (GameEditorWrapper::*)()) & GameEditorWrapper::CommitRedoRound, "C++: GameEditorWrapper::CommitRedoRound() --> void");
		cl.def("ResetRound", (void (GameEditorWrapper::*)()) & GameEditorWrapper::ResetRound, "C++: GameEditorWrapper::ResetRound() --> void");
		cl.def("Save2", (void (GameEditorWrapper::*)()) & GameEditorWrapper::Save2, "C++: GameEditorWrapper::Save2() --> void");
		cl.def("Redo2", (void (GameEditorWrapper::*)(class PlayerControllerWrapper)) & GameEditorWrapper::Redo2, "C++: GameEditorWrapper::Redo2(class PlayerControllerWrapper) --> void", "PC"_a);
		cl.def("Undo2", (void (GameEditorWrapper::*)(class PlayerControllerWrapper)) & GameEditorWrapper::Undo2, "C++: GameEditorWrapper::Undo2(class PlayerControllerWrapper) --> void", "PC"_a);
		cl.def("GetOtherHistoryType", (unsigned char (GameEditorWrapper::*)(unsigned char)) & GameEditorWrapper::GetOtherHistoryType, "C++: GameEditorWrapper::GetOtherHistoryType(unsigned char) --> unsigned char", "HistoryType"_a);
		cl.def("ClampUndoHistory", (void (GameEditorWrapper::*)()) & GameEditorWrapper::ClampUndoHistory, "C++: GameEditorWrapper::ClampUndoHistory() --> void");
		cl.def("ClearRedoHistory", (void (GameEditorWrapper::*)()) & GameEditorWrapper::ClearRedoHistory, "C++: GameEditorWrapper::ClearRedoHistory() --> void");
		cl.def("ClearAllHistory", (void (GameEditorWrapper::*)()) & GameEditorWrapper::ClearAllHistory, "C++: GameEditorWrapper::ClearAllHistory() --> void");
		cl.def("DestroyActor", (bool (GameEditorWrapper::*)(class ActorWrapper, unsigned char)) & GameEditorWrapper::DestroyActor, "C++: GameEditorWrapper::DestroyActor(class ActorWrapper, unsigned char) --> bool", "A"_a, "HistoryType"_a);
		cl.def("IsInEditorMode", (bool (GameEditorWrapper::*)()) & GameEditorWrapper::IsInEditorMode, "C++: GameEditorWrapper::IsInEditorMode() --> bool");
		cl.def("RemoveAllPointsFromScore", (void (GameEditorWrapper::*)(int)) & GameEditorWrapper::RemoveAllPointsFromScore, "C++: GameEditorWrapper::RemoveAllPointsFromScore(int) --> void", "TeamIndex"_a);
		cl.def("RemovePointsFromScore", (void (GameEditorWrapper::*)(int, int)) & GameEditorWrapper::RemovePointsFromScore, "C++: GameEditorWrapper::RemovePointsFromScore(int, int) --> void", "PointsToRemove"_a, "TeamIndex"_a);
		cl.def("DeleteAllExistingActorsBasedOffSpawnList", (void (GameEditorWrapper::*)()) & GameEditorWrapper::DeleteAllExistingActorsBasedOffSpawnList, "C++: GameEditorWrapper::DeleteAllExistingActorsBasedOffSpawnList() --> void");
		cl.def("RoundContainsASwitch", (bool (GameEditorWrapper::*)()) & GameEditorWrapper::RoundContainsASwitch, "C++: GameEditorWrapper::RoundContainsASwitch() --> bool");
		cl.def("EnableTriggers", (void (GameEditorWrapper::*)(unsigned long)) & GameEditorWrapper::EnableTriggers, "C++: GameEditorWrapper::EnableTriggers(unsigned long) --> void", "bEnable"_a);
		cl.def("HideCarSpawnPoints", (void (GameEditorWrapper::*)(unsigned long)) & GameEditorWrapper::HideCarSpawnPoints, "C++: GameEditorWrapper::HideCarSpawnPoints(unsigned long) --> void", "bHide"_a);
		cl.def("ResetSpawnLocations", (void (GameEditorWrapper::*)()) & GameEditorWrapper::ResetSpawnLocations, "C++: GameEditorWrapper::ResetSpawnLocations() --> void");
		cl.def("OnSpawnedArchetype", (void (GameEditorWrapper::*)(class ActorWrapper, unsigned char)) & GameEditorWrapper::OnSpawnedArchetype, "C++: GameEditorWrapper::OnSpawnedArchetype(class ActorWrapper, unsigned char) --> void", "SpawnedActor"_a, "HistoryType"_a);
		cl.def("SpawnArchetype", (void (GameEditorWrapper::*)(class PlayerControllerWrapper, int)) & GameEditorWrapper::SpawnArchetype, "C++: GameEditorWrapper::SpawnArchetype(class PlayerControllerWrapper, int) --> void", "Controller"_a, "ArchetypeIndex"_a);
		cl.def("IncrementSelectedSpawnArchetypeIndex", (void (GameEditorWrapper::*)(int, int*)) & GameEditorWrapper::IncrementSelectedSpawnArchetypeIndex, "C++: GameEditorWrapper::IncrementSelectedSpawnArchetypeIndex(int, int *) --> void", "Direction"_a, "Index"_a);
		// 'GameEditorWrapper::CanChangeTeam': Removed from Rocket League, defaults to false
		// cl.def("CanChangeTeam", (bool (GameEditorWrapper::*)()) & GameEditorWrapper::CanChangeTeam, "C++: GameEditorWrapper::CanChangeTeam() --> bool");
		cl.def("ResetBallsToDefaultPosition", (void (GameEditorWrapper::*)()) & GameEditorWrapper::ResetBallsToDefaultPosition, "C++: GameEditorWrapper::ResetBallsToDefaultPosition() --> void");
		cl.def("FireBalls", (void (GameEditorWrapper::*)()) & GameEditorWrapper::FireBalls, "C++: GameEditorWrapper::FireBalls() --> void");
		cl.def("Interact", (void (GameEditorWrapper::*)()) & GameEditorWrapper::Interact, "C++: GameEditorWrapper::Interact() --> void");
		cl.def("ShouldResetBalls", (bool (GameEditorWrapper::*)()) & GameEditorWrapper::ShouldResetBalls, "C++: GameEditorWrapper::ShouldResetBalls() --> bool");
		cl.def("OnVehicleSetup", (void (GameEditorWrapper::*)(class CarWrapper)) & GameEditorWrapper::OnVehicleSetup, "C++: GameEditorWrapper::OnVehicleSetup(class CarWrapper) --> void", "Car"_a);
		cl.def("HandleVehicleSetup", (void (GameEditorWrapper::*)(class CarWrapper)) & GameEditorWrapper::HandleVehicleSetup, "C++: GameEditorWrapper::HandleVehicleSetup(class CarWrapper) --> void", "Car"_a);
		cl.def("OnPlayerRestarted", (void (GameEditorWrapper::*)(class CarWrapper)) & GameEditorWrapper::OnPlayerRestarted, "C++: GameEditorWrapper::OnPlayerRestarted(class CarWrapper) --> void", "PlayerCar"_a);
		cl.def("ChooseTeam", (bool (GameEditorWrapper::*)(int, class PlayerControllerWrapper)) & GameEditorWrapper::ChooseTeam, "C++: GameEditorWrapper::ChooseTeam(int, class PlayerControllerWrapper) --> bool", "TeamIndex"_a, "Player"_a);
		cl.def("InitFX", (void (GameEditorWrapper::*)()) & GameEditorWrapper::InitFX, "C++: GameEditorWrapper::InitFX() --> void");
		cl.def("eventPostBeginPlay", (void (GameEditorWrapper::*)()) & GameEditorWrapper::eventPostBeginPlay, "C++: GameEditorWrapper::eventPostBeginPlay() --> void");
	}
	{ // GameSettingPlaylistWrapper file:bakkesmod/wrappers/GameEvent/GameSettingPlaylistWrapper.h line:8
		pybind11::class_<GameSettingPlaylistWrapper, std::shared_ptr<GameSettingPlaylistWrapper>, ObjectWrapper> cl(M, "GameSettingPlaylistWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](GameSettingPlaylistWrapper const& o) { return new GameSettingPlaylistWrapper(o); }));
		cl.def("assign", (class GameSettingPlaylistWrapper& (GameSettingPlaylistWrapper::*)(class GameSettingPlaylistWrapper)) & GameSettingPlaylistWrapper::operator=, "C++: GameSettingPlaylistWrapper::operator=(class GameSettingPlaylistWrapper) --> class GameSettingPlaylistWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetTitle", (class UnrealStringWrapper(GameSettingPlaylistWrapper::*)()) & GameSettingPlaylistWrapper::GetTitle, "C++: GameSettingPlaylistWrapper::GetTitle() --> class UnrealStringWrapper");
		cl.def("GetDescription", (class UnrealStringWrapper(GameSettingPlaylistWrapper::*)()) & GameSettingPlaylistWrapper::GetDescription, "C++: GameSettingPlaylistWrapper::GetDescription() --> class UnrealStringWrapper");
		cl.def("GetPlayerCount", (int (GameSettingPlaylistWrapper::*)()) & GameSettingPlaylistWrapper::GetPlayerCount, "C++: GameSettingPlaylistWrapper::GetPlayerCount() --> int");
		cl.def("SetPlayerCount", (void (GameSettingPlaylistWrapper::*)(int)) & GameSettingPlaylistWrapper::SetPlayerCount, "C++: GameSettingPlaylistWrapper::SetPlayerCount(int) --> void", "newPlayerCount"_a);
		cl.def("GetbStandard", (unsigned long (GameSettingPlaylistWrapper::*)()) & GameSettingPlaylistWrapper::GetbStandard, "C++: GameSettingPlaylistWrapper::GetbStandard() --> unsigned long");
		cl.def("SetbStandard", (void (GameSettingPlaylistWrapper::*)(unsigned long)) & GameSettingPlaylistWrapper::SetbStandard, "C++: GameSettingPlaylistWrapper::SetbStandard(unsigned long) --> void", "newbStandard"_a);
		cl.def("GetbRanked", (unsigned long (GameSettingPlaylistWrapper::*)()) & GameSettingPlaylistWrapper::GetbRanked, "C++: GameSettingPlaylistWrapper::GetbRanked() --> unsigned long");
		cl.def("SetbRanked", (void (GameSettingPlaylistWrapper::*)(unsigned long)) & GameSettingPlaylistWrapper::SetbRanked, "C++: GameSettingPlaylistWrapper::SetbRanked(unsigned long) --> void", "newbRanked"_a);
		cl.def("GetbSolo", (unsigned long (GameSettingPlaylistWrapper::*)()) & GameSettingPlaylistWrapper::GetbSolo, "C++: GameSettingPlaylistWrapper::GetbSolo() --> unsigned long");
		cl.def("SetbSolo", (void (GameSettingPlaylistWrapper::*)(unsigned long)) & GameSettingPlaylistWrapper::SetbSolo, "C++: GameSettingPlaylistWrapper::SetbSolo(unsigned long) --> void", "newbSolo"_a);
		cl.def("GetbNew", (unsigned long (GameSettingPlaylistWrapper::*)()) & GameSettingPlaylistWrapper::GetbNew, "C++: GameSettingPlaylistWrapper::GetbNew() --> unsigned long");
		cl.def("SetbNew", (void (GameSettingPlaylistWrapper::*)(unsigned long)) & GameSettingPlaylistWrapper::SetbNew, "C++: GameSettingPlaylistWrapper::SetbNew(unsigned long) --> void", "newbNew"_a);
		cl.def("GetbApplyQuitPenalty", (unsigned long (GameSettingPlaylistWrapper::*)()) & GameSettingPlaylistWrapper::GetbApplyQuitPenalty, "C++: GameSettingPlaylistWrapper::GetbApplyQuitPenalty() --> unsigned long");
		cl.def("SetbApplyQuitPenalty", (void (GameSettingPlaylistWrapper::*)(unsigned long)) & GameSettingPlaylistWrapper::SetbApplyQuitPenalty, "C++: GameSettingPlaylistWrapper::SetbApplyQuitPenalty(unsigned long) --> void", "newbApplyQuitPenalty"_a);
		cl.def("GetbAllowForfeit", (unsigned long (GameSettingPlaylistWrapper::*)()) & GameSettingPlaylistWrapper::GetbAllowForfeit, "C++: GameSettingPlaylistWrapper::GetbAllowForfeit() --> unsigned long");
		cl.def("SetbAllowForfeit", (void (GameSettingPlaylistWrapper::*)(unsigned long)) & GameSettingPlaylistWrapper::SetbAllowForfeit, "C++: GameSettingPlaylistWrapper::SetbAllowForfeit(unsigned long) --> void", "newbAllowForfeit"_a);
		cl.def("GetbDisableRankedReconnect", (unsigned long (GameSettingPlaylistWrapper::*)()) & GameSettingPlaylistWrapper::GetbDisableRankedReconnect, "C++: GameSettingPlaylistWrapper::GetbDisableRankedReconnect() --> unsigned long");
		cl.def("SetbDisableRankedReconnect", (void (GameSettingPlaylistWrapper::*)(unsigned long)) & GameSettingPlaylistWrapper::SetbDisableRankedReconnect, "C++: GameSettingPlaylistWrapper::SetbDisableRankedReconnect(unsigned long) --> void", "newbDisableRankedReconnect"_a);
		cl.def("GetbIgnoreAssignTeams", (unsigned long (GameSettingPlaylistWrapper::*)()) & GameSettingPlaylistWrapper::GetbIgnoreAssignTeams, "C++: GameSettingPlaylistWrapper::GetbIgnoreAssignTeams() --> unsigned long");
		cl.def("SetbIgnoreAssignTeams", (void (GameSettingPlaylistWrapper::*)(unsigned long)) & GameSettingPlaylistWrapper::SetbIgnoreAssignTeams, "C++: GameSettingPlaylistWrapper::SetbIgnoreAssignTeams(unsigned long) --> void", "newbIgnoreAssignTeams"_a);
		cl.def("GetbKickOnMigrate", (unsigned long (GameSettingPlaylistWrapper::*)()) & GameSettingPlaylistWrapper::GetbKickOnMigrate, "C++: GameSettingPlaylistWrapper::GetbKickOnMigrate() --> unsigned long");
		cl.def("SetbKickOnMigrate", (void (GameSettingPlaylistWrapper::*)(unsigned long)) & GameSettingPlaylistWrapper::SetbKickOnMigrate, "C++: GameSettingPlaylistWrapper::SetbKickOnMigrate(unsigned long) --> void", "newbKickOnMigrate"_a);
		cl.def("GetbAllowClubs", (unsigned long (GameSettingPlaylistWrapper::*)()) & GameSettingPlaylistWrapper::GetbAllowClubs, "C++: GameSettingPlaylistWrapper::GetbAllowClubs() --> unsigned long");
		cl.def("SetbAllowClubs", (void (GameSettingPlaylistWrapper::*)(unsigned long)) & GameSettingPlaylistWrapper::SetbAllowClubs, "C++: GameSettingPlaylistWrapper::SetbAllowClubs(unsigned long) --> void", "newbAllowClubs"_a);
		cl.def("GetbPlayersVSBots", (unsigned long (GameSettingPlaylistWrapper::*)()) & GameSettingPlaylistWrapper::GetbPlayersVSBots, "C++: GameSettingPlaylistWrapper::GetbPlayersVSBots() --> unsigned long");
		cl.def("SetbPlayersVSBots", (void (GameSettingPlaylistWrapper::*)(unsigned long)) & GameSettingPlaylistWrapper::SetbPlayersVSBots, "C++: GameSettingPlaylistWrapper::SetbPlayersVSBots(unsigned long) --> void", "newbPlayersVSBots"_a);
		cl.def("GetPlaylistId", (int (GameSettingPlaylistWrapper::*)()) & GameSettingPlaylistWrapper::GetPlaylistId, "C++: GameSettingPlaylistWrapper::GetPlaylistId() --> int");
		cl.def("SetPlaylistId", (void (GameSettingPlaylistWrapper::*)(int)) & GameSettingPlaylistWrapper::SetPlaylistId, "C++: GameSettingPlaylistWrapper::SetPlaylistId(int) --> void", "newPlaylistId"_a);
		cl.def("GetServerCommand", (class UnrealStringWrapper(GameSettingPlaylistWrapper::*)()) & GameSettingPlaylistWrapper::GetServerCommand, "C++: GameSettingPlaylistWrapper::GetServerCommand() --> class UnrealStringWrapper");
		cl.def("IsLanMatch", (bool (GameSettingPlaylistWrapper::*)()) & GameSettingPlaylistWrapper::IsLanMatch, "C++: GameSettingPlaylistWrapper::IsLanMatch() --> bool");
		cl.def("IsPrivateMatch", (bool (GameSettingPlaylistWrapper::*)()) & GameSettingPlaylistWrapper::IsPrivateMatch, "C++: GameSettingPlaylistWrapper::IsPrivateMatch() --> bool");
		cl.def("ShouldUpdateSkills", (bool (GameSettingPlaylistWrapper::*)()) & GameSettingPlaylistWrapper::ShouldUpdateSkills, "C++: GameSettingPlaylistWrapper::ShouldUpdateSkills() --> bool");
		cl.def("IsValidID", (bool (GameSettingPlaylistWrapper::*)(int)) & GameSettingPlaylistWrapper::IsValidID, "C++: GameSettingPlaylistWrapper::IsValidID(int) --> bool", "InPlaylistID"_a);
		cl.def("IsValid2", (bool (GameSettingPlaylistWrapper::*)()) & GameSettingPlaylistWrapper::IsValid2, "C++: GameSettingPlaylistWrapper::IsValid2() --> bool");
	}
	{ // SampleHistoryWrapper file:bakkesmod/wrappers/GameObject/PerformanceStats/SampleHistoryWrapper.h line:10
		pybind11::class_<SampleHistoryWrapper, std::shared_ptr<SampleHistoryWrapper>, ObjectWrapper> cl(M, "SampleHistoryWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](SampleHistoryWrapper const& o) { return new SampleHistoryWrapper(o); }));
		cl.def("assign", (class SampleHistoryWrapper& (SampleHistoryWrapper::*)(class SampleHistoryWrapper)) & SampleHistoryWrapper::operator=, "C++: SampleHistoryWrapper::operator=(class SampleHistoryWrapper) --> class SampleHistoryWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetRecordSettings", (class SampleRecordSettingsWrapper(SampleHistoryWrapper::*)()) & SampleHistoryWrapper::GetRecordSettings, "C++: SampleHistoryWrapper::GetRecordSettings() --> class SampleRecordSettingsWrapper");
		cl.def("SetRecordSettings", (void (SampleHistoryWrapper::*)(class SampleRecordSettingsWrapper)) & SampleHistoryWrapper::SetRecordSettings, "C++: SampleHistoryWrapper::SetRecordSettings(class SampleRecordSettingsWrapper) --> void", "newRecordSettings"_a);
		cl.def("GetTitle", (class UnrealStringWrapper(SampleHistoryWrapper::*)()) & SampleHistoryWrapper::GetTitle, "C++: SampleHistoryWrapper::GetTitle() --> class UnrealStringWrapper");
		cl.def("GetYMin", (float (SampleHistoryWrapper::*)()) & SampleHistoryWrapper::GetYMin, "C++: SampleHistoryWrapper::GetYMin() --> float");
		cl.def("SetYMin", (void (SampleHistoryWrapper::*)(float)) & SampleHistoryWrapper::SetYMin, "C++: SampleHistoryWrapper::SetYMin(float) --> void", "newYMin"_a);
		cl.def("GetYMax", (float (SampleHistoryWrapper::*)()) & SampleHistoryWrapper::GetYMax, "C++: SampleHistoryWrapper::GetYMax() --> float");
		cl.def("SetYMax", (void (SampleHistoryWrapper::*)(float)) & SampleHistoryWrapper::SetYMax, "C++: SampleHistoryWrapper::SetYMax(float) --> void", "newYMax"_a);
		cl.def("GetGoodValue", (float (SampleHistoryWrapper::*)()) & SampleHistoryWrapper::GetGoodValue, "C++: SampleHistoryWrapper::GetGoodValue() --> float");
		cl.def("SetGoodValue", (void (SampleHistoryWrapper::*)(float)) & SampleHistoryWrapper::SetGoodValue, "C++: SampleHistoryWrapper::SetGoodValue(float) --> void", "newGoodValue"_a);
		cl.def("GetBadValue", (float (SampleHistoryWrapper::*)()) & SampleHistoryWrapper::GetBadValue, "C++: SampleHistoryWrapper::GetBadValue() --> float");
		cl.def("SetBadValue", (void (SampleHistoryWrapper::*)(float)) & SampleHistoryWrapper::SetBadValue, "C++: SampleHistoryWrapper::SetBadValue(float) --> void", "newBadValue"_a);
		cl.def("GetBaseValue", (float (SampleHistoryWrapper::*)()) & SampleHistoryWrapper::GetBaseValue, "C++: SampleHistoryWrapper::GetBaseValue() --> float");
		cl.def("SetBaseValue", (void (SampleHistoryWrapper::*)(float)) & SampleHistoryWrapper::SetBaseValue, "C++: SampleHistoryWrapper::SetBaseValue(float) --> void", "newBaseValue"_a);
		cl.def("GetSamples", (class StructArrayWrapper<struct RecordedSample>(SampleHistoryWrapper::*)()) & SampleHistoryWrapper::GetSamples, "C++: SampleHistoryWrapper::GetSamples() --> class StructArrayWrapper<struct RecordedSample>");
		cl.def("GetSampleIndex", (int (SampleHistoryWrapper::*)()) & SampleHistoryWrapper::GetSampleIndex, "C++: SampleHistoryWrapper::GetSampleIndex() --> int");
		cl.def("SetSampleIndex", (void (SampleHistoryWrapper::*)(int)) & SampleHistoryWrapper::SetSampleIndex, "C++: SampleHistoryWrapper::SetSampleIndex(int) --> void", "newSampleIndex"_a);
		cl.def("GetAccumTime", (float (SampleHistoryWrapper::*)()) & SampleHistoryWrapper::GetAccumTime, "C++: SampleHistoryWrapper::GetAccumTime() --> float");
		cl.def("SetAccumTime", (void (SampleHistoryWrapper::*)(float)) & SampleHistoryWrapper::SetAccumTime, "C++: SampleHistoryWrapper::SetAccumTime(float) --> void", "newAccumTime"_a);
		cl.def("GetPendingSample", (struct RecordedSample(SampleHistoryWrapper::*)()) & SampleHistoryWrapper::GetPendingSample, "C++: SampleHistoryWrapper::GetPendingSample() --> struct RecordedSample");
		cl.def("SetPendingSample", (void (SampleHistoryWrapper::*)(struct RecordedSample)) & SampleHistoryWrapper::SetPendingSample, "C++: SampleHistoryWrapper::SetPendingSample(struct RecordedSample) --> void", "newPendingSample"_a);
		cl.def("GetbHasPendingSample", (unsigned long (SampleHistoryWrapper::*)()) & SampleHistoryWrapper::GetbHasPendingSample, "C++: SampleHistoryWrapper::GetbHasPendingSample() --> unsigned long");
		cl.def("SetbHasPendingSample", (void (SampleHistoryWrapper::*)(unsigned long)) & SampleHistoryWrapper::SetbHasPendingSample, "C++: SampleHistoryWrapper::SetbHasPendingSample(unsigned long) --> void", "newbHasPendingSample"_a);
		cl.def("Tick", (void (SampleHistoryWrapper::*)(float)) & SampleHistoryWrapper::Tick, "C++: SampleHistoryWrapper::Tick(float) --> void", "DeltaTime"_a);
		cl.def("AddSample", (void (SampleHistoryWrapper::*)(float)) & SampleHistoryWrapper::AddSample, "C++: SampleHistoryWrapper::AddSample(float) --> void", "NewValue"_a);
		cl.def("GetSummaryValue", (float (SampleHistoryWrapper::*)(unsigned char, float, unsigned long)) & SampleHistoryWrapper::GetSummaryValue, "C++: SampleHistoryWrapper::GetSummaryValue(unsigned char, float, unsigned long) --> float", "Type"_a, "MaxSampleAge"_a, "bAbsoluteValue"_a);
		cl.def("SetBaseValue2", (class SampleHistoryWrapper(SampleHistoryWrapper::*)(float)) & SampleHistoryWrapper::SetBaseValue2, "C++: SampleHistoryWrapper::SetBaseValue2(float) --> class SampleHistoryWrapper", "InBaseValue"_a);
		cl.def("SetGoodBadValues", (class SampleHistoryWrapper(SampleHistoryWrapper::*)(float, float)) & SampleHistoryWrapper::SetGoodBadValues, "C++: SampleHistoryWrapper::SetGoodBadValues(float, float) --> class SampleHistoryWrapper", "InGoodValue"_a, "InBadValue"_a);
		cl.def("SetGraphMaxMin", (class SampleHistoryWrapper(SampleHistoryWrapper::*)(float, float)) & SampleHistoryWrapper::SetGraphMaxMin, "C++: SampleHistoryWrapper::SetGraphMaxMin(float, float) --> class SampleHistoryWrapper", "MaxValue"_a, "MinValue"_a);
		cl.def("SetTitle", (class SampleHistoryWrapper(SampleHistoryWrapper::*)(std::string)) & SampleHistoryWrapper::SetTitle, "C++: SampleHistoryWrapper::SetTitle(std::string) --> class SampleHistoryWrapper", "InTitle"_a);
	}
	{ // SampleRecordSettingsWrapper file:bakkesmod/wrappers/GameObject/PerformanceStats/SampleRecordSettingsWrapper.h line:7
		pybind11::class_<SampleRecordSettingsWrapper, std::shared_ptr<SampleRecordSettingsWrapper>, ObjectWrapper> cl(M, "SampleRecordSettingsWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](SampleRecordSettingsWrapper const& o) { return new SampleRecordSettingsWrapper(o); }));
		cl.def("assign", (class SampleRecordSettingsWrapper& (SampleRecordSettingsWrapper::*)(class SampleRecordSettingsWrapper)) & SampleRecordSettingsWrapper::operator=, "C++: SampleRecordSettingsWrapper::operator=(class SampleRecordSettingsWrapper) --> class SampleRecordSettingsWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetMaxSampleAge", (float (SampleRecordSettingsWrapper::*)()) & SampleRecordSettingsWrapper::GetMaxSampleAge, "C++: SampleRecordSettingsWrapper::GetMaxSampleAge() --> float");
		cl.def("SetMaxSampleAge", (void (SampleRecordSettingsWrapper::*)(float)) & SampleRecordSettingsWrapper::SetMaxSampleAge, "C++: SampleRecordSettingsWrapper::SetMaxSampleAge(float) --> void", "newMaxSampleAge"_a);
		cl.def("GetRecordRate", (float (SampleRecordSettingsWrapper::*)()) & SampleRecordSettingsWrapper::GetRecordRate, "C++: SampleRecordSettingsWrapper::GetRecordRate() --> float");
		cl.def("SetRecordRate", (void (SampleRecordSettingsWrapper::*)(float)) & SampleRecordSettingsWrapper::SetRecordRate, "C++: SampleRecordSettingsWrapper::SetRecordRate(float) --> void", "newRecordRate"_a);
	}
	{ // StatGraphSystemWrapper file:bakkesmod/wrappers/GameObject/PerformanceStats/StatGraphSystemWrapper.h line:11
		pybind11::class_<StatGraphSystemWrapper, std::shared_ptr<StatGraphSystemWrapper>, ObjectWrapper> cl(M, "StatGraphSystemWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](StatGraphSystemWrapper const& o) { return new StatGraphSystemWrapper(o); }));
		cl.def("assign", (class StatGraphSystemWrapper& (StatGraphSystemWrapper::*)(class StatGraphSystemWrapper)) & StatGraphSystemWrapper::operator=, "C++: StatGraphSystemWrapper::operator=(class StatGraphSystemWrapper) --> class StatGraphSystemWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetGraphSampleTime", (float (StatGraphSystemWrapper::*)()) & StatGraphSystemWrapper::GetGraphSampleTime, "C++: StatGraphSystemWrapper::GetGraphSampleTime() --> float");
		cl.def("SetGraphSampleTime", (void (StatGraphSystemWrapper::*)(float)) & StatGraphSystemWrapper::SetGraphSampleTime, "C++: StatGraphSystemWrapper::SetGraphSampleTime(float) --> void", "newGraphSampleTime"_a);
		cl.def("GetGraphLevel", (unsigned char (StatGraphSystemWrapper::*)()) & StatGraphSystemWrapper::GetGraphLevel, "C++: StatGraphSystemWrapper::GetGraphLevel() --> unsigned char");
		cl.def("SetGraphLevel", (void (StatGraphSystemWrapper::*)(unsigned char)) & StatGraphSystemWrapper::SetGraphLevel, "C++: StatGraphSystemWrapper::SetGraphLevel(unsigned char) --> void", "newGraphLevel"_a);
		cl.def("GetPerfStatGraph", (class PerfStatGraphWrapper(StatGraphSystemWrapper::*)()) & StatGraphSystemWrapper::GetPerfStatGraph, "C++: StatGraphSystemWrapper::GetPerfStatGraph() --> class PerfStatGraphWrapper");
		cl.def("SetPerfStatGraph", (void (StatGraphSystemWrapper::*)(class PerfStatGraphWrapper)) & StatGraphSystemWrapper::SetPerfStatGraph, "C++: StatGraphSystemWrapper::SetPerfStatGraph(class PerfStatGraphWrapper) --> void", "newPerfStatGraph"_a);
		cl.def("GetNetStatGraph", (class NetStatGraphWrapper(StatGraphSystemWrapper::*)()) & StatGraphSystemWrapper::GetNetStatGraph, "C++: StatGraphSystemWrapper::GetNetStatGraph() --> class NetStatGraphWrapper");
		cl.def("SetNetStatGraph", (void (StatGraphSystemWrapper::*)(class NetStatGraphWrapper)) & StatGraphSystemWrapper::SetNetStatGraph, "C++: StatGraphSystemWrapper::SetNetStatGraph(class NetStatGraphWrapper) --> void", "newNetStatGraph"_a);
		cl.def("GetInputBufferGraph", (class InputBufferGraphWrapper(StatGraphSystemWrapper::*)()) & StatGraphSystemWrapper::GetInputBufferGraph, "C++: StatGraphSystemWrapper::GetInputBufferGraph() --> class InputBufferGraphWrapper");
		cl.def("SetInputBufferGraph", (void (StatGraphSystemWrapper::*)(class InputBufferGraphWrapper)) & StatGraphSystemWrapper::SetInputBufferGraph, "C++: StatGraphSystemWrapper::SetInputBufferGraph(class InputBufferGraphWrapper) --> void", "newInputBufferGraph"_a);
		cl.def("GetStatGraphs", (class ArrayWrapper<class StatGraphWrapper>(StatGraphSystemWrapper::*)()) & StatGraphSystemWrapper::GetStatGraphs, "C++: StatGraphSystemWrapper::GetStatGraphs() --> class ArrayWrapper<class StatGraphWrapper>");
		cl.def("GetVisibleStatGraphs", (class ArrayWrapper<class StatGraphWrapper>(StatGraphSystemWrapper::*)()) & StatGraphSystemWrapper::GetVisibleStatGraphs, "C++: StatGraphSystemWrapper::GetVisibleStatGraphs() --> class ArrayWrapper<class StatGraphWrapper>");
		cl.def("GetPreallocGraphLines", (int (StatGraphSystemWrapper::*)()) & StatGraphSystemWrapper::GetPreallocGraphLines, "C++: StatGraphSystemWrapper::GetPreallocGraphLines() --> int");
		cl.def("SetPreallocGraphLines", (void (StatGraphSystemWrapper::*)(int)) & StatGraphSystemWrapper::SetPreallocGraphLines, "C++: StatGraphSystemWrapper::SetPreallocGraphLines(int) --> void", "newPreallocGraphLines"_a);
		cl.def("__StatGraphSystem_TA__SetGraphLevel", (void (StatGraphSystemWrapper::*)(class StatGraphWrapper)) & StatGraphSystemWrapper::__StatGraphSystem_TA__SetGraphLevel, "C++: StatGraphSystemWrapper::__StatGraphSystem_TA__SetGraphLevel(class StatGraphWrapper) --> void", "G"_a);
		cl.def("PacketReceived", (void (StatGraphSystemWrapper::*)(float)) & StatGraphSystemWrapper::PacketReceived, "C++: StatGraphSystemWrapper::PacketReceived(float) --> void", "Latency"_a);
		cl.def("Graphtime", (void (StatGraphSystemWrapper::*)(float)) & StatGraphSystemWrapper::Graphtime, "C++: StatGraphSystemWrapper::Graphtime(float) --> void", "Seconds"_a);
		cl.def("StatGraphNext", (void (StatGraphSystemWrapper::*)()) & StatGraphSystemWrapper::StatGraphNext, "C++: StatGraphSystemWrapper::StatGraphNext() --> void");
		cl.def("GetGraphSampleTime2", (float (StatGraphSystemWrapper::*)(unsigned char)) & StatGraphSystemWrapper::GetGraphSampleTime2, "C++: StatGraphSystemWrapper::GetGraphSampleTime2(unsigned char) --> float", "Level"_a);
		cl.def("SetGraphLevel2", (void (StatGraphSystemWrapper::*)(unsigned char)) & StatGraphSystemWrapper::SetGraphLevel2, "C++: StatGraphSystemWrapper::SetGraphLevel2(unsigned char) --> void", "Level"_a);
	}
	{ // PrimitiveComponentWrapper file:bakkesmod/wrappers/GameObject/CarComponent/PrimitiveComponentWrapper.h line:7
		pybind11::class_<PrimitiveComponentWrapper, std::shared_ptr<PrimitiveComponentWrapper>, ObjectWrapper> cl(M, "PrimitiveComponentWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](PrimitiveComponentWrapper const& o) { return new PrimitiveComponentWrapper(o); }));
		cl.def("assign", (class PrimitiveComponentWrapper& (PrimitiveComponentWrapper::*)(class PrimitiveComponentWrapper)) & PrimitiveComponentWrapper::operator=, "C++: PrimitiveComponentWrapper::operator=(class PrimitiveComponentWrapper) --> class PrimitiveComponentWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetRBChannel", (unsigned char (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetRBChannel, "C++: PrimitiveComponentWrapper::GetRBChannel() --> unsigned char");
		cl.def("SetRBChannel", (void (PrimitiveComponentWrapper::*)(unsigned char)) & PrimitiveComponentWrapper::SetRBChannel, "C++: PrimitiveComponentWrapper::SetRBChannel(unsigned char) --> void", "newRBChannel"_a);
		cl.def("GetRBDominanceGroup", (unsigned char (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetRBDominanceGroup, "C++: PrimitiveComponentWrapper::GetRBDominanceGroup() --> unsigned char");
		cl.def("SetRBDominanceGroup", (void (PrimitiveComponentWrapper::*)(unsigned char)) & PrimitiveComponentWrapper::SetRBDominanceGroup, "C++: PrimitiveComponentWrapper::SetRBDominanceGroup(unsigned char) --> void", "newRBDominanceGroup"_a);
		cl.def("GetbOnlyBlockActorMovement", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetbOnlyBlockActorMovement, "C++: PrimitiveComponentWrapper::GetbOnlyBlockActorMovement() --> unsigned long");
		cl.def("SetbOnlyBlockActorMovement", (void (PrimitiveComponentWrapper::*)(unsigned long)) & PrimitiveComponentWrapper::SetbOnlyBlockActorMovement, "C++: PrimitiveComponentWrapper::SetbOnlyBlockActorMovement(unsigned long) --> void", "newbOnlyBlockActorMovement"_a);
		cl.def("GetHiddenGame", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetHiddenGame, "C++: PrimitiveComponentWrapper::GetHiddenGame() --> unsigned long");
		cl.def("SetHiddenGame", (void (PrimitiveComponentWrapper::*)(unsigned long)) & PrimitiveComponentWrapper::SetHiddenGame, "C++: PrimitiveComponentWrapper::SetHiddenGame(unsigned long) --> void", "newHiddenGame"_a);
		cl.def("GetbOwnerNoSee", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetbOwnerNoSee, "C++: PrimitiveComponentWrapper::GetbOwnerNoSee() --> unsigned long");
		cl.def("SetbOwnerNoSee", (void (PrimitiveComponentWrapper::*)(unsigned long)) & PrimitiveComponentWrapper::SetbOwnerNoSee, "C++: PrimitiveComponentWrapper::SetbOwnerNoSee(unsigned long) --> void", "newbOwnerNoSee"_a);
		cl.def("GetbOnlyOwnerSee", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetbOnlyOwnerSee, "C++: PrimitiveComponentWrapper::GetbOnlyOwnerSee() --> unsigned long");
		cl.def("SetbOnlyOwnerSee", (void (PrimitiveComponentWrapper::*)(unsigned long)) & PrimitiveComponentWrapper::SetbOnlyOwnerSee, "C++: PrimitiveComponentWrapper::SetbOnlyOwnerSee(unsigned long) --> void", "newbOnlyOwnerSee"_a);
		cl.def("GetbIgnoreOwnerHidden", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetbIgnoreOwnerHidden, "C++: PrimitiveComponentWrapper::GetbIgnoreOwnerHidden() --> unsigned long");
		cl.def("SetbIgnoreOwnerHidden", (void (PrimitiveComponentWrapper::*)(unsigned long)) & PrimitiveComponentWrapper::SetbIgnoreOwnerHidden, "C++: PrimitiveComponentWrapper::SetbIgnoreOwnerHidden(unsigned long) --> void", "newbIgnoreOwnerHidden"_a);
		cl.def("GetbUseAsOccluder", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetbUseAsOccluder, "C++: PrimitiveComponentWrapper::GetbUseAsOccluder() --> unsigned long");
		cl.def("SetbUseAsOccluder", (void (PrimitiveComponentWrapper::*)(unsigned long)) & PrimitiveComponentWrapper::SetbUseAsOccluder, "C++: PrimitiveComponentWrapper::SetbUseAsOccluder(unsigned long) --> void", "newbUseAsOccluder"_a);
		cl.def("GetbAllowApproximateOcclusion", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetbAllowApproximateOcclusion, "C++: PrimitiveComponentWrapper::GetbAllowApproximateOcclusion() --> unsigned long");
		cl.def("SetbAllowApproximateOcclusion", (void (PrimitiveComponentWrapper::*)(unsigned long)) & PrimitiveComponentWrapper::SetbAllowApproximateOcclusion, "C++: PrimitiveComponentWrapper::SetbAllowApproximateOcclusion(unsigned long) --> void", "newbAllowApproximateOcclusion"_a);
		cl.def("GetbFirstFrameOcclusion", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetbFirstFrameOcclusion, "C++: PrimitiveComponentWrapper::GetbFirstFrameOcclusion() --> unsigned long");
		cl.def("SetbFirstFrameOcclusion", (void (PrimitiveComponentWrapper::*)(unsigned long)) & PrimitiveComponentWrapper::SetbFirstFrameOcclusion, "C++: PrimitiveComponentWrapper::SetbFirstFrameOcclusion(unsigned long) --> void", "newbFirstFrameOcclusion"_a);
		cl.def("GetbIgnoreNearPlaneIntersection", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetbIgnoreNearPlaneIntersection, "C++: PrimitiveComponentWrapper::GetbIgnoreNearPlaneIntersection() --> unsigned long");
		cl.def("SetbIgnoreNearPlaneIntersection", (void (PrimitiveComponentWrapper::*)(unsigned long)) & PrimitiveComponentWrapper::SetbIgnoreNearPlaneIntersection, "C++: PrimitiveComponentWrapper::SetbIgnoreNearPlaneIntersection(unsigned long) --> void", "newbIgnoreNearPlaneIntersection"_a);
		cl.def("GetbAcceptsStaticDecals", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetbAcceptsStaticDecals, "C++: PrimitiveComponentWrapper::GetbAcceptsStaticDecals() --> unsigned long");
		cl.def("GetbAcceptsDynamicDecals", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetbAcceptsDynamicDecals, "C++: PrimitiveComponentWrapper::GetbAcceptsDynamicDecals() --> unsigned long");
		cl.def("GetbIsRefreshingDecals", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetbIsRefreshingDecals, "C++: PrimitiveComponentWrapper::GetbIsRefreshingDecals() --> unsigned long");
		cl.def("GetCastShadow", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetCastShadow, "C++: PrimitiveComponentWrapper::GetCastShadow() --> unsigned long");
		cl.def("SetCastShadow", (void (PrimitiveComponentWrapper::*)(unsigned long)) & PrimitiveComponentWrapper::SetCastShadow, "C++: PrimitiveComponentWrapper::SetCastShadow(unsigned long) --> void", "newCastShadow"_a);
		cl.def("GetbForceDirectLightMap", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetbForceDirectLightMap, "C++: PrimitiveComponentWrapper::GetbForceDirectLightMap() --> unsigned long");
		cl.def("SetbForceDirectLightMap", (void (PrimitiveComponentWrapper::*)(unsigned long)) & PrimitiveComponentWrapper::SetbForceDirectLightMap, "C++: PrimitiveComponentWrapper::SetbForceDirectLightMap(unsigned long) --> void", "newbForceDirectLightMap"_a);
		cl.def("GetbCastDynamicShadow", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetbCastDynamicShadow, "C++: PrimitiveComponentWrapper::GetbCastDynamicShadow() --> unsigned long");
		cl.def("SetbCastDynamicShadow", (void (PrimitiveComponentWrapper::*)(unsigned long)) & PrimitiveComponentWrapper::SetbCastDynamicShadow, "C++: PrimitiveComponentWrapper::SetbCastDynamicShadow(unsigned long) --> void", "newbCastDynamicShadow"_a);
		cl.def("GetbCastStaticShadow", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetbCastStaticShadow, "C++: PrimitiveComponentWrapper::GetbCastStaticShadow() --> unsigned long");
		cl.def("SetbCastStaticShadow", (void (PrimitiveComponentWrapper::*)(unsigned long)) & PrimitiveComponentWrapper::SetbCastStaticShadow, "C++: PrimitiveComponentWrapper::SetbCastStaticShadow(unsigned long) --> void", "newbCastStaticShadow"_a);
		cl.def("GetbSelfShadowOnly", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetbSelfShadowOnly, "C++: PrimitiveComponentWrapper::GetbSelfShadowOnly() --> unsigned long");
		cl.def("SetbSelfShadowOnly", (void (PrimitiveComponentWrapper::*)(unsigned long)) & PrimitiveComponentWrapper::SetbSelfShadowOnly, "C++: PrimitiveComponentWrapper::SetbSelfShadowOnly(unsigned long) --> void", "newbSelfShadowOnly"_a);
		cl.def("GetbNoModSelfShadow", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetbNoModSelfShadow, "C++: PrimitiveComponentWrapper::GetbNoModSelfShadow() --> unsigned long");
		cl.def("SetbNoModSelfShadow", (void (PrimitiveComponentWrapper::*)(unsigned long)) & PrimitiveComponentWrapper::SetbNoModSelfShadow, "C++: PrimitiveComponentWrapper::SetbNoModSelfShadow(unsigned long) --> void", "newbNoModSelfShadow"_a);
		cl.def("GetbAcceptsDynamicDominantLightShadows", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetbAcceptsDynamicDominantLightShadows, "C++: PrimitiveComponentWrapper::GetbAcceptsDynamicDominantLightShadows() --> unsigned long");
		cl.def("SetbAcceptsDynamicDominantLightShadows", (void (PrimitiveComponentWrapper::*)(unsigned long)) & PrimitiveComponentWrapper::SetbAcceptsDynamicDominantLightShadows, "C++: PrimitiveComponentWrapper::SetbAcceptsDynamicDominantLightShadows(unsigned long) --> void", "newbAcceptsDynamicDominantLightShadows"_a);
		cl.def("GetbCastHiddenShadow", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetbCastHiddenShadow, "C++: PrimitiveComponentWrapper::GetbCastHiddenShadow() --> unsigned long");
		cl.def("SetbCastHiddenShadow", (void (PrimitiveComponentWrapper::*)(unsigned long)) & PrimitiveComponentWrapper::SetbCastHiddenShadow, "C++: PrimitiveComponentWrapper::SetbCastHiddenShadow(unsigned long) --> void", "newbCastHiddenShadow"_a);
		cl.def("GetbCastShadowAsTwoSided", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetbCastShadowAsTwoSided, "C++: PrimitiveComponentWrapper::GetbCastShadowAsTwoSided() --> unsigned long");
		cl.def("SetbCastShadowAsTwoSided", (void (PrimitiveComponentWrapper::*)(unsigned long)) & PrimitiveComponentWrapper::SetbCastShadowAsTwoSided, "C++: PrimitiveComponentWrapper::SetbCastShadowAsTwoSided(unsigned long) --> void", "newbCastShadowAsTwoSided"_a);
		cl.def("GetbAcceptsLights", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetbAcceptsLights, "C++: PrimitiveComponentWrapper::GetbAcceptsLights() --> unsigned long");
		cl.def("SetbAcceptsLights", (void (PrimitiveComponentWrapper::*)(unsigned long)) & PrimitiveComponentWrapper::SetbAcceptsLights, "C++: PrimitiveComponentWrapper::SetbAcceptsLights(unsigned long) --> void", "newbAcceptsLights"_a);
		cl.def("GetbAcceptsDynamicLights", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetbAcceptsDynamicLights, "C++: PrimitiveComponentWrapper::GetbAcceptsDynamicLights() --> unsigned long");
		cl.def("SetbAcceptsDynamicLights", (void (PrimitiveComponentWrapper::*)(unsigned long)) & PrimitiveComponentWrapper::SetbAcceptsDynamicLights, "C++: PrimitiveComponentWrapper::SetbAcceptsDynamicLights(unsigned long) --> void", "newbAcceptsDynamicLights"_a);
		cl.def("GetbUseOnePassLightingOnTranslucency", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetbUseOnePassLightingOnTranslucency, "C++: PrimitiveComponentWrapper::GetbUseOnePassLightingOnTranslucency() --> unsigned long");
		cl.def("SetbUseOnePassLightingOnTranslucency", (void (PrimitiveComponentWrapper::*)(unsigned long)) & PrimitiveComponentWrapper::SetbUseOnePassLightingOnTranslucency, "C++: PrimitiveComponentWrapper::SetbUseOnePassLightingOnTranslucency(unsigned long) --> void", "newbUseOnePassLightingOnTranslucency"_a);
		cl.def("GetbUsePrecomputedShadows", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetbUsePrecomputedShadows, "C++: PrimitiveComponentWrapper::GetbUsePrecomputedShadows() --> unsigned long");
		cl.def("GetbHasExplicitShadowParent", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetbHasExplicitShadowParent, "C++: PrimitiveComponentWrapper::GetbHasExplicitShadowParent() --> unsigned long");
		cl.def("GetCollideActors", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetCollideActors, "C++: PrimitiveComponentWrapper::GetCollideActors() --> unsigned long");
		cl.def("SetCollideActors", (void (PrimitiveComponentWrapper::*)(unsigned long)) & PrimitiveComponentWrapper::SetCollideActors, "C++: PrimitiveComponentWrapper::SetCollideActors(unsigned long) --> void", "newCollideActors"_a);
		cl.def("GetAlwaysCheckCollision", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetAlwaysCheckCollision, "C++: PrimitiveComponentWrapper::GetAlwaysCheckCollision() --> unsigned long");
		cl.def("SetAlwaysCheckCollision", (void (PrimitiveComponentWrapper::*)(unsigned long)) & PrimitiveComponentWrapper::SetAlwaysCheckCollision, "C++: PrimitiveComponentWrapper::SetAlwaysCheckCollision(unsigned long) --> void", "newAlwaysCheckCollision"_a);
		cl.def("GetBlockActors", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetBlockActors, "C++: PrimitiveComponentWrapper::GetBlockActors() --> unsigned long");
		cl.def("SetBlockActors", (void (PrimitiveComponentWrapper::*)(unsigned long)) & PrimitiveComponentWrapper::SetBlockActors, "C++: PrimitiveComponentWrapper::SetBlockActors(unsigned long) --> void", "newBlockActors"_a);
		cl.def("GetBlockZeroExtent", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetBlockZeroExtent, "C++: PrimitiveComponentWrapper::GetBlockZeroExtent() --> unsigned long");
		cl.def("SetBlockZeroExtent", (void (PrimitiveComponentWrapper::*)(unsigned long)) & PrimitiveComponentWrapper::SetBlockZeroExtent, "C++: PrimitiveComponentWrapper::SetBlockZeroExtent(unsigned long) --> void", "newBlockZeroExtent"_a);
		cl.def("GetBlockNonZeroExtent", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetBlockNonZeroExtent, "C++: PrimitiveComponentWrapper::GetBlockNonZeroExtent() --> unsigned long");
		cl.def("SetBlockNonZeroExtent", (void (PrimitiveComponentWrapper::*)(unsigned long)) & PrimitiveComponentWrapper::SetBlockNonZeroExtent, "C++: PrimitiveComponentWrapper::SetBlockNonZeroExtent(unsigned long) --> void", "newBlockNonZeroExtent"_a);
		cl.def("GetCanBlockCamera", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetCanBlockCamera, "C++: PrimitiveComponentWrapper::GetCanBlockCamera() --> unsigned long");
		cl.def("SetCanBlockCamera", (void (PrimitiveComponentWrapper::*)(unsigned long)) & PrimitiveComponentWrapper::SetCanBlockCamera, "C++: PrimitiveComponentWrapper::SetCanBlockCamera(unsigned long) --> void", "newCanBlockCamera"_a);
		cl.def("GetBlockRigidBody", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetBlockRigidBody, "C++: PrimitiveComponentWrapper::GetBlockRigidBody() --> unsigned long");
		cl.def("SetBlockRigidBody", (void (PrimitiveComponentWrapper::*)(unsigned long)) & PrimitiveComponentWrapper::SetBlockRigidBody, "C++: PrimitiveComponentWrapper::SetBlockRigidBody(unsigned long) --> void", "newBlockRigidBody"_a);
		cl.def("GetbBlockFootPlacement", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetbBlockFootPlacement, "C++: PrimitiveComponentWrapper::GetbBlockFootPlacement() --> unsigned long");
		cl.def("SetbBlockFootPlacement", (void (PrimitiveComponentWrapper::*)(unsigned long)) & PrimitiveComponentWrapper::SetbBlockFootPlacement, "C++: PrimitiveComponentWrapper::SetbBlockFootPlacement(unsigned long) --> void", "newbBlockFootPlacement"_a);
		cl.def("GetbDisableAllRigidBody", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetbDisableAllRigidBody, "C++: PrimitiveComponentWrapper::GetbDisableAllRigidBody() --> unsigned long");
		cl.def("SetbDisableAllRigidBody", (void (PrimitiveComponentWrapper::*)(unsigned long)) & PrimitiveComponentWrapper::SetbDisableAllRigidBody, "C++: PrimitiveComponentWrapper::SetbDisableAllRigidBody(unsigned long) --> void", "newbDisableAllRigidBody"_a);
		cl.def("GetbSkipRBGeomCreation", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetbSkipRBGeomCreation, "C++: PrimitiveComponentWrapper::GetbSkipRBGeomCreation() --> unsigned long");
		cl.def("SetbSkipRBGeomCreation", (void (PrimitiveComponentWrapper::*)(unsigned long)) & PrimitiveComponentWrapper::SetbSkipRBGeomCreation, "C++: PrimitiveComponentWrapper::SetbSkipRBGeomCreation(unsigned long) --> void", "newbSkipRBGeomCreation"_a);
		cl.def("GetbNotifyRigidBodyCollision", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetbNotifyRigidBodyCollision, "C++: PrimitiveComponentWrapper::GetbNotifyRigidBodyCollision() --> unsigned long");
		cl.def("SetbNotifyRigidBodyCollision", (void (PrimitiveComponentWrapper::*)(unsigned long)) & PrimitiveComponentWrapper::SetbNotifyRigidBodyCollision, "C++: PrimitiveComponentWrapper::SetbNotifyRigidBodyCollision(unsigned long) --> void", "newbNotifyRigidBodyCollision"_a);
		cl.def("GetbFluidDrain", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetbFluidDrain, "C++: PrimitiveComponentWrapper::GetbFluidDrain() --> unsigned long");
		cl.def("SetbFluidDrain", (void (PrimitiveComponentWrapper::*)(unsigned long)) & PrimitiveComponentWrapper::SetbFluidDrain, "C++: PrimitiveComponentWrapper::SetbFluidDrain(unsigned long) --> void", "newbFluidDrain"_a);
		cl.def("GetbFluidTwoWay", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetbFluidTwoWay, "C++: PrimitiveComponentWrapper::GetbFluidTwoWay() --> unsigned long");
		cl.def("SetbFluidTwoWay", (void (PrimitiveComponentWrapper::*)(unsigned long)) & PrimitiveComponentWrapper::SetbFluidTwoWay, "C++: PrimitiveComponentWrapper::SetbFluidTwoWay(unsigned long) --> void", "newbFluidTwoWay"_a);
		cl.def("GetbIgnoreRadialImpulse", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetbIgnoreRadialImpulse, "C++: PrimitiveComponentWrapper::GetbIgnoreRadialImpulse() --> unsigned long");
		cl.def("SetbIgnoreRadialImpulse", (void (PrimitiveComponentWrapper::*)(unsigned long)) & PrimitiveComponentWrapper::SetbIgnoreRadialImpulse, "C++: PrimitiveComponentWrapper::SetbIgnoreRadialImpulse(unsigned long) --> void", "newbIgnoreRadialImpulse"_a);
		cl.def("GetbIgnoreRadialForce", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetbIgnoreRadialForce, "C++: PrimitiveComponentWrapper::GetbIgnoreRadialForce() --> unsigned long");
		cl.def("SetbIgnoreRadialForce", (void (PrimitiveComponentWrapper::*)(unsigned long)) & PrimitiveComponentWrapper::SetbIgnoreRadialForce, "C++: PrimitiveComponentWrapper::SetbIgnoreRadialForce(unsigned long) --> void", "newbIgnoreRadialForce"_a);
		cl.def("GetbIgnoreForceField", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetbIgnoreForceField, "C++: PrimitiveComponentWrapper::GetbIgnoreForceField() --> unsigned long");
		cl.def("SetbIgnoreForceField", (void (PrimitiveComponentWrapper::*)(unsigned long)) & PrimitiveComponentWrapper::SetbIgnoreForceField, "C++: PrimitiveComponentWrapper::SetbIgnoreForceField(unsigned long) --> void", "newbIgnoreForceField"_a);
		cl.def("GetbUseCompartment", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetbUseCompartment, "C++: PrimitiveComponentWrapper::GetbUseCompartment() --> unsigned long");
		cl.def("SetbUseCompartment", (void (PrimitiveComponentWrapper::*)(unsigned long)) & PrimitiveComponentWrapper::SetbUseCompartment, "C++: PrimitiveComponentWrapper::SetbUseCompartment(unsigned long) --> void", "newbUseCompartment"_a);
		cl.def("GetAlwaysLoadOnClient", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetAlwaysLoadOnClient, "C++: PrimitiveComponentWrapper::GetAlwaysLoadOnClient() --> unsigned long");
		cl.def("SetAlwaysLoadOnClient", (void (PrimitiveComponentWrapper::*)(unsigned long)) & PrimitiveComponentWrapper::SetAlwaysLoadOnClient, "C++: PrimitiveComponentWrapper::SetAlwaysLoadOnClient(unsigned long) --> void", "newAlwaysLoadOnClient"_a);
		cl.def("GetAlwaysLoadOnServer", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetAlwaysLoadOnServer, "C++: PrimitiveComponentWrapper::GetAlwaysLoadOnServer() --> unsigned long");
		cl.def("SetAlwaysLoadOnServer", (void (PrimitiveComponentWrapper::*)(unsigned long)) & PrimitiveComponentWrapper::SetAlwaysLoadOnServer, "C++: PrimitiveComponentWrapper::SetAlwaysLoadOnServer(unsigned long) --> void", "newAlwaysLoadOnServer"_a);
		cl.def("GetbIgnoreHiddenActorsMembership", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetbIgnoreHiddenActorsMembership, "C++: PrimitiveComponentWrapper::GetbIgnoreHiddenActorsMembership() --> unsigned long");
		cl.def("SetbIgnoreHiddenActorsMembership", (void (PrimitiveComponentWrapper::*)(unsigned long)) & PrimitiveComponentWrapper::SetbIgnoreHiddenActorsMembership, "C++: PrimitiveComponentWrapper::SetbIgnoreHiddenActorsMembership(unsigned long) --> void", "newbIgnoreHiddenActorsMembership"_a);
		cl.def("GetAbsoluteTranslation", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetAbsoluteTranslation, "C++: PrimitiveComponentWrapper::GetAbsoluteTranslation() --> unsigned long");
		cl.def("SetAbsoluteTranslation", (void (PrimitiveComponentWrapper::*)(unsigned long)) & PrimitiveComponentWrapper::SetAbsoluteTranslation, "C++: PrimitiveComponentWrapper::SetAbsoluteTranslation(unsigned long) --> void", "newAbsoluteTranslation"_a);
		cl.def("GetAbsoluteRotation", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetAbsoluteRotation, "C++: PrimitiveComponentWrapper::GetAbsoluteRotation() --> unsigned long");
		cl.def("SetAbsoluteRotation", (void (PrimitiveComponentWrapper::*)(unsigned long)) & PrimitiveComponentWrapper::SetAbsoluteRotation, "C++: PrimitiveComponentWrapper::SetAbsoluteRotation(unsigned long) --> void", "newAbsoluteRotation"_a);
		cl.def("GetAbsoluteScale", (unsigned long (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetAbsoluteScale, "C++: PrimitiveComponentWrapper::GetAbsoluteScale() --> unsigned long");
		cl.def("SetAbsoluteScale", (void (PrimitiveComponentWrapper::*)(unsigned long)) & PrimitiveComponentWrapper::SetAbsoluteScale, "C++: PrimitiveComponentWrapper::SetAbsoluteScale(unsigned long) --> void", "newAbsoluteScale"_a);
		cl.def("GetVisibilityId", (int (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetVisibilityId, "C++: PrimitiveComponentWrapper::GetVisibilityId() --> int");
		cl.def("SetVisibilityId", (void (PrimitiveComponentWrapper::*)(int)) & PrimitiveComponentWrapper::SetVisibilityId, "C++: PrimitiveComponentWrapper::SetVisibilityId(int) --> void", "newVisibilityId"_a);
		cl.def("GetTranslation", (struct Vector(PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetTranslation, "C++: PrimitiveComponentWrapper::GetTranslation() --> struct Vector");
		cl.def("SetTranslation", (void (PrimitiveComponentWrapper::*)(struct Vector)) & PrimitiveComponentWrapper::SetTranslation, "C++: PrimitiveComponentWrapper::SetTranslation(struct Vector) --> void", "newTranslation"_a);
		cl.def("GetRotation", (struct Rotator(PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetRotation, "C++: PrimitiveComponentWrapper::GetRotation() --> struct Rotator");
		cl.def("SetRotation", (void (PrimitiveComponentWrapper::*)(struct Rotator)) & PrimitiveComponentWrapper::SetRotation, "C++: PrimitiveComponentWrapper::SetRotation(struct Rotator) --> void", "newRotation"_a);
		cl.def("GetScale", (float (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetScale, "C++: PrimitiveComponentWrapper::GetScale() --> float");
		cl.def("SetScale", (void (PrimitiveComponentWrapper::*)(float)) & PrimitiveComponentWrapper::SetScale, "C++: PrimitiveComponentWrapper::SetScale(float) --> void", "newScale"_a);
		cl.def("GetScale3D", (struct Vector(PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetScale3D, "C++: PrimitiveComponentWrapper::GetScale3D() --> struct Vector");
		cl.def("SetScale3D", (void (PrimitiveComponentWrapper::*)(struct Vector)) & PrimitiveComponentWrapper::SetScale3D, "C++: PrimitiveComponentWrapper::SetScale3D(struct Vector) --> void", "newScale3D"_a);
		cl.def("GetBoundsScale", (float (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetBoundsScale, "C++: PrimitiveComponentWrapper::GetBoundsScale() --> float");
		cl.def("SetBoundsScale", (void (PrimitiveComponentWrapper::*)(float)) & PrimitiveComponentWrapper::SetBoundsScale, "C++: PrimitiveComponentWrapper::SetBoundsScale(float) --> void", "newBoundsScale"_a);
		cl.def("SetLastSubmitTime", (void (PrimitiveComponentWrapper::*)(float)) & PrimitiveComponentWrapper::SetLastSubmitTime, "C++: PrimitiveComponentWrapper::SetLastSubmitTime(float) --> void", "newLastSubmitTime"_a);
		cl.def("GetLastRenderTime", (float (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetLastRenderTime, "C++: PrimitiveComponentWrapper::GetLastRenderTime() --> float");
		cl.def("GetScriptRigidBodyCollisionThreshold", (float (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::GetScriptRigidBodyCollisionThreshold, "C++: PrimitiveComponentWrapper::GetScriptRigidBodyCollisionThreshold() --> float");
		cl.def("SetScriptRigidBodyCollisionThreshold", (void (PrimitiveComponentWrapper::*)(float)) & PrimitiveComponentWrapper::SetScriptRigidBodyCollisionThreshold, "C++: PrimitiveComponentWrapper::SetScriptRigidBodyCollisionThreshold(float) --> void", "newScriptRigidBodyCollisionThreshold"_a);
		cl.def("TermRBPhys", (void (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::TermRBPhys, "C++: PrimitiveComponentWrapper::TermRBPhys() --> void");
		cl.def("InitRBPhys", (void (PrimitiveComponentWrapper::*)()) & PrimitiveComponentWrapper::InitRBPhys, "C++: PrimitiveComponentWrapper::InitRBPhys() --> void");
		cl.def("SetNotifyRigidBodyCollision", (void (PrimitiveComponentWrapper::*)(unsigned long)) & PrimitiveComponentWrapper::SetNotifyRigidBodyCollision, "C++: PrimitiveComponentWrapper::SetNotifyRigidBodyCollision(unsigned long) --> void", "bNewNotifyRigidBodyCollision"_a);
		cl.def("SetRBChannel2", (void (PrimitiveComponentWrapper::*)(unsigned char)) & PrimitiveComponentWrapper::SetRBChannel2, "C++: PrimitiveComponentWrapper::SetRBChannel2(unsigned char) --> void", "Channel"_a);
		cl.def("SetRBCollidesWithChannel", (void (PrimitiveComponentWrapper::*)(unsigned char, unsigned long)) & PrimitiveComponentWrapper::SetRBCollidesWithChannel, "C++: PrimitiveComponentWrapper::SetRBCollidesWithChannel(unsigned char, unsigned long) --> void", "Channel"_a, "bNewCollides"_a);
		cl.def("SetBlockRigidBody2", (void (PrimitiveComponentWrapper::*)(unsigned long)) & PrimitiveComponentWrapper::SetBlockRigidBody2, "C++: PrimitiveComponentWrapper::SetBlockRigidBody2(unsigned long) --> void", "bNewBlockRigidBody"_a);
		cl.def("RetardRBLinearVelocity", (void (PrimitiveComponentWrapper::*)(struct Vector&, float)) & PrimitiveComponentWrapper::RetardRBLinearVelocity, "C++: PrimitiveComponentWrapper::RetardRBLinearVelocity(struct Vector &, float) --> void", "RetardDir"_a, "VelScale"_a);
		cl.def("SetRBAngularVelocity", (void (PrimitiveComponentWrapper::*)(struct Vector&, unsigned long)) & PrimitiveComponentWrapper::SetRBAngularVelocity, "C++: PrimitiveComponentWrapper::SetRBAngularVelocity(struct Vector &, unsigned long) --> void", "NewAngVel"_a, "bAddToCurrent"_a);
		cl.def("SetRBLinearVelocity", (void (PrimitiveComponentWrapper::*)(struct Vector&, unsigned long)) & PrimitiveComponentWrapper::SetRBLinearVelocity, "C++: PrimitiveComponentWrapper::SetRBLinearVelocity(struct Vector &, unsigned long) --> void", "NewVel"_a, "bAddToCurrent"_a);
		cl.def("AddRadialForce", (void (PrimitiveComponentWrapper::*)(struct Vector&, float, float, unsigned char)) & PrimitiveComponentWrapper::AddRadialForce, "C++: PrimitiveComponentWrapper::AddRadialForce(struct Vector &, float, float, unsigned char) --> void", "Origin"_a, "Radius"_a, "Strength"_a, "Falloff"_a);
		cl.def("AddRadialImpulse", (void (PrimitiveComponentWrapper::*)(struct Vector&, float, float, unsigned char, unsigned long)) & PrimitiveComponentWrapper::AddRadialImpulse, "C++: PrimitiveComponentWrapper::AddRadialImpulse(struct Vector &, float, float, unsigned char, unsigned long) --> void", "Origin"_a, "Radius"_a, "Strength"_a, "Falloff"_a, "bVelChange"_a);
	}
	{ // ReplayDirectorWrapper file:bakkesmod/wrappers/GameEvent/ReplayDirectorWrapper.h line:16
		pybind11::class_<ReplayDirectorWrapper, std::shared_ptr<ReplayDirectorWrapper>, ActorWrapper> cl(M, "ReplayDirectorWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](ReplayDirectorWrapper const& o) { return new ReplayDirectorWrapper(o); }));
		cl.def("assign", (class ReplayDirectorWrapper& (ReplayDirectorWrapper::*)(class ReplayDirectorWrapper))& ReplayDirectorWrapper::operator=, "C++: ReplayDirectorWrapper::operator=(class ReplayDirectorWrapper) --> class ReplayDirectorWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetSlomoPreScoreTime", (float (ReplayDirectorWrapper::*)())& ReplayDirectorWrapper::GetSlomoPreScoreTime, "C++: ReplayDirectorWrapper::GetSlomoPreScoreTime() --> float");
		cl.def("SetSlomoPreScoreTime", (void (ReplayDirectorWrapper::*)(float))& ReplayDirectorWrapper::SetSlomoPreScoreTime, "C++: ReplayDirectorWrapper::SetSlomoPreScoreTime(float) --> void", "newSlomoPreScoreTime"_a);
		cl.def("GetSlomoPostScoreTime", (float (ReplayDirectorWrapper::*)())& ReplayDirectorWrapper::GetSlomoPostScoreTime, "C++: ReplayDirectorWrapper::GetSlomoPostScoreTime() --> float");
		cl.def("SetSlomoPostScoreTime", (void (ReplayDirectorWrapper::*)(float))& ReplayDirectorWrapper::SetSlomoPostScoreTime, "C++: ReplayDirectorWrapper::SetSlomoPostScoreTime(float) --> void", "newSlomoPostScoreTime"_a);
		cl.def("GetSlomoDefendTime", (float (ReplayDirectorWrapper::*)())& ReplayDirectorWrapper::GetSlomoDefendTime, "C++: ReplayDirectorWrapper::GetSlomoDefendTime() --> float");
		cl.def("SetSlomoDefendTime", (void (ReplayDirectorWrapper::*)(float))& ReplayDirectorWrapper::SetSlomoDefendTime, "C++: ReplayDirectorWrapper::SetSlomoDefendTime(float) --> void", "newSlomoDefendTime"_a);
		cl.def("GetSlomoDefendDistance", (float (ReplayDirectorWrapper::*)())& ReplayDirectorWrapper::GetSlomoDefendDistance, "C++: ReplayDirectorWrapper::GetSlomoDefendDistance() --> float");
		cl.def("SetSlomoDefendDistance", (void (ReplayDirectorWrapper::*)(float))& ReplayDirectorWrapper::SetSlomoDefendDistance, "C++: ReplayDirectorWrapper::SetSlomoDefendDistance(float) --> void", "newSlomoDefendDistance"_a);
		cl.def("GetSlomoTimeDilation", (float (ReplayDirectorWrapper::*)())& ReplayDirectorWrapper::GetSlomoTimeDilation, "C++: ReplayDirectorWrapper::GetSlomoTimeDilation() --> float");
		cl.def("SetSlomoTimeDilation", (void (ReplayDirectorWrapper::*)(float))& ReplayDirectorWrapper::SetSlomoTimeDilation, "C++: ReplayDirectorWrapper::SetSlomoTimeDilation(float) --> void", "newSlomoTimeDilation"_a);
		cl.def("GetMinReplayTime", (float (ReplayDirectorWrapper::*)())& ReplayDirectorWrapper::GetMinReplayTime, "C++: ReplayDirectorWrapper::GetMinReplayTime() --> float");
		cl.def("SetMinReplayTime", (void (ReplayDirectorWrapper::*)(float))& ReplayDirectorWrapper::SetMinReplayTime, "C++: ReplayDirectorWrapper::SetMinReplayTime(float) --> void", "newMinReplayTime"_a);
		cl.def("GetMaxReplayTime", (float (ReplayDirectorWrapper::*)())& ReplayDirectorWrapper::GetMaxReplayTime, "C++: ReplayDirectorWrapper::GetMaxReplayTime() --> float");
		cl.def("SetMaxReplayTime", (void (ReplayDirectorWrapper::*)(float))& ReplayDirectorWrapper::SetMaxReplayTime, "C++: ReplayDirectorWrapper::SetMaxReplayTime(float) --> void", "newMaxReplayTime"_a);
		cl.def("GetReplayPadding", (float (ReplayDirectorWrapper::*)())& ReplayDirectorWrapper::GetReplayPadding, "C++: ReplayDirectorWrapper::GetReplayPadding() --> float");
		cl.def("SetReplayPadding", (void (ReplayDirectorWrapper::*)(float))& ReplayDirectorWrapper::SetReplayPadding, "C++: ReplayDirectorWrapper::SetReplayPadding(float) --> void", "newReplayPadding"_a);
		cl.def("GetHighlightReplayDuration", (float (ReplayDirectorWrapper::*)())& ReplayDirectorWrapper::GetHighlightReplayDuration, "C++: ReplayDirectorWrapper::GetHighlightReplayDuration() --> float");
		cl.def("SetHighlightReplayDuration", (void (ReplayDirectorWrapper::*)(float))& ReplayDirectorWrapper::SetHighlightReplayDuration, "C++: ReplayDirectorWrapper::SetHighlightReplayDuration(float) --> void", "newHighlightReplayDuration"_a);
		cl.def("GetTimeBeforeHighlightReplay", (float (ReplayDirectorWrapper::*)())& ReplayDirectorWrapper::GetTimeBeforeHighlightReplay, "C++: ReplayDirectorWrapper::GetTimeBeforeHighlightReplay() --> float");
		cl.def("SetTimeBeforeHighlightReplay", (void (ReplayDirectorWrapper::*)(float))& ReplayDirectorWrapper::SetTimeBeforeHighlightReplay, "C++: ReplayDirectorWrapper::SetTimeBeforeHighlightReplay(float) --> void", "newTimeBeforeHighlightReplay"_a);
		cl.def("GetReplay", (class ReplaySoccarWrapper(ReplayDirectorWrapper::*)())& ReplayDirectorWrapper::GetReplay, "C++: ReplayDirectorWrapper::GetReplay() --> class ReplaySoccarWrapper");
		cl.def("SetReplay", (void (ReplayDirectorWrapper::*)(class ReplaySoccarWrapper))& ReplayDirectorWrapper::SetReplay, "C++: ReplayDirectorWrapper::SetReplay(class ReplaySoccarWrapper) --> void", "newReplay"_a);
		cl.def("GetFocusCar", (class ActorWrapper(ReplayDirectorWrapper::*)())& ReplayDirectorWrapper::GetFocusCar, "C++: ReplayDirectorWrapper::GetFocusCar() --> class ActorWrapper");
		cl.def("SetFocusCar", (void (ReplayDirectorWrapper::*)(class ActorWrapper))& ReplayDirectorWrapper::SetFocusCar, "C++: ReplayDirectorWrapper::SetFocusCar(class ActorWrapper) --> void", "newFocusCar"_a);
		cl.def("GetFocusCarChangeTime", (float (ReplayDirectorWrapper::*)())& ReplayDirectorWrapper::GetFocusCarChangeTime, "C++: ReplayDirectorWrapper::GetFocusCarChangeTime() --> float");
		cl.def("SetFocusCarChangeTime", (void (ReplayDirectorWrapper::*)(float))& ReplayDirectorWrapper::SetFocusCarChangeTime, "C++: ReplayDirectorWrapper::SetFocusCarChangeTime(float) --> void", "newFocusCarChangeTime"_a);
		cl.def("GetFocusBall", (class ActorWrapper(ReplayDirectorWrapper::*)())& ReplayDirectorWrapper::GetFocusBall, "C++: ReplayDirectorWrapper::GetFocusBall() --> class ActorWrapper");
		cl.def("SetFocusBall", (void (ReplayDirectorWrapper::*)(class ActorWrapper))& ReplayDirectorWrapper::SetFocusBall, "C++: ReplayDirectorWrapper::SetFocusBall(class ActorWrapper) --> void", "newFocusBall"_a);
		cl.def("GetScoreTime", (float (ReplayDirectorWrapper::*)())& ReplayDirectorWrapper::GetScoreTime, "C++: ReplayDirectorWrapper::GetScoreTime() --> float");
		cl.def("SetScoreTime", (void (ReplayDirectorWrapper::*)(float))& ReplayDirectorWrapper::SetScoreTime, "C++: ReplayDirectorWrapper::SetScoreTime(float) --> void", "newScoreTime"_a);
		cl.def("GetScoreHitIndex", (int (ReplayDirectorWrapper::*)())& ReplayDirectorWrapper::GetScoreHitIndex, "C++: ReplayDirectorWrapper::GetScoreHitIndex() --> int");
		cl.def("SetScoreHitIndex", (void (ReplayDirectorWrapper::*)(int))& ReplayDirectorWrapper::SetScoreHitIndex, "C++: ReplayDirectorWrapper::SetScoreHitIndex(int) --> void", "newScoreHitIndex"_a);
		cl.def("GetScoredGoal", (class GoalWrapper(ReplayDirectorWrapper::*)())& ReplayDirectorWrapper::GetScoredGoal, "C++: ReplayDirectorWrapper::GetScoredGoal() --> class GoalWrapper");
		cl.def("SetScoredGoal", (void (ReplayDirectorWrapper::*)(class GoalWrapper))& ReplayDirectorWrapper::SetScoredGoal, "C++: ReplayDirectorWrapper::SetScoredGoal(class GoalWrapper) --> void", "newScoredGoal"_a);
		cl.def("GetbSlomo", (unsigned long (ReplayDirectorWrapper::*)())& ReplayDirectorWrapper::GetbSlomo, "C++: ReplayDirectorWrapper::GetbSlomo() --> unsigned long");
		cl.def("SetbSlomo", (void (ReplayDirectorWrapper::*)(unsigned long))& ReplayDirectorWrapper::SetbSlomo, "C++: ReplayDirectorWrapper::SetbSlomo(unsigned long) --> void", "newbSlomo"_a);
		cl.def("GetbSlomoForDefender", (unsigned long (ReplayDirectorWrapper::*)())& ReplayDirectorWrapper::GetbSlomoForDefender, "C++: ReplayDirectorWrapper::GetbSlomoForDefender() --> unsigned long");
		cl.def("SetbSlomoForDefender", (void (ReplayDirectorWrapper::*)(unsigned long))& ReplayDirectorWrapper::SetbSlomoForDefender, "C++: ReplayDirectorWrapper::SetbSlomoForDefender(unsigned long) --> void", "newbSlomoForDefender"_a);
		cl.def("GetbAutoSave", (unsigned long (ReplayDirectorWrapper::*)())& ReplayDirectorWrapper::GetbAutoSave, "C++: ReplayDirectorWrapper::GetbAutoSave() --> unsigned long");
		cl.def("SetbAutoSave", (void (ReplayDirectorWrapper::*)(unsigned long))& ReplayDirectorWrapper::SetbAutoSave, "C++: ReplayDirectorWrapper::SetbAutoSave(unsigned long) --> void", "newbAutoSave"_a);
		cl.def("GetFocusHitIndex", (int (ReplayDirectorWrapper::*)())& ReplayDirectorWrapper::GetFocusHitIndex, "C++: ReplayDirectorWrapper::GetFocusHitIndex() --> int");
		cl.def("SetFocusHitIndex", (void (ReplayDirectorWrapper::*)(int))& ReplayDirectorWrapper::SetFocusHitIndex, "C++: ReplayDirectorWrapper::SetFocusHitIndex(int) --> void", "newFocusHitIndex"_a);
		cl.def("GetFocusCarIdx", (int (ReplayDirectorWrapper::*)())& ReplayDirectorWrapper::GetFocusCarIdx, "C++: ReplayDirectorWrapper::GetFocusCarIdx() --> int");
		cl.def("SetFocusCarIdx", (void (ReplayDirectorWrapper::*)(int))& ReplayDirectorWrapper::SetFocusCarIdx, "C++: ReplayDirectorWrapper::SetFocusCarIdx(int) --> void", "newFocusCarIdx"_a);
		cl.def("GetReplayStartGameTime", (float (ReplayDirectorWrapper::*)())& ReplayDirectorWrapper::GetReplayStartGameTime, "C++: ReplayDirectorWrapper::GetReplayStartGameTime() --> float");
		cl.def("SetReplayStartGameTime", (void (ReplayDirectorWrapper::*)(float))& ReplayDirectorWrapper::SetReplayStartGameTime, "C++: ReplayDirectorWrapper::SetReplayStartGameTime(float) --> void", "newReplayStartGameTime"_a);
		cl.def("GetBallSpawnTime", (float (ReplayDirectorWrapper::*)())& ReplayDirectorWrapper::GetBallSpawnTime, "C++: ReplayDirectorWrapper::GetBallSpawnTime() --> float");
		cl.def("SetBallSpawnTime", (void (ReplayDirectorWrapper::*)(float))& ReplayDirectorWrapper::SetBallSpawnTime, "C++: ReplayDirectorWrapper::SetBallSpawnTime(float) --> void", "newBallSpawnTime"_a);
		cl.def("GetSoccarGame", (class ServerWrapper(ReplayDirectorWrapper::*)())& ReplayDirectorWrapper::GetSoccarGame, "C++: ReplayDirectorWrapper::GetSoccarGame() --> class ServerWrapper");
		cl.def("SetSoccarGame", (void (ReplayDirectorWrapper::*)(class ServerWrapper))& ReplayDirectorWrapper::SetSoccarGame, "C++: ReplayDirectorWrapper::SetSoccarGame(class ServerWrapper) --> void", "newSoccarGame"_a);
		cl.def("GetScoredOnTeam", (unsigned char (ReplayDirectorWrapper::*)())& ReplayDirectorWrapper::GetScoredOnTeam, "C++: ReplayDirectorWrapper::GetScoredOnTeam() --> unsigned char");
		cl.def("SetScoredOnTeam", (void (ReplayDirectorWrapper::*)(unsigned char))& ReplayDirectorWrapper::SetScoredOnTeam, "C++: ReplayDirectorWrapper::SetScoredOnTeam(unsigned char) --> void", "newScoredOnTeam"_a);
		cl.def("GetForceCutToFocusActors", (int (ReplayDirectorWrapper::*)())& ReplayDirectorWrapper::GetForceCutToFocusActors, "C++: ReplayDirectorWrapper::GetForceCutToFocusActors() --> int");
		cl.def("SetForceCutToFocusActors", (void (ReplayDirectorWrapper::*)(int))& ReplayDirectorWrapper::SetForceCutToFocusActors, "C++: ReplayDirectorWrapper::SetForceCutToFocusActors(int) --> void", "newForceCutToFocusActors"_a);
		cl.def("HandleReplayFinished", (void (ReplayDirectorWrapper::*)(class ReplayWrapper))& ReplayDirectorWrapper::HandleReplayFinished, "C++: ReplayDirectorWrapper::HandleReplayFinished(class ReplayWrapper) --> void", "InReplay"_a);
		cl.def("ShouldSlomo", (bool (ReplayDirectorWrapper::*)())& ReplayDirectorWrapper::ShouldSlomo, "C++: ReplayDirectorWrapper::ShouldSlomo() --> bool");
		cl.def("UpdateSlomo", (void (ReplayDirectorWrapper::*)())& ReplayDirectorWrapper::UpdateSlomo, "C++: ReplayDirectorWrapper::UpdateSlomo() --> void");
		cl.def("UpdateFocusActors", (void (ReplayDirectorWrapper::*)())& ReplayDirectorWrapper::UpdateFocusActors, "C++: ReplayDirectorWrapper::UpdateFocusActors() --> void");
		cl.def("PlayRandomHighlight", (void (ReplayDirectorWrapper::*)())& ReplayDirectorWrapper::PlayRandomHighlight, "C++: ReplayDirectorWrapper::PlayRandomHighlight() --> void");
		cl.def("GetNextHighlightFrame", (int (ReplayDirectorWrapper::*)())& ReplayDirectorWrapper::GetNextHighlightFrame, "C++: ReplayDirectorWrapper::GetNextHighlightFrame() --> int");
		cl.def("SetAutoSave", (void (ReplayDirectorWrapper::*)())& ReplayDirectorWrapper::SetAutoSave, "C++: ReplayDirectorWrapper::SetAutoSave() --> void");
		cl.def("SaveUserKeyframe", (void (ReplayDirectorWrapper::*)())& ReplayDirectorWrapper::SaveUserKeyframe, "C++: ReplayDirectorWrapper::SaveUserKeyframe() --> void");
		cl.def("BuildFocusCars", (void (ReplayDirectorWrapper::*)())& ReplayDirectorWrapper::BuildFocusCars, "C++: ReplayDirectorWrapper::BuildFocusCars() --> void");
		cl.def("SetSlomo2", (void (ReplayDirectorWrapper::*)(unsigned long))& ReplayDirectorWrapper::SetSlomo2, "C++: ReplayDirectorWrapper::SetSlomo2(unsigned long) --> void", "bNewSlomo"_a);
		cl.def("eventTick", (void (ReplayDirectorWrapper::*)(float))& ReplayDirectorWrapper::eventTick, "C++: ReplayDirectorWrapper::eventTick(float) --> void", "DeltaTime"_a);
		cl.def("eventDestroyed", (void (ReplayDirectorWrapper::*)())& ReplayDirectorWrapper::eventDestroyed, "C++: ReplayDirectorWrapper::eventDestroyed() --> void");
		cl.def("GetReplayTimeSeconds", (float (ReplayDirectorWrapper::*)())& ReplayDirectorWrapper::GetReplayTimeSeconds, "C++: ReplayDirectorWrapper::GetReplayTimeSeconds() --> float");
		cl.def("SetFocusActors", (void (ReplayDirectorWrapper::*)(class ActorWrapper, class ActorWrapper))& ReplayDirectorWrapper::SetFocusActors, "C++: ReplayDirectorWrapper::SetFocusActors(class ActorWrapper, class ActorWrapper) --> void", "NewCar"_a, "NewBall"_a);
		cl.def("GetReplayStartTime", (float (ReplayDirectorWrapper::*)())& ReplayDirectorWrapper::GetReplayStartTime, "C++: ReplayDirectorWrapper::GetReplayStartTime() --> float");
		cl.def("SetSlomoForDefender", (void (ReplayDirectorWrapper::*)(class BallWrapper, int))& ReplayDirectorWrapper::SetSlomoForDefender, "C++: ReplayDirectorWrapper::SetSlomoForDefender(class BallWrapper, int) --> void", "Ball"_a, "DefendingTeam"_a);
		cl.def("OnScoreDataChanged", (void (ReplayDirectorWrapper::*)())& ReplayDirectorWrapper::OnScoreDataChanged, "C++: ReplayDirectorWrapper::OnScoreDataChanged() --> void");
		cl.def("HandleScoreUpdated", (void (ReplayDirectorWrapper::*)(class TeamWrapper))& ReplayDirectorWrapper::HandleScoreUpdated, "C++: ReplayDirectorWrapper::HandleScoreUpdated(class TeamWrapper) --> void", "Team"_a);
		cl.def("HandleAllTeamsCreated", (void (ReplayDirectorWrapper::*)(class TeamGameEventWrapper))& ReplayDirectorWrapper::HandleAllTeamsCreated, "C++: ReplayDirectorWrapper::HandleAllTeamsCreated(class TeamGameEventWrapper) --> void", "TeamGame"_a);
		cl.def("RecordPlayers", (void (ReplayDirectorWrapper::*)())& ReplayDirectorWrapper::RecordPlayers, "C++: ReplayDirectorWrapper::RecordPlayers() --> void");
		cl.def("HandleGameStateChanged", (void (ReplayDirectorWrapper::*)(class GameEventWrapper))& ReplayDirectorWrapper::HandleGameStateChanged, "C++: ReplayDirectorWrapper::HandleGameStateChanged(class GameEventWrapper) --> void", "G"_a);
		cl.def("OnSoccarGameSet", (void (ReplayDirectorWrapper::*)())& ReplayDirectorWrapper::OnSoccarGameSet, "C++: ReplayDirectorWrapper::OnSoccarGameSet() --> void");
		cl.def("SetGameEvent", (void (ReplayDirectorWrapper::*)(class ServerWrapper))& ReplayDirectorWrapper::SetGameEvent, "C++: ReplayDirectorWrapper::SetGameEvent(class ServerWrapper) --> void", "InGameEvent"_a);
		cl.def("EventFocusCarChanged", (void (ReplayDirectorWrapper::*)(class ActorWrapper))& ReplayDirectorWrapper::EventFocusCarChanged, "C++: ReplayDirectorWrapper::EventFocusCarChanged(class ActorWrapper) --> void", "NewFocusCar"_a);
		cl.def("EventAutoSaveChanged", (void (ReplayDirectorWrapper::*)(class ReplayDirectorWrapper))& ReplayDirectorWrapper::EventAutoSaveChanged, "C++: ReplayDirectorWrapper::EventAutoSaveChanged(class ReplayDirectorWrapper) --> void", "Director"_a);
		cl.def("EventScoreDataChanged", (void (ReplayDirectorWrapper::*)(class ReplayDirectorWrapper))& ReplayDirectorWrapper::EventScoreDataChanged, "C++: ReplayDirectorWrapper::EventScoreDataChanged(class ReplayDirectorWrapper) --> void", "Director"_a);
		cl.def("EventReplayFinished", (void (ReplayDirectorWrapper::*)(class ReplayDirectorWrapper))& ReplayDirectorWrapper::EventReplayFinished, "C++: ReplayDirectorWrapper::EventReplayFinished(class ReplayDirectorWrapper) --> void", "Director"_a);
	}
	{ // TutorialWrapper file:bakkesmod/wrappers/GameEvent/TutorialWrapper.h line:14
		pybind11::class_<TutorialWrapper, std::shared_ptr<TutorialWrapper>, ServerWrapper> cl(M, "TutorialWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](TutorialWrapper const& o) { return new TutorialWrapper(o); }));
		cl.def("assign", (class TutorialWrapper& (TutorialWrapper::*)(class TutorialWrapper)) & TutorialWrapper::operator=, "C++: TutorialWrapper::operator=(class TutorialWrapper) --> class TutorialWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("Redo", (void (TutorialWrapper::*)()) & TutorialWrapper::Redo, "C++: TutorialWrapper::Redo() --> void");
		cl.def("GetCarSpawnLocation", (struct Vector(TutorialWrapper::*)()) & TutorialWrapper::GetCarSpawnLocation, "C++: TutorialWrapper::GetCarSpawnLocation() --> struct Vector");
		cl.def("SetCarSpawnLocation", (void (TutorialWrapper::*)(struct Vector)) & TutorialWrapper::SetCarSpawnLocation, "C++: TutorialWrapper::SetCarSpawnLocation(struct Vector) --> void", "v"_a);
		cl.def("GetCarSpawnRotation", (struct Rotator(TutorialWrapper::*)()) & TutorialWrapper::GetCarSpawnRotation, "C++: TutorialWrapper::GetCarSpawnRotation() --> struct Rotator");
		cl.def("SetCarSpawnRotation", (void (TutorialWrapper::*)(struct Rotator)) & TutorialWrapper::SetCarSpawnRotation, "C++: TutorialWrapper::SetCarSpawnRotation(struct Rotator) --> void", "v"_a);
		cl.def("GetGameCar", (class CarWrapper(TutorialWrapper::*)()) & TutorialWrapper::GetGameCar, "C++: TutorialWrapper::GetGameCar() --> class CarWrapper");
		cl.def("IsBallMovingTowardsGoal", (bool (TutorialWrapper::*)(int, class BallWrapper)) & TutorialWrapper::IsBallMovingTowardsGoal, "C++: TutorialWrapper::IsBallMovingTowardsGoal(int, class BallWrapper) --> bool", "goalNo"_a, "bw"_a);
		cl.def("IsInGoal", (bool (TutorialWrapper::*)(struct Vector)) & TutorialWrapper::IsInGoal, "C++: TutorialWrapper::IsInGoal(struct Vector) --> bool", "vec"_a);
		cl.def("DisableGoalReset", (void (TutorialWrapper::*)()) & TutorialWrapper::DisableGoalReset, "C++: TutorialWrapper::DisableGoalReset() --> void");
		cl.def("EnableGoalReset", (void (TutorialWrapper::*)()) & TutorialWrapper::EnableGoalReset, "C++: TutorialWrapper::EnableGoalReset() --> void");
		cl.def("GenerateShot", (struct Vector(TutorialWrapper::*)(struct Vector, struct Vector, float)) & TutorialWrapper::GenerateShot, "C++: TutorialWrapper::GenerateShot(struct Vector, struct Vector, float) --> struct Vector", "startPos"_a, "destination"_a, "speed"_a);
		cl.def("GenerateGoalAimLocation", (struct Vector(TutorialWrapper::*)(int, struct Vector)) & TutorialWrapper::GenerateGoalAimLocation, "C++: TutorialWrapper::GenerateGoalAimLocation(int, struct Vector) --> struct Vector", "goalNumber"_a, "currentBallLocation"_a);
		cl.def("GetGoalExtent", [](TutorialWrapper& o) -> Vector { return o.GetGoalExtent(); }, "");
		cl.def("GetGoalExtent", (struct Vector(TutorialWrapper::*)(int)) & TutorialWrapper::GetGoalExtent, "C++: TutorialWrapper::GetGoalExtent(int) --> struct Vector", "goalNumber"_a = 0);
		cl.def("GetGoalLocation", [](TutorialWrapper& o) -> Vector { return o.GetGoalLocation(); }, "");
		cl.def("GetGoalLocation", (struct Vector(TutorialWrapper::*)(int)) & TutorialWrapper::GetGoalLocation, "C++: TutorialWrapper::GetGoalLocation(int) --> struct Vector", "goalNumber"_a = 0);
		cl.def("GetTotalFieldExtent", (struct Vector(TutorialWrapper::*)()) & TutorialWrapper::GetTotalFieldExtent, "C++: TutorialWrapper::GetTotalFieldExtent() --> struct Vector");
		cl.def("SetTotalFieldExtent", (void (TutorialWrapper::*)(struct Vector)) & TutorialWrapper::SetTotalFieldExtent, "C++: TutorialWrapper::SetTotalFieldExtent(struct Vector) --> void", "newTotalFieldExtent"_a);
		cl.def("GetTeamNum", (int (TutorialWrapper::*)()) & TutorialWrapper::GetTeamNum, "C++: TutorialWrapper::GetTeamNum() --> int");
		cl.def("SetTeamNum", (void (TutorialWrapper::*)(int)) & TutorialWrapper::SetTeamNum, "C++: TutorialWrapper::SetTeamNum(int) --> void", "newTeamNum"_a);
		cl.def("GetBallGoalNum", (int (TutorialWrapper::*)()) & TutorialWrapper::GetBallGoalNum, "C++: TutorialWrapper::GetBallGoalNum() --> int");
		cl.def("SetBallGoalNum", (void (TutorialWrapper::*)(int)) & TutorialWrapper::SetBallGoalNum, "C++: TutorialWrapper::SetBallGoalNum(int) --> void", "newBallGoalNum"_a);
		cl.def("GetbOnlyScoreInBallGoalNum", (unsigned long (TutorialWrapper::*)()) & TutorialWrapper::GetbOnlyScoreInBallGoalNum, "C++: TutorialWrapper::GetbOnlyScoreInBallGoalNum() --> unsigned long");
		cl.def("SetbOnlyScoreInBallGoalNum", (void (TutorialWrapper::*)(unsigned long)) & TutorialWrapper::SetbOnlyScoreInBallGoalNum, "C++: TutorialWrapper::SetbOnlyScoreInBallGoalNum(unsigned long) --> void", "newbOnlyScoreInBallGoalNum"_a);
		cl.def("GetbRedoRound", (unsigned long (TutorialWrapper::*)()) & TutorialWrapper::GetbRedoRound, "C++: TutorialWrapper::GetbRedoRound() --> unsigned long");
		cl.def("SetbRedoRound", (void (TutorialWrapper::*)(unsigned long)) & TutorialWrapper::SetbRedoRound, "C++: TutorialWrapper::SetbRedoRound(unsigned long) --> void", "newbRedoRound"_a);
		cl.def("GetbAllowSuperBoost", (unsigned long (TutorialWrapper::*)()) & TutorialWrapper::GetbAllowSuperBoost, "C++: TutorialWrapper::GetbAllowSuperBoost() --> unsigned long");
		cl.def("SetbAllowSuperBoost", (void (TutorialWrapper::*)(unsigned long)) & TutorialWrapper::SetbAllowSuperBoost, "C++: TutorialWrapper::SetbAllowSuperBoost(unsigned long) --> void", "newbAllowSuperBoost"_a);
		cl.def("GetbDisplayedRedoPenaltyMessage", (unsigned long (TutorialWrapper::*)()) & TutorialWrapper::GetbDisplayedRedoPenaltyMessage, "C++: TutorialWrapper::GetbDisplayedRedoPenaltyMessage() --> unsigned long");
		cl.def("SetbDisplayedRedoPenaltyMessage", (void (TutorialWrapper::*)(unsigned long)) & TutorialWrapper::SetbDisplayedRedoPenaltyMessage, "C++: TutorialWrapper::SetbDisplayedRedoPenaltyMessage(unsigned long) --> void", "newbDisplayedRedoPenaltyMessage"_a);
		cl.def("GetbShowBoostMeter", (unsigned long (TutorialWrapper::*)()) & TutorialWrapper::GetbShowBoostMeter, "C++: TutorialWrapper::GetbShowBoostMeter() --> unsigned long");
		cl.def("SetbShowBoostMeter", (void (TutorialWrapper::*)(unsigned long)) & TutorialWrapper::SetbShowBoostMeter, "C++: TutorialWrapper::SetbShowBoostMeter(unsigned long) --> void", "newbShowBoostMeter"_a);
		cl.def("GetDifficulty", (unsigned char (TutorialWrapper::*)()) & TutorialWrapper::GetDifficulty, "C++: TutorialWrapper::GetDifficulty() --> unsigned char");
		cl.def("SetDifficulty", (void (TutorialWrapper::*)(unsigned char)) & TutorialWrapper::SetDifficulty, "C++: TutorialWrapper::SetDifficulty(unsigned char) --> void", "newDifficulty"_a);
		cl.def("GetDebugRotationType", (unsigned char (TutorialWrapper::*)()) & TutorialWrapper::GetDebugRotationType, "C++: TutorialWrapper::GetDebugRotationType() --> unsigned char");
		cl.def("SetDebugRotationType", (void (TutorialWrapper::*)(unsigned char)) & TutorialWrapper::SetDebugRotationType, "C++: TutorialWrapper::SetDebugRotationType(unsigned char) --> void", "newDebugRotationType"_a);
		cl.def("GetGoalDepth", (float (TutorialWrapper::*)()) & TutorialWrapper::GetGoalDepth, "C++: TutorialWrapper::GetGoalDepth() --> float");
		cl.def("SetGoalDepth", (void (TutorialWrapper::*)(float)) & TutorialWrapper::SetGoalDepth, "C++: TutorialWrapper::SetGoalDepth(float) --> void", "newGoalDepth"_a);
		cl.def("GetGameEventRounds", (int (TutorialWrapper::*)()) & TutorialWrapper::GetGameEventRounds, "C++: TutorialWrapper::GetGameEventRounds() --> int");
		cl.def("SetGameEventRounds", (void (TutorialWrapper::*)(int)) & TutorialWrapper::SetGameEventRounds, "C++: TutorialWrapper::SetGameEventRounds(int) --> void", "newGameEventRounds"_a);
		cl.def("GetEventStartTime", (float (TutorialWrapper::*)()) & TutorialWrapper::GetEventStartTime, "C++: TutorialWrapper::GetEventStartTime() --> float");
		cl.def("SetEventStartTime", (void (TutorialWrapper::*)(float)) & TutorialWrapper::SetEventStartTime, "C++: TutorialWrapper::SetEventStartTime(float) --> void", "newEventStartTime"_a);
		cl.def("GetBallInitialVelocity", (struct Vector(TutorialWrapper::*)()) & TutorialWrapper::GetBallInitialVelocity, "C++: TutorialWrapper::GetBallInitialVelocity() --> struct Vector");
		cl.def("SetBallInitialVelocity", (void (TutorialWrapper::*)(struct Vector)) & TutorialWrapper::SetBallInitialVelocity, "C++: TutorialWrapper::SetBallInitialVelocity(struct Vector) --> void", "newBallInitialVelocity"_a);
		cl.def("GetSpawnIndexTypeOverride", (int (TutorialWrapper::*)()) & TutorialWrapper::GetSpawnIndexTypeOverride, "C++: TutorialWrapper::GetSpawnIndexTypeOverride() --> int");
		cl.def("SetSpawnIndexTypeOverride", (void (TutorialWrapper::*)(int)) & TutorialWrapper::SetSpawnIndexTypeOverride, "C++: TutorialWrapper::SetSpawnIndexTypeOverride(int) --> void", "newSpawnIndexTypeOverride"_a);
		cl.def("GetWaveIndex", (int (TutorialWrapper::*)()) & TutorialWrapper::GetWaveIndex, "C++: TutorialWrapper::GetWaveIndex() --> int");
		cl.def("SetWaveIndex", (void (TutorialWrapper::*)(int)) & TutorialWrapper::SetWaveIndex, "C++: TutorialWrapper::SetWaveIndex(int) --> void", "newWaveIndex"_a);
		cl.def("GetWaveSpawnCount", (int (TutorialWrapper::*)()) & TutorialWrapper::GetWaveSpawnCount, "C++: TutorialWrapper::GetWaveSpawnCount() --> int");
		cl.def("SetWaveSpawnCount", (void (TutorialWrapper::*)(int)) & TutorialWrapper::SetWaveSpawnCount, "C++: TutorialWrapper::SetWaveSpawnCount(int) --> void", "newWaveSpawnCount"_a);
		cl.def("GetRandomSpawnIndex", (int (TutorialWrapper::*)()) & TutorialWrapper::GetRandomSpawnIndex, "C++: TutorialWrapper::GetRandomSpawnIndex() --> int");
		cl.def("SetRandomSpawnIndex", (void (TutorialWrapper::*)(int)) & TutorialWrapper::SetRandomSpawnIndex, "C++: TutorialWrapper::SetRandomSpawnIndex(int) --> void", "newRandomSpawnIndex"_a);
		cl.def("GetStartMessageArchetype", (class UnrealStringWrapper(TutorialWrapper::*)()) & TutorialWrapper::GetStartMessageArchetype, "C++: TutorialWrapper::GetStartMessageArchetype() --> class UnrealStringWrapper");
		cl.def("GetBallSpawnLocation", (struct Vector(TutorialWrapper::*)()) & TutorialWrapper::GetBallSpawnLocation, "C++: TutorialWrapper::GetBallSpawnLocation() --> struct Vector");
		cl.def("SetBallSpawnLocation", (void (TutorialWrapper::*)(struct Vector)) & TutorialWrapper::SetBallSpawnLocation, "C++: TutorialWrapper::SetBallSpawnLocation(struct Vector) --> void", "newBallSpawnLocation"_a);
		cl.def("GetPointsScoredThisRound", (int (TutorialWrapper::*)()) & TutorialWrapper::GetPointsScoredThisRound, "C++: TutorialWrapper::GetPointsScoredThisRound() --> int");
		cl.def("SetPointsScoredThisRound", (void (TutorialWrapper::*)(int)) & TutorialWrapper::SetPointsScoredThisRound, "C++: TutorialWrapper::SetPointsScoredThisRound(int) --> void", "newPointsScoredThisRound"_a);
		cl.def("GetBallSpawnCount", (int (TutorialWrapper::*)()) & TutorialWrapper::GetBallSpawnCount, "C++: TutorialWrapper::GetBallSpawnCount() --> int");
		cl.def("SetBallSpawnCount", (void (TutorialWrapper::*)(int)) & TutorialWrapper::SetBallSpawnCount, "C++: TutorialWrapper::SetBallSpawnCount(int) --> void", "newBallSpawnCount"_a);
		cl.def("GetBallBounceScale", (float (TutorialWrapper::*)()) & TutorialWrapper::GetBallBounceScale, "C++: TutorialWrapper::GetBallBounceScale() --> float");
		cl.def("SetBallBounceScale", (void (TutorialWrapper::*)(float)) & TutorialWrapper::SetBallBounceScale, "C++: TutorialWrapper::SetBallBounceScale(float) --> void", "newBallBounceScale"_a);
		cl.def("GetCurrentDebugStepX", (int (TutorialWrapper::*)()) & TutorialWrapper::GetCurrentDebugStepX, "C++: TutorialWrapper::GetCurrentDebugStepX() --> int");
		cl.def("SetCurrentDebugStepX", (void (TutorialWrapper::*)(int)) & TutorialWrapper::SetCurrentDebugStepX, "C++: TutorialWrapper::SetCurrentDebugStepX(int) --> void", "newCurrentDebugStepX"_a);
		cl.def("GetCurrentDebugStepY", (int (TutorialWrapper::*)()) & TutorialWrapper::GetCurrentDebugStepY, "C++: TutorialWrapper::GetCurrentDebugStepY() --> int");
		cl.def("SetCurrentDebugStepY", (void (TutorialWrapper::*)(int)) & TutorialWrapper::SetCurrentDebugStepY, "C++: TutorialWrapper::SetCurrentDebugStepY(int) --> void", "newCurrentDebugStepY"_a);
		cl.def("GetCurrentDebugStepZ", (int (TutorialWrapper::*)()) & TutorialWrapper::GetCurrentDebugStepZ, "C++: TutorialWrapper::GetCurrentDebugStepZ() --> int");
		cl.def("SetCurrentDebugStepZ", (void (TutorialWrapper::*)(int)) & TutorialWrapper::SetCurrentDebugStepZ, "C++: TutorialWrapper::SetCurrentDebugStepZ(int) --> void", "newCurrentDebugStepZ"_a);
		cl.def("GetRedoCount", (int (TutorialWrapper::*)()) & TutorialWrapper::GetRedoCount, "C++: TutorialWrapper::GetRedoCount() --> int");
		cl.def("SetRedoCount", (void (TutorialWrapper::*)(int)) & TutorialWrapper::SetRedoCount, "C++: TutorialWrapper::SetRedoCount(int) --> void", "newRedoCount"_a);
		cl.def("GetRedoTotal", (int (TutorialWrapper::*)()) & TutorialWrapper::GetRedoTotal, "C++: TutorialWrapper::GetRedoTotal() --> int");
		cl.def("SetRedoTotal", (void (TutorialWrapper::*)(int)) & TutorialWrapper::SetRedoTotal, "C++: TutorialWrapper::SetRedoTotal(int) --> void", "newRedoTotal"_a);
		cl.def("InitIntro", (void (TutorialWrapper::*)()) & TutorialWrapper::InitIntro, "C++: TutorialWrapper::InitIntro() --> void");
		cl.def("OnLoadingMovieClosed", (void (TutorialWrapper::*)()) & TutorialWrapper::OnLoadingMovieClosed, "C++: TutorialWrapper::OnLoadingMovieClosed() --> void");
		cl.def("StartTimers", (void (TutorialWrapper::*)()) & TutorialWrapper::StartTimers, "C++: TutorialWrapper::StartTimers() --> void");
		cl.def("UpdateMVP", (void (TutorialWrapper::*)()) & TutorialWrapper::UpdateMVP, "C++: TutorialWrapper::UpdateMVP() --> void");
		cl.def("AllowDynamicCrowd", (bool (TutorialWrapper::*)()) & TutorialWrapper::AllowDynamicCrowd, "C++: TutorialWrapper::AllowDynamicCrowd() --> bool");
		cl.def("SetTutorialTip", (void (TutorialWrapper::*)(std::string)) & TutorialWrapper::SetTutorialTip, "C++: TutorialWrapper::SetTutorialTip(std::string) --> void", "NewTip"_a);
		cl.def("SetShowBoostMeter", (void (TutorialWrapper::*)(unsigned long)) & TutorialWrapper::SetShowBoostMeter, "C++: TutorialWrapper::SetShowBoostMeter(unsigned long) --> void", "bShow"_a);
		cl.def("GetStepLoc", (float (TutorialWrapper::*)(int, float, unsigned long, int*)) & TutorialWrapper::GetStepLoc, "C++: TutorialWrapper::GetStepLoc(int, float, unsigned long, int *) --> float", "Steps"_a, "TotalDist"_a, "bIncrement"_a, "Out_CurrentStep"_a);
		cl.def("GetDebugLocationInExtent", (struct Vector(TutorialWrapper::*)(struct Vector&)) & TutorialWrapper::GetDebugLocationInExtent, "C++: TutorialWrapper::GetDebugLocationInExtent(struct Vector &) --> struct Vector", "Extent"_a);
		cl.def("InitDebugSetup", (void (TutorialWrapper::*)(class CarWrapper)) & TutorialWrapper::InitDebugSetup, "C++: TutorialWrapper::InitDebugSetup(class CarWrapper) --> void", "Car"_a);
		cl.def("SkipTutorial", (void (TutorialWrapper::*)()) & TutorialWrapper::SkipTutorial, "C++: TutorialWrapper::SkipTutorial() --> void");
		cl.def("UpdateBotCount", (void (TutorialWrapper::*)()) & TutorialWrapper::UpdateBotCount, "C++: TutorialWrapper::UpdateBotCount() --> void");
		cl.def("InitMutators", (void (TutorialWrapper::*)()) & TutorialWrapper::InitMutators, "C++: TutorialWrapper::InitMutators() --> void");
		cl.def("IsPrimaryPlayer", (bool (TutorialWrapper::*)(class CarWrapper)) & TutorialWrapper::IsPrimaryPlayer, "C++: TutorialWrapper::IsPrimaryPlayer(class CarWrapper) --> bool", "Car"_a);
		cl.def("CanAwardPoints", (bool (TutorialWrapper::*)()) & TutorialWrapper::CanAwardPoints, "C++: TutorialWrapper::CanAwardPoints() --> bool");
		cl.def("ShowResetRoundMessage", (void (TutorialWrapper::*)()) & TutorialWrapper::ShowResetRoundMessage, "C++: TutorialWrapper::ShowResetRoundMessage() --> void");
		cl.def("Destroyed", (void (TutorialWrapper::*)()) & TutorialWrapper::Destroyed, "C++: TutorialWrapper::Destroyed() --> void");
		cl.def("EndTutorial", (bool (TutorialWrapper::*)()) & TutorialWrapper::EndTutorial, "C++: TutorialWrapper::EndTutorial() --> bool");
		cl.def("CommitRedoRound", (void (TutorialWrapper::*)()) & TutorialWrapper::CommitRedoRound, "C++: TutorialWrapper::CommitRedoRound() --> void");
		cl.def("RedoRound2", (void (TutorialWrapper::*)()) & TutorialWrapper::RedoRound2, "C++: TutorialWrapper::RedoRound2() --> void");
		cl.def("CanRedoRound", (bool (TutorialWrapper::*)()) & TutorialWrapper::CanRedoRound, "C++: TutorialWrapper::CanRedoRound() --> bool");
		cl.def("StartNewRound", (void (TutorialWrapper::*)()) & TutorialWrapper::StartNewRound, "C++: TutorialWrapper::StartNewRound() --> void");
		cl.def("SaveLocalPlayerStats", (void (TutorialWrapper::*)()) & TutorialWrapper::SaveLocalPlayerStats, "C++: TutorialWrapper::SaveLocalPlayerStats() --> void");
		cl.def("GetWinningTeam", (class TeamWrapper(TutorialWrapper::*)()) & TutorialWrapper::GetWinningTeam, "C++: TutorialWrapper::GetWinningTeam() --> class TeamWrapper");
		cl.def("CleanupRoundActors", (void (TutorialWrapper::*)()) & TutorialWrapper::CleanupRoundActors, "C++: TutorialWrapper::CleanupRoundActors() --> void");
		cl.def("CanQueSaveReplay", (bool (TutorialWrapper::*)()) & TutorialWrapper::CanQueSaveReplay, "C++: TutorialWrapper::CanQueSaveReplay() --> bool");
		cl.def("ResetBalls", (void (TutorialWrapper::*)()) & TutorialWrapper::ResetBalls, "C++: TutorialWrapper::ResetBalls() --> void");
		cl.def("GetScore", (int (TutorialWrapper::*)()) & TutorialWrapper::GetScore, "C++: TutorialWrapper::GetScore() --> int");
		cl.def("StartRound", (void (TutorialWrapper::*)()) & TutorialWrapper::StartRound, "C++: TutorialWrapper::StartRound() --> void");
		cl.def("GetGameEventRounds2", (int (TutorialWrapper::*)()) & TutorialWrapper::GetGameEventRounds2, "C++: TutorialWrapper::GetGameEventRounds2() --> int");
		cl.def("GetTotalRounds", (int (TutorialWrapper::*)()) & TutorialWrapper::GetTotalRounds, "C++: TutorialWrapper::GetTotalRounds() --> int");
		cl.def("ResetRoundTime", (void (TutorialWrapper::*)()) & TutorialWrapper::ResetRoundTime, "C++: TutorialWrapper::ResetRoundTime() --> void");
		cl.def("OnPlayerRestarted", (void (TutorialWrapper::*)(class CarWrapper)) & TutorialWrapper::OnPlayerRestarted, "C++: TutorialWrapper::OnPlayerRestarted(class CarWrapper) --> void", "PlayerCar"_a);
		cl.def("GetTrainingType", (unsigned char (TutorialWrapper::*)()) & TutorialWrapper::GetTrainingType, "C++: TutorialWrapper::GetTrainingType() --> unsigned char");
		cl.def("EndGame", (void (TutorialWrapper::*)()) & TutorialWrapper::EndGame, "C++: TutorialWrapper::EndGame() --> void");
		cl.def("GetRandomLocationInExtent", (struct Vector(TutorialWrapper::*)(struct Vector&)) & TutorialWrapper::GetRandomLocationInExtent, "C++: TutorialWrapper::GetRandomLocationInExtent(struct Vector &) --> struct Vector", "Extent"_a);
		cl.def("Chance", (bool (TutorialWrapper::*)(int)) & TutorialWrapper::Chance, "C++: TutorialWrapper::Chance(int) --> bool", "Chances"_a);
		cl.def("GetOppositeTeamNum", (int (TutorialWrapper::*)()) & TutorialWrapper::GetOppositeTeamNum, "C++: TutorialWrapper::GetOppositeTeamNum() --> int");
		cl.def("GetDirectionToGoal", (struct Vector(TutorialWrapper::*)(int)) & TutorialWrapper::GetDirectionToGoal, "C++: TutorialWrapper::GetDirectionToGoal(int) --> struct Vector", "GoalNum"_a);
		cl.def("IsGameEventComplete", (bool (TutorialWrapper::*)()) & TutorialWrapper::IsGameEventComplete, "C++: TutorialWrapper::IsGameEventComplete() --> bool");
		cl.def("ClampPointToExtent", (struct Vector(TutorialWrapper::*)(struct Vector&, struct Vector&, struct Vector&)) & TutorialWrapper::ClampPointToExtent, "C++: TutorialWrapper::ClampPointToExtent(struct Vector &, struct Vector &, struct Vector &) --> struct Vector", "ExtentCenter"_a, "Point"_a, "Extent"_a);
		cl.def("PredictInitialVelocity", (struct Vector(TutorialWrapper::*)(struct Vector&, struct Vector&, float)) & TutorialWrapper::PredictInitialVelocity, "C++: TutorialWrapper::PredictInitialVelocity(struct Vector &, struct Vector &, float) --> struct Vector", "StartLoc"_a, "EndLoc"_a, "Z"_a);
		cl.def("GetGameBall", (class BallWrapper(TutorialWrapper::*)()) & TutorialWrapper::GetGameBall, "C++: TutorialWrapper::GetGameBall() --> class BallWrapper");
		cl.def("GetGamePawn", (class CarWrapper(TutorialWrapper::*)()) & TutorialWrapper::GetGamePawn, "C++: TutorialWrapper::GetGamePawn() --> class CarWrapper");
		cl.def("ResetGameEvent", (void (TutorialWrapper::*)()) & TutorialWrapper::ResetGameEvent, "C++: TutorialWrapper::ResetGameEvent() --> void");
		cl.def("CheckForReset", (void (TutorialWrapper::*)()) & TutorialWrapper::CheckForReset, "C++: TutorialWrapper::CheckForReset() --> void");
		cl.def("GetGoalViewWidth", (float (TutorialWrapper::*)(class GoalWrapper, struct Vector&)) & TutorialWrapper::GetGoalViewWidth, "C++: TutorialWrapper::GetGoalViewWidth(class GoalWrapper, struct Vector &) --> float", "Goal"_a, "ViewerLoc"_a);
		cl.def("IsBallMovingTowardsGoal2", (bool (TutorialWrapper::*)(class GoalWrapper, class BallWrapper, float, float)) & TutorialWrapper::IsBallMovingTowardsGoal2, "C++: TutorialWrapper::IsBallMovingTowardsGoal2(class GoalWrapper, class BallWrapper, float, float) --> bool", "Goal"_a, "Ball"_a, "MinVelocityForDestroy"_a, "InGoalDepth"_a);
		cl.def("SetGoalDepth2", (void (TutorialWrapper::*)()) & TutorialWrapper::SetGoalDepth2, "C++: TutorialWrapper::SetGoalDepth2() --> void");
		cl.def("GetShuffledSpawnIndex", (int (TutorialWrapper::*)()) & TutorialWrapper::GetShuffledSpawnIndex, "C++: TutorialWrapper::GetShuffledSpawnIndex() --> int");
		cl.def("DestroyCannon", (void (TutorialWrapper::*)()) & TutorialWrapper::DestroyCannon, "C++: TutorialWrapper::DestroyCannon() --> void");
		cl.def("SetCannonOrientation", (void (TutorialWrapper::*)(struct Vector&, struct Rotator&)) & TutorialWrapper::SetCannonOrientation, "C++: TutorialWrapper::SetCannonOrientation(struct Vector &, struct Rotator &) --> void", "NewLocation"_a, "NewRotation"_a);
		cl.def("SpawnBall", (class BallWrapper(TutorialWrapper::*)(struct Vector&, unsigned long, unsigned long, std::string)) & TutorialWrapper::SpawnBall, "C++: TutorialWrapper::SpawnBall(struct Vector &, unsigned long, unsigned long, std::string) --> class BallWrapper", "SpawnLoc"_a, "bWake"_a, "bSpawnCannon"_a, "BallArch"_a);
		cl.def("InitBallEffects", (void (TutorialWrapper::*)()) & TutorialWrapper::InitBallEffects, "C++: TutorialWrapper::InitBallEffects() --> void");
		cl.def("InitBallVelocity", (void (TutorialWrapper::*)()) & TutorialWrapper::InitBallVelocity, "C++: TutorialWrapper::InitBallVelocity() --> void");
		cl.def("GetRandomGoalAimLocation", (struct Vector(TutorialWrapper::*)(int, struct Vector&)) & TutorialWrapper::GetRandomGoalAimLocation, "C++: TutorialWrapper::GetRandomGoalAimLocation(int, struct Vector &) --> struct Vector", "InTeamNum"_a, "BallLoc"_a);
		cl.def("GetGoalExtent2", (struct Vector(TutorialWrapper::*)(class GoalWrapper)) & TutorialWrapper::GetGoalExtent2, "C++: TutorialWrapper::GetGoalExtent2(class GoalWrapper) --> struct Vector", "Goal"_a);
		cl.def("SetBallVelocity", (void (TutorialWrapper::*)(struct Vector&, class BallWrapper)) & TutorialWrapper::SetBallVelocity, "C++: TutorialWrapper::SetBallVelocity(struct Vector &, class BallWrapper) --> void", "InitialVelocity"_a, "Ball"_a);
		cl.def("InitGameSetup", (void (TutorialWrapper::*)(class CarWrapper)) & TutorialWrapper::InitGameSetup, "C++: TutorialWrapper::InitGameSetup(class CarWrapper) --> void", "Car"_a);
		cl.def("ShouldAllowSuperBoost", (bool (TutorialWrapper::*)()) & TutorialWrapper::ShouldAllowSuperBoost, "C++: TutorialWrapper::ShouldAllowSuperBoost() --> bool");
		cl.def("OnVehicleSetup", (void (TutorialWrapper::*)(class CarWrapper)) & TutorialWrapper::OnVehicleSetup, "C++: TutorialWrapper::OnVehicleSetup(class CarWrapper) --> void", "Car"_a);
		cl.def("HandleVehicleSetup", (void (TutorialWrapper::*)(class CarWrapper)) & TutorialWrapper::HandleVehicleSetup, "C++: TutorialWrapper::HandleVehicleSetup(class CarWrapper) --> void", "Car"_a);
		cl.def("InitCrowdManager", (void (TutorialWrapper::*)()) & TutorialWrapper::InitCrowdManager, "C++: TutorialWrapper::InitCrowdManager() --> void");
		cl.def("HandleScoreUpdated", (void (TutorialWrapper::*)(class TeamWrapper)) & TutorialWrapper::HandleScoreUpdated, "C++: TutorialWrapper::HandleScoreUpdated(class TeamWrapper) --> void", "Team"_a);
		cl.def("SetDifficulty2", (void (TutorialWrapper::*)(int)) & TutorialWrapper::SetDifficulty2, "C++: TutorialWrapper::SetDifficulty2(int) --> void", "InDifficulty"_a);
		cl.def("UpdateStats", (void (TutorialWrapper::*)()) & TutorialWrapper::UpdateStats, "C++: TutorialWrapper::UpdateStats() --> void");
		cl.def("AddLocalPlayer", (void (TutorialWrapper::*)(class PlayerControllerWrapper)) & TutorialWrapper::AddLocalPlayer, "C++: TutorialWrapper::AddLocalPlayer(class PlayerControllerWrapper) --> void", "Player"_a);
		cl.def("HandlePlayerResetTraining", (void (TutorialWrapper::*)(class GameEventWrapper)) & TutorialWrapper::HandlePlayerResetTraining, "C++: TutorialWrapper::HandlePlayerResetTraining(class GameEventWrapper) --> void", "GameEvent"_a);
		cl.def("OnInit", (void (TutorialWrapper::*)()) & TutorialWrapper::OnInit, "C++: TutorialWrapper::OnInit() --> void");
		cl.def("EventTutorialTipChanged", (void (TutorialWrapper::*)(class TutorialWrapper, std::string)) & TutorialWrapper::EventTutorialTipChanged, "C++: TutorialWrapper::EventTutorialTipChanged(class TutorialWrapper, std::string) --> void", "GameEvent"_a, "NewTip"_a);
	}
	{
		// ToastType file: line:15
		pybind11::enum_<ToastType>(M, "ToastType", pybind11::arithmetic(), "")
			.value("ToastType_Info", ToastType::ToastType_Info)
			.value("ToastType_OK", ToastType::ToastType_OK)
			.value("ToastType_Warning", ToastType::ToastType_Warning)
			.value("ToastType_Error", ToastType::ToastType_Error)
			.export_values();
	}
	{ // Vector file: line:27
		pybind11::class_<Vector, std::shared_ptr<Vector>> cl(M, "Vector");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<float, float, float>(), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("z"));

		cl.def(pybind11::init<float>(), pybind11::arg("def"));

		cl.def(pybind11::init([]() { return new Vector(); }));
		cl.def(pybind11::init([](Vector const& o) { return new Vector(o); }));
		cl.def_readwrite("X", &Vector::X);
		cl.def_readwrite("Y", &Vector::Y);
		cl.def_readwrite("Z", &Vector::Z);
		cl.def("__add__", (struct Vector(Vector::*)(struct Vector)) & Vector::operator+=, "C++: Vector::operator+(struct Vector) --> struct Vector", "v2"_a);
		cl.def("__mul__", (struct Vector(Vector::*)(struct Vector)) & Vector::operator*=, "C++: Vector::operator*(struct Vector) --> struct Vector", "v2"_a);
		cl.def("__sub__", (struct Vector(Vector::*)(struct Vector)) & Vector::operator-=, "C++: Vector::operator-(struct Vector) --> struct Vector", "v2"_a);
		cl.def("__div__", (struct Vector(Vector::*)(struct Vector)) & Vector::operator/=, "C++: Vector::operator/(struct Vector) --> struct Vector", "v2"_a);
		cl.def("magnitude", (float (Vector::*)()) & Vector::magnitude, "C++: Vector::magnitude() --> float");
		cl.def("normalize", (void (Vector::*)()) & Vector::normalize, "C++: Vector::normalize() --> void");
		cl.def("clone", (struct Vector(Vector::*)()) & Vector::clone, "C++: Vector::clone() --> struct Vector");
		cl.def_static("dot", (float (*)(struct Vector, struct Vector)) & Vector::dot, "C++: Vector::dot(struct Vector, struct Vector) --> float", "v1"_a, "v2"_a);
		cl.def_static("cross", (struct Vector(*)(struct Vector, struct Vector)) & Vector::cross, "C++: Vector::cross(struct Vector, struct Vector) --> struct Vector", "v1"_a, "v2"_a);
		cl.def_static("lerp", (struct Vector(*)(struct Vector, struct Vector, float)) & Vector::lerp, "C++: Vector::lerp(struct Vector, struct Vector, float) --> struct Vector", "v1"_a, "v2"_a, "t"_a);
		cl.def_static("slerp", (struct Vector(*)(struct Vector, struct Vector, float)) & Vector::slerp, "C++: Vector::slerp(struct Vector, struct Vector, float) --> struct Vector", "v1"_a, "v2"_a, "t"_a);
	}
	{ // PredictionInfo file: line:124
		pybind11::class_<PredictionInfo, std::shared_ptr<PredictionInfo>> cl(M, "PredictionInfo");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init([]() { return new PredictionInfo(); }));
		cl.def_readwrite("Time", &PredictionInfo::Time);
		cl.def_readwrite("ArchTopTime", &PredictionInfo::ArchTopTime);
		cl.def_readwrite("Location", &PredictionInfo::Location);
		cl.def_readwrite("Velocity", &PredictionInfo::Velocity);
		cl.def_readwrite("ArchTop", &PredictionInfo::ArchTop);
		cl.def_readwrite("ArchTopVelocity", &PredictionInfo::ArchTopVelocity);
		cl.def_property_readonly("bHitWall", [](const PredictionInfo& c) {return c.bHitWall; });
		cl.def_property_readonly("bHitGround", [](const PredictionInfo& c) {return c.bHitGround; });
	}
	// fixRotator(float) file: line:137
	M.def("fixRotator", (float (*)(float)) & fixRotator, "C++: fixRotator(float) --> float", "newRotation"_a);

	{ // SteamID file: line:152
		pybind11::class_<SteamID, std::shared_ptr<SteamID>> cl(M, "SteamID");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init([]() { return new SteamID(); }));
		cl.def_readwrite("ID", &SteamID::ID);
	}
	{ // SkillRating file: line:157
		pybind11::class_<SkillRating, std::shared_ptr<SkillRating>> cl(M, "SkillRating");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init([]() { return new SkillRating(); }));
		cl.def_readwrite("Mu", &SkillRating::Mu);
		cl.def_readwrite("Sigma", &SkillRating::Sigma);
	}
	{ // LinearColor file: line:162
		pybind11::class_<LinearColor, std::shared_ptr<LinearColor>> cl(M, "LinearColor");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init([]() { return new LinearColor(); }));
		cl.def_readwrite("R", &LinearColor::R);
		cl.def_readwrite("G", &LinearColor::G);
		cl.def_readwrite("B", &LinearColor::B);
		cl.def_readwrite("A", &LinearColor::A);
	}
	// fixPitch(float) file: line:170
	M.def("fixPitch", (float (*)(float)) & fixPitch, "C++: fixPitch(float) --> float", "newRotation"_a);

	{ // ControllerInput file: line:186
		pybind11::class_<ControllerInput, std::shared_ptr<ControllerInput>> cl(M, "ControllerInput");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init([]() { return new ControllerInput(); }));
		cl.def_readwrite("Throttle", &ControllerInput::Throttle);
		cl.def_readwrite("Steer", &ControllerInput::Steer);
		cl.def_readwrite("Pitch", &ControllerInput::Pitch);
		cl.def_readwrite("Yaw", &ControllerInput::Yaw);
		cl.def_readwrite("Roll", &ControllerInput::Roll);
		cl.def_readwrite("DodgeForward", &ControllerInput::DodgeForward);
		cl.def_readwrite("DodgeStrafe", &ControllerInput::DodgeStrafe);
		cl.def_property_readonly("Jump", [](const ControllerInput& c) {return c.Jump; });
		cl.def_property_readonly("ActivateBoost", [](const ControllerInput& c) {return c.ActivateBoost; });
		cl.def_property_readonly("HoldingBoost", [](const ControllerInput& c) {return c.HoldingBoost; });
		cl.def_property_readonly("Handbrake", [](const ControllerInput& c) {return c.Handbrake; });
		cl.def_property_readonly("Jumped", [](const ControllerInput& c) {return c.Jumped; });
	}
	{ // RecordedSample file: line:201
		pybind11::class_<RecordedSample, std::shared_ptr<RecordedSample>> cl(M, "RecordedSample");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init([]() { return new RecordedSample(); }));
		cl.def_readwrite("Low", &RecordedSample::Low);
		cl.def_readwrite("High", &RecordedSample::High);
	}
	{ // Rotator file: line:209
		pybind11::class_<Rotator, std::shared_ptr<Rotator>> cl(M, "Rotator");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<int, int, int>(), pybind11::arg("pitch"), pybind11::arg("yaw"), pybind11::arg("roll"));

		cl.def(pybind11::init<int>(), pybind11::arg("def"));

		cl.def(pybind11::init([]() { return new Rotator(); }));
		cl.def(pybind11::init([](Rotator const& o) { return new Rotator(o); }));
		cl.def_readwrite("Pitch", &Rotator::Pitch);
		cl.def_readwrite("Yaw", &Rotator::Yaw);
		cl.def_readwrite("Roll", &Rotator::Roll);
		cl.def("__add__", (struct Rotator(Rotator::*)(struct Rotator)) & Rotator::operator+=, "C++: Rotator::operator+(struct Rotator) --> struct Rotator", "v2"_a);
		cl.def("__mul__", (struct Rotator(Rotator::*)(struct Rotator)) & Rotator::operator*=, "C++: Rotator::operator*(struct Rotator) --> struct Rotator", "v2"_a);
		cl.def("__sub__", (struct Rotator(Rotator::*)(struct Rotator)) & Rotator::operator-=, "C++: Rotator::operator-(struct Rotator) --> struct Rotator", "v2"_a);
		cl.def("__div__", (struct Rotator(Rotator::*)(struct Rotator)) & Rotator::operator/=, "C++: Rotator::operator/(struct Rotator) --> struct Rotator", "v2"_a);
	}
	{ // POV file: line:237
		pybind11::class_<POV, std::shared_ptr<POV>> cl(M, "POV");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init([]() { return new POV(); }));
		cl.def_readwrite("location", &POV::location);
		cl.def_readwrite("rotation", &POV::rotation);
		cl.def_readwrite("FOV", &POV::FOV);
	}
	{ // UnrealColor file: line:244
		pybind11::class_<UnrealColor, std::shared_ptr<UnrealColor>> cl(M, "UnrealColor");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init([]() { return new UnrealColor(); }));
		cl.def_readwrite("B", &UnrealColor::B);
		cl.def_readwrite("G", &UnrealColor::G);
		cl.def_readwrite("R", &UnrealColor::R);
		cl.def_readwrite("A", &UnrealColor::A);
	}
	{ // ViewTarget file: line:253
		pybind11::class_<ViewTarget, std::shared_ptr<ViewTarget>> cl(M, "ViewTarget");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init([]() { return new ViewTarget(); }));
		cl.def_readwrite("POV", &ViewTarget::POV);
		cl.def_readwrite("AspectRatio", &ViewTarget::AspectRatio);
	}
	{ // Vector2 file: line:261
		pybind11::class_<Vector2, std::shared_ptr<Vector2>> cl(M, "Vector2");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init([]() { return new Vector2(); }));
		cl.def_readwrite("X", &Vector2::X);
		cl.def_readwrite("Y", &Vector2::Y);
		cl.def("minus", (struct Vector2(Vector2::*)(struct Vector2)) & Vector2::minus, "C++: Vector2::minus(struct Vector2) --> struct Vector2", "other"_a);
	}
	{ // Vector2F file: line:270
		pybind11::class_<Vector2F, std::shared_ptr<Vector2F>> cl(M, "Vector2F");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init([]() { return new Vector2F(); }));
		cl.def_readwrite("X", &Vector2F::X);
		cl.def_readwrite("Y", &Vector2F::Y);
		// cl.def("minus", (struct Vector2F(Vector2F::*)(struct Vector2)) & Vector2F::minus, "C++: Vector2F::minus(struct Vector2) --> struct Vector2F", "other"_a);
	}
	{ // ProfileCameraSettings file: line:279
		pybind11::class_<ProfileCameraSettings, std::shared_ptr<ProfileCameraSettings>> cl(M, "ProfileCameraSettings");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init([]() { return new ProfileCameraSettings(); }));
		cl.def_readwrite("FOV", &ProfileCameraSettings::FOV);
		cl.def_readwrite("Height", &ProfileCameraSettings::Height);
		cl.def_readwrite("Pitch", &ProfileCameraSettings::Pitch);
		cl.def_readwrite("Distance", &ProfileCameraSettings::Distance);
		cl.def_readwrite("Stiffness", &ProfileCameraSettings::Stiffness);
		cl.def_readwrite("SwivelSpeed", &ProfileCameraSettings::SwivelSpeed);
		cl.def_readwrite("TransitionSpeed", &ProfileCameraSettings::TransitionSpeed);
	}
	// VectorToRotator(struct Vector) file: line:292
	M.def("VectorToRotator", (struct Rotator(*)(struct Vector)) & VectorToRotator, "C++: VectorToRotator(struct Vector) --> struct Rotator", "vVector"_a);

	// RotatorToVector(struct Rotator) file: line:303
	M.def("RotatorToVector", (struct Vector(*)(struct Rotator)) & RotatorToVector, "C++: RotatorToVector(struct Rotator) --> struct Vector", "R"_a);

	{ // Quat file: line:360
		pybind11::class_<Quat, std::shared_ptr<Quat>> cl(M, "Quat");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<float, float, float, float>(), pybind11::arg("w"), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("z"));

		cl.def(pybind11::init([]() { return new Quat(); }));
		cl.def(pybind11::init([](Quat const& o) { return new Quat(o); }));
		cl.def_readwrite("X", &Quat::X);
		cl.def_readwrite("Y", &Quat::Y);
		cl.def_readwrite("Z", &Quat::Z);
		cl.def_readwrite("W", &Quat::W);
		cl.def("conjugate", (struct Quat(Quat::*)()) & Quat::conjugate, "C++: Quat::conjugate() --> struct Quat");
		cl.def("__mul__", (struct Quat(Quat::*)(struct Quat)) & Quat::operator*=, "C++: Quat::operator*(struct Quat) --> struct Quat", "q2"_a);
	}
	{ // RBState file: line:396
		pybind11::class_<RBState, std::shared_ptr<RBState>> cl(M, "RBState");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init([]() { return new RBState(); }));
		cl.def_readwrite("Quaternion", &RBState::Quaternion);
		cl.def_readwrite("Location", &RBState::Location);
		cl.def_readwrite("LinearVelocity", &RBState::LinearVelocity);
		cl.def_readwrite("AngularVelocity", &RBState::AngularVelocity);
		cl.def_readwrite("Time", &RBState::Time);
		cl.def_property_readonly("bSleeping", [](const RBState& c) {return c.bSleeping; });
		cl.def_property_readonly("bNewData", [](const RBState& c) {return c.bNewData; });
	}
	{ // WorldContactData file: line:407
		pybind11::class_<WorldContactData, std::shared_ptr<WorldContactData>> cl(M, "WorldContactData");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init([]() { return new WorldContactData(); }));
		cl.def_property_readonly("bHasContact", [](const WorldContactData& c) {return c.bHasContact; });
		cl.def_readwrite("Location", &WorldContactData::Location);
		cl.def_readwrite("Velocity", &WorldContactData::Velocity);
		cl.def_readwrite("Normal", &WorldContactData::Normal);
	}
	{ // StickyForceData file: line:417
		pybind11::class_<StickyForceData, std::shared_ptr<StickyForceData>> cl(M, "StickyForceData");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init([]() { return new StickyForceData(); }));
		cl.def_readwrite("Ground", &StickyForceData::Ground);
		cl.def_readwrite("Wall", &StickyForceData::Wall);
	}
	{ // WheelContactData file: line:422
		pybind11::class_<WheelContactData, std::shared_ptr<WheelContactData>> cl(M, "WheelContactData");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init([]() { return new WheelContactData(); }));
		cl.def_property_readonly("bHasContact", [](const WheelContactData& c) {return c.bHasContact; });
		cl.def_property_readonly("bHasContactWithWorldGeometry", [](const WheelContactData& c) {return c.bHasContactWithWorldGeometry; });
		cl.def_readwrite("HasContactChangeTime", &WheelContactData::HasContactChangeTime);
		cl.def_readwrite("Location", &WheelContactData::Location);
		cl.def_readwrite("Normal", &WheelContactData::Normal);
		cl.def_readwrite("LatDirection", &WheelContactData::LatDirection);
		cl.def_readwrite("LongDirection", &WheelContactData::LongDirection);
	}
	{ // BallWrapper file: line:12
		pybind11::class_<BallWrapper, std::shared_ptr<BallWrapper>, RBActorWrapper> cl(M, "BallWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](BallWrapper const& o) { return new BallWrapper(o); }));
		cl.def("assign", (class BallWrapper& (BallWrapper::*)(class BallWrapper))& BallWrapper::operator=, "C++: BallWrapper::operator=(class BallWrapper) --> class BallWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetLastTouchTime", (float (BallWrapper::*)())& BallWrapper::GetLastTouchTime, "C++: BallWrapper::GetLastTouchTime() --> float");
		cl.def("PredictPosition", (struct PredictionInfo(BallWrapper::*)(float))& BallWrapper::PredictPosition, "C++: BallWrapper::PredictPosition(float) --> struct PredictionInfo", "timeAhead"_a);
		cl.def("GetEndOfGameFXArchetype", (class FXActorWrapper(BallWrapper::*)())& BallWrapper::GetEndOfGameFXArchetype, "C++: BallWrapper::GetEndOfGameFXArchetype() --> class FXActorWrapper");
		cl.def("SetEndOfGameFXArchetype", (void (BallWrapper::*)(class FXActorWrapper))& BallWrapper::SetEndOfGameFXArchetype, "C++: BallWrapper::SetEndOfGameFXArchetype(class FXActorWrapper) --> void", "newEndOfGameFXArchetype"_a);
		cl.def("GetbAllowPlayerExplosionOverride", (unsigned long (BallWrapper::*)())& BallWrapper::GetbAllowPlayerExplosionOverride, "C++: BallWrapper::GetbAllowPlayerExplosionOverride() --> unsigned long");
		cl.def("SetbAllowPlayerExplosionOverride", (void (BallWrapper::*)(unsigned long))& BallWrapper::SetbAllowPlayerExplosionOverride, "C++: BallWrapper::SetbAllowPlayerExplosionOverride(unsigned long) --> void", "newbAllowPlayerExplosionOverride"_a);
		cl.def("GetbNotifyGroundHit", (unsigned long (BallWrapper::*)())& BallWrapper::GetbNotifyGroundHit, "C++: BallWrapper::GetbNotifyGroundHit() --> unsigned long");
		cl.def("SetbNotifyGroundHit", (void (BallWrapper::*)(unsigned long))& BallWrapper::SetbNotifyGroundHit, "C++: BallWrapper::SetbNotifyGroundHit(unsigned long) --> void", "newbNotifyGroundHit"_a);
		cl.def("GetbEndOfGameHidden", (unsigned long (BallWrapper::*)())& BallWrapper::GetbEndOfGameHidden, "C++: BallWrapper::GetbEndOfGameHidden() --> unsigned long");
		cl.def("SetbEndOfGameHidden", (void (BallWrapper::*)(unsigned long))& BallWrapper::SetbEndOfGameHidden, "C++: BallWrapper::SetbEndOfGameHidden(unsigned long) --> void", "newbEndOfGameHidden"_a);
		cl.def("GetbFadeIn", (unsigned long (BallWrapper::*)())& BallWrapper::GetbFadeIn, "C++: BallWrapper::GetbFadeIn() --> unsigned long");
		cl.def("SetbFadeIn", (void (BallWrapper::*)(unsigned long))& BallWrapper::SetbFadeIn, "C++: BallWrapper::SetbFadeIn(unsigned long) --> void", "newbFadeIn"_a);
		cl.def("GetbFadeOut", (unsigned long (BallWrapper::*)())& BallWrapper::GetbFadeOut, "C++: BallWrapper::GetbFadeOut() --> unsigned long");
		cl.def("SetbFadeOut", (void (BallWrapper::*)(unsigned long))& BallWrapper::SetbFadeOut, "C++: BallWrapper::SetbFadeOut(unsigned long) --> void", "newbFadeOut"_a);
		cl.def("GetbPredictionOnGround", (unsigned long (BallWrapper::*)())& BallWrapper::GetbPredictionOnGround, "C++: BallWrapper::GetbPredictionOnGround() --> unsigned long");
		cl.def("SetbPredictionOnGround", (void (BallWrapper::*)(unsigned long))& BallWrapper::SetbPredictionOnGround, "C++: BallWrapper::SetbPredictionOnGround(unsigned long) --> void", "newbPredictionOnGround"_a);
		cl.def("GetbCanBeAttached", (unsigned long (BallWrapper::*)())& BallWrapper::GetbCanBeAttached, "C++: BallWrapper::GetbCanBeAttached() --> unsigned long");
		cl.def("SetbCanBeAttached", (void (BallWrapper::*)(unsigned long))& BallWrapper::SetbCanBeAttached, "C++: BallWrapper::SetbCanBeAttached(unsigned long) --> void", "newbCanBeAttached"_a);
		cl.def("GetbItemFreeze", (unsigned long (BallWrapper::*)())& BallWrapper::GetbItemFreeze, "C++: BallWrapper::GetbItemFreeze() --> unsigned long");
		cl.def("SetbItemFreeze", (void (BallWrapper::*)(unsigned long))& BallWrapper::SetbItemFreeze, "C++: BallWrapper::SetbItemFreeze(unsigned long) --> void", "newbItemFreeze"_a);
		cl.def("GetMagnusCoefficient", (struct Vector(BallWrapper::*)())& BallWrapper::GetMagnusCoefficient, "C++: BallWrapper::GetMagnusCoefficient() --> struct Vector");
		cl.def("SetMagnusCoefficient", (void (BallWrapper::*)(struct Vector))& BallWrapper::SetMagnusCoefficient, "C++: BallWrapper::SetMagnusCoefficient(struct Vector) --> void", "newMagnusCoefficient"_a);
		cl.def("GetRadius", (float (BallWrapper::*)())& BallWrapper::GetRadius, "C++: BallWrapper::GetRadius() --> float");
		cl.def("SetRadius", (void (BallWrapper::*)(float))& BallWrapper::SetRadius, "C++: BallWrapper::SetRadius(float) --> void", "newRadius"_a);
		cl.def("GetVisualRadius", (float (BallWrapper::*)())& BallWrapper::GetVisualRadius, "C++: BallWrapper::GetVisualRadius() --> float");
		cl.def("SetVisualRadius", (void (BallWrapper::*)(float))& BallWrapper::SetVisualRadius, "C++: BallWrapper::SetVisualRadius(float) --> void", "newVisualRadius"_a);
		cl.def("GetLastCalculateCarHit", (float (BallWrapper::*)())& BallWrapper::GetLastCalculateCarHit, "C++: BallWrapper::GetLastCalculateCarHit() --> float");
		cl.def("GetInitialLocation", (struct Vector(BallWrapper::*)())& BallWrapper::GetInitialLocation, "C++: BallWrapper::GetInitialLocation() --> struct Vector");
		cl.def("SetInitialLocation", (void (BallWrapper::*)(struct Vector))& BallWrapper::SetInitialLocation, "C++: BallWrapper::SetInitialLocation(struct Vector) --> void", "newInitialLocation"_a);
		cl.def("SetInitialRotation", (void (BallWrapper::*)(struct Rotator))& BallWrapper::SetInitialRotation, "C++: BallWrapper::SetInitialRotation(struct Rotator) --> void", "newInitialRotation"_a);
		cl.def("GetLastHitWorldTime", (float (BallWrapper::*)())& BallWrapper::GetLastHitWorldTime, "C++: BallWrapper::GetLastHitWorldTime() --> float");
		cl.def("GetReplicatedBallScale", (float (BallWrapper::*)())& BallWrapper::GetReplicatedBallScale, "C++: BallWrapper::GetReplicatedBallScale() --> float");
		cl.def("SetReplicatedBallScale", (void (BallWrapper::*)(float))& BallWrapper::SetReplicatedBallScale, "C++: BallWrapper::SetReplicatedBallScale(float) --> void", "newReplicatedBallScale"_a);
		cl.def("GetReplicatedWorldBounceScale", (float (BallWrapper::*)())& BallWrapper::GetReplicatedWorldBounceScale, "C++: BallWrapper::GetReplicatedWorldBounceScale() --> float");
		cl.def("SetReplicatedWorldBounceScale", (void (BallWrapper::*)(float))& BallWrapper::SetReplicatedWorldBounceScale, "C++: BallWrapper::SetReplicatedWorldBounceScale(float) --> void", "newReplicatedWorldBounceScale"_a);
		cl.def("GetReplicatedBallGravityScale", (float (BallWrapper::*)())& BallWrapper::GetReplicatedBallGravityScale, "C++: BallWrapper::GetReplicatedBallGravityScale() --> float");
		cl.def("SetReplicatedBallGravityScale", (void (BallWrapper::*)(float))& BallWrapper::SetReplicatedBallGravityScale, "C++: BallWrapper::SetReplicatedBallGravityScale(float) --> void", "newReplicatedBallGravityScale"_a);
		cl.def("GetReplicatedBallMaxLinearSpeedScale", (float (BallWrapper::*)())& BallWrapper::GetReplicatedBallMaxLinearSpeedScale, "C++: BallWrapper::GetReplicatedBallMaxLinearSpeedScale() --> float");
		cl.def("SetReplicatedBallMaxLinearSpeedScale", (void (BallWrapper::*)(float))& BallWrapper::SetReplicatedBallMaxLinearSpeedScale, "C++: BallWrapper::SetReplicatedBallMaxLinearSpeedScale(float) --> void", "newReplicatedBallMaxLinearSpeedScale"_a);
		cl.def("GetReplicatedAddedCarBounceScale", (float (BallWrapper::*)())& BallWrapper::GetReplicatedAddedCarBounceScale, "C++: BallWrapper::GetReplicatedAddedCarBounceScale() --> float");
		cl.def("SetReplicatedAddedCarBounceScale", (void (BallWrapper::*)(float))& BallWrapper::SetReplicatedAddedCarBounceScale, "C++: BallWrapper::SetReplicatedAddedCarBounceScale(float) --> void", "newReplicatedAddedCarBounceScale"_a);
		cl.def("GetAdditionalCarGroundBounceScaleZ", (float (BallWrapper::*)())& BallWrapper::GetAdditionalCarGroundBounceScaleZ, "C++: BallWrapper::GetAdditionalCarGroundBounceScaleZ() --> float");
		cl.def("SetAdditionalCarGroundBounceScaleZ", (void (BallWrapper::*)(float))& BallWrapper::SetAdditionalCarGroundBounceScaleZ, "C++: BallWrapper::SetAdditionalCarGroundBounceScaleZ(float) --> void", "newAdditionalCarGroundBounceScaleZ"_a);
		cl.def("GetAdditionalCarGroundBounceScaleXY", (float (BallWrapper::*)())& BallWrapper::GetAdditionalCarGroundBounceScaleXY, "C++: BallWrapper::GetAdditionalCarGroundBounceScaleXY() --> float");
		cl.def("SetAdditionalCarGroundBounceScaleXY", (void (BallWrapper::*)(float))& BallWrapper::SetAdditionalCarGroundBounceScaleXY, "C++: BallWrapper::SetAdditionalCarGroundBounceScaleXY(float) --> void", "newAdditionalCarGroundBounceScaleXY"_a);
		cl.def("GetHitTeamNum", (unsigned char (BallWrapper::*)())& BallWrapper::GetHitTeamNum, "C++: BallWrapper::GetHitTeamNum() --> unsigned char");
		cl.def("SetHitTeamNum", (void (BallWrapper::*)(unsigned char))& BallWrapper::SetHitTeamNum, "C++: BallWrapper::SetHitTeamNum(unsigned char) --> void", "newHitTeamNum"_a);
		cl.def("GetGameEvent", (class ServerWrapper(BallWrapper::*)())& BallWrapper::GetGameEvent, "C++: BallWrapper::GetGameEvent() --> class ServerWrapper");
		cl.def("GetExplosionTime", (float (BallWrapper::*)())& BallWrapper::GetExplosionTime, "C++: BallWrapper::GetExplosionTime() --> float");
		cl.def("SetExplosionTime", (void (BallWrapper::*)(float))& BallWrapper::SetExplosionTime, "C++: BallWrapper::SetExplosionTime(float) --> void", "newExplosionTime"_a);
		cl.def("GetOldLocation", (struct Vector(BallWrapper::*)())& BallWrapper::GetOldLocation, "C++: BallWrapper::GetOldLocation() --> struct Vector");
		cl.def("SetOldLocation", (void (BallWrapper::*)(struct Vector))& BallWrapper::SetOldLocation, "C++: BallWrapper::SetOldLocation(struct Vector) --> void", "newOldLocation"_a);
		cl.def("GetPredictionTimestep", (float (BallWrapper::*)())& BallWrapper::GetPredictionTimestep, "C++: BallWrapper::GetPredictionTimestep() --> float");
		cl.def("SetPredictionTimestep", (void (BallWrapper::*)(float))& BallWrapper::SetPredictionTimestep, "C++: BallWrapper::SetPredictionTimestep(float) --> void", "newPredictionTimestep"_a);
		cl.def("GetLastPredictionTime", (float (BallWrapper::*)())& BallWrapper::GetLastPredictionTime, "C++: BallWrapper::GetLastPredictionTime() --> float");
		cl.def("SetLastPredictionTime", (void (BallWrapper::*)(float))& BallWrapper::SetLastPredictionTime, "C++: BallWrapper::SetLastPredictionTime(float) --> void", "newLastPredictionTime"_a);
		cl.def("GetGroundForce", (float (BallWrapper::*)())& BallWrapper::GetGroundForce, "C++: BallWrapper::GetGroundForce() --> float");
		cl.def("SetGroundForce", (void (BallWrapper::*)(float))& BallWrapper::SetGroundForce, "C++: BallWrapper::SetGroundForce(float) --> void", "newGroundForce"_a);
		cl.def("GetCurrentAffector", (class CarWrapper(BallWrapper::*)())& BallWrapper::GetCurrentAffector, "C++: BallWrapper::GetCurrentAffector() --> class CarWrapper");
		cl.def("SetCurrentAffector", (void (BallWrapper::*)(class CarWrapper))& BallWrapper::SetCurrentAffector, "C++: BallWrapper::SetCurrentAffector(class CarWrapper) --> void", "newCurrentAffector"_a);
		cl.def("GetTrajectoryStartVelocity", (struct Vector(BallWrapper::*)())& BallWrapper::GetTrajectoryStartVelocity, "C++: BallWrapper::GetTrajectoryStartVelocity() --> struct Vector");
		cl.def("GetTrajectoryStartRotation", (struct Rotator(BallWrapper::*)())& BallWrapper::GetTrajectoryStartRotation, "C++: BallWrapper::GetTrajectoryStartRotation() --> struct Rotator");
		cl.def("GetTrajectoryStartLocation", (struct Vector(BallWrapper::*)())& BallWrapper::GetTrajectoryStartLocation, "C++: BallWrapper::GetTrajectoryStartLocation() --> struct Vector");
		cl.def("ShouldDrawTrajectory", (bool (BallWrapper::*)())& BallWrapper::ShouldDrawTrajectory, "C++: BallWrapper::ShouldDrawTrajectory() --> bool");
		cl.def("GetAdditionalCarBounceScaleZ", (float (BallWrapper::*)(class CarWrapper))& BallWrapper::GetAdditionalCarBounceScaleZ, "C++: BallWrapper::GetAdditionalCarBounceScaleZ(class CarWrapper) --> float", "Car"_a);
		cl.def("SetEndOfGameHidden", (void (BallWrapper::*)())& BallWrapper::SetEndOfGameHidden, "C++: BallWrapper::SetEndOfGameHidden() --> void");
		cl.def("Explode", (void (BallWrapper::*)(class GoalWrapper, struct Vector&, class PriWrapper))& BallWrapper::Explode, "C++: BallWrapper::Explode(class GoalWrapper, struct Vector &, class PriWrapper) --> void", "ExplosionGoal"_a, "ExplodeLocation"_a, "Scorer"_a);
		cl.def("DoDestroy", (void (BallWrapper::*)())& BallWrapper::DoDestroy, "C++: BallWrapper::DoDestroy() --> void");
		cl.def("DoExplode", (void (BallWrapper::*)())& BallWrapper::DoExplode, "C++: BallWrapper::DoExplode() --> void");
		cl.def("Launch", (void (BallWrapper::*)(struct Vector&, struct Vector&))& BallWrapper::Launch, "C++: BallWrapper::Launch(struct Vector &, struct Vector &) --> void", "LaunchPosition"_a, "LaunchDirection"_a);
		cl.def("OnCarTouch", (void (BallWrapper::*)(class CarWrapper, unsigned char))& BallWrapper::OnCarTouch, "C++: BallWrapper::OnCarTouch(class CarWrapper, unsigned char) --> void", "HitCar"_a, "HitType"_a);
		cl.def("RecordCarHit", (void (BallWrapper::*)(class CarWrapper, struct Vector&, struct Vector&, unsigned char))& BallWrapper::RecordCarHit, "C++: BallWrapper::RecordCarHit(class CarWrapper, struct Vector &, struct Vector &, unsigned char) --> void", "HitCar"_a, "HitLocation"_a, "HitNormal"_a, "HitType"_a);
		cl.def("IsGroundHit", (bool (BallWrapper::*)(struct Vector&))& BallWrapper::IsGroundHit, "C++: BallWrapper::IsGroundHit(struct Vector &) --> bool", "HitNormal"_a);
		cl.def("FellOutOfWorld", (void (BallWrapper::*)())& BallWrapper::FellOutOfWorld, "C++: BallWrapper::FellOutOfWorld() --> void");
		cl.def("IsRoundActive", (bool (BallWrapper::*)())& BallWrapper::IsRoundActive, "C++: BallWrapper::IsRoundActive() --> bool");
		cl.def("eventOnHitGoal", (void (BallWrapper::*)(class GoalWrapper, struct Vector&))& BallWrapper::eventOnHitGoal, "C++: BallWrapper::eventOnHitGoal(class GoalWrapper, struct Vector &) --> void", "Goal"_a, "HitLoc"_a);
		cl.def("TurnOff", (void (BallWrapper::*)())& BallWrapper::TurnOff, "C++: BallWrapper::TurnOff() --> void");
		cl.def("InitAk", (void (BallWrapper::*)())& BallWrapper::InitAk, "C++: BallWrapper::InitAk() --> void");
		cl.def("SetWorldBounceScale", (void (BallWrapper::*)(float))& BallWrapper::SetWorldBounceScale, "C++: BallWrapper::SetWorldBounceScale(float) --> void", "NewScale"_a);
		cl.def("SetCarBounceScale", (void (BallWrapper::*)(float))& BallWrapper::SetCarBounceScale, "C++: BallWrapper::SetCarBounceScale(float) --> void", "NewScale"_a);
		cl.def("SetBallMaxLinearSpeedScale", (void (BallWrapper::*)(float))& BallWrapper::SetBallMaxLinearSpeedScale, "C++: BallWrapper::SetBallMaxLinearSpeedScale(float) --> void", "InMaxLinearSpeedScale"_a);
		cl.def("SetBallGravityScale", (void (BallWrapper::*)(float))& BallWrapper::SetBallGravityScale, "C++: BallWrapper::SetBallGravityScale(float) --> void", "InBallGravityScale"_a);
		cl.def("SetBallScale", (void (BallWrapper::*)(float))& BallWrapper::SetBallScale, "C++: BallWrapper::SetBallScale(float) --> void", "NewScale"_a);
		cl.def("EventHitGoal", (void (BallWrapper::*)(class BallWrapper, class GoalWrapper))& BallWrapper::EventHitGoal, "C++: BallWrapper::EventHitGoal(class BallWrapper, class GoalWrapper) --> void", "Ball"_a, "Goal"_a);
	}
	{ // PlayerReplicationInfoWrapper file: line:9
		pybind11::class_<PlayerReplicationInfoWrapper, std::shared_ptr<PlayerReplicationInfoWrapper>, ActorWrapper> cl(M, "PlayerReplicationInfoWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](PlayerReplicationInfoWrapper const& o) { return new PlayerReplicationInfoWrapper(o); }));
		cl.def("assign", (class PlayerReplicationInfoWrapper& (PlayerReplicationInfoWrapper::*)(class PlayerReplicationInfoWrapper)) & PlayerReplicationInfoWrapper::operator=, "C++: PlayerReplicationInfoWrapper::operator=(class PlayerReplicationInfoWrapper) --> class PlayerReplicationInfoWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetScore", (int (PlayerReplicationInfoWrapper::*)()) & PlayerReplicationInfoWrapper::GetScore, "C++: PlayerReplicationInfoWrapper::GetScore() --> int");
		cl.def("SetScore", (void (PlayerReplicationInfoWrapper::*)(int)) & PlayerReplicationInfoWrapper::SetScore, "C++: PlayerReplicationInfoWrapper::SetScore(int) --> void", "newScore"_a);
		cl.def("GetDeaths", (int (PlayerReplicationInfoWrapper::*)()) & PlayerReplicationInfoWrapper::GetDeaths, "C++: PlayerReplicationInfoWrapper::GetDeaths() --> int");
		cl.def("SetDeaths", (void (PlayerReplicationInfoWrapper::*)(int)) & PlayerReplicationInfoWrapper::SetDeaths, "C++: PlayerReplicationInfoWrapper::SetDeaths(int) --> void", "newDeaths"_a);
		cl.def("GetPing", (unsigned char (PlayerReplicationInfoWrapper::*)()) & PlayerReplicationInfoWrapper::GetPing, "C++: PlayerReplicationInfoWrapper::GetPing() --> unsigned char");
		cl.def("SetPing", (void (PlayerReplicationInfoWrapper::*)(unsigned char)) & PlayerReplicationInfoWrapper::SetPing, "C++: PlayerReplicationInfoWrapper::SetPing(unsigned char) --> void", "newPing"_a);
		cl.def("GetTTSSpeaker", (unsigned char (PlayerReplicationInfoWrapper::*)()) & PlayerReplicationInfoWrapper::GetTTSSpeaker, "C++: PlayerReplicationInfoWrapper::GetTTSSpeaker() --> unsigned char");
		cl.def("SetTTSSpeaker", (void (PlayerReplicationInfoWrapper::*)(unsigned char)) & PlayerReplicationInfoWrapper::SetTTSSpeaker, "C++: PlayerReplicationInfoWrapper::SetTTSSpeaker(unsigned char) --> void", "newTTSSpeaker"_a);
		cl.def("GetNumLives", (int (PlayerReplicationInfoWrapper::*)()) & PlayerReplicationInfoWrapper::GetNumLives, "C++: PlayerReplicationInfoWrapper::GetNumLives() --> int");
		cl.def("SetNumLives", (void (PlayerReplicationInfoWrapper::*)(int)) & PlayerReplicationInfoWrapper::SetNumLives, "C++: PlayerReplicationInfoWrapper::SetNumLives(int) --> void", "newNumLives"_a);
		cl.def("GetPlayerName", (class UnrealStringWrapper(PlayerReplicationInfoWrapper::*)()) & PlayerReplicationInfoWrapper::GetPlayerName, "C++: PlayerReplicationInfoWrapper::GetPlayerName() --> class UnrealStringWrapper");
		cl.def("GetOldName", (class UnrealStringWrapper(PlayerReplicationInfoWrapper::*)()) & PlayerReplicationInfoWrapper::GetOldName, "C++: PlayerReplicationInfoWrapper::GetOldName() --> class UnrealStringWrapper");
		cl.def("GetPlayerID", (int (PlayerReplicationInfoWrapper::*)()) & PlayerReplicationInfoWrapper::GetPlayerID, "C++: PlayerReplicationInfoWrapper::GetPlayerID() --> int");
		cl.def("SetPlayerID", (void (PlayerReplicationInfoWrapper::*)(int)) & PlayerReplicationInfoWrapper::SetPlayerID, "C++: PlayerReplicationInfoWrapper::SetPlayerID(int) --> void", "newPlayerID"_a);
		cl.def("GetTeam", (class TeamInfoWrapper(PlayerReplicationInfoWrapper::*)()) & PlayerReplicationInfoWrapper::GetTeam, "C++: PlayerReplicationInfoWrapper::GetTeam() --> class TeamInfoWrapper");
		cl.def("SetTeam", (void (PlayerReplicationInfoWrapper::*)(class TeamInfoWrapper)) & PlayerReplicationInfoWrapper::SetTeam, "C++: PlayerReplicationInfoWrapper::SetTeam(class TeamInfoWrapper) --> void", "newTeam"_a);
		cl.def("GetbAdmin", (unsigned long (PlayerReplicationInfoWrapper::*)()) & PlayerReplicationInfoWrapper::GetbAdmin, "C++: PlayerReplicationInfoWrapper::GetbAdmin() --> unsigned long");
		cl.def("SetbAdmin", (void (PlayerReplicationInfoWrapper::*)(unsigned long)) & PlayerReplicationInfoWrapper::SetbAdmin, "C++: PlayerReplicationInfoWrapper::SetbAdmin(unsigned long) --> void", "newbAdmin"_a);
		cl.def("GetbIsSpectator", (unsigned long (PlayerReplicationInfoWrapper::*)()) & PlayerReplicationInfoWrapper::GetbIsSpectator, "C++: PlayerReplicationInfoWrapper::GetbIsSpectator() --> unsigned long");
		cl.def("SetbIsSpectator", (void (PlayerReplicationInfoWrapper::*)(unsigned long)) & PlayerReplicationInfoWrapper::SetbIsSpectator, "C++: PlayerReplicationInfoWrapper::SetbIsSpectator(unsigned long) --> void", "newbIsSpectator"_a);
		cl.def("GetbOnlySpectator", (unsigned long (PlayerReplicationInfoWrapper::*)()) & PlayerReplicationInfoWrapper::GetbOnlySpectator, "C++: PlayerReplicationInfoWrapper::GetbOnlySpectator() --> unsigned long");
		cl.def("SetbOnlySpectator", (void (PlayerReplicationInfoWrapper::*)(unsigned long)) & PlayerReplicationInfoWrapper::SetbOnlySpectator, "C++: PlayerReplicationInfoWrapper::SetbOnlySpectator(unsigned long) --> void", "newbOnlySpectator"_a);
		cl.def("GetbWaitingPlayer", (unsigned long (PlayerReplicationInfoWrapper::*)()) & PlayerReplicationInfoWrapper::GetbWaitingPlayer, "C++: PlayerReplicationInfoWrapper::GetbWaitingPlayer() --> unsigned long");
		cl.def("SetbWaitingPlayer", (void (PlayerReplicationInfoWrapper::*)(unsigned long)) & PlayerReplicationInfoWrapper::SetbWaitingPlayer, "C++: PlayerReplicationInfoWrapper::SetbWaitingPlayer(unsigned long) --> void", "newbWaitingPlayer"_a);
		cl.def("GetbReadyToPlay", (unsigned long (PlayerReplicationInfoWrapper::*)()) & PlayerReplicationInfoWrapper::GetbReadyToPlay, "C++: PlayerReplicationInfoWrapper::GetbReadyToPlay() --> unsigned long");
		cl.def("SetbReadyToPlay", (void (PlayerReplicationInfoWrapper::*)(unsigned long)) & PlayerReplicationInfoWrapper::SetbReadyToPlay, "C++: PlayerReplicationInfoWrapper::SetbReadyToPlay(unsigned long) --> void", "newbReadyToPlay"_a);
		cl.def("GetbOutOfLives", (unsigned long (PlayerReplicationInfoWrapper::*)()) & PlayerReplicationInfoWrapper::GetbOutOfLives, "C++: PlayerReplicationInfoWrapper::GetbOutOfLives() --> unsigned long");
		cl.def("SetbOutOfLives", (void (PlayerReplicationInfoWrapper::*)(unsigned long)) & PlayerReplicationInfoWrapper::SetbOutOfLives, "C++: PlayerReplicationInfoWrapper::SetbOutOfLives(unsigned long) --> void", "newbOutOfLives"_a);
		cl.def("GetbBot", (unsigned long (PlayerReplicationInfoWrapper::*)()) & PlayerReplicationInfoWrapper::GetbBot, "C++: PlayerReplicationInfoWrapper::GetbBot() --> unsigned long");
		cl.def("SetbBot", (void (PlayerReplicationInfoWrapper::*)(unsigned long)) & PlayerReplicationInfoWrapper::SetbBot, "C++: PlayerReplicationInfoWrapper::SetbBot(unsigned long) --> void", "newbBot"_a);
		cl.def("GetbIsInactive", (unsigned long (PlayerReplicationInfoWrapper::*)()) & PlayerReplicationInfoWrapper::GetbIsInactive, "C++: PlayerReplicationInfoWrapper::GetbIsInactive() --> unsigned long");
		cl.def("SetbIsInactive", (void (PlayerReplicationInfoWrapper::*)(unsigned long)) & PlayerReplicationInfoWrapper::SetbIsInactive, "C++: PlayerReplicationInfoWrapper::SetbIsInactive(unsigned long) --> void", "newbIsInactive"_a);
		cl.def("GetbFromPreviousLevel", (unsigned long (PlayerReplicationInfoWrapper::*)()) & PlayerReplicationInfoWrapper::GetbFromPreviousLevel, "C++: PlayerReplicationInfoWrapper::GetbFromPreviousLevel() --> unsigned long");
		cl.def("SetbFromPreviousLevel", (void (PlayerReplicationInfoWrapper::*)(unsigned long)) & PlayerReplicationInfoWrapper::SetbFromPreviousLevel, "C++: PlayerReplicationInfoWrapper::SetbFromPreviousLevel(unsigned long) --> void", "newbFromPreviousLevel"_a);
		cl.def("GetbTimedOut", (unsigned long (PlayerReplicationInfoWrapper::*)()) & PlayerReplicationInfoWrapper::GetbTimedOut, "C++: PlayerReplicationInfoWrapper::GetbTimedOut() --> unsigned long");
		cl.def("SetbTimedOut", (void (PlayerReplicationInfoWrapper::*)(unsigned long)) & PlayerReplicationInfoWrapper::SetbTimedOut, "C++: PlayerReplicationInfoWrapper::SetbTimedOut(unsigned long) --> void", "newbTimedOut"_a);
		cl.def("GetbUnregistered", (unsigned long (PlayerReplicationInfoWrapper::*)()) & PlayerReplicationInfoWrapper::GetbUnregistered, "C++: PlayerReplicationInfoWrapper::GetbUnregistered() --> unsigned long");
		cl.def("SetbUnregistered", (void (PlayerReplicationInfoWrapper::*)(unsigned long)) & PlayerReplicationInfoWrapper::SetbUnregistered, "C++: PlayerReplicationInfoWrapper::SetbUnregistered(unsigned long) --> void", "newbUnregistered"_a);
		cl.def("GetStartTime", (int (PlayerReplicationInfoWrapper::*)()) & PlayerReplicationInfoWrapper::GetStartTime, "C++: PlayerReplicationInfoWrapper::GetStartTime() --> int");
		cl.def("SetStartTime", (void (PlayerReplicationInfoWrapper::*)(int)) & PlayerReplicationInfoWrapper::SetStartTime, "C++: PlayerReplicationInfoWrapper::SetStartTime(int) --> void", "newStartTime"_a);
		cl.def("GetStringSpectating", (class UnrealStringWrapper(PlayerReplicationInfoWrapper::*)()) & PlayerReplicationInfoWrapper::GetStringSpectating, "C++: PlayerReplicationInfoWrapper::GetStringSpectating() --> class UnrealStringWrapper");
		cl.def("GetStringUnknown", (class UnrealStringWrapper(PlayerReplicationInfoWrapper::*)()) & PlayerReplicationInfoWrapper::GetStringUnknown, "C++: PlayerReplicationInfoWrapper::GetStringUnknown() --> class UnrealStringWrapper");
		cl.def("GetKills", (int (PlayerReplicationInfoWrapper::*)()) & PlayerReplicationInfoWrapper::GetKills, "C++: PlayerReplicationInfoWrapper::GetKills() --> int");
		cl.def("SetKills", (void (PlayerReplicationInfoWrapper::*)(int)) & PlayerReplicationInfoWrapper::SetKills, "C++: PlayerReplicationInfoWrapper::SetKills(int) --> void", "newKills"_a);
		cl.def("GetExactPing", (float (PlayerReplicationInfoWrapper::*)()) & PlayerReplicationInfoWrapper::GetExactPing, "C++: PlayerReplicationInfoWrapper::GetExactPing() --> float");
		cl.def("SetExactPing", (void (PlayerReplicationInfoWrapper::*)(float)) & PlayerReplicationInfoWrapper::SetExactPing, "C++: PlayerReplicationInfoWrapper::SetExactPing(float) --> void", "newExactPing"_a);
		cl.def("GetSavedNetworkAddress", (class UnrealStringWrapper(PlayerReplicationInfoWrapper::*)()) & PlayerReplicationInfoWrapper::GetSavedNetworkAddress, "C++: PlayerReplicationInfoWrapper::GetSavedNetworkAddress() --> class UnrealStringWrapper");
		// 'PlayerReplicationInfoWrapper::GetUniqueId': Use GetUniqueIdWrapper instead
		// cl.def("GetUniqueId", (struct SteamID(PlayerReplicationInfoWrapper::*)()) & PlayerReplicationInfoWrapper::GetUniqueId, "C++: PlayerReplicationInfoWrapper::GetUniqueId() --> struct SteamID");
		cl.def("GetUniqueId", (class UniqueIDWrapper(PlayerReplicationInfoWrapper::*)())& PlayerReplicationInfoWrapper::GetUniqueIdWrapper, "C++: PlayerReplicationInfoWrapper::GetUniqueIdWrapper() --> class UniqueIDWrapper");
		// 'PlayerReplicationInfoWrapper::SetUniqueId': Use SetUniqueId that takes UniqueIDWrapper instead
		// cl.def("SetUniqueId", (void (PlayerReplicationInfoWrapper::*)(struct SteamID)) & PlayerReplicationInfoWrapper::SetUniqueId, "C++: PlayerReplicationInfoWrapper::SetUniqueId(struct SteamID) --> void", "newUniqueId"_a);
		cl.def("SetUniqueId", (void (PlayerReplicationInfoWrapper::*)(class UniqueIDWrapper))& PlayerReplicationInfoWrapper::SetUniqueId, "C++: PlayerReplicationInfoWrapper::SetUniqueId(class UniqueIDWrapper) --> void", "newUniqueId"_a);
		cl.def("UnregisterPlayerFromSession", (void (PlayerReplicationInfoWrapper::*)()) & PlayerReplicationInfoWrapper::UnregisterPlayerFromSession, "C++: PlayerReplicationInfoWrapper::UnregisterPlayerFromSession() --> void");
		cl.def("RegisterPlayerWithSession", (void (PlayerReplicationInfoWrapper::*)()) & PlayerReplicationInfoWrapper::RegisterPlayerWithSession, "C++: PlayerReplicationInfoWrapper::RegisterPlayerWithSession() --> void");
		cl.def("IsInvalidName", (bool (PlayerReplicationInfoWrapper::*)()) & PlayerReplicationInfoWrapper::IsInvalidName, "C++: PlayerReplicationInfoWrapper::IsInvalidName() --> bool");
		cl.def("GetTeamNum", (unsigned char (PlayerReplicationInfoWrapper::*)()) & PlayerReplicationInfoWrapper::GetTeamNum, "C++: PlayerReplicationInfoWrapper::GetTeamNum() --> unsigned char");
		// 'PlayerReplicationInfoWrapper::SetUniqueId2': Use SetUniqueId2 that takes UniqueIDWrapper instead
		// cl.def("SetUniqueId2", (void (PlayerReplicationInfoWrapper::*)(struct SteamID&)) & PlayerReplicationInfoWrapper::SetUniqueId2, "C++: PlayerReplicationInfoWrapper::SetUniqueId2(struct SteamID &) --> void", "PlayerUniqueId"_a);
		cl.def("SetUniqueId2", (void (PlayerReplicationInfoWrapper::*)(class UniqueIDWrapper&))& PlayerReplicationInfoWrapper::SetUniqueId2, "C++: PlayerReplicationInfoWrapper::SetUniqueId2(class UniqueIDWrapper &) --> void", "PlayerUniqueId"_a);
		cl.def("SeamlessTravelTo", (void (PlayerReplicationInfoWrapper::*)(class PlayerReplicationInfoWrapper)) & PlayerReplicationInfoWrapper::SeamlessTravelTo, "C++: PlayerReplicationInfoWrapper::SeamlessTravelTo(class PlayerReplicationInfoWrapper) --> void", "NewPRI"_a);
		cl.def("IncrementDeaths", (void (PlayerReplicationInfoWrapper::*)(int)) & PlayerReplicationInfoWrapper::IncrementDeaths, "C++: PlayerReplicationInfoWrapper::IncrementDeaths(int) --> void", "Amt"_a);
		cl.def("CopyProperties", (void (PlayerReplicationInfoWrapper::*)(class PlayerReplicationInfoWrapper)) & PlayerReplicationInfoWrapper::CopyProperties, "C++: PlayerReplicationInfoWrapper::CopyProperties(class PlayerReplicationInfoWrapper) --> void", "PRI"_a);
		cl.def("OverrideWith", (void (PlayerReplicationInfoWrapper::*)(class PlayerReplicationInfoWrapper)) & PlayerReplicationInfoWrapper::OverrideWith, "C++: PlayerReplicationInfoWrapper::OverrideWith(class PlayerReplicationInfoWrapper) --> void", "PRI"_a);
		cl.def("Duplicate", (class PlayerReplicationInfoWrapper(PlayerReplicationInfoWrapper::*)()) & PlayerReplicationInfoWrapper::Duplicate, "C++: PlayerReplicationInfoWrapper::Duplicate() --> class PlayerReplicationInfoWrapper");
		cl.def("SetWaitingPlayer", (void (PlayerReplicationInfoWrapper::*)(unsigned long)) & PlayerReplicationInfoWrapper::SetWaitingPlayer, "C++: PlayerReplicationInfoWrapper::SetWaitingPlayer(unsigned long) --> void", "B"_a);
		cl.def("eventSetPlayerName", (void (PlayerReplicationInfoWrapper::*)(std::string)) & PlayerReplicationInfoWrapper::eventSetPlayerName, "C++: PlayerReplicationInfoWrapper::eventSetPlayerName(std::string) --> void", "S"_a);
		cl.def("Reset", (void (PlayerReplicationInfoWrapper::*)()) & PlayerReplicationInfoWrapper::Reset, "C++: PlayerReplicationInfoWrapper::Reset() --> void");
		cl.def("eventDestroyed", (void (PlayerReplicationInfoWrapper::*)()) & PlayerReplicationInfoWrapper::eventDestroyed, "C++: PlayerReplicationInfoWrapper::eventDestroyed() --> void");
		cl.def("Unregister2", (void (PlayerReplicationInfoWrapper::*)()) & PlayerReplicationInfoWrapper::Unregister2, "C++: PlayerReplicationInfoWrapper::Unregister2() --> void");
		cl.def("UpdatePing", (void (PlayerReplicationInfoWrapper::*)(float)) & PlayerReplicationInfoWrapper::UpdatePing, "C++: PlayerReplicationInfoWrapper::UpdatePing(float) --> void", "TimeStamp"_a);
		cl.def("RemoteUserDataReplicated", (void (PlayerReplicationInfoWrapper::*)()) & PlayerReplicationInfoWrapper::RemoteUserDataReplicated, "C++: PlayerReplicationInfoWrapper::RemoteUserDataReplicated() --> void");
		cl.def("SetPlayerTeam", (void (PlayerReplicationInfoWrapper::*)(class TeamInfoWrapper)) & PlayerReplicationInfoWrapper::SetPlayerTeam, "C++: PlayerReplicationInfoWrapper::SetPlayerTeam(class TeamInfoWrapper) --> void", "NewTeam"_a);
		cl.def("eventClientFillRemoteUserData", (void (PlayerReplicationInfoWrapper::*)()) & PlayerReplicationInfoWrapper::eventClientFillRemoteUserData, "C++: PlayerReplicationInfoWrapper::eventClientFillRemoteUserData() --> void");
		cl.def("eventPostBeginPlay", (void (PlayerReplicationInfoWrapper::*)()) & PlayerReplicationInfoWrapper::eventPostBeginPlay, "C++: PlayerReplicationInfoWrapper::eventPostBeginPlay() --> void");
		cl.def("eventOnOwnerChanged", (void (PlayerReplicationInfoWrapper::*)()) & PlayerReplicationInfoWrapper::eventOnOwnerChanged, "C++: PlayerReplicationInfoWrapper::eventOnOwnerChanged() --> void");
		cl.def("eventConstruct", (void (PlayerReplicationInfoWrapper::*)()) & PlayerReplicationInfoWrapper::eventConstruct, "C++: PlayerReplicationInfoWrapper::eventConstruct() --> void");
	}
	{ // PriXWrapper file: line:8
		pybind11::class_<PriXWrapper, std::shared_ptr<PriXWrapper>, PlayerReplicationInfoWrapper> cl(M, "PriXWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](PriXWrapper const& o) { return new PriXWrapper(o); }));
		cl.def("assign", (class PriXWrapper& (PriXWrapper::*)(class PriXWrapper)) & PriXWrapper::operator=, "C++: PriXWrapper::operator=(class PriXWrapper) --> class PriXWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("eventDestroyed", (void (PriXWrapper::*)()) & PriXWrapper::eventDestroyed, "C++: PriXWrapper::eventDestroyed() --> void");
		cl.def("OnUniqueIdChanged", (void (PriXWrapper::*)()) & PriXWrapper::OnUniqueIdChanged, "C++: PriXWrapper::OnUniqueIdChanged() --> void");
		// 'PriWrapper::SetUniqueId': Function definition is empty and thus will not work
		// cl.def("SetUniqueId", (void (PriXWrapper::*)(struct SteamID&)) & PriXWrapper::SetUniqueId, "C++: PriXWrapper::SetUniqueId(struct SteamID &) --> void", "PlayerUniqueId"_a);
		cl.def("UnregisterPlayerFromSession", (void (PriXWrapper::*)()) & PriXWrapper::UnregisterPlayerFromSession, "C++: PriXWrapper::UnregisterPlayerFromSession() --> void");
		cl.def("RegisterPlayerWithSession", (void (PriXWrapper::*)()) & PriXWrapper::RegisterPlayerWithSession, "C++: PriXWrapper::RegisterPlayerWithSession() --> void");
		cl.def("OnTeamChanged", (void (PriXWrapper::*)()) & PriXWrapper::OnTeamChanged, "C++: PriXWrapper::OnTeamChanged() --> void");
		cl.def("SetPlayerTeam", (void (PriXWrapper::*)(class TeamInfoWrapper)) & PriXWrapper::SetPlayerTeam, "C++: PriXWrapper::SetPlayerTeam(class TeamInfoWrapper) --> void", "NewTeam"_a);
		cl.def("eventOnOwnerChanged", (void (PriXWrapper::*)()) & PriXWrapper::eventOnOwnerChanged, "C++: PriXWrapper::eventOnOwnerChanged() --> void");
		cl.def("eventSetPlayerName", (void (PriXWrapper::*)(std::string)) & PriXWrapper::eventSetPlayerName, "C++: PriXWrapper::eventSetPlayerName(std::string) --> void", "S"_a);
		cl.def("EventDestroyed", (void (PriXWrapper::*)(class PriXWrapper)) & PriXWrapper::EventDestroyed, "C++: PriXWrapper::EventDestroyed(class PriXWrapper) --> void", "PRI"_a);
		cl.def("EventTeamChanged", (void (PriXWrapper::*)(class PriXWrapper)) & PriXWrapper::EventTeamChanged, "C++: PriXWrapper::EventTeamChanged(class PriXWrapper) --> void", "PRI"_a);
		cl.def("EventUniqueIdChanged", (void (PriXWrapper::*)(class PriXWrapper)) & PriXWrapper::EventUniqueIdChanged, "C++: PriXWrapper::EventUniqueIdChanged(class PriXWrapper) --> void", "PRI"_a);
		cl.def("EventPlayerNameChanged", (void (PriXWrapper::*)(class PriXWrapper)) & PriXWrapper::EventPlayerNameChanged, "C++: PriXWrapper::EventPlayerNameChanged(class PriXWrapper) --> void", "PRI"_a);
	}
	{ // PriWrapper file: line:12
		pybind11::class_<PriWrapper, std::shared_ptr<PriWrapper>, PriXWrapper> cl(M, "PriWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](PriWrapper const& o) { return new PriWrapper(o); }));
		cl.def("assign", (class PriWrapper& (PriWrapper::*)(class PriWrapper)) & PriWrapper::operator=, "C++: PriWrapper::operator=(class PriWrapper) --> class PriWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetMatchScore", (int (PriWrapper::*)()) & PriWrapper::GetMatchScore, "C++: PriWrapper::GetMatchScore() --> int");
		cl.def("SetMatchScore", (void (PriWrapper::*)(int)) & PriWrapper::SetMatchScore, "C++: PriWrapper::SetMatchScore(int) --> void", "newMatchScore"_a);
		cl.def("GetMatchGoals", (int (PriWrapper::*)()) & PriWrapper::GetMatchGoals, "C++: PriWrapper::GetMatchGoals() --> int");
		cl.def("SetMatchGoals", (void (PriWrapper::*)(int)) & PriWrapper::SetMatchGoals, "C++: PriWrapper::SetMatchGoals(int) --> void", "newMatchGoals"_a);
		cl.def("GetMatchOwnGoals", (int (PriWrapper::*)()) & PriWrapper::GetMatchOwnGoals, "C++: PriWrapper::GetMatchOwnGoals() --> int");
		cl.def("SetMatchOwnGoals", (void (PriWrapper::*)(int)) & PriWrapper::SetMatchOwnGoals, "C++: PriWrapper::SetMatchOwnGoals(int) --> void", "newMatchOwnGoals"_a);
		cl.def("GetMatchAssists", (int (PriWrapper::*)()) & PriWrapper::GetMatchAssists, "C++: PriWrapper::GetMatchAssists() --> int");
		cl.def("SetMatchAssists", (void (PriWrapper::*)(int)) & PriWrapper::SetMatchAssists, "C++: PriWrapper::SetMatchAssists(int) --> void", "newMatchAssists"_a);
		cl.def("GetMatchSaves", (int (PriWrapper::*)()) & PriWrapper::GetMatchSaves, "C++: PriWrapper::GetMatchSaves() --> int");
		cl.def("SetMatchSaves", (void (PriWrapper::*)(int)) & PriWrapper::SetMatchSaves, "C++: PriWrapper::SetMatchSaves(int) --> void", "newMatchSaves"_a);
		cl.def("GetMatchShots", (int (PriWrapper::*)()) & PriWrapper::GetMatchShots, "C++: PriWrapper::GetMatchShots() --> int");
		cl.def("SetMatchShots", (void (PriWrapper::*)(int)) & PriWrapper::SetMatchShots, "C++: PriWrapper::SetMatchShots(int) --> void", "newMatchShots"_a);
		cl.def("GetMatchDemolishes", (int (PriWrapper::*)()) & PriWrapper::GetMatchDemolishes, "C++: PriWrapper::GetMatchDemolishes() --> int");
		cl.def("SetMatchDemolishes", (void (PriWrapper::*)(int)) & PriWrapper::SetMatchDemolishes, "C++: PriWrapper::SetMatchDemolishes(int) --> void", "newMatchDemolishes"_a);
		cl.def("GetMatchBonusXP", (int (PriWrapper::*)()) & PriWrapper::GetMatchBonusXP, "C++: PriWrapper::GetMatchBonusXP() --> int");
		cl.def("SetMatchBonusXP", (void (PriWrapper::*)(int)) & PriWrapper::SetMatchBonusXP, "C++: PriWrapper::SetMatchBonusXP(int) --> void", "newMatchBonusXP"_a);
		cl.def("GetMatchBreakoutDamage", (int (PriWrapper::*)()) & PriWrapper::GetMatchBreakoutDamage, "C++: PriWrapper::GetMatchBreakoutDamage() --> int");
		cl.def("SetMatchBreakoutDamage", (void (PriWrapper::*)(int)) & PriWrapper::SetMatchBreakoutDamage, "C++: PriWrapper::SetMatchBreakoutDamage(int) --> void", "newMatchBreakoutDamage"_a);
		cl.def("GetbMatchMVP", (unsigned long (PriWrapper::*)()) & PriWrapper::GetbMatchMVP, "C++: PriWrapper::GetbMatchMVP() --> unsigned long");
		cl.def("SetbMatchMVP", (void (PriWrapper::*)(unsigned long)) & PriWrapper::SetbMatchMVP, "C++: PriWrapper::SetbMatchMVP(unsigned long) --> void", "newbMatchMVP"_a);
		cl.def("GetbMatchAdmin", (unsigned long (PriWrapper::*)()) & PriWrapper::GetbMatchAdmin, "C++: PriWrapper::GetbMatchAdmin() --> unsigned long");
		cl.def("SetbMatchAdmin", (void (PriWrapper::*)(unsigned long)) & PriWrapper::SetbMatchAdmin, "C++: PriWrapper::SetbMatchAdmin(unsigned long) --> void", "newbMatchAdmin"_a);
		cl.def("GetbLoadoutSet", (unsigned long (PriWrapper::*)()) & PriWrapper::GetbLoadoutSet, "C++: PriWrapper::GetbLoadoutSet() --> unsigned long");
		cl.def("SetbLoadoutSet", (void (PriWrapper::*)(unsigned long)) & PriWrapper::SetbLoadoutSet, "C++: PriWrapper::SetbLoadoutSet(unsigned long) --> void", "newbLoadoutSet"_a);
		cl.def("GetbOnlineLoadoutSet", (unsigned long (PriWrapper::*)()) & PriWrapper::GetbOnlineLoadoutSet, "C++: PriWrapper::GetbOnlineLoadoutSet() --> unsigned long");
		cl.def("SetbOnlineLoadoutSet", (void (PriWrapper::*)(unsigned long)) & PriWrapper::SetbOnlineLoadoutSet, "C++: PriWrapper::SetbOnlineLoadoutSet(unsigned long) --> void", "newbOnlineLoadoutSet"_a);
		cl.def("GetbLoadoutsSet", (unsigned long (PriWrapper::*)()) & PriWrapper::GetbLoadoutsSet, "C++: PriWrapper::GetbLoadoutsSet() --> unsigned long");
		cl.def("SetbLoadoutsSet", (void (PriWrapper::*)(unsigned long)) & PriWrapper::SetbLoadoutsSet, "C++: PriWrapper::SetbLoadoutsSet(unsigned long) --> void", "newbLoadoutsSet"_a);
		cl.def("GetbOnlineLoadoutsSet", (unsigned long (PriWrapper::*)()) & PriWrapper::GetbOnlineLoadoutsSet, "C++: PriWrapper::GetbOnlineLoadoutsSet() --> unsigned long");
		cl.def("SetbOnlineLoadoutsSet", (void (PriWrapper::*)(unsigned long)) & PriWrapper::SetbOnlineLoadoutsSet, "C++: PriWrapper::SetbOnlineLoadoutsSet(unsigned long) --> void", "newbOnlineLoadoutsSet"_a);
		cl.def("GetbTeamPaintSet", (unsigned long (PriWrapper::*)()) & PriWrapper::GetbTeamPaintSet, "C++: PriWrapper::GetbTeamPaintSet() --> unsigned long");
		cl.def("SetbTeamPaintSet", (void (PriWrapper::*)(unsigned long)) & PriWrapper::SetbTeamPaintSet, "C++: PriWrapper::SetbTeamPaintSet(unsigned long) --> void", "newbTeamPaintSet"_a);
		cl.def("GetbReady", (unsigned long (PriWrapper::*)()) & PriWrapper::GetbReady, "C++: PriWrapper::GetbReady() --> unsigned long");
		cl.def("SetbReady", (void (PriWrapper::*)(unsigned long)) & PriWrapper::SetbReady, "C++: PriWrapper::SetbReady(unsigned long) --> void", "newbReady"_a);
		cl.def("GetbBusy", (unsigned long (PriWrapper::*)()) & PriWrapper::GetbBusy, "C++: PriWrapper::GetbBusy() --> unsigned long");
		cl.def("SetbBusy", (void (PriWrapper::*)(unsigned long)) & PriWrapper::SetbBusy, "C++: PriWrapper::SetbBusy(unsigned long) --> void", "newbBusy"_a);
		cl.def("GetbUsingSecondaryCamera", (unsigned long (PriWrapper::*)()) & PriWrapper::GetbUsingSecondaryCamera, "C++: PriWrapper::GetbUsingSecondaryCamera() --> unsigned long");
		cl.def("SetbUsingSecondaryCamera", (void (PriWrapper::*)(unsigned long)) & PriWrapper::SetbUsingSecondaryCamera, "C++: PriWrapper::SetbUsingSecondaryCamera(unsigned long) --> void", "newbUsingSecondaryCamera"_a);
		cl.def("GetbUsingBehindView", (unsigned long (PriWrapper::*)()) & PriWrapper::GetbUsingBehindView, "C++: PriWrapper::GetbUsingBehindView() --> unsigned long");
		cl.def("SetbUsingBehindView", (void (PriWrapper::*)(unsigned long)) & PriWrapper::SetbUsingBehindView, "C++: PriWrapper::SetbUsingBehindView(unsigned long) --> void", "newbUsingBehindView"_a);
		cl.def("GetbUsingFreecam", (unsigned long (PriWrapper::*)()) & PriWrapper::GetbUsingFreecam, "C++: PriWrapper::GetbUsingFreecam() --> unsigned long");
		cl.def("SetbUsingFreecam", (void (PriWrapper::*)(unsigned long)) & PriWrapper::SetbUsingFreecam, "C++: PriWrapper::SetbUsingFreecam(unsigned long) --> void", "newbUsingFreecam"_a);
		cl.def("GetbIsInSplitScreen", (unsigned long (PriWrapper::*)()) & PriWrapper::GetbIsInSplitScreen, "C++: PriWrapper::GetbIsInSplitScreen() --> unsigned long");
		cl.def("SetbIsInSplitScreen", (void (PriWrapper::*)(unsigned long)) & PriWrapper::SetbIsInSplitScreen, "C++: PriWrapper::SetbIsInSplitScreen(unsigned long) --> void", "newbIsInSplitScreen"_a);
		cl.def("GetbStartVoteToForfeitDisabled", (unsigned long (PriWrapper::*)()) & PriWrapper::GetbStartVoteToForfeitDisabled, "C++: PriWrapper::GetbStartVoteToForfeitDisabled() --> unsigned long");
		cl.def("SetbStartVoteToForfeitDisabled", (void (PriWrapper::*)(unsigned long)) & PriWrapper::SetbStartVoteToForfeitDisabled, "C++: PriWrapper::SetbStartVoteToForfeitDisabled(unsigned long) --> void", "newbStartVoteToForfeitDisabled"_a);
		cl.def("GetbUsingItems", (unsigned long (PriWrapper::*)()) & PriWrapper::GetbUsingItems, "C++: PriWrapper::GetbUsingItems() --> unsigned long");
		cl.def("SetbUsingItems", (void (PriWrapper::*)(unsigned long)) & PriWrapper::SetbUsingItems, "C++: PriWrapper::SetbUsingItems(unsigned long) --> void", "newbUsingItems"_a);
		cl.def("GetPlayerHistoryValid", (unsigned long (PriWrapper::*)()) & PriWrapper::GetPlayerHistoryValid, "C++: PriWrapper::GetPlayerHistoryValid() --> unsigned long");
		cl.def("SetPlayerHistoryValid", (void (PriWrapper::*)(unsigned long)) & PriWrapper::SetPlayerHistoryValid, "C++: PriWrapper::SetPlayerHistoryValid(unsigned long) --> void", "newPlayerHistoryValid"_a);
		cl.def("GetGameEvent", (class GameEventWrapper(PriWrapper::*)()) & PriWrapper::GetGameEvent, "C++: PriWrapper::GetGameEvent() --> class GameEventWrapper");
		cl.def("SetGameEvent", (void (PriWrapper::*)(class GameEventWrapper)) & PriWrapper::SetGameEvent, "C++: PriWrapper::SetGameEvent(class GameEventWrapper) --> void", "newGameEvent"_a);
		cl.def("GetReplicatedGameEvent", (class GameEventWrapper(PriWrapper::*)()) & PriWrapper::GetReplicatedGameEvent, "C++: PriWrapper::GetReplicatedGameEvent() --> class GameEventWrapper");
		cl.def("SetReplicatedGameEvent", (void (PriWrapper::*)(class GameEventWrapper)) & PriWrapper::SetReplicatedGameEvent, "C++: PriWrapper::SetReplicatedGameEvent(class GameEventWrapper) --> void", "newReplicatedGameEvent"_a);
		cl.def("GetCar", (class CarWrapper(PriWrapper::*)()) & PriWrapper::GetCar, "C++: PriWrapper::GetCar() --> class CarWrapper");
		cl.def("SetCar", (void (PriWrapper::*)(class CarWrapper)) & PriWrapper::SetCar, "C++: PriWrapper::SetCar(class CarWrapper) --> void", "newCar"_a);
		cl.def("GetRespawnTimeRemaining", (int (PriWrapper::*)()) & PriWrapper::GetRespawnTimeRemaining, "C++: PriWrapper::GetRespawnTimeRemaining() --> int");
		cl.def("SetRespawnTimeRemaining", (void (PriWrapper::*)(int)) & PriWrapper::SetRespawnTimeRemaining, "C++: PriWrapper::SetRespawnTimeRemaining(int) --> void", "newRespawnTimeRemaining"_a);
		cl.def("GetWaitingStartTime", (int (PriWrapper::*)()) & PriWrapper::GetWaitingStartTime, "C++: PriWrapper::GetWaitingStartTime() --> int");
		cl.def("SetWaitingStartTime", (void (PriWrapper::*)(int)) & PriWrapper::SetWaitingStartTime, "C++: PriWrapper::SetWaitingStartTime(int) --> void", "newWaitingStartTime"_a);
		cl.def("GetTotalGameTimePlayed", (float (PriWrapper::*)()) & PriWrapper::GetTotalGameTimePlayed, "C++: PriWrapper::GetTotalGameTimePlayed() --> float");
		cl.def("SetTotalGameTimePlayed", (void (PriWrapper::*)(float)) & PriWrapper::SetTotalGameTimePlayed, "C++: PriWrapper::SetTotalGameTimePlayed(float) --> void", "newTotalGameTimePlayed"_a);
		cl.def("GetCameraSettings", (struct ProfileCameraSettings(PriWrapper::*)()) & PriWrapper::GetCameraSettings, "C++: PriWrapper::GetCameraSettings() --> struct ProfileCameraSettings");
		cl.def("SetCameraSettings", (void (PriWrapper::*)(struct ProfileCameraSettings)) & PriWrapper::SetCameraSettings, "C++: PriWrapper::SetCameraSettings(struct ProfileCameraSettings) --> void", "newCameraSettings"_a);
		cl.def("GetCameraPitch", (unsigned char (PriWrapper::*)()) & PriWrapper::GetCameraPitch, "C++: PriWrapper::GetCameraPitch() --> unsigned char");
		cl.def("SetCameraPitch", (void (PriWrapper::*)(unsigned char)) & PriWrapper::SetCameraPitch, "C++: PriWrapper::SetCameraPitch(unsigned char) --> void", "newCameraPitch"_a);
		cl.def("GetCameraYaw", (unsigned char (PriWrapper::*)()) & PriWrapper::GetCameraYaw, "C++: PriWrapper::GetCameraYaw() --> unsigned char");
		cl.def("SetCameraYaw", (void (PriWrapper::*)(unsigned char)) & PriWrapper::SetCameraYaw, "C++: PriWrapper::SetCameraYaw(unsigned char) --> void", "newCameraYaw"_a);
		cl.def("GetPawnType", (unsigned char (PriWrapper::*)()) & PriWrapper::GetPawnType, "C++: PriWrapper::GetPawnType() --> unsigned char");
		cl.def("SetPawnType", (void (PriWrapper::*)(unsigned char)) & PriWrapper::SetPawnType, "C++: PriWrapper::SetPawnType(unsigned char) --> void", "newPawnType"_a);
		cl.def("GetReplicatedWorstNetQualityBeyondLatency", (unsigned char (PriWrapper::*)()) & PriWrapper::GetReplicatedWorstNetQualityBeyondLatency, "C++: PriWrapper::GetReplicatedWorstNetQualityBeyondLatency() --> unsigned char");
		cl.def("SetReplicatedWorstNetQualityBeyondLatency", (void (PriWrapper::*)(unsigned char)) & PriWrapper::SetReplicatedWorstNetQualityBeyondLatency, "C++: PriWrapper::SetReplicatedWorstNetQualityBeyondLatency(unsigned char) --> void", "newReplicatedWorstNetQualityBeyondLatency"_a);
		// 'PriWrapper::GetPartyLeader': Use GetPartyLeaderID instead
		// cl.def("GetPartyLeader", (struct SteamID(PriWrapper::*)()) & PriWrapper::GetPartyLeader, "C++: PriWrapper::GetPartyLeader() --> struct SteamID");
		cl.def("GetPartyLeaderID", (class UniqueIDWrapper(PriWrapper::*)())& PriWrapper::GetPartyLeaderID, "C++: PriWrapper::GetPartyLeaderID() --> class UniqueIDWrapper");
		cl.def("SetPartyLeader", (void (PriWrapper::*)(class UniqueIDWrapper)) & PriWrapper::SetPartyLeader, "C++: PriWrapper::SetPartyLeader(struct UniqueIDWrapper) --> void", "newPartyLeader"_a);
		cl.def("GetDodgeInputThreshold", (float (PriWrapper::*)()) & PriWrapper::GetDodgeInputThreshold, "C++: PriWrapper::GetDodgeInputThreshold() --> float");
		cl.def("SetDodgeInputThreshold", (void (PriWrapper::*)(float)) & PriWrapper::SetDodgeInputThreshold, "C++: PriWrapper::SetDodgeInputThreshold(float) --> void", "newDodgeInputThreshold"_a);
		cl.def("GetSteeringSensitivity", (float (PriWrapper::*)()) & PriWrapper::GetSteeringSensitivity, "C++: PriWrapper::GetSteeringSensitivity() --> float");
		cl.def("SetSteeringSensitivity", (void (PriWrapper::*)(float)) & PriWrapper::SetSteeringSensitivity, "C++: PriWrapper::SetSteeringSensitivity(float) --> void", "newSteeringSensitivity"_a);
		cl.def("GetAirControlSensitivity", (float (PriWrapper::*)()) & PriWrapper::GetAirControlSensitivity, "C++: PriWrapper::GetAirControlSensitivity() --> float");
		cl.def("SetAirControlSensitivity", (void (PriWrapper::*)(float)) & PriWrapper::SetAirControlSensitivity, "C++: PriWrapper::SetAirControlSensitivity(float) --> void", "newAirControlSensitivity"_a);
		cl.def("GetNextTimeRestrictedStatEventAllowedTime", (float (PriWrapper::*)()) & PriWrapper::GetNextTimeRestrictedStatEventAllowedTime, "C++: PriWrapper::GetNextTimeRestrictedStatEventAllowedTime() --> float");
		cl.def("SetNextTimeRestrictedStatEventAllowedTime", (void (PriWrapper::*)(float)) & PriWrapper::SetNextTimeRestrictedStatEventAllowedTime, "C++: PriWrapper::SetNextTimeRestrictedStatEventAllowedTime(float) --> void", "newNextTimeRestrictedStatEventAllowedTime"_a);
		cl.def("GetLastTimeRestrictedStatEventTime", (float (PriWrapper::*)()) & PriWrapper::GetLastTimeRestrictedStatEventTime, "C++: PriWrapper::GetLastTimeRestrictedStatEventTime() --> float");
		cl.def("SetLastTimeRestrictedStatEventTime", (void (PriWrapper::*)(float)) & PriWrapper::SetLastTimeRestrictedStatEventTime, "C++: PriWrapper::SetLastTimeRestrictedStatEventTime(float) --> void", "newLastTimeRestrictedStatEventTime"_a);
		cl.def("GetTimeTillItem", (int (PriWrapper::*)()) & PriWrapper::GetTimeTillItem, "C++: PriWrapper::GetTimeTillItem() --> int");
		cl.def("SetTimeTillItem", (void (PriWrapper::*)(int)) & PriWrapper::SetTimeTillItem, "C++: PriWrapper::SetTimeTillItem(int) --> void", "newTimeTillItem"_a);
		cl.def("GetMaxTimeTillItem", (int (PriWrapper::*)()) & PriWrapper::GetMaxTimeTillItem, "C++: PriWrapper::GetMaxTimeTillItem() --> int");
		cl.def("SetMaxTimeTillItem", (void (PriWrapper::*)(int)) & PriWrapper::SetMaxTimeTillItem, "C++: PriWrapper::SetMaxTimeTillItem(int) --> void", "newMaxTimeTillItem"_a);
		cl.def("GetBoostPickups", (int (PriWrapper::*)()) & PriWrapper::GetBoostPickups, "C++: PriWrapper::GetBoostPickups() --> int");
		cl.def("SetBoostPickups", (void (PriWrapper::*)(int)) & PriWrapper::SetBoostPickups, "C++: PriWrapper::SetBoostPickups(int) --> void", "newBoostPickups"_a);
		cl.def("GetBallTouches", (int (PriWrapper::*)()) & PriWrapper::GetBallTouches, "C++: PriWrapper::GetBallTouches() --> int");
		cl.def("SetBallTouches", (void (PriWrapper::*)(int)) & PriWrapper::SetBallTouches, "C++: PriWrapper::SetBallTouches(int) --> void", "newBallTouches"_a);
		cl.def("GetCarTouches", (int (PriWrapper::*)()) & PriWrapper::GetCarTouches, "C++: PriWrapper::GetCarTouches() --> int");
		cl.def("SetCarTouches", (void (PriWrapper::*)(int)) & PriWrapper::SetCarTouches, "C++: PriWrapper::SetCarTouches(int) --> void", "newCarTouches"_a);
		cl.def("GetReplacingBotPRI", (class PriWrapper(PriWrapper::*)()) & PriWrapper::GetReplacingBotPRI, "C++: PriWrapper::GetReplacingBotPRI() --> class PriWrapper");
		cl.def("SetReplacingBotPRI", (void (PriWrapper::*)(class PriWrapper)) & PriWrapper::SetReplacingBotPRI, "C++: PriWrapper::SetReplacingBotPRI(class PriWrapper) --> void", "newReplacingBotPRI"_a);
		cl.def("GetClubID", (unsigned long long (PriWrapper::*)()) & PriWrapper::GetClubID, "C++: PriWrapper::GetClubID() --> unsigned long long");
		cl.def("SetClubID", (void (PriWrapper::*)(unsigned long long)) & PriWrapper::SetClubID, "C++: PriWrapper::SetClubID(unsigned long long) --> void", "newClubID"_a);
		cl.def("GetPublicIP", (class UnrealStringWrapper(PriWrapper::*)()) & PriWrapper::GetPublicIP, "C++: PriWrapper::GetPublicIP() --> class UnrealStringWrapper");
		cl.def("GetSpectatorShortcut", (int (PriWrapper::*)()) & PriWrapper::GetSpectatorShortcut, "C++: PriWrapper::GetSpectatorShortcut() --> int");
		cl.def("SetSpectatorShortcut", (void (PriWrapper::*)(int)) & PriWrapper::SetSpectatorShortcut, "C++: PriWrapper::SetSpectatorShortcut(int) --> void", "newSpectatorShortcut"_a);
		cl.def("__ClubID__ChangeNotifyFunc", (void (PriWrapper::*)()) & PriWrapper::__ClubID__ChangeNotifyFunc, "C++: PriWrapper::__ClubID__ChangeNotifyFunc() --> void");
		cl.def("__PREI__ChangeNotifyFunc", (void (PriWrapper::*)()) & PriWrapper::__PREI__ChangeNotifyFunc, "C++: PriWrapper::__PREI__ChangeNotifyFunc() --> void");
		cl.def("__ReplicatedWorstNetQualityBeyondLatency__ChangeNotifyFunc", (void (PriWrapper::*)()) & PriWrapper::__ReplicatedWorstNetQualityBeyondLatency__ChangeNotifyFunc, "C++: PriWrapper::__ReplicatedWorstNetQualityBeyondLatency__ChangeNotifyFunc() --> void");
		cl.def("eventDestroyed", (void (PriWrapper::*)()) & PriWrapper::eventDestroyed, "C++: PriWrapper::eventDestroyed() --> void");
		cl.def("OnSpectatorShortcutChanged", (void (PriWrapper::*)()) & PriWrapper::OnSpectatorShortcutChanged, "C++: PriWrapper::OnSpectatorShortcutChanged() --> void");
		cl.def("SetSpectatorShortcut2", (void (PriWrapper::*)(int)) & PriWrapper::SetSpectatorShortcut2, "C++: PriWrapper::SetSpectatorShortcut2(int) --> void", "InShortcut"_a);
		cl.def("ServerSetPublicIP", (void (PriWrapper::*)(std::string)) & PriWrapper::ServerSetPublicIP, "C++: PriWrapper::ServerSetPublicIP(std::string) --> void", "IP"_a);
		cl.def("OnUniqueIdChanged", (void (PriWrapper::*)()) & PriWrapper::OnUniqueIdChanged, "C++: PriWrapper::OnUniqueIdChanged() --> void");
		cl.def("UpdatePlayerAvatarBorder", (void (PriWrapper::*)()) & PriWrapper::UpdatePlayerAvatarBorder, "C++: PriWrapper::UpdatePlayerAvatarBorder() --> void");
		cl.def("UpdatePlayerBanner", (void (PriWrapper::*)()) & PriWrapper::UpdatePlayerBanner, "C++: PriWrapper::UpdatePlayerBanner() --> void");
		cl.def("ClientAchievementProgression", (void (PriWrapper::*)(int, unsigned char, float, float)) & PriWrapper::ClientAchievementProgression, "C++: PriWrapper::ClientAchievementProgression(int, unsigned char, float, float) --> void", "AchievementId"_a, "AchievementType"_a, "Progress"_a, "MaxProgress"_a);
		cl.def("ClientUnlockAchievement", (void (PriWrapper::*)(int, unsigned char)) & PriWrapper::ClientUnlockAchievement, "C++: PriWrapper::ClientUnlockAchievement(int, unsigned char) --> void", "AchievementId"_a, "AchievementType"_a);
		cl.def("ServerSetPlayerActivatedFX", (void (PriWrapper::*)(class FXActorWrapper)) & PriWrapper::ServerSetPlayerActivatedFX, "C++: PriWrapper::ServerSetPlayerActivatedFX(class FXActorWrapper) --> void", "FX"_a);
		cl.def("UpdateCarLocalPlayer", (void (PriWrapper::*)()) & PriWrapper::UpdateCarLocalPlayer, "C++: PriWrapper::UpdateCarLocalPlayer() --> void");
		cl.def("OnReplacingBotPRIChanged", (void (PriWrapper::*)()) & PriWrapper::OnReplacingBotPRIChanged, "C++: PriWrapper::OnReplacingBotPRIChanged() --> void");
		cl.def("OnTeamChanged", (void (PriWrapper::*)()) & PriWrapper::OnTeamChanged, "C++: PriWrapper::OnTeamChanged() --> void");
		cl.def("ClearBotReplacement", (void (PriWrapper::*)()) & PriWrapper::ClearBotReplacement, "C++: PriWrapper::ClearBotReplacement() --> void");
		cl.def("ReportCheater", (void (PriWrapper::*)(std::string)) & PriWrapper::ReportCheater, "C++: PriWrapper::ReportCheater(std::string) --> void", "Reason"_a);
		cl.def("ValidateLoadoutTeamPaints", (bool (PriWrapper::*)()) & PriWrapper::ValidateLoadoutTeamPaints, "C++: PriWrapper::ValidateLoadoutTeamPaints() --> bool");
		cl.def("ValidateLoadoutSlots", (bool (PriWrapper::*)()) & PriWrapper::ValidateLoadoutSlots, "C++: PriWrapper::ValidateLoadoutSlots() --> bool");
		cl.def("ValidateLoadoutDLC", (void (PriWrapper::*)()) & PriWrapper::ValidateLoadoutDLC, "C++: PriWrapper::ValidateLoadoutDLC() --> void");
		cl.def("OnStartVoteToForfeitDisabledChanged", (void (PriWrapper::*)()) & PriWrapper::OnStartVoteToForfeitDisabledChanged, "C++: PriWrapper::OnStartVoteToForfeitDisabledChanged() --> void");
		cl.def("SetStartVoteToForfeitDisabled", (void (PriWrapper::*)(unsigned long)) & PriWrapper::SetStartVoteToForfeitDisabled, "C++: PriWrapper::SetStartVoteToForfeitDisabled(unsigned long) --> void", "bDisabled"_a);
		cl.def("ServerVoteToForfeit", (void (PriWrapper::*)()) & PriWrapper::ServerVoteToForfeit, "C++: PriWrapper::ServerVoteToForfeit() --> void");
		cl.def("SetUserCarPreferences", (void (PriWrapper::*)(float, float, float)) & PriWrapper::SetUserCarPreferences, "C++: PriWrapper::SetUserCarPreferences(float, float, float) --> void", "NewDodgeThreshold"_a, "NewSteeringSensitivity"_a, "NewAirControlSensitivity"_a);
		cl.def("ServerSetUserCarPreferences", (void (PriWrapper::*)(float, float, float)) & PriWrapper::ServerSetUserCarPreferences, "C++: PriWrapper::ServerSetUserCarPreferences(float, float, float) --> void", "NewDodgeThreshold"_a, "NewSteeringSensitivity"_a, "NewAirControlSensitivity"_a);
		cl.def("ValidateUserInt", (int (PriWrapper::*)(std::string, int, int, int)) & PriWrapper::ValidateUserInt, "C++: PriWrapper::ValidateUserInt(std::string, int, int, int) --> int", "Reason"_a, "NewValue"_a, "Min"_a, "Max"_a);
		cl.def("ValidateUserFloat", (float (PriWrapper::*)(std::string, float, float, float)) & PriWrapper::ValidateUserFloat, "C++: PriWrapper::ValidateUserFloat(std::string, float, float, float) --> float", "Reason"_a, "NewValue"_a, "Min"_a, "Max"_a);
		cl.def("OnPawnTypeChanged", (void (PriWrapper::*)()) & PriWrapper::OnPawnTypeChanged, "C++: PriWrapper::OnPawnTypeChanged() --> void");
		cl.def("SetWaitingPlayer", (void (PriWrapper::*)(unsigned long)) & PriWrapper::SetWaitingPlayer, "C++: PriWrapper::SetWaitingPlayer(unsigned long) --> void", "B"_a);
		cl.def("SetPawnType2", (void (PriWrapper::*)(unsigned char)) & PriWrapper::SetPawnType2, "C++: PriWrapper::SetPawnType2(unsigned char) --> void", "NewPawnType"_a);
		cl.def("IsPlayer", (bool (PriWrapper::*)()) & PriWrapper::IsPlayer, "C++: PriWrapper::IsPlayer() --> bool");
		cl.def("IsEditor", (bool (PriWrapper::*)()) & PriWrapper::IsEditor, "C++: PriWrapper::IsEditor() --> bool");
		cl.def("IsSpectator", (bool (PriWrapper::*)()) & PriWrapper::IsSpectator, "C++: PriWrapper::IsSpectator() --> bool");
		cl.def("ServerSpectate", (void (PriWrapper::*)()) & PriWrapper::ServerSpectate, "C++: PriWrapper::ServerSpectate() --> void");
		cl.def("ClientChangeTeamFailed", (void (PriWrapper::*)(int)) & PriWrapper::ClientChangeTeamFailed, "C++: PriWrapper::ClientChangeTeamFailed(int) --> void", "TeamNum"_a);
		cl.def("ServerChangeTeam", (void (PriWrapper::*)(int)) & PriWrapper::ServerChangeTeam, "C++: PriWrapper::ServerChangeTeam(int) --> void", "TeamNum"_a);
		cl.def("ReplicatePodiumTitles", (void (PriWrapper::*)()) & PriWrapper::ReplicatePodiumTitles, "C++: PriWrapper::ReplicatePodiumTitles() --> void");
		cl.def("OnMatchAdmin", (void (PriWrapper::*)()) & PriWrapper::OnMatchAdmin, "C++: PriWrapper::OnMatchAdmin() --> void");
		cl.def("OnMVPChange", (void (PriWrapper::*)()) & PriWrapper::OnMVPChange, "C++: PriWrapper::OnMVPChange() --> void");
		cl.def("NotifyWonMVP", (void (PriWrapper::*)()) & PriWrapper::NotifyWonMVP, "C++: PriWrapper::NotifyWonMVP() --> void");
		cl.def("IsInvalidName", (bool (PriWrapper::*)()) & PriWrapper::IsInvalidName, "C++: PriWrapper::IsInvalidName() --> bool");
		cl.def("IsInWarmUpMode", (bool (PriWrapper::*)()) & PriWrapper::IsInWarmUpMode, "C++: PriWrapper::IsInWarmUpMode() --> bool");
		cl.def("SetReady", (void (PriWrapper::*)(unsigned long)) & PriWrapper::SetReady, "C++: PriWrapper::SetReady(unsigned long) --> void", "bNewReady"_a);
		cl.def("ServerMatchAdminSetPaused", (void (PriWrapper::*)(unsigned long)) & PriWrapper::ServerMatchAdminSetPaused, "C++: PriWrapper::ServerMatchAdminSetPaused(unsigned long) --> void", "bPause"_a);
		cl.def("ServerMatchAdminSetScoreAndTime", (void (PriWrapper::*)(int, int, int, unsigned long, unsigned long)) & PriWrapper::ServerMatchAdminSetScoreAndTime, "C++: PriWrapper::ServerMatchAdminSetScoreAndTime(int, int, int, unsigned long, unsigned long) --> void", "NewScoreTeam0"_a, "NewScoreTeam1"_a, "SecondsRemaining"_a, "bOverTime"_a, "bRestartRound"_a);
		cl.def("SetMatchAdmin", (void (PriWrapper::*)(unsigned long)) & PriWrapper::SetMatchAdmin, "C++: PriWrapper::SetMatchAdmin(unsigned long) --> void", "bIsMatchAdmin"_a);
		cl.def("ServerReadyUp", (void (PriWrapper::*)()) & PriWrapper::ServerReadyUp, "C++: PriWrapper::ServerReadyUp() --> void");
		cl.def("ShouldBroadCastWelcomeMessage", (bool (PriWrapper::*)(unsigned long)) & PriWrapper::ShouldBroadCastWelcomeMessage, "C++: PriWrapper::ShouldBroadCastWelcomeMessage(unsigned long) --> bool", "bExiting"_a);
		cl.def("UpdateOnlineProductStats", (void (PriWrapper::*)()) & PriWrapper::UpdateOnlineProductStats, "C++: PriWrapper::UpdateOnlineProductStats() --> void");
		cl.def("SetWaitingStartTime2", (void (PriWrapper::*)()) & PriWrapper::SetWaitingStartTime2, "C++: PriWrapper::SetWaitingStartTime2() --> void");
		cl.def("OnRespawnTimeRemainingChanged", (void (PriWrapper::*)()) & PriWrapper::OnRespawnTimeRemainingChanged, "C++: PriWrapper::OnRespawnTimeRemainingChanged() --> void");
		cl.def("SetRespawnTime2", (void (PriWrapper::*)(int)) & PriWrapper::SetRespawnTime2, "C++: PriWrapper::SetRespawnTime2(int) --> void", "NewTime"_a);
		cl.def("ClientScoredGoal", (void (PriWrapper::*)(struct Vector&)) & PriWrapper::ClientScoredGoal, "C++: PriWrapper::ClientScoredGoal(struct Vector &) --> void", "BallHitLocation"_a);
		cl.def("OnScoredGoal", (void (PriWrapper::*)(struct Vector&)) & PriWrapper::OnScoredGoal, "C++: PriWrapper::OnScoredGoal(struct Vector &) --> void", "BallHitLocation"_a);
		cl.def("OnRep_SteeringSensitivity", (void (PriWrapper::*)()) & PriWrapper::OnRep_SteeringSensitivity, "C++: PriWrapper::OnRep_SteeringSensitivity() --> void");
		cl.def("OnRep_ClientScorePoint", (void (PriWrapper::*)()) & PriWrapper::OnRep_ClientScorePoint, "C++: PriWrapper::OnRep_ClientScorePoint() --> void");
		cl.def("ResetScore", (void (PriWrapper::*)()) & PriWrapper::ResetScore, "C++: PriWrapper::ResetScore() --> void");
		cl.def("RemovePoints", (void (PriWrapper::*)(int)) & PriWrapper::RemovePoints, "C++: PriWrapper::RemovePoints(int) --> void", "Points"_a);
		cl.def("ScorePoint2", (void (PriWrapper::*)(int)) & PriWrapper::ScorePoint2, "C++: PriWrapper::ScorePoint2(int) --> void", "AdditionalScore"_a);
		cl.def("CanAwardTimeRestrictedStatEvent", (bool (PriWrapper::*)()) & PriWrapper::CanAwardTimeRestrictedStatEvent, "C++: PriWrapper::CanAwardTimeRestrictedStatEvent() --> bool");
		cl.def("RecordTimeRestrictedStatEvent", (void (PriWrapper::*)()) & PriWrapper::RecordTimeRestrictedStatEvent, "C++: PriWrapper::RecordTimeRestrictedStatEvent() --> void");
		cl.def("ResetTimeRestrictedStatEvent", (void (PriWrapper::*)()) & PriWrapper::ResetTimeRestrictedStatEvent, "C++: PriWrapper::ResetTimeRestrictedStatEvent() --> void");
		cl.def("GetMatchXP", (int (PriWrapper::*)()) & PriWrapper::GetMatchXP, "C++: PriWrapper::GetMatchXP() --> int");
		cl.def("CommitStats", (void (PriWrapper::*)()) & PriWrapper::CommitStats, "C++: PriWrapper::CommitStats() --> void");
		cl.def("UpdateFromLoadout", (void (PriWrapper::*)()) & PriWrapper::UpdateFromLoadout, "C++: PriWrapper::UpdateFromLoadout() --> void");
		cl.def("UpdateUserCarPreferences", (void (PriWrapper::*)(class AirControlComponentWrapper)) & PriWrapper::UpdateUserCarPreferences, "C++: PriWrapper::UpdateUserCarPreferences(class AirControlComponentWrapper) --> void", "AirControlComponent"_a);
		cl.def("HandleAirControl", (void (PriWrapper::*)(class AirControlComponentWrapper)) & PriWrapper::HandleAirControl, "C++: PriWrapper::HandleAirControl(class AirControlComponentWrapper) --> void", "AirControlComp"_a);
		cl.def("SetCar2", (void (PriWrapper::*)(class CarWrapper)) & PriWrapper::SetCar2, "C++: PriWrapper::SetCar2(class CarWrapper) --> void", "NewCar"_a);
		cl.def("IsClientPlayerPRI", (bool (PriWrapper::*)()) & PriWrapper::IsClientPlayerPRI, "C++: PriWrapper::IsClientPlayerPRI() --> bool");
		cl.def("IsLocalPlayerPRI", (bool (PriWrapper::*)()) & PriWrapper::IsLocalPlayerPRI, "C++: PriWrapper::IsLocalPlayerPRI() --> bool");
		cl.def("Unregister", (void (PriWrapper::*)()) & PriWrapper::Unregister, "C++: PriWrapper::Unregister() --> void");
		cl.def("AddLocalPlayerToGameEvent", (void (PriWrapper::*)()) & PriWrapper::AddLocalPlayerToGameEvent, "C++: PriWrapper::AddLocalPlayerToGameEvent() --> void");
		cl.def("OnLoadoutsSetInternal", (void (PriWrapper::*)()) & PriWrapper::OnLoadoutsSetInternal, "C++: PriWrapper::OnLoadoutsSetInternal() --> void");
		cl.def("AreLoadoutsSet", (bool (PriWrapper::*)()) & PriWrapper::AreLoadoutsSet, "C++: PriWrapper::AreLoadoutsSet() --> bool");
		cl.def("OnLoadoutsOnlineSet", (void (PriWrapper::*)()) & PriWrapper::OnLoadoutsOnlineSet, "C++: PriWrapper::OnLoadoutsOnlineSet() --> void");
		cl.def("OnLoadoutsSet2", (void (PriWrapper::*)()) & PriWrapper::OnLoadoutsSet2, "C++: PriWrapper::OnLoadoutsSet2() --> void");
		cl.def("RemoveCertifiedProductStat", (void (PriWrapper::*)(unsigned long long)) & PriWrapper::RemoveCertifiedProductStat, "C++: PriWrapper::RemoveCertifiedProductStat(unsigned long long) --> void", "InstanceID"_a);
		cl.def("InitLoadoutAttributesForTeam", (void (PriWrapper::*)(class PriXWrapper)) & PriWrapper::InitLoadoutAttributesForTeam, "C++: PriWrapper::InitLoadoutAttributesForTeam(class PriXWrapper) --> void", "PRI"_a);
		cl.def("ShouldValidateOnlineProducts", (bool (PriWrapper::*)()) & PriWrapper::ShouldValidateOnlineProducts, "C++: PriWrapper::ShouldValidateOnlineProducts() --> bool");
		cl.def("OnSplitScreenStatusChanged", (void (PriWrapper::*)()) & PriWrapper::OnSplitScreenStatusChanged, "C++: PriWrapper::OnSplitScreenStatusChanged() --> void");
		cl.def("ServerSplitScreenStatusChanged", (void (PriWrapper::*)(unsigned long)) & PriWrapper::ServerSplitScreenStatusChanged, "C++: PriWrapper::ServerSplitScreenStatusChanged(unsigned long) --> void", "bInSplitScreen"_a);
		cl.def("UpdateSplitScreenStatus", (void (PriWrapper::*)()) & PriWrapper::UpdateSplitScreenStatus, "C++: PriWrapper::UpdateSplitScreenStatus() --> void");
		cl.def("OnPartyLeaderChanged", (void (PriWrapper::*)()) & PriWrapper::OnPartyLeaderChanged, "C++: PriWrapper::OnPartyLeaderChanged() --> void");
		// 'PriWrapper::ServerSetPartyLeader': Function definition is empty and thus will not work
		// cl.def("ServerSetPartyLeader", (void (PriWrapper::*)(struct SteamID&, unsigned long)) & PriWrapper::ServerSetPartyLeader, "C++: PriWrapper::ServerSetPartyLeader(struct SteamID &, unsigned long) --> void", "InPartyLeader"_a, "bInParty"_a);
		// 'PriWrapper::SetPartyLeader2': Function definition is empty and thus will not work
		// cl.def("SetPartyLeader2", (void (PriWrapper::*)(struct SteamID&, unsigned long)) & PriWrapper::SetPartyLeader2, "C++: PriWrapper::SetPartyLeader2(struct SteamID &, unsigned long) --> void", "InPartyLeader"_a, "bInParty"_a);
		cl.def("UpdatePartyStatus", (void (PriWrapper::*)()) & PriWrapper::UpdatePartyStatus, "C++: PriWrapper::UpdatePartyStatus() --> void");
		cl.def("OnSkillTierChanged", (void (PriWrapper::*)()) & PriWrapper::OnSkillTierChanged, "C++: PriWrapper::OnSkillTierChanged() --> void");
		cl.def("ReplicateSkillTier", (void (PriWrapper::*)(int)) & PriWrapper::ReplicateSkillTier, "C++: PriWrapper::ReplicateSkillTier(int) --> void", "NewTier"_a);
		cl.def("OnTitleChanged", (void (PriWrapper::*)()) & PriWrapper::OnTitleChanged, "C++: PriWrapper::OnTitleChanged() --> void");
		cl.def("SyncPlayerTitle", (void (PriWrapper::*)()) & PriWrapper::SyncPlayerTitle, "C++: PriWrapper::SyncPlayerTitle() --> void");
		cl.def("UpdateTitleFromLoadout", (void (PriWrapper::*)()) & PriWrapper::UpdateTitleFromLoadout, "C++: PriWrapper::UpdateTitleFromLoadout() --> void");
		cl.def("UpdateTitle2", (void (PriWrapper::*)()) & PriWrapper::UpdateTitle2, "C++: PriWrapper::UpdateTitle2() --> void");
		cl.def("GetNewFriendKey", (void (PriWrapper::*)()) & PriWrapper::GetNewFriendKey, "C++: PriWrapper::GetNewFriendKey() --> void");
		cl.def("ServerSetPlayerHistoryKey", (void (PriWrapper::*)(unsigned char*)) & PriWrapper::ServerSetPlayerHistoryKey, "C++: PriWrapper::ServerSetPlayerHistoryKey(unsigned char *) --> void", "HistoryKeyArray"_a);
		cl.def("OnRep_UniqueId", (void (PriWrapper::*)()) & PriWrapper::OnRep_UniqueId, "C++: PriWrapper::OnRep_UniqueId() --> void");
		cl.def("EventOwnerChanged", (void (PriWrapper::*)(class PriWrapper)) & PriWrapper::EventOwnerChanged, "C++: PriWrapper::EventOwnerChanged(class PriWrapper) --> void", "PRI"_a);
		cl.def("EventSpectatorShortcutChanged", (void (PriWrapper::*)(class PriWrapper)) & PriWrapper::EventSpectatorShortcutChanged, "C++: PriWrapper::EventSpectatorShortcutChanged(class PriWrapper) --> void", "PRI"_a);
		cl.def("EventServerAchievementProgression", (void (PriWrapper::*)(class PriWrapper, int, unsigned char, float, float)) & PriWrapper::EventServerAchievementProgression, "C++: PriWrapper::EventServerAchievementProgression(class PriWrapper, int, unsigned char, float, float) --> void", "PRI"_a, "AchievementId"_a, "AchievementType"_a, "Progress"_a, "MaxProgress"_a);
		cl.def("EventStartVoteToForfeitDisabledChanged", (void (PriWrapper::*)(class PriWrapper)) & PriWrapper::EventStartVoteToForfeitDisabledChanged, "C++: PriWrapper::EventStartVoteToForfeitDisabledChanged(class PriWrapper) --> void", "PRI"_a);
		cl.def("EventCarPreUpdate", (void (PriWrapper::*)(class PriWrapper)) & PriWrapper::EventCarPreUpdate, "C++: PriWrapper::EventCarPreUpdate(class PriWrapper) --> void", "PRI"_a);
		cl.def("EventVanityChanged", (void (PriWrapper::*)()) & PriWrapper::EventVanityChanged, "C++: PriWrapper::EventVanityChanged() --> void");
	}
	{ // WheelWrapper file: line:8
		pybind11::class_<WheelWrapper, std::shared_ptr<WheelWrapper>, ObjectWrapper> cl(M, "WheelWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](WheelWrapper const& o) { return new WheelWrapper(o); }));
		cl.def("assign", (class WheelWrapper& (WheelWrapper::*)(class WheelWrapper))& WheelWrapper::operator=, "C++: WheelWrapper::operator=(class WheelWrapper) --> class WheelWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetSteerFactor", (float (WheelWrapper::*)())& WheelWrapper::GetSteerFactor, "C++: WheelWrapper::GetSteerFactor() --> float");
		cl.def("SetSteerFactor", (void (WheelWrapper::*)(float))& WheelWrapper::SetSteerFactor, "C++: WheelWrapper::SetSteerFactor(float) --> void", "newSteerFactor"_a);
		cl.def("GetWheelRadius", (float (WheelWrapper::*)())& WheelWrapper::GetWheelRadius, "C++: WheelWrapper::GetWheelRadius() --> float");
		cl.def("SetWheelRadius", (void (WheelWrapper::*)(float))& WheelWrapper::SetWheelRadius, "C++: WheelWrapper::SetWheelRadius(float) --> void", "newWheelRadius"_a);
		cl.def("GetSuspensionStiffness", (float (WheelWrapper::*)())& WheelWrapper::GetSuspensionStiffness, "C++: WheelWrapper::GetSuspensionStiffness() --> float");
		cl.def("SetSuspensionStiffness", (void (WheelWrapper::*)(float))& WheelWrapper::SetSuspensionStiffness, "C++: WheelWrapper::SetSuspensionStiffness(float) --> void", "newSuspensionStiffness"_a);
		cl.def("GetSuspensionDampingCompression", (float (WheelWrapper::*)())& WheelWrapper::GetSuspensionDampingCompression, "C++: WheelWrapper::GetSuspensionDampingCompression() --> float");
		cl.def("SetSuspensionDampingCompression", (void (WheelWrapper::*)(float))& WheelWrapper::SetSuspensionDampingCompression, "C++: WheelWrapper::SetSuspensionDampingCompression(float) --> void", "newSuspensionDampingCompression"_a);
		cl.def("GetSuspensionDampingRelaxation", (float (WheelWrapper::*)())& WheelWrapper::GetSuspensionDampingRelaxation, "C++: WheelWrapper::GetSuspensionDampingRelaxation() --> float");
		cl.def("SetSuspensionDampingRelaxation", (void (WheelWrapper::*)(float))& WheelWrapper::SetSuspensionDampingRelaxation, "C++: WheelWrapper::SetSuspensionDampingRelaxation(float) --> void", "newSuspensionDampingRelaxation"_a);
		cl.def("GetSuspensionTravel", (float (WheelWrapper::*)())& WheelWrapper::GetSuspensionTravel, "C++: WheelWrapper::GetSuspensionTravel() --> float");
		cl.def("SetSuspensionTravel", (void (WheelWrapper::*)(float))& WheelWrapper::SetSuspensionTravel, "C++: WheelWrapper::SetSuspensionTravel(float) --> void", "newSuspensionTravel"_a);
		cl.def("GetSuspensionMaxRaise", (float (WheelWrapper::*)())& WheelWrapper::GetSuspensionMaxRaise, "C++: WheelWrapper::GetSuspensionMaxRaise() --> float");
		cl.def("SetSuspensionMaxRaise", (void (WheelWrapper::*)(float))& WheelWrapper::SetSuspensionMaxRaise, "C++: WheelWrapper::SetSuspensionMaxRaise(float) --> void", "newSuspensionMaxRaise"_a);
		cl.def("GetContactForceDistance", (float (WheelWrapper::*)())& WheelWrapper::GetContactForceDistance, "C++: WheelWrapper::GetContactForceDistance() --> float");
		cl.def("SetContactForceDistance", (void (WheelWrapper::*)(float))& WheelWrapper::SetContactForceDistance, "C++: WheelWrapper::SetContactForceDistance(float) --> void", "newContactForceDistance"_a);
		cl.def("GetSpinSpeedDecayRate", (float (WheelWrapper::*)())& WheelWrapper::GetSpinSpeedDecayRate, "C++: WheelWrapper::GetSpinSpeedDecayRate() --> float");
		cl.def("SetSpinSpeedDecayRate", (void (WheelWrapper::*)(float))& WheelWrapper::SetSpinSpeedDecayRate, "C++: WheelWrapper::SetSpinSpeedDecayRate(float) --> void", "newSpinSpeedDecayRate"_a);
		cl.def("GetBoneOffset", (struct Vector(WheelWrapper::*)())& WheelWrapper::GetBoneOffset, "C++: WheelWrapper::GetBoneOffset() --> struct Vector");
		cl.def("SetBoneOffset", (void (WheelWrapper::*)(struct Vector))& WheelWrapper::SetBoneOffset, "C++: WheelWrapper::SetBoneOffset(struct Vector) --> void", "newBoneOffset"_a);
		cl.def("GetPresetRestPosition", (struct Vector(WheelWrapper::*)())& WheelWrapper::GetPresetRestPosition, "C++: WheelWrapper::GetPresetRestPosition() --> struct Vector");
		cl.def("SetPresetRestPosition", (void (WheelWrapper::*)(struct Vector))& WheelWrapper::SetPresetRestPosition, "C++: WheelWrapper::SetPresetRestPosition(struct Vector) --> void", "newPresetRestPosition"_a);
		cl.def("GetLocalSuspensionRayStart", (struct Vector(WheelWrapper::*)())& WheelWrapper::GetLocalSuspensionRayStart, "C++: WheelWrapper::GetLocalSuspensionRayStart() --> struct Vector");
		cl.def("SetLocalSuspensionRayStart", (void (WheelWrapper::*)(struct Vector))& WheelWrapper::SetLocalSuspensionRayStart, "C++: WheelWrapper::SetLocalSuspensionRayStart(struct Vector) --> void", "newLocalSuspensionRayStart"_a);
		cl.def("GetLocalRestPosition", (struct Vector(WheelWrapper::*)())& WheelWrapper::GetLocalRestPosition, "C++: WheelWrapper::GetLocalRestPosition() --> struct Vector");
		cl.def("SetLocalRestPosition", (void (WheelWrapper::*)(struct Vector))& WheelWrapper::SetLocalRestPosition, "C++: WheelWrapper::SetLocalRestPosition(struct Vector) --> void", "newLocalRestPosition"_a);
		cl.def("GetVehicleSim", (class VehicleSimWrapper(WheelWrapper::*)())& WheelWrapper::GetVehicleSim, "C++: WheelWrapper::GetVehicleSim() --> class VehicleSimWrapper");
		cl.def("SetVehicleSim", (void (WheelWrapper::*)(class VehicleSimWrapper))& WheelWrapper::SetVehicleSim, "C++: WheelWrapper::SetVehicleSim(class VehicleSimWrapper) --> void", "newVehicleSim"_a);
		cl.def("GetWheelIndex", (int (WheelWrapper::*)())& WheelWrapper::GetWheelIndex, "C++: WheelWrapper::GetWheelIndex() --> int");
		cl.def("SetWheelIndex", (void (WheelWrapper::*)(int))& WheelWrapper::SetWheelIndex, "C++: WheelWrapper::SetWheelIndex(int) --> void", "newWheelIndex"_a);
		cl.def("GetContact", (struct WheelContactData(WheelWrapper::*)())& WheelWrapper::GetContact, "C++: WheelWrapper::GetContact() --> struct WheelContactData");
		cl.def("SetContact", (void (WheelWrapper::*)(struct WheelContactData))& WheelWrapper::SetContact, "C++: WheelWrapper::SetContact(struct WheelContactData) --> void", "newContact"_a);
		cl.def("GetbDrawDebug", (unsigned long (WheelWrapper::*)())& WheelWrapper::GetbDrawDebug, "C++: WheelWrapper::GetbDrawDebug() --> unsigned long");
		cl.def("SetbDrawDebug", (void (WheelWrapper::*)(unsigned long))& WheelWrapper::SetbDrawDebug, "C++: WheelWrapper::SetbDrawDebug(unsigned long) --> void", "newbDrawDebug"_a);
		cl.def("GetbHadContact", (unsigned long (WheelWrapper::*)())& WheelWrapper::GetbHadContact, "C++: WheelWrapper::GetbHadContact() --> unsigned long");
		cl.def("SetbHadContact", (void (WheelWrapper::*)(unsigned long))& WheelWrapper::SetbHadContact, "C++: WheelWrapper::SetbHadContact(unsigned long) --> void", "newbHadContact"_a);
		cl.def("GetFrictionCurveInput", (float (WheelWrapper::*)())& WheelWrapper::GetFrictionCurveInput, "C++: WheelWrapper::GetFrictionCurveInput() --> float");
		cl.def("SetFrictionCurveInput", (void (WheelWrapper::*)(float))& WheelWrapper::SetFrictionCurveInput, "C++: WheelWrapper::SetFrictionCurveInput(float) --> void", "newFrictionCurveInput"_a);
		cl.def("GetAerialThrottleToVelocityFactor", (float (WheelWrapper::*)())& WheelWrapper::GetAerialThrottleToVelocityFactor, "C++: WheelWrapper::GetAerialThrottleToVelocityFactor() --> float");
		cl.def("SetAerialThrottleToVelocityFactor", (void (WheelWrapper::*)(float))& WheelWrapper::SetAerialThrottleToVelocityFactor, "C++: WheelWrapper::SetAerialThrottleToVelocityFactor(float) --> void", "newAerialThrottleToVelocityFactor"_a);
		cl.def("GetAerialAccelerationFactor", (float (WheelWrapper::*)())& WheelWrapper::GetAerialAccelerationFactor, "C++: WheelWrapper::GetAerialAccelerationFactor() --> float");
		cl.def("SetAerialAccelerationFactor", (void (WheelWrapper::*)(float))& WheelWrapper::SetAerialAccelerationFactor, "C++: WheelWrapper::SetAerialAccelerationFactor(float) --> void", "newAerialAccelerationFactor"_a);
		cl.def("GetSpinSpeed", (float (WheelWrapper::*)())& WheelWrapper::GetSpinSpeed, "C++: WheelWrapper::GetSpinSpeed() --> float");
		cl.def("SetSpinSpeed", (void (WheelWrapper::*)(float))& WheelWrapper::SetSpinSpeed, "C++: WheelWrapper::SetSpinSpeed(float) --> void", "newSpinSpeed"_a);
		cl.def("GetRefWheelLocation", (struct Vector(WheelWrapper::*)())& WheelWrapper::GetRefWheelLocation, "C++: WheelWrapper::GetRefWheelLocation() --> struct Vector");
		cl.def("GetSuspensionDistance", (float (WheelWrapper::*)())& WheelWrapper::GetSuspensionDistance, "C++: WheelWrapper::GetSuspensionDistance() --> float");
		cl.def("GetSteer2", (float (WheelWrapper::*)())& WheelWrapper::GetSteer2, "C++: WheelWrapper::GetSteer2() --> float");
		cl.def("GetLinearVelocity", (struct Vector(WheelWrapper::*)())& WheelWrapper::GetLinearVelocity, "C++: WheelWrapper::GetLinearVelocity() --> struct Vector");
		cl.def("EventContactChanged", (void (WheelWrapper::*)(class WheelWrapper))& WheelWrapper::EventContactChanged, "C++: WheelWrapper::EventContactChanged(class WheelWrapper) --> void", "Wheel"_a);
	}
	{ // TeamInfoWrapper file: line:8
		pybind11::class_<TeamInfoWrapper, std::shared_ptr<TeamInfoWrapper>, ActorWrapper> cl(M, "TeamInfoWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](TeamInfoWrapper const& o) { return new TeamInfoWrapper(o); }));
		cl.def("assign", (class TeamInfoWrapper& (TeamInfoWrapper::*)(class TeamInfoWrapper)) & TeamInfoWrapper::operator=, "C++: TeamInfoWrapper::operator=(class TeamInfoWrapper) --> class TeamInfoWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetTeamName", (class UnrealStringWrapper(TeamInfoWrapper::*)()) & TeamInfoWrapper::GetTeamName, "C++: TeamInfoWrapper::GetTeamName() --> class UnrealStringWrapper");
		cl.def("GetSize", (int (TeamInfoWrapper::*)()) & TeamInfoWrapper::GetSize, "C++: TeamInfoWrapper::GetSize() --> int");
		cl.def("SetSize", (void (TeamInfoWrapper::*)(int)) & TeamInfoWrapper::SetSize, "C++: TeamInfoWrapper::SetSize(int) --> void", "newSize"_a);
		cl.def("GetScore", (int (TeamInfoWrapper::*)()) & TeamInfoWrapper::GetScore, "C++: TeamInfoWrapper::GetScore() --> int");
		cl.def("SetScore", (void (TeamInfoWrapper::*)(int)) & TeamInfoWrapper::SetScore, "C++: TeamInfoWrapper::SetScore(int) --> void", "newScore"_a);
		cl.def("GetTeamIndex", (int (TeamInfoWrapper::*)()) & TeamInfoWrapper::GetTeamIndex, "C++: TeamInfoWrapper::GetTeamIndex() --> int");
		cl.def("SetTeamIndex", (void (TeamInfoWrapper::*)(int)) & TeamInfoWrapper::SetTeamIndex, "C++: TeamInfoWrapper::SetTeamIndex(int) --> void", "newTeamIndex"_a);
		cl.def("GetTeamColor", (struct UnrealColor(TeamInfoWrapper::*)()) & TeamInfoWrapper::GetTeamColor, "C++: TeamInfoWrapper::GetTeamColor() --> struct UnrealColor");
		cl.def("SetTeamColor", (void (TeamInfoWrapper::*)(struct UnrealColor)) & TeamInfoWrapper::SetTeamColor, "C++: TeamInfoWrapper::SetTeamColor(struct UnrealColor) --> void", "newTeamColor"_a);
		cl.def("GetTeamNum", (unsigned char (TeamInfoWrapper::*)()) & TeamInfoWrapper::GetTeamNum, "C++: TeamInfoWrapper::GetTeamNum() --> unsigned char");
		cl.def("eventDestroyed", (void (TeamInfoWrapper::*)()) & TeamInfoWrapper::eventDestroyed, "C++: TeamInfoWrapper::eventDestroyed() --> void");
	}
	{ // TeamWrapper file: line:12
		pybind11::class_<TeamWrapper, std::shared_ptr<TeamWrapper>, TeamInfoWrapper> cl(M, "TeamWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](TeamWrapper const& o) { return new TeamWrapper(o); }));
		cl.def("assign", (class TeamWrapper& (TeamWrapper::*)(class TeamWrapper)) & TeamWrapper::operator=, "C++: TeamWrapper::operator=(class TeamWrapper) --> class TeamWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetFontColor", (struct LinearColor(TeamWrapper::*)()) & TeamWrapper::GetFontColor, "C++: TeamWrapper::GetFontColor() --> struct LinearColor");
		cl.def("SetFontColor", (void (TeamWrapper::*)(struct LinearColor)) & TeamWrapper::SetFontColor, "C++: TeamWrapper::SetFontColor(struct LinearColor) --> void", "newFontColor"_a);
		cl.def("GetColorBlindFontColor", (struct LinearColor(TeamWrapper::*)()) & TeamWrapper::GetColorBlindFontColor, "C++: TeamWrapper::GetColorBlindFontColor() --> struct LinearColor");
		cl.def("SetColorBlindFontColor", (void (TeamWrapper::*)(struct LinearColor)) & TeamWrapper::SetColorBlindFontColor, "C++: TeamWrapper::SetColorBlindFontColor(struct LinearColor) --> void", "newColorBlindFontColor"_a);
		cl.def("GetTeamControllerColor", (struct UnrealColor(TeamWrapper::*)()) & TeamWrapper::GetTeamControllerColor, "C++: TeamWrapper::GetTeamControllerColor() --> struct UnrealColor");
		cl.def("SetTeamControllerColor", (void (TeamWrapper::*)(struct UnrealColor)) & TeamWrapper::SetTeamControllerColor, "C++: TeamWrapper::SetTeamControllerColor(struct UnrealColor) --> void", "newTeamControllerColor"_a);
		cl.def("GetTeamScoreStrobeColor", (struct UnrealColor(TeamWrapper::*)()) & TeamWrapper::GetTeamScoreStrobeColor, "C++: TeamWrapper::GetTeamScoreStrobeColor() --> struct UnrealColor");
		cl.def("SetTeamScoreStrobeColor", (void (TeamWrapper::*)(struct UnrealColor)) & TeamWrapper::SetTeamScoreStrobeColor, "C++: TeamWrapper::SetTeamScoreStrobeColor(struct UnrealColor) --> void", "newTeamScoreStrobeColor"_a);
		cl.def("GetDefaultColorList", (class StructArrayWrapper<struct LinearColor>(TeamWrapper::*)()) & TeamWrapper::GetDefaultColorList, "C++: TeamWrapper::GetDefaultColorList() --> class StructArrayWrapper<struct LinearColor>");
		cl.def("GetColorBlindColorList", (class StructArrayWrapper<struct LinearColor>(TeamWrapper::*)()) & TeamWrapper::GetColorBlindColorList, "C++: TeamWrapper::GetColorBlindColorList() --> class StructArrayWrapper<struct LinearColor>");
		cl.def("GetCurrentColorList", (class StructArrayWrapper<struct LinearColor>(TeamWrapper::*)()) & TeamWrapper::GetCurrentColorList, "C++: TeamWrapper::GetCurrentColorList() --> class StructArrayWrapper<struct LinearColor>");
		cl.def("GetGameEvent", (class TeamGameEventWrapper(TeamWrapper::*)()) & TeamWrapper::GetGameEvent, "C++: TeamWrapper::GetGameEvent() --> class TeamGameEventWrapper");
		cl.def("SetGameEvent", (void (TeamWrapper::*)(class TeamGameEventWrapper)) & TeamWrapper::SetGameEvent, "C++: TeamWrapper::SetGameEvent(class TeamGameEventWrapper) --> void", "newGameEvent"_a);
		cl.def("GetMembers", (class ArrayWrapper<class PriWrapper>(TeamWrapper::*)()) & TeamWrapper::GetMembers, "C++: TeamWrapper::GetMembers() --> class ArrayWrapper<class PriWrapper>");
		cl.def("GetCustomTeamName", (class UnrealStringWrapper(TeamWrapper::*)()) & TeamWrapper::GetCustomTeamName, "C++: TeamWrapper::GetCustomTeamName() --> class UnrealStringWrapper");
		cl.def("GetSanitizedTeamName", (class UnrealStringWrapper(TeamWrapper::*)()) & TeamWrapper::GetSanitizedTeamName, "C++: TeamWrapper::GetSanitizedTeamName() --> class UnrealStringWrapper");
		cl.def("GetClubID", (unsigned long long (TeamWrapper::*)()) & TeamWrapper::GetClubID, "C++: TeamWrapper::GetClubID() --> unsigned long long");
		cl.def("SetClubID", (void (TeamWrapper::*)(unsigned long long)) & TeamWrapper::SetClubID, "C++: TeamWrapper::SetClubID(unsigned long long) --> void", "newClubID"_a);
		cl.def("GetbForfeit", (unsigned long (TeamWrapper::*)()) & TeamWrapper::GetbForfeit, "C++: TeamWrapper::GetbForfeit() --> unsigned long");
		cl.def("SetbForfeit", (void (TeamWrapper::*)(unsigned long)) & TeamWrapper::SetbForfeit, "C++: TeamWrapper::SetbForfeit(unsigned long) --> void", "newbForfeit"_a);
		cl.def("__Team_TA__GetHumanPlayers", (bool (TeamWrapper::*)(class PriWrapper)) & TeamWrapper::__Team_TA__GetHumanPlayers, "C++: TeamWrapper::__Team_TA__GetHumanPlayers(class PriWrapper) --> bool", "PRI"_a);
		cl.def("__Team_TA__GetHumanPrimaryPlayers", (bool (TeamWrapper::*)(class PriWrapper)) & TeamWrapper::__Team_TA__GetHumanPrimaryPlayers, "C++: TeamWrapper::__Team_TA__GetHumanPrimaryPlayers(class PriWrapper) --> bool", "PRI"_a);
		cl.def("__Team_TA__GetNumOfMembersThatCanStartForfeit", (bool (TeamWrapper::*)(class PriWrapper)) & TeamWrapper::__Team_TA__GetNumOfMembersThatCanStartForfeit, "C++: TeamWrapper::__Team_TA__GetNumOfMembersThatCanStartForfeit(class PriWrapper) --> bool", "P"_a);
		cl.def("__Team_TA__EnableAllMembersStartVoteToForfeit", (void (TeamWrapper::*)(class PriWrapper)) & TeamWrapper::__Team_TA__EnableAllMembersStartVoteToForfeit, "C++: TeamWrapper::__Team_TA__EnableAllMembersStartVoteToForfeit(class PriWrapper) --> void", "Member"_a);
		cl.def("OnClubColorsChanged", (void (TeamWrapper::*)()) & TeamWrapper::OnClubColorsChanged, "C++: TeamWrapper::OnClubColorsChanged() --> void");
		cl.def("Forfeit2", (void (TeamWrapper::*)()) & TeamWrapper::Forfeit2, "C++: TeamWrapper::Forfeit2() --> void");
		cl.def("EnableAllMembersStartVoteToForfeit2", (void (TeamWrapper::*)()) & TeamWrapper::EnableAllMembersStartVoteToForfeit2, "C++: TeamWrapper::EnableAllMembersStartVoteToForfeit2() --> void");
		cl.def("EnableAllMembersStartVoteToForfeitIfNecessary", (void (TeamWrapper::*)()) & TeamWrapper::EnableAllMembersStartVoteToForfeitIfNecessary, "C++: TeamWrapper::EnableAllMembersStartVoteToForfeitIfNecessary() --> void");
		cl.def("VoteToForfeit22", (void (TeamWrapper::*)(class PriWrapper)) & TeamWrapper::VoteToForfeit22, "C++: TeamWrapper::VoteToForfeit22(class PriWrapper) --> void", "PRI"_a);
		cl.def("NotifyKismetTeamColorChanged", (void (TeamWrapper::*)()) & TeamWrapper::NotifyKismetTeamColorChanged, "C++: TeamWrapper::NotifyKismetTeamColorChanged() --> void");
		cl.def("UpdateColors", (void (TeamWrapper::*)()) & TeamWrapper::UpdateColors, "C++: TeamWrapper::UpdateColors() --> void");
		cl.def("SetLogo", (void (TeamWrapper::*)(int, unsigned long)) & TeamWrapper::SetLogo, "C++: TeamWrapper::SetLogo(int, unsigned long) --> void", "LogoID"_a, "bSwapColors"_a);
		cl.def("HandleTeamNameSanitized", (void (TeamWrapper::*)(std::string, std::string)) & TeamWrapper::HandleTeamNameSanitized, "C++: TeamWrapper::HandleTeamNameSanitized(std::string, std::string) --> void", "Original"_a, "Sanitized"_a);
		cl.def("SetClubID2", (void (TeamWrapper::*)(unsigned long long)) & TeamWrapper::SetClubID2, "C++: TeamWrapper::SetClubID2(unsigned long long) --> void", "InClubID"_a);
		cl.def("SetCustomTeamName", (void (TeamWrapper::*)(std::string)) & TeamWrapper::SetCustomTeamName, "C++: TeamWrapper::SetCustomTeamName(std::string) --> void", "NewName"_a);
		cl.def("SetDefaultColors", (void (TeamWrapper::*)()) & TeamWrapper::SetDefaultColors, "C++: TeamWrapper::SetDefaultColors() --> void");
		cl.def("IsSingleParty", (bool (TeamWrapper::*)()) & TeamWrapper::IsSingleParty, "C++: TeamWrapper::IsSingleParty() --> bool");
		cl.def("GetTeamMemberNamed", (class PriWrapper(TeamWrapper::*)(std::string)) & TeamWrapper::GetTeamMemberNamed, "C++: TeamWrapper::GetTeamMemberNamed(std::string) --> class PriWrapper", "PlayerName"_a);
		cl.def("GetNumBots", (int (TeamWrapper::*)()) & TeamWrapper::GetNumBots, "C++: TeamWrapper::GetNumBots() --> int");
		cl.def("GetNumHumans", (int (TeamWrapper::*)()) & TeamWrapper::GetNumHumans, "C++: TeamWrapper::GetNumHumans() --> int");
		cl.def("OnScoreUpdated", (void (TeamWrapper::*)()) & TeamWrapper::OnScoreUpdated, "C++: TeamWrapper::OnScoreUpdated() --> void");
		cl.def("ResetScore", (void (TeamWrapper::*)()) & TeamWrapper::ResetScore, "C++: TeamWrapper::ResetScore() --> void");
		cl.def("RemovePoints", (void (TeamWrapper::*)(int)) & TeamWrapper::RemovePoints, "C++: TeamWrapper::RemovePoints(int) --> void", "Points"_a);
		cl.def("SetScore", (void (TeamWrapper::*)(int)) & TeamWrapper::SetScore, "C++: TeamWrapper::SetScore(int) --> void", "Points"_a);
		cl.def("ScorePoint", (void (TeamWrapper::*)(int)) & TeamWrapper::ScorePoint, "C++: TeamWrapper::ScorePoint(int) --> void", "AdditionalScore"_a);
		cl.def("MuteOtherTeam", (void (TeamWrapper::*)(class TeamWrapper, unsigned long)) & TeamWrapper::MuteOtherTeam, "C++: TeamWrapper::MuteOtherTeam(class TeamWrapper, unsigned long) --> void", "OtherTeam"_a, "bMute"_a);
		cl.def("ClearTemporarySpawnSpots", (void (TeamWrapper::*)()) & TeamWrapper::ClearTemporarySpawnSpots, "C++: TeamWrapper::ClearTemporarySpawnSpots() --> void");
		cl.def("ExpireTemporarySpawnSpots", (void (TeamWrapper::*)()) & TeamWrapper::ExpireTemporarySpawnSpots, "C++: TeamWrapper::ExpireTemporarySpawnSpots() --> void");
		cl.def("AddTemporarySpawnSpot", (void (TeamWrapper::*)(class ActorWrapper)) & TeamWrapper::AddTemporarySpawnSpot, "C++: TeamWrapper::AddTemporarySpawnSpot(class ActorWrapper) --> void", "AtActor"_a);
		cl.def("OnGameEventSet", (void (TeamWrapper::*)()) & TeamWrapper::OnGameEventSet, "C++: TeamWrapper::OnGameEventSet() --> void");
		cl.def("SetGameEvent2", (void (TeamWrapper::*)(class TeamGameEventWrapper)) & TeamWrapper::SetGameEvent2, "C++: TeamWrapper::SetGameEvent2(class TeamGameEventWrapper) --> void", "InGameEvent"_a);
	}
	{ // GoalWrapper file: line:10
		pybind11::class_<GoalWrapper, std::shared_ptr<GoalWrapper>, ObjectWrapper> cl(M, "GoalWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](GoalWrapper const& o) { return new GoalWrapper(o); }));
		cl.def("assign", (class GoalWrapper& (GoalWrapper::*)(class GoalWrapper)) & GoalWrapper::operator=, "C++: GoalWrapper::operator=(class GoalWrapper) --> class GoalWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetGoalOrientation", (class ActorWrapper(GoalWrapper::*)()) & GoalWrapper::GetGoalOrientation, "C++: GoalWrapper::GetGoalOrientation() --> class ActorWrapper");
		cl.def("SetGoalOrientation", (void (GoalWrapper::*)(class ActorWrapper)) & GoalWrapper::SetGoalOrientation, "C++: GoalWrapper::SetGoalOrientation(class ActorWrapper) --> void", "newGoalOrientation"_a);
		cl.def("GetOverrideGoalIndicatorOrientations", (class ArrayWrapper<class ActorWrapper>(GoalWrapper::*)()) & GoalWrapper::GetOverrideGoalIndicatorOrientations, "C++: GoalWrapper::GetOverrideGoalIndicatorOrientations() --> class ArrayWrapper<class ActorWrapper>");
		cl.def("GetTeamNum", (unsigned char (GoalWrapper::*)()) & GoalWrapper::GetTeamNum, "C++: GoalWrapper::GetTeamNum() --> unsigned char");
		cl.def("SetTeamNum", (void (GoalWrapper::*)(unsigned char)) & GoalWrapper::SetTeamNum, "C++: GoalWrapper::SetTeamNum(unsigned char) --> void", "newTeamNum"_a);
		cl.def("GetScoreFX", (class FXActorWrapper(GoalWrapper::*)()) & GoalWrapper::GetScoreFX, "C++: GoalWrapper::GetScoreFX() --> class FXActorWrapper");
		cl.def("SetScoreFX", (void (GoalWrapper::*)(class FXActorWrapper)) & GoalWrapper::SetScoreFX, "C++: GoalWrapper::SetScoreFX(class FXActorWrapper) --> void", "newScoreFX"_a);
		cl.def("GetGoalIndicatorArchetype", (class UnrealStringWrapper(GoalWrapper::*)()) & GoalWrapper::GetGoalIndicatorArchetype, "C++: GoalWrapper::GetGoalIndicatorArchetype() --> class UnrealStringWrapper");
		cl.def("GetbNoGoalIndicator", (unsigned long (GoalWrapper::*)()) & GoalWrapper::GetbNoGoalIndicator, "C++: GoalWrapper::GetbNoGoalIndicator() --> unsigned long");
		cl.def("SetbNoGoalIndicator", (void (GoalWrapper::*)(unsigned long)) & GoalWrapper::SetbNoGoalIndicator, "C++: GoalWrapper::SetbNoGoalIndicator(unsigned long) --> void", "newbNoGoalIndicator"_a);
		cl.def("GetbOnlyGoalsFromDirection", (unsigned long (GoalWrapper::*)()) & GoalWrapper::GetbOnlyGoalsFromDirection, "C++: GoalWrapper::GetbOnlyGoalsFromDirection() --> unsigned long");
		cl.def("SetbOnlyGoalsFromDirection", (void (GoalWrapper::*)(unsigned long)) & GoalWrapper::SetbOnlyGoalsFromDirection, "C++: GoalWrapper::SetbOnlyGoalsFromDirection(unsigned long) --> void", "newbOnlyGoalsFromDirection"_a);
		cl.def("GetbShowFocusExtent", (unsigned long (GoalWrapper::*)()) & GoalWrapper::GetbShowFocusExtent, "C++: GoalWrapper::GetbShowFocusExtent() --> unsigned long");
		cl.def("SetbShowFocusExtent", (void (GoalWrapper::*)(unsigned long)) & GoalWrapper::SetbShowFocusExtent, "C++: GoalWrapper::SetbShowFocusExtent(unsigned long) --> void", "newbShowFocusExtent"_a);
		cl.def("GetGoalDirection", (class ActorWrapper(GoalWrapper::*)()) & GoalWrapper::GetGoalDirection, "C++: GoalWrapper::GetGoalDirection() --> class ActorWrapper");
		cl.def("SetGoalDirection", (void (GoalWrapper::*)(class ActorWrapper)) & GoalWrapper::SetGoalDirection, "C++: GoalWrapper::SetGoalDirection(class ActorWrapper) --> void", "newGoalDirection"_a);
		cl.def("GetPointsToAward", (int (GoalWrapper::*)()) & GoalWrapper::GetPointsToAward, "C++: GoalWrapper::GetPointsToAward() --> int");
		cl.def("SetPointsToAward", (void (GoalWrapper::*)(int)) & GoalWrapper::SetPointsToAward, "C++: GoalWrapper::SetPointsToAward(int) --> void", "newPointsToAward"_a);
		cl.def("GetAutoCamFocusExtent", (struct Vector(GoalWrapper::*)()) & GoalWrapper::GetAutoCamFocusExtent, "C++: GoalWrapper::GetAutoCamFocusExtent() --> struct Vector");
		cl.def("SetAutoCamFocusExtent", (void (GoalWrapper::*)(struct Vector)) & GoalWrapper::SetAutoCamFocusExtent, "C++: GoalWrapper::SetAutoCamFocusExtent(struct Vector) --> void", "newAutoCamFocusExtent"_a);
		cl.def("GetGoalFocusLocationOffset", (struct Vector(GoalWrapper::*)()) & GoalWrapper::GetGoalFocusLocationOffset, "C++: GoalWrapper::GetGoalFocusLocationOffset() --> struct Vector");
		cl.def("SetGoalFocusLocationOffset", (void (GoalWrapper::*)(struct Vector)) & GoalWrapper::SetGoalFocusLocationOffset, "C++: GoalWrapper::SetGoalFocusLocationOffset(struct Vector) --> void", "newGoalFocusLocationOffset"_a);
		cl.def("GetMaxGoalScorerAttachRadius", (float (GoalWrapper::*)()) & GoalWrapper::GetMaxGoalScorerAttachRadius, "C++: GoalWrapper::GetMaxGoalScorerAttachRadius() --> float");
		cl.def("SetMaxGoalScorerAttachRadius", (void (GoalWrapper::*)(float)) & GoalWrapper::SetMaxGoalScorerAttachRadius, "C++: GoalWrapper::SetMaxGoalScorerAttachRadius(float) --> void", "newMaxGoalScorerAttachRadius"_a);
		cl.def("GetGoalScoredDotDirection", (struct Vector(GoalWrapper::*)()) & GoalWrapper::GetGoalScoredDotDirection, "C++: GoalWrapper::GetGoalScoredDotDirection() --> struct Vector");
		cl.def("SetGoalScoredDotDirection", (void (GoalWrapper::*)(struct Vector)) & GoalWrapper::SetGoalScoredDotDirection, "C++: GoalWrapper::SetGoalScoredDotDirection(struct Vector) --> void", "newGoalScoredDotDirection"_a);
		cl.def("GetMinAttachGoalToScorerDot", (float (GoalWrapper::*)()) & GoalWrapper::GetMinAttachGoalToScorerDot, "C++: GoalWrapper::GetMinAttachGoalToScorerDot() --> float");
		cl.def("SetMinAttachGoalToScorerDot", (void (GoalWrapper::*)(float)) & GoalWrapper::SetMinAttachGoalToScorerDot, "C++: GoalWrapper::SetMinAttachGoalToScorerDot(float) --> void", "newMinAttachGoalToScorerDot"_a);
		cl.def("GetLocation", (struct Vector(GoalWrapper::*)()) & GoalWrapper::GetLocation, "C++: GoalWrapper::GetLocation() --> struct Vector");
		cl.def("SetLocation", (void (GoalWrapper::*)(struct Vector)) & GoalWrapper::SetLocation, "C++: GoalWrapper::SetLocation(struct Vector) --> void", "newLocation"_a);
		cl.def("GetDirection", (struct Vector(GoalWrapper::*)()) & GoalWrapper::GetDirection, "C++: GoalWrapper::GetDirection() --> struct Vector");
		cl.def("SetDirection", (void (GoalWrapper::*)(struct Vector)) & GoalWrapper::SetDirection, "C++: GoalWrapper::SetDirection(struct Vector) --> void", "newDirection"_a);
		cl.def("GetRight", (struct Vector(GoalWrapper::*)()) & GoalWrapper::GetRight, "C++: GoalWrapper::GetRight() --> struct Vector");
		cl.def("SetRight", (void (GoalWrapper::*)(struct Vector)) & GoalWrapper::SetRight, "C++: GoalWrapper::SetRight(struct Vector) --> void", "newRight"_a);
		cl.def("GetUp", (struct Vector(GoalWrapper::*)()) & GoalWrapper::GetUp, "C++: GoalWrapper::GetUp() --> struct Vector");
		cl.def("SetUp", (void (GoalWrapper::*)(struct Vector)) & GoalWrapper::SetUp, "C++: GoalWrapper::SetUp(struct Vector) --> void", "newUp"_a);
		cl.def("GetRotation", (struct Rotator(GoalWrapper::*)()) & GoalWrapper::GetRotation, "C++: GoalWrapper::GetRotation() --> struct Rotator");
		cl.def("SetRotation", (void (GoalWrapper::*)(struct Rotator)) & GoalWrapper::SetRotation, "C++: GoalWrapper::SetRotation(struct Rotator) --> void", "newRotation"_a);
		cl.def("GetLocalExtent", (struct Vector(GoalWrapper::*)()) & GoalWrapper::GetLocalExtent, "C++: GoalWrapper::GetLocalExtent() --> struct Vector");
		cl.def("SetLocalExtent", (void (GoalWrapper::*)(struct Vector)) & GoalWrapper::SetLocalExtent, "C++: GoalWrapper::SetLocalExtent(struct Vector) --> void", "newLocalExtent"_a);
		cl.def("GetWorldCenter", (struct Vector(GoalWrapper::*)()) & GoalWrapper::GetWorldCenter, "C++: GoalWrapper::GetWorldCenter() --> struct Vector");
		cl.def("SetWorldCenter", (void (GoalWrapper::*)(struct Vector)) & GoalWrapper::SetWorldCenter, "C++: GoalWrapper::SetWorldCenter(struct Vector) --> void", "newWorldCenter"_a);
		cl.def("GetWorldExtent", (struct Vector(GoalWrapper::*)()) & GoalWrapper::GetWorldExtent, "C++: GoalWrapper::GetWorldExtent() --> struct Vector");
		cl.def("SetWorldExtent", (void (GoalWrapper::*)(struct Vector)) & GoalWrapper::SetWorldExtent, "C++: GoalWrapper::SetWorldExtent(struct Vector) --> void", "newWorldExtent"_a);
		cl.def("GetWorldFrontCenter", (struct Vector(GoalWrapper::*)()) & GoalWrapper::GetWorldFrontCenter, "C++: GoalWrapper::GetWorldFrontCenter() --> struct Vector");
		cl.def("SetWorldFrontCenter", (void (GoalWrapper::*)(struct Vector)) & GoalWrapper::SetWorldFrontCenter, "C++: GoalWrapper::SetWorldFrontCenter(struct Vector) --> void", "newWorldFrontCenter"_a);
		cl.def("GetGoalFocusExtentCenter", (struct Vector(GoalWrapper::*)()) & GoalWrapper::GetGoalFocusExtentCenter, "C++: GoalWrapper::GetGoalFocusExtentCenter() --> struct Vector");
		cl.def("Init", (void (GoalWrapper::*)()) & GoalWrapper::Init, "C++: GoalWrapper::Init() --> void");
		cl.def("eventBeginPlay", (void (GoalWrapper::*)()) & GoalWrapper::eventBeginPlay, "C++: GoalWrapper::eventBeginPlay() --> void");
	}
	{ // VehiclePickupWrapper file: line:10
		pybind11::class_<VehiclePickupWrapper, std::shared_ptr<VehiclePickupWrapper>, ActorWrapper> cl(M, "VehiclePickupWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](VehiclePickupWrapper const& o) { return new VehiclePickupWrapper(o); }));
		cl.def("assign", (class VehiclePickupWrapper& (VehiclePickupWrapper::*)(class VehiclePickupWrapper)) & VehiclePickupWrapper::operator=, "C++: VehiclePickupWrapper::operator=(class VehiclePickupWrapper) --> class VehiclePickupWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetRespawnDelay", (float (VehiclePickupWrapper::*)()) & VehiclePickupWrapper::GetRespawnDelay, "C++: VehiclePickupWrapper::GetRespawnDelay() --> float");
		cl.def("SetRespawnDelay", (void (VehiclePickupWrapper::*)(float)) & VehiclePickupWrapper::SetRespawnDelay, "C++: VehiclePickupWrapper::SetRespawnDelay(float) --> void", "newRespawnDelay"_a);
		cl.def("GetFXActorArchetype", (class FXActorWrapper(VehiclePickupWrapper::*)()) & VehiclePickupWrapper::GetFXActorArchetype, "C++: VehiclePickupWrapper::GetFXActorArchetype() --> class FXActorWrapper");
		cl.def("SetFXActorArchetype", (void (VehiclePickupWrapper::*)(class FXActorWrapper)) & VehiclePickupWrapper::SetFXActorArchetype, "C++: VehiclePickupWrapper::SetFXActorArchetype(class FXActorWrapper) --> void", "newFXActorArchetype"_a);
		cl.def("GetFXActor", (class FXActorWrapper(VehiclePickupWrapper::*)()) & VehiclePickupWrapper::GetFXActor, "C++: VehiclePickupWrapper::GetFXActor() --> class FXActorWrapper");
		cl.def("SetFXActor", (void (VehiclePickupWrapper::*)(class FXActorWrapper)) & VehiclePickupWrapper::SetFXActor, "C++: VehiclePickupWrapper::SetFXActor(class FXActorWrapper) --> void", "newFXActor"_a);
		cl.def("GetbPickedUp", (unsigned long (VehiclePickupWrapper::*)()) & VehiclePickupWrapper::GetbPickedUp, "C++: VehiclePickupWrapper::GetbPickedUp() --> unsigned long");
		cl.def("SetbPickedUp", (void (VehiclePickupWrapper::*)(unsigned long)) & VehiclePickupWrapper::SetbPickedUp, "C++: VehiclePickupWrapper::SetbPickedUp(unsigned long) --> void", "newbPickedUp"_a);
		cl.def("GetbNetRelevant", (unsigned long (VehiclePickupWrapper::*)()) & VehiclePickupWrapper::GetbNetRelevant, "C++: VehiclePickupWrapper::GetbNetRelevant() --> unsigned long");
		cl.def("SetbNetRelevant", (void (VehiclePickupWrapper::*)(unsigned long)) & VehiclePickupWrapper::SetbNetRelevant, "C++: VehiclePickupWrapper::SetbNetRelevant(unsigned long) --> void", "newbNetRelevant"_a);
		cl.def("GetbNoPickup", (unsigned long (VehiclePickupWrapper::*)()) & VehiclePickupWrapper::GetbNoPickup, "C++: VehiclePickupWrapper::GetbNoPickup() --> unsigned long");
		cl.def("SetbNoPickup", (void (VehiclePickupWrapper::*)(unsigned long)) & VehiclePickupWrapper::SetbNoPickup, "C++: VehiclePickupWrapper::SetbNoPickup(unsigned long) --> void", "newbNoPickup"_a);
		cl.def("PlayPickedUpFX", (void (VehiclePickupWrapper::*)()) & VehiclePickupWrapper::PlayPickedUpFX, "C++: VehiclePickupWrapper::PlayPickedUpFX() --> void");
		cl.def("IsTouchingAVehicle", (bool (VehiclePickupWrapper::*)()) & VehiclePickupWrapper::IsTouchingAVehicle, "C++: VehiclePickupWrapper::IsTouchingAVehicle() --> bool");
		cl.def("UpdateTickDisabled", (void (VehiclePickupWrapper::*)()) & VehiclePickupWrapper::UpdateTickDisabled, "C++: VehiclePickupWrapper::UpdateTickDisabled() --> void");
		cl.def("SetNetRelevant", (void (VehiclePickupWrapper::*)(unsigned long)) & VehiclePickupWrapper::SetNetRelevant, "C++: VehiclePickupWrapper::SetNetRelevant(unsigned long) --> void", "bRelevant"_a);
		cl.def("Respawn2", (void (VehiclePickupWrapper::*)()) & VehiclePickupWrapper::Respawn2, "C++: VehiclePickupWrapper::Respawn2() --> void");
		cl.def("SetPickedUp", (void (VehiclePickupWrapper::*)(unsigned long, class CarWrapper)) & VehiclePickupWrapper::SetPickedUp, "C++: VehiclePickupWrapper::SetPickedUp(unsigned long, class CarWrapper) --> void", "bNewPickedUp"_a, "InInstigator"_a);
		cl.def("Pickup2", (void (VehiclePickupWrapper::*)(class CarWrapper)) & VehiclePickupWrapper::Pickup2, "C++: VehiclePickupWrapper::Pickup2(class CarWrapper) --> void", "Car"_a);
		cl.def("CanPickup", (bool (VehiclePickupWrapper::*)(class CarWrapper)) & VehiclePickupWrapper::CanPickup, "C++: VehiclePickupWrapper::CanPickup(class CarWrapper) --> bool", "Car"_a);
		cl.def("OnTouch", (void (VehiclePickupWrapper::*)(class CarWrapper)) & VehiclePickupWrapper::OnTouch, "C++: VehiclePickupWrapper::OnTouch(class CarWrapper) --> void", "Car"_a);
		cl.def("eventTouch", (void (VehiclePickupWrapper::*)(class ActorWrapper, class PrimitiveComponentWrapper, struct Vector&, struct Vector&)) & VehiclePickupWrapper::eventTouch, "C++: VehiclePickupWrapper::eventTouch(class ActorWrapper, class PrimitiveComponentWrapper, struct Vector &, struct Vector &) --> void", "Other"_a, "OtherComp"_a, "HitLocation"_a, "HitNormal"_a);
		cl.def("OnPickUp", (void (VehiclePickupWrapper::*)()) & VehiclePickupWrapper::OnPickUp, "C++: VehiclePickupWrapper::OnPickUp() --> void");
		cl.def("OnSpawn", (void (VehiclePickupWrapper::*)()) & VehiclePickupWrapper::OnSpawn, "C++: VehiclePickupWrapper::OnSpawn() --> void");
		cl.def("SetNoPickup", (void (VehiclePickupWrapper::*)()) & VehiclePickupWrapper::SetNoPickup, "C++: VehiclePickupWrapper::SetNoPickup() --> void");
		cl.def("SetupReplicateNoPickup", (void (VehiclePickupWrapper::*)()) & VehiclePickupWrapper::SetupReplicateNoPickup, "C++: VehiclePickupWrapper::SetupReplicateNoPickup() --> void");
		cl.def("InitFX", (void (VehiclePickupWrapper::*)()) & VehiclePickupWrapper::InitFX, "C++: VehiclePickupWrapper::InitFX() --> void");
		cl.def("eventPostBeginPlay", (void (VehiclePickupWrapper::*)()) & VehiclePickupWrapper::eventPostBeginPlay, "C++: VehiclePickupWrapper::eventPostBeginPlay() --> void");
		cl.def("eventPreBeginPlay", (void (VehiclePickupWrapper::*)()) & VehiclePickupWrapper::eventPreBeginPlay, "C++: VehiclePickupWrapper::eventPreBeginPlay() --> void");
		cl.def("EventPickedUp", (void (VehiclePickupWrapper::*)(class VehiclePickupWrapper)) & VehiclePickupWrapper::EventPickedUp, "C++: VehiclePickupWrapper::EventPickedUp(class VehiclePickupWrapper) --> void", "Pickup"_a);
		cl.def("EventSpawned", (void (VehiclePickupWrapper::*)(class VehiclePickupWrapper)) & VehiclePickupWrapper::EventSpawned, "C++: VehiclePickupWrapper::EventSpawned(class VehiclePickupWrapper) --> void", "Pickup"_a);
	}
	{ // BoostPickupWrapper file: line:8
		pybind11::class_<BoostPickupWrapper, std::shared_ptr<BoostPickupWrapper>, VehiclePickupWrapper> cl(M, "BoostPickupWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](BoostPickupWrapper const& o) { return new BoostPickupWrapper(o); }));
		cl.def("assign", (class BoostPickupWrapper& (BoostPickupWrapper::*)(class BoostPickupWrapper)) & BoostPickupWrapper::operator=, "C++: BoostPickupWrapper::operator=(class BoostPickupWrapper) --> class BoostPickupWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetBoostAmount", (float (BoostPickupWrapper::*)()) & BoostPickupWrapper::GetBoostAmount, "C++: BoostPickupWrapper::GetBoostAmount() --> float");
		cl.def("SetBoostAmount", (void (BoostPickupWrapper::*)(float)) & BoostPickupWrapper::SetBoostAmount, "C++: BoostPickupWrapper::SetBoostAmount(float) --> void", "newBoostAmount"_a);
		cl.def("GetBoostType", (unsigned char (BoostPickupWrapper::*)()) & BoostPickupWrapper::GetBoostType, "C++: BoostPickupWrapper::GetBoostType() --> unsigned char");
		cl.def("SetBoostType", (void (BoostPickupWrapper::*)(unsigned char)) & BoostPickupWrapper::SetBoostType, "C++: BoostPickupWrapper::SetBoostType(unsigned char) --> void", "newBoostType"_a);
		cl.def("PlayPickedUpFX", (void (BoostPickupWrapper::*)()) & BoostPickupWrapper::PlayPickedUpFX, "C++: BoostPickupWrapper::PlayPickedUpFX() --> void");
		cl.def("Pickup2", (void (BoostPickupWrapper::*)(class CarWrapper)) & BoostPickupWrapper::Pickup2, "C++: BoostPickupWrapper::Pickup2(class CarWrapper) --> void", "Car"_a);
		cl.def("CanPickup", (bool (BoostPickupWrapper::*)(class CarWrapper)) & BoostPickupWrapper::CanPickup, "C++: BoostPickupWrapper::CanPickup(class CarWrapper) --> bool", "Car"_a);
	}
	{ // ArrayWrapper file:bakkesmod/wrappers/arraywrapper.h line:45
		pybind11::class_<ArrayWrapper<ActorWrapper>, std::shared_ptr<ArrayWrapper<ActorWrapper>>> cl(M, "ArrayWrapper_ActorWrapper_t");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](ArrayWrapper<ActorWrapper> const& o) { return new ArrayWrapper<ActorWrapper>(o); }));
		cl.def("assign", (class ArrayWrapper<class ActorWrapper> &(ArrayWrapper<ActorWrapper>::*)(class ArrayWrapper<class ActorWrapper>)) & ArrayWrapper<ActorWrapper>::operator=, "C++: ArrayWrapper<ActorWrapper>::operator=(class ArrayWrapper<class ActorWrapper>) --> class ArrayWrapper<class ActorWrapper> &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("Count", (int (ArrayWrapper<ActorWrapper>::*)()) & ArrayWrapper<ActorWrapper>::Count, "C++: ArrayWrapper<ActorWrapper>::Count() --> int");
		cl.def("Get", (class ActorWrapper(ArrayWrapper<ActorWrapper>::*)(int)) & ArrayWrapper<ActorWrapper>::Get, "C++: ArrayWrapper<ActorWrapper>::Get(int) --> class ActorWrapper", "index"_a);
	}
	{ // ArrayWrapper file:bakkesmod/wrappers/arraywrapper.h line:46
		pybind11::class_<ArrayWrapper<TeamWrapper>, std::shared_ptr<ArrayWrapper<TeamWrapper>>> cl(M, "ArrayWrapper_TeamWrapper_t");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](ArrayWrapper<TeamWrapper> const& o) { return new ArrayWrapper<TeamWrapper>(o); }));
		cl.def("assign", (class ArrayWrapper<class TeamWrapper> &(ArrayWrapper<TeamWrapper>::*)(class ArrayWrapper<class TeamWrapper>)) & ArrayWrapper<TeamWrapper>::operator=, "C++: ArrayWrapper<TeamWrapper>::operator=(class ArrayWrapper<class TeamWrapper>) --> class ArrayWrapper<class TeamWrapper> &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("Count", (int (ArrayWrapper<TeamWrapper>::*)()) & ArrayWrapper<TeamWrapper>::Count, "C++: ArrayWrapper<TeamWrapper>::Count() --> int");
		cl.def("Get", (class TeamWrapper(ArrayWrapper<TeamWrapper>::*)(int)) & ArrayWrapper<TeamWrapper>::Get, "C++: ArrayWrapper<TeamWrapper>::Get(int) --> class TeamWrapper", "index"_a);
	}
	{ // ArrayWrapper file:bakkesmod/wrappers/arraywrapper.h line:47
		pybind11::class_<ArrayWrapper<CarWrapper>, std::shared_ptr<ArrayWrapper<CarWrapper>>> cl(M, "ArrayWrapper_CarWrapper_t");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](ArrayWrapper<CarWrapper> const& o) { return new ArrayWrapper<CarWrapper>(o); }));
		cl.def("assign", (class ArrayWrapper<class CarWrapper> &(ArrayWrapper<CarWrapper>::*)(class ArrayWrapper<class CarWrapper>)) & ArrayWrapper<CarWrapper>::operator=, "C++: ArrayWrapper<CarWrapper>::operator=(class ArrayWrapper<class CarWrapper>) --> class ArrayWrapper<class CarWrapper> &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("Count", (int (ArrayWrapper<CarWrapper>::*)()) & ArrayWrapper<CarWrapper>::Count, "C++: ArrayWrapper<CarWrapper>::Count() --> int");
		cl.def("Get", (class CarWrapper(ArrayWrapper<CarWrapper>::*)(int)) & ArrayWrapper<CarWrapper>::Get, "C++: ArrayWrapper<CarWrapper>::Get(int) --> class CarWrapper", "index"_a);
	}
	{ // ArrayWrapper file:bakkesmod/wrappers/arraywrapper.h line:48
		pybind11::class_<ArrayWrapper<BallWrapper>, std::shared_ptr<ArrayWrapper<BallWrapper>>> cl(M, "ArrayWrapper_BallWrapper_t");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](ArrayWrapper<BallWrapper> const& o) { return new ArrayWrapper<BallWrapper>(o); }));
		cl.def("assign", (class ArrayWrapper<class BallWrapper> &(ArrayWrapper<BallWrapper>::*)(class ArrayWrapper<class BallWrapper>)) & ArrayWrapper<BallWrapper>::operator=, "C++: ArrayWrapper<BallWrapper>::operator=(class ArrayWrapper<class BallWrapper>) --> class ArrayWrapper<class BallWrapper> &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("Count", (int (ArrayWrapper<BallWrapper>::*)()) & ArrayWrapper<BallWrapper>::Count, "C++: ArrayWrapper<BallWrapper>::Count() --> int");
		cl.def("Get", (class BallWrapper(ArrayWrapper<BallWrapper>::*)(int)) & ArrayWrapper<BallWrapper>::Get, "C++: ArrayWrapper<BallWrapper>::Get(int) --> class BallWrapper", "index"_a);
	}
	{ // ArrayWrapper file:bakkesmod/wrappers/arraywrapper.h line:49
		pybind11::class_<ArrayWrapper<PriWrapper>, std::shared_ptr<ArrayWrapper<PriWrapper>>> cl(M, "ArrayWrapper_PriWrapper_t");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](ArrayWrapper<PriWrapper> const& o) { return new ArrayWrapper<PriWrapper>(o); }));
		cl.def("assign", (class ArrayWrapper<class PriWrapper> &(ArrayWrapper<PriWrapper>::*)(class ArrayWrapper<class PriWrapper>)) & ArrayWrapper<PriWrapper>::operator=, "C++: ArrayWrapper<PriWrapper>::operator=(class ArrayWrapper<class PriWrapper>) --> class ArrayWrapper<class PriWrapper> &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("Count", (int (ArrayWrapper<PriWrapper>::*)()) & ArrayWrapper<PriWrapper>::Count, "C++: ArrayWrapper<PriWrapper>::Count() --> int");
		cl.def("Get", (class PriWrapper(ArrayWrapper<PriWrapper>::*)(int)) & ArrayWrapper<PriWrapper>::Get, "C++: ArrayWrapper<PriWrapper>::Get(int) --> class PriWrapper", "index"_a);
	}
	{ // ArrayWrapper file:bakkesmod/wrappers/arraywrapper.h line:50
		pybind11::class_<ArrayWrapper<WheelWrapper>, std::shared_ptr<ArrayWrapper<WheelWrapper>>> cl(M, "ArrayWrapper_WheelWrapper_t");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](ArrayWrapper<WheelWrapper> const& o) { return new ArrayWrapper<WheelWrapper>(o); }));
		cl.def("assign", (class ArrayWrapper<class WheelWrapper> &(ArrayWrapper<WheelWrapper>::*)(class ArrayWrapper<class WheelWrapper>)) & ArrayWrapper<WheelWrapper>::operator=, "C++: ArrayWrapper<WheelWrapper>::operator=(class ArrayWrapper<class WheelWrapper>) --> class ArrayWrapper<class WheelWrapper> &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("Count", (int (ArrayWrapper<WheelWrapper>::*)()) & ArrayWrapper<WheelWrapper>::Count, "C++: ArrayWrapper<WheelWrapper>::Count() --> int");
		cl.def("Get", (class WheelWrapper(ArrayWrapper<WheelWrapper>::*)(int)) & ArrayWrapper<WheelWrapper>::Get, "C++: ArrayWrapper<WheelWrapper>::Get(int) --> class WheelWrapper", "index"_a);
	}
	{ // ArrayWrapper file:bakkesmod/wrappers/arraywrapper.h line:51
		pybind11::class_<ArrayWrapper<RBActorWrapper>, std::shared_ptr<ArrayWrapper<RBActorWrapper>>> cl(M, "ArrayWrapper_RBActorWrapper_t");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](ArrayWrapper<RBActorWrapper> const& o) { return new ArrayWrapper<RBActorWrapper>(o); }));
		cl.def("assign", (class ArrayWrapper<class RBActorWrapper> &(ArrayWrapper<RBActorWrapper>::*)(class ArrayWrapper<class RBActorWrapper>)) & ArrayWrapper<RBActorWrapper>::operator=, "C++: ArrayWrapper<RBActorWrapper>::operator=(class ArrayWrapper<class RBActorWrapper>) --> class ArrayWrapper<class RBActorWrapper> &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("Count", (int (ArrayWrapper<RBActorWrapper>::*)()) & ArrayWrapper<RBActorWrapper>::Count, "C++: ArrayWrapper<RBActorWrapper>::Count() --> int");
		cl.def("Get", (class RBActorWrapper(ArrayWrapper<RBActorWrapper>::*)(int)) & ArrayWrapper<RBActorWrapper>::Get, "C++: ArrayWrapper<RBActorWrapper>::Get(int) --> class RBActorWrapper", "index"_a);
	}
	{ // ArrayWrapper file:bakkesmod/wrappers/arraywrapper.h line:52
		pybind11::class_<ArrayWrapper<CarComponentWrapper>, std::shared_ptr<ArrayWrapper<CarComponentWrapper>>> cl(M, "ArrayWrapper_CarComponentWrapper_t");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](ArrayWrapper<CarComponentWrapper> const& o) { return new ArrayWrapper<CarComponentWrapper>(o); }));
		cl.def("assign", (class ArrayWrapper<class CarComponentWrapper> &(ArrayWrapper<CarComponentWrapper>::*)(class ArrayWrapper<class CarComponentWrapper>)) & ArrayWrapper<CarComponentWrapper>::operator=, "C++: ArrayWrapper<CarComponentWrapper>::operator=(class ArrayWrapper<class CarComponentWrapper>) --> class ArrayWrapper<class CarComponentWrapper> &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("Count", (int (ArrayWrapper<CarComponentWrapper>::*)()) & ArrayWrapper<CarComponentWrapper>::Count, "C++: ArrayWrapper<CarComponentWrapper>::Count() --> int");
		cl.def("Get", (class CarComponentWrapper(ArrayWrapper<CarComponentWrapper>::*)(int)) & ArrayWrapper<CarComponentWrapper>::Get, "C++: ArrayWrapper<CarComponentWrapper>::Get(int) --> class CarComponentWrapper", "index"_a);
	}
	{ // CVarWrapper file: line:10
		pybind11::class_<CVarWrapper, std::shared_ptr<CVarWrapper>> cl(M, "CVarWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long, class std::type_index>(), pybind11::arg("mem"), pybind11::arg("pluginIdx"));

		cl.def(pybind11::init([](CVarWrapper const& o) { return new CVarWrapper(o); }));
		cl.def("assign", (class CVarWrapper& (CVarWrapper::*)(class CVarWrapper)) & CVarWrapper::operator=, "C++: CVarWrapper::operator=(class CVarWrapper) --> class CVarWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("getCVarName", (std::string(CVarWrapper::*)()) & CVarWrapper::getCVarName, "C++: CVarWrapper::getCVarName() --> std::string");
		cl.def("getIntValue", (int (CVarWrapper::*)()) & CVarWrapper::getIntValue, "C++: CVarWrapper::getIntValue() --> int");
		cl.def("getFloatValue", (float (CVarWrapper::*)()) & CVarWrapper::getFloatValue, "C++: CVarWrapper::getFloatValue() --> float");
		cl.def("getBoolValue", (bool (CVarWrapper::*)()) & CVarWrapper::getBoolValue, "C++: CVarWrapper::getBoolValue() --> bool");
		cl.def("getStringValue", (std::string(CVarWrapper::*)()) & CVarWrapper::getStringValue, "C++: CVarWrapper::getStringValue() --> std::string");
		cl.def("getDescription", (std::string(CVarWrapper::*)()) & CVarWrapper::getDescription, "C++: CVarWrapper::getDescription() --> std::string");
		cl.def("notify", (void (CVarWrapper::*)()) & CVarWrapper::notify, "C++: CVarWrapper::notify() --> void");
		cl.def("setValue", (void (CVarWrapper::*)(std::string)) & CVarWrapper::setValue, "C++: CVarWrapper::setValue(std::string) --> void", "value"_a);
		cl.def("setValue", (void (CVarWrapper::*)(int)) & CVarWrapper::setValue, "C++: CVarWrapper::setValue(int) --> void", "value"_a);
		cl.def("setValue", (void (CVarWrapper::*)(float)) & CVarWrapper::setValue, "C++: CVarWrapper::setValue(float) --> void", "value"_a);
		cl.def("addOnValueChanged", (void (CVarWrapper::*)(class std::function<void(std::string, class CVarWrapper)>)) & CVarWrapper::addOnValueChanged, "C++: CVarWrapper::addOnValueChanged(class std::function<void (std::string, class CVarWrapper)>) --> void", "changeFunc"_a);
		
		//cl.def("bindTo", (void (CVarWrapper::*)(class std::shared_ptr<int>)) &CVarWrapper::bindTo, "C++: CVarWrapper::bindTo(class std::shared_ptr<int>) --> void", "var"_a);
		//cl.def("bindTo", (void (CVarWrapper::*)(class std::shared_ptr<float>)) &CVarWrapper::bindTo, "C++: CVarWrapper::bindTo(class std::shared_ptr<float>) --> void", "var"_a);
		//cl.def("bindTo", (void (CVarWrapper::*)(class std::shared_ptr<std::string >)) &CVarWrapper::bindTo, "C++: CVarWrapper::bindTo(class std::shared_ptr<std::string >) --> void", "var"_a);
		//cl.def("bindTo", (void (CVarWrapper::*)(class std::shared_ptr<bool>)) &CVarWrapper::bindTo, "C++: CVarWrapper::bindTo(class std::shared_ptr<bool>) --> void", "var"_a);
	}
	{ // CVarManagerWrapper file:bakkesmod/wrappers/cvarmanagerwrapper.h line:10
		pybind11::class_<CVarManagerWrapper, std::shared_ptr<CVarManagerWrapper>> cl(M, "CVarManagerWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long, class std::type_index>(), pybind11::arg("mem"), pybind11::arg("pluginIdx"));

		cl.def(pybind11::init([](CVarManagerWrapper const& o) { return new CVarManagerWrapper(o); }));
		cl.def("assign", (class CVarManagerWrapper& (CVarManagerWrapper::*)(class CVarManagerWrapper)) & CVarManagerWrapper::operator=, "C++: CVarManagerWrapper::operator=(class CVarManagerWrapper) --> class CVarManagerWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("executeCommand", (void (CVarManagerWrapper::*)(std::string, bool)) & CVarManagerWrapper::executeCommand, "C++: CVarManagerWrapper::executeCommand(std::string, bool) --> void", "command"_a, "log"_a = true);
		cl.def("registerNotifier", (void (CVarManagerWrapper::*)(std::string, class std::function<void(class std::vector<std::string, class std::allocator<std::string > >)>, std::string, unsigned char)) & CVarManagerWrapper::registerNotifier, "C++: CVarManagerWrapper::registerNotifier(std::string, class std::function<void (class std::vector<std::string, class std::allocator<std::string > >)>, std::string, unsigned char) --> void", "cvar"_a, "notifier"_a, "description"_a, "permissions"_a);
		cl.def("registerCvar", (class CVarWrapper(CVarManagerWrapper::*)(std::string, std::string, std::string, bool, bool, float, bool, float, bool)) & CVarManagerWrapper::registerCvar, "C++: CVarManagerWrapper::registerCvar(std::string, std::string, std::string, bool, bool, float, bool, float, bool) --> class CVarWrapper", "cvar"_a, "defaultValue"_a, "desc"_a = "", "searchAble"_a = true, "hasMin"_a = false, "min"_a = 0, "hasMax"_a = false, "max"_a = 0, "saveToCfg"_a = true);
		cl.def("log", (void (CVarManagerWrapper::*)(std::string)) & CVarManagerWrapper::log, "C++: CVarManagerWrapper::log(std::string) --> void", "text"_a);
		cl.def("getCvar", (class CVarWrapper(CVarManagerWrapper::*)(std::string)) & CVarManagerWrapper::getCvar, "C++: CVarManagerWrapper::getCvar(std::string) --> class CVarWrapper", "cvar"_a);
		cl.def("backupCfg", (void (CVarManagerWrapper::*)(std::string)) & CVarManagerWrapper::backupCfg, "C++: CVarManagerWrapper::backupCfg(std::string) --> void", "path"_a);
		cl.def("backupBinds", (void (CVarManagerWrapper::*)(std::string)) & CVarManagerWrapper::backupBinds, "C++: CVarManagerWrapper::backupBinds(std::string) --> void", "path"_a);
		cl.def("loadCfg", (void (CVarManagerWrapper::*)(std::string)) & CVarManagerWrapper::loadCfg, "C++: CVarManagerWrapper::loadCfg(std::string) --> void", "path"_a);
	}
	{ // EngineTAWrapper file:bakkesmod/wrappers/Engine/EngineTAWrapper.h line:9
		pybind11::class_<EngineTAWrapper, std::shared_ptr<EngineTAWrapper>, ObjectWrapper> cl(M, "EngineTAWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](EngineTAWrapper const& o) { return new EngineTAWrapper(o); }));
		cl.def("assign", (class EngineTAWrapper& (EngineTAWrapper::*)(class EngineTAWrapper)) & EngineTAWrapper::operator=, "C++: EngineTAWrapper::operator=(class EngineTAWrapper) --> class EngineTAWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetbEnableClientPrediction", (unsigned long (EngineTAWrapper::*)()) & EngineTAWrapper::GetbEnableClientPrediction, "C++: EngineTAWrapper::GetbEnableClientPrediction() --> unsigned long");
		cl.def("SetbEnableClientPrediction", (void (EngineTAWrapper::*)(unsigned long)) & EngineTAWrapper::SetbEnableClientPrediction, "C++: EngineTAWrapper::SetbEnableClientPrediction(unsigned long) --> void", "newbEnableClientPrediction"_a);
		cl.def("GetbClientPhysicsUpdate", (unsigned long (EngineTAWrapper::*)()) & EngineTAWrapper::GetbClientPhysicsUpdate, "C++: EngineTAWrapper::GetbClientPhysicsUpdate() --> unsigned long");
		cl.def("SetbClientPhysicsUpdate", (void (EngineTAWrapper::*)(unsigned long)) & EngineTAWrapper::SetbClientPhysicsUpdate, "C++: EngineTAWrapper::SetbClientPhysicsUpdate(unsigned long) --> void", "newbClientPhysicsUpdate"_a);
		cl.def("GetbDisableClientCorrections", (unsigned long (EngineTAWrapper::*)()) & EngineTAWrapper::GetbDisableClientCorrections, "C++: EngineTAWrapper::GetbDisableClientCorrections() --> unsigned long");
		cl.def("SetbDisableClientCorrections", (void (EngineTAWrapper::*)(unsigned long)) & EngineTAWrapper::SetbDisableClientCorrections, "C++: EngineTAWrapper::SetbDisableClientCorrections(unsigned long) --> void", "newbDisableClientCorrections"_a);
		cl.def("GetbDebugClientCorrections", (unsigned long (EngineTAWrapper::*)()) & EngineTAWrapper::GetbDebugClientCorrections, "C++: EngineTAWrapper::GetbDebugClientCorrections() --> unsigned long");
		cl.def("SetbDebugClientCorrections", (void (EngineTAWrapper::*)(unsigned long)) & EngineTAWrapper::SetbDebugClientCorrections, "C++: EngineTAWrapper::SetbDebugClientCorrections(unsigned long) --> void", "newbDebugClientCorrections"_a);
		cl.def("GetbForceClientCorrection", (unsigned long (EngineTAWrapper::*)()) & EngineTAWrapper::GetbForceClientCorrection, "C++: EngineTAWrapper::GetbForceClientCorrection() --> unsigned long");
		cl.def("SetbForceClientCorrection", (void (EngineTAWrapper::*)(unsigned long)) & EngineTAWrapper::SetbForceClientCorrection, "C++: EngineTAWrapper::SetbForceClientCorrection(unsigned long) --> void", "newbForceClientCorrection"_a);
		cl.def("GetPhysicsFramerate", (float (EngineTAWrapper::*)()) & EngineTAWrapper::GetPhysicsFramerate, "C++: EngineTAWrapper::GetPhysicsFramerate() --> float");
		cl.def("SetPhysicsFramerate", (void (EngineTAWrapper::*)(float)) & EngineTAWrapper::SetPhysicsFramerate, "C++: EngineTAWrapper::SetPhysicsFramerate(float) --> void", "newPhysicsFramerate"_a);
		cl.def("GetMaxPhysicsSubsteps", (int (EngineTAWrapper::*)()) & EngineTAWrapper::GetMaxPhysicsSubsteps, "C++: EngineTAWrapper::GetMaxPhysicsSubsteps() --> int");
		cl.def("SetMaxPhysicsSubsteps", (void (EngineTAWrapper::*)(int)) & EngineTAWrapper::SetMaxPhysicsSubsteps, "C++: EngineTAWrapper::SetMaxPhysicsSubsteps(int) --> void", "newMaxPhysicsSubsteps"_a);
		cl.def("GetMaxUploadedClientFrames", (int (EngineTAWrapper::*)()) & EngineTAWrapper::GetMaxUploadedClientFrames, "C++: EngineTAWrapper::GetMaxUploadedClientFrames() --> int");
		cl.def("SetMaxUploadedClientFrames", (void (EngineTAWrapper::*)(int)) & EngineTAWrapper::SetMaxUploadedClientFrames, "C++: EngineTAWrapper::SetMaxUploadedClientFrames(int) --> void", "newMaxUploadedClientFrames"_a);
		cl.def("GetMaxClientReplayFrames", (int (EngineTAWrapper::*)()) & EngineTAWrapper::GetMaxClientReplayFrames, "C++: EngineTAWrapper::GetMaxClientReplayFrames() --> int");
		cl.def("SetMaxClientReplayFrames", (void (EngineTAWrapper::*)(int)) & EngineTAWrapper::SetMaxClientReplayFrames, "C++: EngineTAWrapper::SetMaxClientReplayFrames(int) --> void", "newMaxClientReplayFrames"_a);
		cl.def("GetPhysicsFrame", (int (EngineTAWrapper::*)()) & EngineTAWrapper::GetPhysicsFrame, "C++: EngineTAWrapper::GetPhysicsFrame() --> int");
		cl.def("SetPhysicsFrame", (void (EngineTAWrapper::*)(int)) & EngineTAWrapper::SetPhysicsFrame, "C++: EngineTAWrapper::SetPhysicsFrame(int) --> void", "newPhysicsFrame"_a);
		cl.def("GetRenderAlpha", (float (EngineTAWrapper::*)()) & EngineTAWrapper::GetRenderAlpha, "C++: EngineTAWrapper::GetRenderAlpha() --> float");
		cl.def("SetRenderAlpha", (void (EngineTAWrapper::*)(float)) & EngineTAWrapper::SetRenderAlpha, "C++: EngineTAWrapper::SetRenderAlpha(float) --> void", "newRenderAlpha"_a);
		cl.def("GetReplicatedPhysicsFrame", (int (EngineTAWrapper::*)()) & EngineTAWrapper::GetReplicatedPhysicsFrame, "C++: EngineTAWrapper::GetReplicatedPhysicsFrame() --> int");
		cl.def("SetReplicatedPhysicsFrame", (void (EngineTAWrapper::*)(int)) & EngineTAWrapper::SetReplicatedPhysicsFrame, "C++: EngineTAWrapper::SetReplicatedPhysicsFrame(int) --> void", "newReplicatedPhysicsFrame"_a);
		cl.def("GetDirtyPhysicsFrame", (int (EngineTAWrapper::*)()) & EngineTAWrapper::GetDirtyPhysicsFrame, "C++: EngineTAWrapper::GetDirtyPhysicsFrame() --> int");
		cl.def("SetDirtyPhysicsFrame", (void (EngineTAWrapper::*)(int)) & EngineTAWrapper::SetDirtyPhysicsFrame, "C++: EngineTAWrapper::SetDirtyPhysicsFrame(int) --> void", "newDirtyPhysicsFrame"_a);
		cl.def("GetForceCorrectionFrames", (int (EngineTAWrapper::*)()) & EngineTAWrapper::GetForceCorrectionFrames, "C++: EngineTAWrapper::GetForceCorrectionFrames() --> int");
		cl.def("SetForceCorrectionFrames", (void (EngineTAWrapper::*)(int)) & EngineTAWrapper::SetForceCorrectionFrames, "C++: EngineTAWrapper::SetForceCorrectionFrames(int) --> void", "newForceCorrectionFrames"_a);
		cl.def("GetTickNotifyIndex", (int (EngineTAWrapper::*)()) & EngineTAWrapper::GetTickNotifyIndex, "C++: EngineTAWrapper::GetTickNotifyIndex() --> int");
		cl.def("SetTickNotifyIndex", (void (EngineTAWrapper::*)(int)) & EngineTAWrapper::SetTickNotifyIndex, "C++: EngineTAWrapper::SetTickNotifyIndex(int) --> void", "newTickNotifyIndex"_a);
		cl.def("GetShellArchetypePath", (class UnrealStringWrapper(EngineTAWrapper::*)()) & EngineTAWrapper::GetShellArchetypePath, "C++: EngineTAWrapper::GetShellArchetypePath() --> class UnrealStringWrapper");
		cl.def("GetLastBugReportTime", (float (EngineTAWrapper::*)()) & EngineTAWrapper::GetLastBugReportTime, "C++: EngineTAWrapper::GetLastBugReportTime() --> float");
		cl.def("SetLastBugReportTime", (void (EngineTAWrapper::*)(float)) & EngineTAWrapper::SetLastBugReportTime, "C++: EngineTAWrapper::SetLastBugReportTime(float) --> void", "newLastBugReportTime"_a);
		cl.def("GetDebugClientCorrectionStartTime", (float (EngineTAWrapper::*)()) & EngineTAWrapper::GetDebugClientCorrectionStartTime, "C++: EngineTAWrapper::GetDebugClientCorrectionStartTime() --> float");
		cl.def("SetDebugClientCorrectionStartTime", (void (EngineTAWrapper::*)(float)) & EngineTAWrapper::SetDebugClientCorrectionStartTime, "C++: EngineTAWrapper::SetDebugClientCorrectionStartTime(float) --> void", "newDebugClientCorrectionStartTime"_a);
		cl.def("GetDebugClientCorrectionCount", (int (EngineTAWrapper::*)()) & EngineTAWrapper::GetDebugClientCorrectionCount, "C++: EngineTAWrapper::GetDebugClientCorrectionCount() --> int");
		cl.def("SetDebugClientCorrectionCount", (void (EngineTAWrapper::*)(int)) & EngineTAWrapper::SetDebugClientCorrectionCount, "C++: EngineTAWrapper::SetDebugClientCorrectionCount(int) --> void", "newDebugClientCorrectionCount"_a);
		cl.def("GetStatGraphs", (class StatGraphSystemWrapper(EngineTAWrapper::*)()) & EngineTAWrapper::GetStatGraphs, "C++: EngineTAWrapper::GetStatGraphs() --> class StatGraphSystemWrapper");
		cl.def("SetStatGraphs", (void (EngineTAWrapper::*)(class StatGraphSystemWrapper)) & EngineTAWrapper::SetStatGraphs, "C++: EngineTAWrapper::SetStatGraphs(class StatGraphSystemWrapper) --> void", "newStatGraphs"_a);
		cl.def("GetLastPhysicsDeltaTimeScale", (float (EngineTAWrapper::*)()) & EngineTAWrapper::GetLastPhysicsDeltaTimeScale, "C++: EngineTAWrapper::GetLastPhysicsDeltaTimeScale() --> float");
		cl.def("SetLastPhysicsDeltaTimeScale", (void (EngineTAWrapper::*)(float)) & EngineTAWrapper::SetLastPhysicsDeltaTimeScale, "C++: EngineTAWrapper::SetLastPhysicsDeltaTimeScale(float) --> void", "newLastPhysicsDeltaTimeScale"_a);
		cl.def("DebugClientCorrections2", (void (EngineTAWrapper::*)()) & EngineTAWrapper::DebugClientCorrections2, "C++: EngineTAWrapper::DebugClientCorrections2() --> void");
		cl.def("GetBulletFixedDeltaTime", (float (EngineTAWrapper::*)()) & EngineTAWrapper::GetBulletFixedDeltaTime, "C++: EngineTAWrapper::GetBulletFixedDeltaTime() --> float");
		cl.def("RunPhysicsStep", (void (EngineTAWrapper::*)(int, float)) & EngineTAWrapper::RunPhysicsStep, "C++: EngineTAWrapper::RunPhysicsStep(int, float) --> void", "BulletSceneIndex"_a, "DeltaTime"_a);
		cl.def("UpdateReplicatedPhysicsFrame", (void (EngineTAWrapper::*)(int)) & EngineTAWrapper::UpdateReplicatedPhysicsFrame, "C++: EngineTAWrapper::UpdateReplicatedPhysicsFrame(int) --> void", "ServerFrame"_a);
		cl.def("DebugDedicatedServer", (void (EngineTAWrapper::*)(float)) & EngineTAWrapper::DebugDedicatedServer, "C++: EngineTAWrapper::DebugDedicatedServer(float) --> void", "ForHowLong"_a);
		cl.def("GetPhysicsTime", (float (EngineTAWrapper::*)()) & EngineTAWrapper::GetPhysicsTime, "C++: EngineTAWrapper::GetPhysicsTime() --> float");
		cl.def("eventRecordAppStart", (void (EngineTAWrapper::*)()) & EngineTAWrapper::eventRecordAppStart, "C++: EngineTAWrapper::eventRecordAppStart() --> void");
		cl.def("eventInit", (void (EngineTAWrapper::*)()) & EngineTAWrapper::eventInit, "C++: EngineTAWrapper::eventInit() --> void");
		cl.def("EventPreAsyncTick", (void (EngineTAWrapper::*)(float)) & EngineTAWrapper::EventPreAsyncTick, "C++: EngineTAWrapper::EventPreAsyncTick(float) --> void", "DeltaTime"_a);
	}
	{ // ReplayWrapper file: line:9
		pybind11::class_<ReplayWrapper, std::shared_ptr<ReplayWrapper>, ObjectWrapper> cl(M, "ReplayWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](ReplayWrapper const& o) { return new ReplayWrapper(o); }));
		cl.def("assign", (class ReplayWrapper& (ReplayWrapper::*)(class ReplayWrapper))& ReplayWrapper::operator=, "C++: ReplayWrapper::operator=(class ReplayWrapper) --> class ReplayWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetReplayName", (class UnrealStringWrapper(ReplayWrapper::*)())& ReplayWrapper::GetReplayName, "C++: ReplayWrapper::GetReplayName() --> class UnrealStringWrapper");
		cl.def("GetEngineVersion", (int (ReplayWrapper::*)())& ReplayWrapper::GetEngineVersion, "C++: ReplayWrapper::GetEngineVersion() --> int");
		cl.def("SetEngineVersion", (void (ReplayWrapper::*)(int))& ReplayWrapper::SetEngineVersion, "C++: ReplayWrapper::SetEngineVersion(int) --> void", "newEngineVersion"_a);
		cl.def("GetLicenseeVersion", (int (ReplayWrapper::*)())& ReplayWrapper::GetLicenseeVersion, "C++: ReplayWrapper::GetLicenseeVersion() --> int");
		cl.def("SetLicenseeVersion", (void (ReplayWrapper::*)(int))& ReplayWrapper::SetLicenseeVersion, "C++: ReplayWrapper::SetLicenseeVersion(int) --> void", "newLicenseeVersion"_a);
		cl.def("GetNetVersion", (int (ReplayWrapper::*)())& ReplayWrapper::GetNetVersion, "C++: ReplayWrapper::GetNetVersion() --> int");
		cl.def("SetNetVersion", (void (ReplayWrapper::*)(int))& ReplayWrapper::SetNetVersion, "C++: ReplayWrapper::SetNetVersion(int) --> void", "newNetVersion"_a);
		cl.def("GetReplayVersion", (int (ReplayWrapper::*)())& ReplayWrapper::GetReplayVersion, "C++: ReplayWrapper::GetReplayVersion() --> int");
		cl.def("SetReplayVersion", (void (ReplayWrapper::*)(int))& ReplayWrapper::SetReplayVersion, "C++: ReplayWrapper::SetReplayVersion(int) --> void", "newReplayVersion"_a);
		cl.def("GetReplayLastSaveVersion", (int (ReplayWrapper::*)())& ReplayWrapper::GetReplayLastSaveVersion, "C++: ReplayWrapper::GetReplayLastSaveVersion() --> int");
		cl.def("SetReplayLastSaveVersion", (void (ReplayWrapper::*)(int))& ReplayWrapper::SetReplayLastSaveVersion, "C++: ReplayWrapper::SetReplayLastSaveVersion(int) --> void", "newReplayLastSaveVersion"_a);
		cl.def("GetGameVersion", (int (ReplayWrapper::*)())& ReplayWrapper::GetGameVersion, "C++: ReplayWrapper::GetGameVersion() --> int");
		cl.def("SetGameVersion", (void (ReplayWrapper::*)(int))& ReplayWrapper::SetGameVersion, "C++: ReplayWrapper::SetGameVersion(int) --> void", "newGameVersion"_a);
		cl.def("GetBuildID", (int (ReplayWrapper::*)())& ReplayWrapper::GetBuildID, "C++: ReplayWrapper::GetBuildID() --> int");
		cl.def("SetBuildID", (void (ReplayWrapper::*)(int))& ReplayWrapper::SetBuildID, "C++: ReplayWrapper::SetBuildID(int) --> void", "newBuildID"_a);
		cl.def("GetChangelist", (int (ReplayWrapper::*)())& ReplayWrapper::GetChangelist, "C++: ReplayWrapper::GetChangelist() --> int");
		cl.def("SetChangelist", (void (ReplayWrapper::*)(int))& ReplayWrapper::SetChangelist, "C++: ReplayWrapper::SetChangelist(int) --> void", "newChangelist"_a);
		cl.def("GetBuildVersion", (class UnrealStringWrapper(ReplayWrapper::*)())& ReplayWrapper::GetBuildVersion, "C++: ReplayWrapper::GetBuildVersion() --> class UnrealStringWrapper");
		cl.def("GetReserveMegabytes", (int (ReplayWrapper::*)())& ReplayWrapper::GetReserveMegabytes, "C++: ReplayWrapper::GetReserveMegabytes() --> int");
		cl.def("SetReserveMegabytes", (void (ReplayWrapper::*)(int))& ReplayWrapper::SetReserveMegabytes, "C++: ReplayWrapper::SetReserveMegabytes(int) --> void", "newReserveMegabytes"_a);
		cl.def("GetRecordFPS", (float (ReplayWrapper::*)())& ReplayWrapper::GetRecordFPS, "C++: ReplayWrapper::GetRecordFPS() --> float");
		cl.def("SetRecordFPS", (void (ReplayWrapper::*)(float))& ReplayWrapper::SetRecordFPS, "C++: ReplayWrapper::SetRecordFPS(float) --> void", "newRecordFPS"_a);
		cl.def("GetKeyframeDelay", (float (ReplayWrapper::*)())& ReplayWrapper::GetKeyframeDelay, "C++: ReplayWrapper::GetKeyframeDelay() --> float");
		cl.def("SetKeyframeDelay", (void (ReplayWrapper::*)(float))& ReplayWrapper::SetKeyframeDelay, "C++: ReplayWrapper::SetKeyframeDelay(float) --> void", "newKeyframeDelay"_a);
		cl.def("GetMaxChannels", (int (ReplayWrapper::*)())& ReplayWrapper::GetMaxChannels, "C++: ReplayWrapper::GetMaxChannels() --> int");
		cl.def("SetMaxChannels", (void (ReplayWrapper::*)(int))& ReplayWrapper::SetMaxChannels, "C++: ReplayWrapper::SetMaxChannels(int) --> void", "newMaxChannels"_a);
		cl.def("GetMaxReplaySizeMB", (int (ReplayWrapper::*)())& ReplayWrapper::GetMaxReplaySizeMB, "C++: ReplayWrapper::GetMaxReplaySizeMB() --> int");
		cl.def("SetMaxReplaySizeMB", (void (ReplayWrapper::*)(int))& ReplayWrapper::SetMaxReplaySizeMB, "C++: ReplayWrapper::SetMaxReplaySizeMB(int) --> void", "newMaxReplaySizeMB"_a);
		// 'ReplayWrapper::GetFilename': Removed from Rocket League, returns the same as GetId
		// cl.def("GetFilename", (class UnrealStringWrapper(ReplayWrapper::*)())& ReplayWrapper::GetFilename, "C++: ReplayWrapper::GetFilename() --> class UnrealStringWrapper");
		cl.def("GetId", (class UnrealStringWrapper(ReplayWrapper::*)())& ReplayWrapper::GetId, "C++: ReplayWrapper::GetId() --> class UnrealStringWrapper");
		cl.def("GetDate", (class UnrealStringWrapper(ReplayWrapper::*)())& ReplayWrapper::GetDate, "C++: ReplayWrapper::GetDate() --> class UnrealStringWrapper");
		cl.def("GetNumFrames", (int (ReplayWrapper::*)())& ReplayWrapper::GetNumFrames, "C++: ReplayWrapper::GetNumFrames() --> int");
		cl.def("SetNumFrames", (void (ReplayWrapper::*)(int))& ReplayWrapper::SetNumFrames, "C++: ReplayWrapper::SetNumFrames(int) --> void", "newNumFrames"_a);
		cl.def("GetPlayerName", (class UnrealStringWrapper(ReplayWrapper::*)())& ReplayWrapper::GetPlayerName, "C++: ReplayWrapper::GetPlayerName() --> class UnrealStringWrapper");
		cl.def("GetbFileCorrupted", (unsigned long (ReplayWrapper::*)())& ReplayWrapper::GetbFileCorrupted, "C++: ReplayWrapper::GetbFileCorrupted() --> unsigned long");
		cl.def("SetbFileCorrupted", (void (ReplayWrapper::*)(unsigned long))& ReplayWrapper::SetbFileCorrupted, "C++: ReplayWrapper::SetbFileCorrupted(unsigned long) --> void", "newbFileCorrupted"_a);
		cl.def("GetbForceKeyframe", (unsigned long (ReplayWrapper::*)())& ReplayWrapper::GetbForceKeyframe, "C++: ReplayWrapper::GetbForceKeyframe() --> unsigned long");
		cl.def("SetbForceKeyframe", (void (ReplayWrapper::*)(unsigned long))& ReplayWrapper::SetbForceKeyframe, "C++: ReplayWrapper::SetbForceKeyframe(unsigned long) --> void", "newbForceKeyframe"_a);
		cl.def("GetbLoadedNetPackages", (unsigned long (ReplayWrapper::*)())& ReplayWrapper::GetbLoadedNetPackages, "C++: ReplayWrapper::GetbLoadedNetPackages() --> unsigned long");
		cl.def("SetbLoadedNetPackages", (void (ReplayWrapper::*)(unsigned long))& ReplayWrapper::SetbLoadedNetPackages, "C++: ReplayWrapper::SetbLoadedNetPackages(unsigned long) --> void", "newbLoadedNetPackages"_a);
		cl.def("GetbDebug", (unsigned long (ReplayWrapper::*)())& ReplayWrapper::GetbDebug, "C++: ReplayWrapper::GetbDebug() --> unsigned long");
		cl.def("SetbDebug", (void (ReplayWrapper::*)(unsigned long))& ReplayWrapper::SetbDebug, "C++: ReplayWrapper::SetbDebug(unsigned long) --> void", "newbDebug"_a);
		cl.def("GetReplayState", (unsigned char (ReplayWrapper::*)())& ReplayWrapper::GetReplayState, "C++: ReplayWrapper::GetReplayState() --> unsigned char");
		cl.def("SetReplayState", (void (ReplayWrapper::*)(unsigned char))& ReplayWrapper::SetReplayState, "C++: ReplayWrapper::SetReplayState(unsigned char) --> void", "newReplayState"_a);
		cl.def("GetCurrentFrame", (int (ReplayWrapper::*)())& ReplayWrapper::GetCurrentFrame, "C++: ReplayWrapper::GetCurrentFrame() --> int");
		cl.def("SetCurrentFrame", (void (ReplayWrapper::*)(int))& ReplayWrapper::SetCurrentFrame, "C++: ReplayWrapper::SetCurrentFrame(int) --> void", "newCurrentFrame"_a);
		cl.def("GetNextKeyframe", (int (ReplayWrapper::*)())& ReplayWrapper::GetNextKeyframe, "C++: ReplayWrapper::GetNextKeyframe() --> int");
		cl.def("SetNextKeyframe", (void (ReplayWrapper::*)(int))& ReplayWrapper::SetNextKeyframe, "C++: ReplayWrapper::SetNextKeyframe(int) --> void", "newNextKeyframe"_a);
		//cl.def("GetCurrentTime", (float (ReplayWrapper::*)()) &ReplayWrapper::GetCurrentTime, "C++: ReplayWrapper::GetCurrentTime() --> float");
		cl.def("SetCurrentTime", (void (ReplayWrapper::*)(float))& ReplayWrapper::SetCurrentTime, "C++: ReplayWrapper::SetCurrentTime(float) --> void", "newCurrentTime"_a);
		cl.def("GetAccumulatedDeltaTime", (float (ReplayWrapper::*)())& ReplayWrapper::GetAccumulatedDeltaTime, "C++: ReplayWrapper::GetAccumulatedDeltaTime() --> float");
		cl.def("SetAccumulatedDeltaTime", (void (ReplayWrapper::*)(float))& ReplayWrapper::SetAccumulatedDeltaTime, "C++: ReplayWrapper::SetAccumulatedDeltaTime(float) --> void", "newAccumulatedDeltaTime"_a);
		cl.def("GetTimeToSkipTo", (float (ReplayWrapper::*)())& ReplayWrapper::GetTimeToSkipTo, "C++: ReplayWrapper::GetTimeToSkipTo() --> float");
		cl.def("SetTimeToSkipTo", (void (ReplayWrapper::*)(float))& ReplayWrapper::SetTimeToSkipTo, "C++: ReplayWrapper::SetTimeToSkipTo(float) --> void", "newTimeToSkipTo"_a);
		cl.def("GetFrameToSkipTo", (int (ReplayWrapper::*)())& ReplayWrapper::GetFrameToSkipTo, "C++: ReplayWrapper::GetFrameToSkipTo() --> int");
		cl.def("SetFrameToSkipTo", (void (ReplayWrapper::*)(int))& ReplayWrapper::SetFrameToSkipTo, "C++: ReplayWrapper::SetFrameToSkipTo(int) --> void", "newFrameToSkipTo"_a);
		cl.def("GetPlayersOnlyTicks", (int (ReplayWrapper::*)())& ReplayWrapper::GetPlayersOnlyTicks, "C++: ReplayWrapper::GetPlayersOnlyTicks() --> int");
		cl.def("SetPlayersOnlyTicks", (void (ReplayWrapper::*)(int))& ReplayWrapper::SetPlayersOnlyTicks, "C++: ReplayWrapper::SetPlayersOnlyTicks(int) --> void", "newPlayersOnlyTicks"_a);
		cl.def("GetPlaybackTime", (float (ReplayWrapper::*)())& ReplayWrapper::GetPlaybackTime, "C++: ReplayWrapper::GetPlaybackTime() --> float");
		cl.def("IsFromBeforeGameVersion", (bool (ReplayWrapper::*)(unsigned char))& ReplayWrapper::IsFromBeforeGameVersion, "C++: ReplayWrapper::IsFromBeforeGameVersion(unsigned char) --> bool", "BeforeGameVersion"_a);
		cl.def("IsFromBeforeReplayVersion", (bool (ReplayWrapper::*)(unsigned char))& ReplayWrapper::IsFromBeforeReplayVersion, "C++: ReplayWrapper::IsFromBeforeReplayVersion(unsigned char) --> bool", "BeforeReplayVersion"_a);
		cl.def("SetReplayName", (void (ReplayWrapper::*)(std::string))& ReplayWrapper::SetReplayName, "C++: ReplayWrapper::SetReplayName(std::string) --> void", "NewName"_a);
		cl.def("RemoveTimelineKeyframe", (void (ReplayWrapper::*)(int))& ReplayWrapper::RemoveTimelineKeyframe, "C++: ReplayWrapper::RemoveTimelineKeyframe(int) --> void", "KeyframeIndex"_a);
		cl.def("eventTrimData", (void (ReplayWrapper::*)(int, int))& ReplayWrapper::eventTrimData, "C++: ReplayWrapper::eventTrimData(int, int) --> void", "FirstKeyframe"_a, "FirstFrame"_a);
		cl.def("CreateCopy", (class ReplayWrapper(ReplayWrapper::*)(float))& ReplayWrapper::CreateCopy, "C++: ReplayWrapper::CreateCopy(float) --> class ReplayWrapper", "StartTime"_a);
		cl.def("ImportReplay", (void (ReplayWrapper::*)(std::string))& ReplayWrapper::ImportReplay, "C++: ReplayWrapper::ImportReplay(std::string) --> void", "Path"_a);
		cl.def("ExportReplay", (void (ReplayWrapper::*)(std::string))& ReplayWrapper::ExportReplay, "C++: ReplayWrapper::ExportReplay(std::string) --> void", "Path"_a);
		cl.def("SkipToFrame", (void (ReplayWrapper::*)(int, unsigned long))& ReplayWrapper::SkipToFrame, "C++: ReplayWrapper::SkipToFrame(int, unsigned long) --> void", "frame"_a, "bFlush"_a);
		cl.def("SkipToTime", (void (ReplayWrapper::*)(float, unsigned long))& ReplayWrapper::SkipToTime, "C++: ReplayWrapper::SkipToTime(float, unsigned long) --> void", "Time"_a, "bFlush"_a);
		cl.def("GetReplayTimeSeconds", (float (ReplayWrapper::*)())& ReplayWrapper::GetReplayTimeSeconds, "C++: ReplayWrapper::GetReplayTimeSeconds() --> float");
		cl.def("StopPlayback", (void (ReplayWrapper::*)())& ReplayWrapper::StopPlayback, "C++: ReplayWrapper::StopPlayback() --> void");
		cl.def("StartPlaybackAtFrame", (void (ReplayWrapper::*)(int))& ReplayWrapper::StartPlaybackAtFrame, "C++: ReplayWrapper::StartPlaybackAtFrame(int) --> void", "StartFrame"_a);
		cl.def("StartPlaybackAtTimeSeconds", (void (ReplayWrapper::*)(float))& ReplayWrapper::StartPlaybackAtTimeSeconds, "C++: ReplayWrapper::StartPlaybackAtTimeSeconds(float) --> void", "StartTime"_a);
		cl.def("StopRecord", (void (ReplayWrapper::*)())& ReplayWrapper::StopRecord, "C++: ReplayWrapper::StopRecord() --> void");
		cl.def("StartRecord", (void (ReplayWrapper::*)())& ReplayWrapper::StartRecord, "C++: ReplayWrapper::StartRecord() --> void");
		cl.def("Tick2", (void (ReplayWrapper::*)(float))& ReplayWrapper::Tick2, "C++: ReplayWrapper::Tick2(float) --> void", "DeltaTime"_a);
		cl.def("eventPreExport", (void (ReplayWrapper::*)())& ReplayWrapper::eventPreExport, "C++: ReplayWrapper::eventPreExport() --> void");
		cl.def("EventPlayedFrame", (void (ReplayWrapper::*)(class ReplayWrapper))& ReplayWrapper::EventPlayedFrame, "C++: ReplayWrapper::EventPlayedFrame(class ReplayWrapper) --> void", "Replay"_a);
		cl.def("EventPostTimeSkip", (void (ReplayWrapper::*)(class ReplayWrapper))& ReplayWrapper::EventPostTimeSkip, "C++: ReplayWrapper::EventPostTimeSkip(class ReplayWrapper) --> void", "Replay"_a);
		cl.def("EventPreTimeSkip", (void (ReplayWrapper::*)(class ReplayWrapper))& ReplayWrapper::EventPreTimeSkip, "C++: ReplayWrapper::EventPreTimeSkip(class ReplayWrapper) --> void", "Replay"_a);
		cl.def("EventSpawned", (void (ReplayWrapper::*)(class ReplayWrapper, class ActorWrapper))& ReplayWrapper::EventSpawned, "C++: ReplayWrapper::EventSpawned(class ReplayWrapper, class ActorWrapper) --> void", "Replay"_a, "A"_a);
		cl.def("EventPlaybackStopped", (void (ReplayWrapper::*)(class ReplayWrapper))& ReplayWrapper::EventPlaybackStopped, "C++: ReplayWrapper::EventPlaybackStopped(class ReplayWrapper) --> void", "Replay"_a);
	}
	{ // ReplaySoccarWrapper file:bakkesmod/wrappers/GameEvent/ReplaySoccarWrapper.h line:8
		pybind11::class_<ReplaySoccarWrapper, std::shared_ptr<ReplaySoccarWrapper>, ReplayWrapper> cl(M, "ReplaySoccarWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](ReplaySoccarWrapper const& o) { return new ReplaySoccarWrapper(o); }));
		cl.def("assign", (class ReplaySoccarWrapper& (ReplaySoccarWrapper::*)(class ReplaySoccarWrapper)) & ReplaySoccarWrapper::operator=, "C++: ReplaySoccarWrapper::operator=(class ReplaySoccarWrapper) --> class ReplaySoccarWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetTeamSize", (int (ReplaySoccarWrapper::*)()) & ReplaySoccarWrapper::GetTeamSize, "C++: ReplaySoccarWrapper::GetTeamSize() --> int");
		cl.def("SetTeamSize", (void (ReplaySoccarWrapper::*)(int)) & ReplaySoccarWrapper::SetTeamSize, "C++: ReplaySoccarWrapper::SetTeamSize(int) --> void", "newTeamSize"_a);
		cl.def("GetUnfairTeamSize", (int (ReplaySoccarWrapper::*)()) & ReplaySoccarWrapper::GetUnfairTeamSize, "C++: ReplaySoccarWrapper::GetUnfairTeamSize() --> int");
		cl.def("SetUnfairTeamSize", (void (ReplaySoccarWrapper::*)(int)) & ReplaySoccarWrapper::SetUnfairTeamSize, "C++: ReplaySoccarWrapper::SetUnfairTeamSize(int) --> void", "newUnfairTeamSize"_a);
		cl.def("GetbUnfairBots", (unsigned long (ReplaySoccarWrapper::*)()) & ReplaySoccarWrapper::GetbUnfairBots, "C++: ReplaySoccarWrapper::GetbUnfairBots() --> unsigned long");
		cl.def("SetbUnfairBots", (void (ReplaySoccarWrapper::*)(unsigned long)) & ReplaySoccarWrapper::SetbUnfairBots, "C++: ReplaySoccarWrapper::SetbUnfairBots(unsigned long) --> void", "newbUnfairBots"_a);
		cl.def("GetPrimaryPlayerTeam", (int (ReplaySoccarWrapper::*)()) & ReplaySoccarWrapper::GetPrimaryPlayerTeam, "C++: ReplaySoccarWrapper::GetPrimaryPlayerTeam() --> int");
		cl.def("SetPrimaryPlayerTeam", (void (ReplaySoccarWrapper::*)(int)) & ReplaySoccarWrapper::SetPrimaryPlayerTeam, "C++: ReplaySoccarWrapper::SetPrimaryPlayerTeam(int) --> void", "newPrimaryPlayerTeam"_a);
		cl.def("GetTeam0Score", (int (ReplaySoccarWrapper::*)()) & ReplaySoccarWrapper::GetTeam0Score, "C++: ReplaySoccarWrapper::GetTeam0Score() --> int");
		cl.def("SetTeam0Score", (void (ReplaySoccarWrapper::*)(int)) & ReplaySoccarWrapper::SetTeam0Score, "C++: ReplaySoccarWrapper::SetTeam0Score(int) --> void", "newTeam0Score"_a);
		cl.def("GetTeam1Score", (int (ReplaySoccarWrapper::*)()) & ReplaySoccarWrapper::GetTeam1Score, "C++: ReplaySoccarWrapper::GetTeam1Score() --> int");
		cl.def("SetTeam1Score", (void (ReplaySoccarWrapper::*)(int)) & ReplaySoccarWrapper::SetTeam1Score, "C++: ReplaySoccarWrapper::SetTeam1Score(int) --> void", "newTeam1Score"_a);
		cl.def("eventPreExport", (void (ReplaySoccarWrapper::*)()) & ReplaySoccarWrapper::eventPreExport, "C++: ReplaySoccarWrapper::eventPreExport() --> void");
		cl.def("RemoveTimelineKeyframe", (void (ReplaySoccarWrapper::*)(int)) & ReplaySoccarWrapper::RemoveTimelineKeyframe, "C++: ReplaySoccarWrapper::RemoveTimelineKeyframe(int) --> void", "KeyframeIndex"_a);
		cl.def("RecordUserEvent", (void (ReplaySoccarWrapper::*)()) & ReplaySoccarWrapper::RecordUserEvent, "C++: ReplaySoccarWrapper::RecordUserEvent() --> void");
		cl.def("AddPlayer", (void (ReplaySoccarWrapper::*)(class PriWrapper)) & ReplaySoccarWrapper::AddPlayer, "C++: ReplaySoccarWrapper::AddPlayer(class PriWrapper) --> void", "PRI"_a);
	}
	{ // SaveDataWrapper file: line:8
		pybind11::class_<SaveDataWrapper, std::shared_ptr<SaveDataWrapper>, ObjectWrapper> cl(M, "SaveDataWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](SaveDataWrapper const& o) { return new SaveDataWrapper(o); }));
		cl.def("assign", (class SaveDataWrapper& (SaveDataWrapper::*)(class SaveDataWrapper)) & SaveDataWrapper::operator=, "C++: SaveDataWrapper::operator=(class SaveDataWrapper) --> class SaveDataWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetDirectoryPath", (class UnrealStringWrapper(SaveDataWrapper::*)()) & SaveDataWrapper::GetDirectoryPath, "C++: SaveDataWrapper::GetDirectoryPath() --> class UnrealStringWrapper");
		cl.def("GetSaveType", (class UnrealStringWrapper(SaveDataWrapper::*)()) & SaveDataWrapper::GetSaveType, "C++: SaveDataWrapper::GetSaveType() --> class UnrealStringWrapper");
		cl.def("GetSaveExt", (class UnrealStringWrapper(SaveDataWrapper::*)()) & SaveDataWrapper::GetSaveExt, "C++: SaveDataWrapper::GetSaveExt() --> class UnrealStringWrapper");
		cl.def("GetbExactFileMatch", (unsigned long (SaveDataWrapper::*)()) & SaveDataWrapper::GetbExactFileMatch, "C++: SaveDataWrapper::GetbExactFileMatch() --> unsigned long");
		cl.def("SetbExactFileMatch", (void (SaveDataWrapper::*)(unsigned long)) & SaveDataWrapper::SetbExactFileMatch, "C++: SaveDataWrapper::SetbExactFileMatch(unsigned long) --> void", "newbExactFileMatch"_a);
		cl.def("Init", (void (SaveDataWrapper::*)()) & SaveDataWrapper::Init, "C++: SaveDataWrapper::Init() --> void");
	}
	{ // GameEditorSaveDataWrapper file:bakkesmod/wrappers/GameEvent/SaveData/GameEditorSaveDataWrapper.h line:9
		pybind11::class_<GameEditorSaveDataWrapper, std::shared_ptr<GameEditorSaveDataWrapper>, SaveDataWrapper> cl(M, "GameEditorSaveDataWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](GameEditorSaveDataWrapper const& o) { return new GameEditorSaveDataWrapper(o); }));
		cl.def("assign", (class GameEditorSaveDataWrapper& (GameEditorSaveDataWrapper::*)(class GameEditorSaveDataWrapper)) & GameEditorSaveDataWrapper::operator=, "C++: GameEditorSaveDataWrapper::operator=(class GameEditorSaveDataWrapper) --> class GameEditorSaveDataWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetLoadedSaveName", (class UnrealStringWrapper(GameEditorSaveDataWrapper::*)()) & GameEditorSaveDataWrapper::GetLoadedSaveName, "C++: GameEditorSaveDataWrapper::GetLoadedSaveName() --> class UnrealStringWrapper");
		cl.def("GetTrainingData", (class TrainingEditorSaveDataWrapper(GameEditorSaveDataWrapper::*)()) & GameEditorSaveDataWrapper::GetTrainingData, "C++: GameEditorSaveDataWrapper::GetTrainingData() --> class TrainingEditorSaveDataWrapper");
		cl.def("SetTrainingData", (void (GameEditorSaveDataWrapper::*)(class TrainingEditorSaveDataWrapper)) & GameEditorSaveDataWrapper::SetTrainingData, "C++: GameEditorSaveDataWrapper::SetTrainingData(class TrainingEditorSaveDataWrapper) --> void", "newTrainingData"_a);
		cl.def("GetPlayerTeamNumber", (int (GameEditorSaveDataWrapper::*)()) & GameEditorSaveDataWrapper::GetPlayerTeamNumber, "C++: GameEditorSaveDataWrapper::GetPlayerTeamNumber() --> int");
		cl.def("SetPlayerTeamNumber", (void (GameEditorSaveDataWrapper::*)(int)) & GameEditorSaveDataWrapper::SetPlayerTeamNumber, "C++: GameEditorSaveDataWrapper::SetPlayerTeamNumber(int) --> void", "newPlayerTeamNumber"_a);
		cl.def("GetbUnowned", (unsigned long (GameEditorSaveDataWrapper::*)()) & GameEditorSaveDataWrapper::GetbUnowned, "C++: GameEditorSaveDataWrapper::GetbUnowned() --> unsigned long");
		cl.def("SetbUnowned", (void (GameEditorSaveDataWrapper::*)(unsigned long)) & GameEditorSaveDataWrapper::SetbUnowned, "C++: GameEditorSaveDataWrapper::SetbUnowned(unsigned long) --> void", "newbUnowned"_a);
		cl.def("GetShotsCompleted", (int (GameEditorSaveDataWrapper::*)()) & GameEditorSaveDataWrapper::GetShotsCompleted, "C++: GameEditorSaveDataWrapper::GetShotsCompleted() --> int");
		cl.def("SetShotsCompleted", (void (GameEditorSaveDataWrapper::*)(int)) & GameEditorSaveDataWrapper::SetShotsCompleted, "C++: GameEditorSaveDataWrapper::SetShotsCompleted(int) --> void", "newShotsCompleted"_a);
		cl.def("GetFavoritesFolderPath", (class UnrealStringWrapper(GameEditorSaveDataWrapper::*)()) & GameEditorSaveDataWrapper::GetFavoritesFolderPath, "C++: GameEditorSaveDataWrapper::GetFavoritesFolderPath() --> class UnrealStringWrapper");
		cl.def("GetMyTrainingFolderPath", (class UnrealStringWrapper(GameEditorSaveDataWrapper::*)()) & GameEditorSaveDataWrapper::GetMyTrainingFolderPath, "C++: GameEditorSaveDataWrapper::GetMyTrainingFolderPath() --> class UnrealStringWrapper");
		cl.def("GetDownloadedFolderPath", (class UnrealStringWrapper(GameEditorSaveDataWrapper::*)()) & GameEditorSaveDataWrapper::GetDownloadedFolderPath, "C++: GameEditorSaveDataWrapper::GetDownloadedFolderPath() --> class UnrealStringWrapper");
		cl.def("GetTrainingSaveType", (unsigned char (GameEditorSaveDataWrapper::*)(unsigned long, unsigned long)) & GameEditorSaveDataWrapper::GetTrainingSaveType, "C++: GameEditorSaveDataWrapper::GetTrainingSaveType(unsigned long, unsigned long) --> unsigned char", "bOwned"_a, "bFavorited"_a);
		cl.def("Init", (void (GameEditorSaveDataWrapper::*)()) & GameEditorSaveDataWrapper::Init, "C++: GameEditorSaveDataWrapper::Init() --> void");
	}
	{ // TrainingEditorSaveDataWrapper file:bakkesmod/wrappers/GameEvent/SaveData/TrainingEditorSaveDataWrapper.h line:8
		pybind11::class_<TrainingEditorSaveDataWrapper, std::shared_ptr<TrainingEditorSaveDataWrapper>, ObjectWrapper> cl(M, "TrainingEditorSaveDataWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](TrainingEditorSaveDataWrapper const& o) { return new TrainingEditorSaveDataWrapper(o); }));
		cl.def("assign", (class TrainingEditorSaveDataWrapper& (TrainingEditorSaveDataWrapper::*)(class TrainingEditorSaveDataWrapper)) & TrainingEditorSaveDataWrapper::operator=, "C++: TrainingEditorSaveDataWrapper::operator=(class TrainingEditorSaveDataWrapper) --> class TrainingEditorSaveDataWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetCode", (class UnrealStringWrapper(TrainingEditorSaveDataWrapper::*)()) & TrainingEditorSaveDataWrapper::GetCode, "C++: TrainingEditorSaveDataWrapper::GetCode() --> class UnrealStringWrapper");
		cl.def("GetTM_Name", (class UnrealStringWrapper(TrainingEditorSaveDataWrapper::*)()) & TrainingEditorSaveDataWrapper::GetTM_Name, "C++: TrainingEditorSaveDataWrapper::GetTM_Name() --> class UnrealStringWrapper");
		cl.def("GetType", (unsigned char (TrainingEditorSaveDataWrapper::*)()) & TrainingEditorSaveDataWrapper::GetType, "C++: TrainingEditorSaveDataWrapper::GetType() --> unsigned char");
		cl.def("SetType", (void (TrainingEditorSaveDataWrapper::*)(unsigned char)) & TrainingEditorSaveDataWrapper::SetType, "C++: TrainingEditorSaveDataWrapper::SetType(unsigned char) --> void", "newType"_a);
		cl.def("GetDifficulty", (unsigned char (TrainingEditorSaveDataWrapper::*)()) & TrainingEditorSaveDataWrapper::GetDifficulty, "C++: TrainingEditorSaveDataWrapper::GetDifficulty() --> unsigned char");
		cl.def("SetDifficulty", (void (TrainingEditorSaveDataWrapper::*)(unsigned char)) & TrainingEditorSaveDataWrapper::SetDifficulty, "C++: TrainingEditorSaveDataWrapper::SetDifficulty(unsigned char) --> void", "newDifficulty"_a);
		cl.def("GetCreatorName", (class UnrealStringWrapper(TrainingEditorSaveDataWrapper::*)()) & TrainingEditorSaveDataWrapper::GetCreatorName, "C++: TrainingEditorSaveDataWrapper::GetCreatorName() --> class UnrealStringWrapper");
		cl.def("GetDescription", (class UnrealStringWrapper(TrainingEditorSaveDataWrapper::*)()) & TrainingEditorSaveDataWrapper::GetDescription, "C++: TrainingEditorSaveDataWrapper::GetDescription() --> class UnrealStringWrapper");
		cl.def("GetNumRounds", (int (TrainingEditorSaveDataWrapper::*)()) & TrainingEditorSaveDataWrapper::GetNumRounds, "C++: TrainingEditorSaveDataWrapper::GetNumRounds() --> int");
		cl.def("SetNumRounds", (void (TrainingEditorSaveDataWrapper::*)(int)) & TrainingEditorSaveDataWrapper::SetNumRounds, "C++: TrainingEditorSaveDataWrapper::SetNumRounds(int) --> void", "newNumRounds"_a);
		cl.def("GetCreatedAt", (unsigned long long (TrainingEditorSaveDataWrapper::*)()) & TrainingEditorSaveDataWrapper::GetCreatedAt, "C++: TrainingEditorSaveDataWrapper::GetCreatedAt() --> unsigned long long");
		cl.def("SetCreatedAt", (void (TrainingEditorSaveDataWrapper::*)(unsigned long long)) & TrainingEditorSaveDataWrapper::SetCreatedAt, "C++: TrainingEditorSaveDataWrapper::SetCreatedAt(unsigned long long) --> void", "newCreatedAt"_a);
		cl.def("GetUpdatedAt", (unsigned long long (TrainingEditorSaveDataWrapper::*)()) & TrainingEditorSaveDataWrapper::GetUpdatedAt, "C++: TrainingEditorSaveDataWrapper::GetUpdatedAt() --> unsigned long long");
		cl.def("SetUpdatedAt", (void (TrainingEditorSaveDataWrapper::*)(unsigned long long)) & TrainingEditorSaveDataWrapper::SetUpdatedAt, "C++: TrainingEditorSaveDataWrapper::SetUpdatedAt(unsigned long long) --> void", "newUpdatedAt"_a);
		// 'TrainingEditorSaveDataWrapper::GetCreatorPlayerID': Use GetCreatorPlayerUniqueID instead
		// cl.def("GetCreatorPlayerID", (struct SteamID(TrainingEditorSaveDataWrapper::*)()) & TrainingEditorSaveDataWrapper::GetCreatorPlayerID, "C++: TrainingEditorSaveDataWrapper::GetCreatorPlayerID() --> struct SteamID");
		cl.def("GetCreatorPlayerUniqueID", (class UniqueIDWrapper(TrainingEditorSaveDataWrapper::*)())& TrainingEditorSaveDataWrapper::GetCreatorPlayerUniqueID, "C++: TrainingEditorSaveDataWrapper::GetCreatorPlayerUniqueID() --> class UniqueIDWrapper");
		cl.def("SetCreatorPlayerID", (void (TrainingEditorSaveDataWrapper::*)(struct SteamID)) & TrainingEditorSaveDataWrapper::SetCreatorPlayerID, "C++: TrainingEditorSaveDataWrapper::SetCreatorPlayerID(struct SteamID) --> void", "newCreatorPlayerID"_a);
		cl.def("Init", (void (TrainingEditorSaveDataWrapper::*)()) & TrainingEditorSaveDataWrapper::Init, "C++: TrainingEditorSaveDataWrapper::Init() --> void");
	}
	{ // TrainingEditorWrapper file:bakkesmod/wrappers/GameEvent/TrainingEditorWrapper.h line:12
		pybind11::class_<TrainingEditorWrapper, std::shared_ptr<TrainingEditorWrapper>, GameEditorWrapper> cl(M, "TrainingEditorWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](TrainingEditorWrapper const& o) { return new TrainingEditorWrapper(o); }));
		cl.def("assign", (class TrainingEditorWrapper& (TrainingEditorWrapper::*)(class TrainingEditorWrapper)) & TrainingEditorWrapper::operator=, "C++: TrainingEditorWrapper::operator=(class TrainingEditorWrapper) --> class TrainingEditorWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetMinRoundTime", (float (TrainingEditorWrapper::*)()) & TrainingEditorWrapper::GetMinRoundTime, "C++: TrainingEditorWrapper::GetMinRoundTime() --> float");
		cl.def("SetMinRoundTime", (void (TrainingEditorWrapper::*)(float)) & TrainingEditorWrapper::SetMinRoundTime, "C++: TrainingEditorWrapper::SetMinRoundTime(float) --> void", "newMinRoundTime"_a);
		cl.def("GetMaxRoundTime", (float (TrainingEditorWrapper::*)()) & TrainingEditorWrapper::GetMaxRoundTime, "C++: TrainingEditorWrapper::GetMaxRoundTime() --> float");
		cl.def("SetMaxRoundTime", (void (TrainingEditorWrapper::*)(float)) & TrainingEditorWrapper::SetMaxRoundTime, "C++: TrainingEditorWrapper::SetMaxRoundTime(float) --> void", "newMaxRoundTime"_a);
		cl.def("GetbNoEditor", (unsigned long (TrainingEditorWrapper::*)()) & TrainingEditorWrapper::GetbNoEditor, "C++: TrainingEditorWrapper::GetbNoEditor() --> unsigned long");
		cl.def("SetbNoEditor", (void (TrainingEditorWrapper::*)(unsigned long)) & TrainingEditorWrapper::SetbNoEditor, "C++: TrainingEditorWrapper::SetbNoEditor(unsigned long) --> void", "newbNoEditor"_a);
		cl.def("GetbDisplayedRedoPenaltyMessage", (unsigned long (TrainingEditorWrapper::*)()) & TrainingEditorWrapper::GetbDisplayedRedoPenaltyMessage, "C++: TrainingEditorWrapper::GetbDisplayedRedoPenaltyMessage() --> unsigned long");
		cl.def("SetbDisplayedRedoPenaltyMessage", (void (TrainingEditorWrapper::*)(unsigned long)) & TrainingEditorWrapper::SetbDisplayedRedoPenaltyMessage, "C++: TrainingEditorWrapper::SetbDisplayedRedoPenaltyMessage(unsigned long) --> void", "newbDisplayedRedoPenaltyMessage"_a);
		cl.def("GetbUnsavedChanges", (unsigned long (TrainingEditorWrapper::*)()) & TrainingEditorWrapper::GetbUnsavedChanges, "C++: TrainingEditorWrapper::GetbUnsavedChanges() --> unsigned long");
		cl.def("SetbUnsavedChanges", (void (TrainingEditorWrapper::*)(unsigned long)) & TrainingEditorWrapper::SetbUnsavedChanges, "C++: TrainingEditorWrapper::SetbUnsavedChanges(unsigned long) --> void", "newbUnsavedChanges"_a);
		cl.def("GetPointsScoredThisRound", (int (TrainingEditorWrapper::*)()) & TrainingEditorWrapper::GetPointsScoredThisRound, "C++: TrainingEditorWrapper::GetPointsScoredThisRound() --> int");
		cl.def("SetPointsScoredThisRound", (void (TrainingEditorWrapper::*)(int)) & TrainingEditorWrapper::SetPointsScoredThisRound, "C++: TrainingEditorWrapper::SetPointsScoredThisRound(int) --> void", "newPointsScoredThisRound"_a);
		cl.def("GetShotAttempt", (int (TrainingEditorWrapper::*)()) & TrainingEditorWrapper::GetShotAttempt, "C++: TrainingEditorWrapper::GetShotAttempt() --> int");
		cl.def("SetShotAttempt", (void (TrainingEditorWrapper::*)(int)) & TrainingEditorWrapper::SetShotAttempt, "C++: TrainingEditorWrapper::SetShotAttempt(int) --> void", "newShotAttempt"_a);
		cl.def("GetGoalieScore", (int (TrainingEditorWrapper::*)()) & TrainingEditorWrapper::GetGoalieScore, "C++: TrainingEditorWrapper::GetGoalieScore() --> int");
		cl.def("SetGoalieScore", (void (TrainingEditorWrapper::*)(int)) & TrainingEditorWrapper::SetGoalieScore, "C++: TrainingEditorWrapper::SetGoalieScore(int) --> void", "newGoalieScore"_a);
		cl.def("GetPlayTestType", (unsigned char (TrainingEditorWrapper::*)()) & TrainingEditorWrapper::GetPlayTestType, "C++: TrainingEditorWrapper::GetPlayTestType() --> unsigned char");
		cl.def("SetPlayTestType", (void (TrainingEditorWrapper::*)(unsigned char)) & TrainingEditorWrapper::SetPlayTestType, "C++: TrainingEditorWrapper::SetPlayTestType(unsigned char) --> void", "newPlayTestType"_a);
		cl.def("GetGoalMeshBlockers", (class ArrayWrapper<class ActorWrapper>(TrainingEditorWrapper::*)()) & TrainingEditorWrapper::GetGoalMeshBlockers, "C++: TrainingEditorWrapper::GetGoalMeshBlockers() --> class ArrayWrapper<class ActorWrapper>");
		cl.def("GetGoalMeshBlockerArchetype", (class ActorWrapper(TrainingEditorWrapper::*)()) & TrainingEditorWrapper::GetGoalMeshBlockerArchetype, "C++: TrainingEditorWrapper::GetGoalMeshBlockerArchetype() --> class ActorWrapper");
		cl.def("SetGoalMeshBlockerArchetype", (void (TrainingEditorWrapper::*)(class ActorWrapper)) & TrainingEditorWrapper::SetGoalMeshBlockerArchetype, "C++: TrainingEditorWrapper::SetGoalMeshBlockerArchetype(class ActorWrapper) --> void", "newGoalMeshBlockerArchetype"_a);
		cl.def("GetTrainingData", (class GameEditorSaveDataWrapper(TrainingEditorWrapper::*)()) & TrainingEditorWrapper::GetTrainingData, "C++: TrainingEditorWrapper::GetTrainingData() --> class GameEditorSaveDataWrapper");
		cl.def("SetTrainingData", (void (TrainingEditorWrapper::*)(class GameEditorSaveDataWrapper)) & TrainingEditorWrapper::SetTrainingData, "C++: TrainingEditorWrapper::SetTrainingData(class GameEditorSaveDataWrapper) --> void", "newTrainingData"_a);
		cl.def("GetSaveDelayTime", (float (TrainingEditorWrapper::*)()) & TrainingEditorWrapper::GetSaveDelayTime, "C++: TrainingEditorWrapper::GetSaveDelayTime() --> float");
		cl.def("SetSaveDelayTime", (void (TrainingEditorWrapper::*)(float)) & TrainingEditorWrapper::SetSaveDelayTime, "C++: TrainingEditorWrapper::SetSaveDelayTime(float) --> void", "newSaveDelayTime"_a);
		cl.def("GetSaveCooldown", (float (TrainingEditorWrapper::*)()) & TrainingEditorWrapper::GetSaveCooldown, "C++: TrainingEditorWrapper::GetSaveCooldown() --> float");
		cl.def("SetSaveCooldown", (void (TrainingEditorWrapper::*)(float)) & TrainingEditorWrapper::SetSaveCooldown, "C++: TrainingEditorWrapper::SetSaveCooldown(float) --> void", "newSaveCooldown"_a);
		cl.def("GetTrainingFileName", (class UnrealStringWrapper(TrainingEditorWrapper::*)()) & TrainingEditorWrapper::GetTrainingFileName, "C++: TrainingEditorWrapper::GetTrainingFileName() --> class UnrealStringWrapper");
		cl.def("OnLoadingMovieClosed", (void (TrainingEditorWrapper::*)()) & TrainingEditorWrapper::OnLoadingMovieClosed, "C++: TrainingEditorWrapper::OnLoadingMovieClosed() --> void");
		cl.def("TagHistoryChanges", (void (TrainingEditorWrapper::*)()) & TrainingEditorWrapper::TagHistoryChanges, "C++: TrainingEditorWrapper::TagHistoryChanges() --> void");
		cl.def("MarkAsDirty", (void (TrainingEditorWrapper::*)()) & TrainingEditorWrapper::MarkAsDirty, "C++: TrainingEditorWrapper::MarkAsDirty() --> void");
		cl.def("ForceTagHistoryChanges", (void (TrainingEditorWrapper::*)()) & TrainingEditorWrapper::ForceTagHistoryChanges, "C++: TrainingEditorWrapper::ForceTagHistoryChanges() --> void");
		cl.def("SetTracedCrosshairActor", (void (TrainingEditorWrapper::*)(class PlayerControllerWrapper, class ActorWrapper)) & TrainingEditorWrapper::SetTracedCrosshairActor, "C++: TrainingEditorWrapper::SetTracedCrosshairActor(class PlayerControllerWrapper, class ActorWrapper) --> void", "PC"_a, "NewActor"_a);
		cl.def("DestroyBall", (bool (TrainingEditorWrapper::*)(class BallWrapper)) & TrainingEditorWrapper::DestroyBall, "C++: TrainingEditorWrapper::DestroyBall(class BallWrapper) --> bool", "Ball"_a);
		cl.def("AllowDynamicCrowd", (bool (TrainingEditorWrapper::*)()) & TrainingEditorWrapper::AllowDynamicCrowd, "C++: TrainingEditorWrapper::AllowDynamicCrowd() --> bool");
		cl.def("BroadcastGoMessage", (void (TrainingEditorWrapper::*)()) & TrainingEditorWrapper::BroadcastGoMessage, "C++: TrainingEditorWrapper::BroadcastGoMessage() --> void");
		cl.def("GetTotalRounds", (int (TrainingEditorWrapper::*)()) & TrainingEditorWrapper::GetTotalRounds, "C++: TrainingEditorWrapper::GetTotalRounds() --> int");
		cl.def("GetDifficulty", (unsigned char (TrainingEditorWrapper::*)()) & TrainingEditorWrapper::GetDifficulty, "C++: TrainingEditorWrapper::GetDifficulty() --> unsigned char");
		cl.def("GetTrainingType", (unsigned char (TrainingEditorWrapper::*)()) & TrainingEditorWrapper::GetTrainingType, "C++: TrainingEditorWrapper::GetTrainingType() --> unsigned char");
		cl.def("Save2", (void (TrainingEditorWrapper::*)()) & TrainingEditorWrapper::Save2, "C++: TrainingEditorWrapper::Save2() --> void");
		cl.def("OnTrainingModeLoaded", (void (TrainingEditorWrapper::*)()) & TrainingEditorWrapper::OnTrainingModeLoaded, "C++: TrainingEditorWrapper::OnTrainingModeLoaded() --> void");
		cl.def("DuplicateRound", (void (TrainingEditorWrapper::*)(int)) & TrainingEditorWrapper::DuplicateRound, "C++: TrainingEditorWrapper::DuplicateRound(int) --> void", "Index"_a);
		cl.def("ReorderRound", (void (TrainingEditorWrapper::*)(int, int)) & TrainingEditorWrapper::ReorderRound, "C++: TrainingEditorWrapper::ReorderRound(int, int) --> void", "FromIndex"_a, "ToIndex"_a);
		cl.def("SetRoundTimeLimit", (void (TrainingEditorWrapper::*)(float)) & TrainingEditorWrapper::SetRoundTimeLimit, "C++: TrainingEditorWrapper::SetRoundTimeLimit(float) --> void", "NewRoundTime"_a);
		cl.def("HandleNextGame", (bool (TrainingEditorWrapper::*)()) & TrainingEditorWrapper::HandleNextGame, "C++: TrainingEditorWrapper::HandleNextGame() --> bool");
		cl.def("ResetBalls", (void (TrainingEditorWrapper::*)()) & TrainingEditorWrapper::ResetBalls, "C++: TrainingEditorWrapper::ResetBalls() --> void");
		cl.def("Load2", (void (TrainingEditorWrapper::*)(std::string, class PlayerControllerWrapper)) & TrainingEditorWrapper::Load2, "C++: TrainingEditorWrapper::Load2(std::string, class PlayerControllerWrapper) --> void", "SaveName"_a, "PC"_a);
		cl.def("DestroyGoalMeshBlockers", (void (TrainingEditorWrapper::*)()) & TrainingEditorWrapper::DestroyGoalMeshBlockers, "C++: TrainingEditorWrapper::DestroyGoalMeshBlockers() --> void");
		cl.def("UpdateGoalMeshBlocker", (void (TrainingEditorWrapper::*)()) & TrainingEditorWrapper::UpdateGoalMeshBlocker, "C++: TrainingEditorWrapper::UpdateGoalMeshBlocker() --> void");
		cl.def("GetScore", (int (TrainingEditorWrapper::*)()) & TrainingEditorWrapper::GetScore, "C++: TrainingEditorWrapper::GetScore() --> int");
		cl.def("RemovePointsFromScore", (void (TrainingEditorWrapper::*)(int, int)) & TrainingEditorWrapper::RemovePointsFromScore, "C++: TrainingEditorWrapper::RemovePointsFromScore(int, int) --> void", "PointsToRemove"_a, "TeamIndex"_a);
		cl.def("ShowScorerGoalMessage", (bool (TrainingEditorWrapper::*)()) & TrainingEditorWrapper::ShowScorerGoalMessage, "C++: TrainingEditorWrapper::ShowScorerGoalMessage() --> bool");
		cl.def("ShowResetRoundMessage", (void (TrainingEditorWrapper::*)()) & TrainingEditorWrapper::ShowResetRoundMessage, "C++: TrainingEditorWrapper::ShowResetRoundMessage() --> void");
		cl.def("ShowPenaltyMessage", (bool (TrainingEditorWrapper::*)()) & TrainingEditorWrapper::ShowPenaltyMessage, "C++: TrainingEditorWrapper::ShowPenaltyMessage() --> bool");
		cl.def("GetPlayerTeamNumber", (int (TrainingEditorWrapper::*)()) & TrainingEditorWrapper::GetPlayerTeamNumber, "C++: TrainingEditorWrapper::GetPlayerTeamNumber() --> int");
		cl.def("GetBallGoalScoreNumber", (int (TrainingEditorWrapper::*)()) & TrainingEditorWrapper::GetBallGoalScoreNumber, "C++: TrainingEditorWrapper::GetBallGoalScoreNumber() --> int");
		cl.def("RemoveAllPointsFromScore", (void (TrainingEditorWrapper::*)(int)) & TrainingEditorWrapper::RemoveAllPointsFromScore, "C++: TrainingEditorWrapper::RemoveAllPointsFromScore(int) --> void", "TeamIndex"_a);
		cl.def("IncrementRound", (bool (TrainingEditorWrapper::*)(unsigned long)) & TrainingEditorWrapper::IncrementRound, "C++: TrainingEditorWrapper::IncrementRound(unsigned long) --> bool", "bLoop"_a);
		cl.def("AdjustToFloorLocation", (struct Vector(TrainingEditorWrapper::*)(struct Vector&, struct Vector&)) & TrainingEditorWrapper::AdjustToFloorLocation, "C++: TrainingEditorWrapper::AdjustToFloorLocation(struct Vector &, struct Vector &) --> struct Vector", "TraceStart"_a, "CollsionExtent"_a);
		cl.def("SpawnArchetypeAtAndAdjustToFloor", (class ActorWrapper(TrainingEditorWrapper::*)(class ActorWrapper, struct Vector&, struct Rotator&)) & TrainingEditorWrapper::SpawnArchetypeAtAndAdjustToFloor, "C++: TrainingEditorWrapper::SpawnArchetypeAtAndAdjustToFloor(class ActorWrapper, struct Vector &, struct Rotator &) --> class ActorWrapper", "Archetype"_a, "SpawnLocation"_a, "SpawnRotation"_a);
		cl.def("SpawnBallAndStartPointAt", (void (TrainingEditorWrapper::*)(struct Vector&, struct Rotator&, struct Vector&, struct Rotator&)) & TrainingEditorWrapper::SpawnBallAndStartPointAt, "C++: TrainingEditorWrapper::SpawnBallAndStartPointAt(struct Vector &, struct Rotator &, struct Vector &, struct Rotator &) --> void", "BallSpawnLocation"_a, "BallSpawnRotation"_a, "StartPointSpawnLocation"_a, "StartPointSpawnRotation"_a);
		cl.def("SetupDefaultRound", (void (TrainingEditorWrapper::*)()) & TrainingEditorWrapper::SetupDefaultRound, "C++: TrainingEditorWrapper::SetupDefaultRound() --> void");
		cl.def("SwitchToRoundNumber", (void (TrainingEditorWrapper::*)(int, unsigned long)) & TrainingEditorWrapper::SwitchToRoundNumber, "C++: TrainingEditorWrapper::SwitchToRoundNumber(int, unsigned long) --> void", "RoundNumber"_a, "BackupCurrentRound"_a);
		cl.def("DeleteRound", (void (TrainingEditorWrapper::*)(int)) & TrainingEditorWrapper::DeleteRound, "C++: TrainingEditorWrapper::DeleteRound(int) --> void", "RoundToDelete"_a);
		cl.def("RestartPlayTest", (void (TrainingEditorWrapper::*)()) & TrainingEditorWrapper::RestartPlayTest, "C++: TrainingEditorWrapper::RestartPlayTest() --> void");
		cl.def("EndPlayTest", (void (TrainingEditorWrapper::*)()) & TrainingEditorWrapper::EndPlayTest, "C++: TrainingEditorWrapper::EndPlayTest() --> void");
		cl.def("StartPlayTest", (void (TrainingEditorWrapper::*)(unsigned char)) & TrainingEditorWrapper::StartPlayTest, "C++: TrainingEditorWrapper::StartPlayTest(unsigned char) --> void", "InPlayTestType"_a);
		cl.def("CanPlayTestRoundNumber", (bool (TrainingEditorWrapper::*)(int)) & TrainingEditorWrapper::CanPlayTestRoundNumber, "C++: TrainingEditorWrapper::CanPlayTestRoundNumber(int) --> bool", "RoundNumber"_a);
		cl.def("SetUnsavedChanges", (void (TrainingEditorWrapper::*)(unsigned long)) & TrainingEditorWrapper::SetUnsavedChanges, "C++: TrainingEditorWrapper::SetUnsavedChanges(unsigned long) --> void", "bInUnsavedChanges"_a);
		cl.def("UpdateActiveRoundData", (void (TrainingEditorWrapper::*)()) & TrainingEditorWrapper::UpdateActiveRoundData, "C++: TrainingEditorWrapper::UpdateActiveRoundData() --> void");
		cl.def("StartNewRound", (void (TrainingEditorWrapper::*)()) & TrainingEditorWrapper::StartNewRound, "C++: TrainingEditorWrapper::StartNewRound() --> void");
		cl.def("IsValidRoundIndex", (bool (TrainingEditorWrapper::*)(int)) & TrainingEditorWrapper::IsValidRoundIndex, "C++: TrainingEditorWrapper::IsValidRoundIndex(int) --> bool", "ArrayIndex"_a);
		cl.def("AddLocalPlayer", (void (TrainingEditorWrapper::*)(class PlayerControllerWrapper)) & TrainingEditorWrapper::AddLocalPlayer, "C++: TrainingEditorWrapper::AddLocalPlayer(class PlayerControllerWrapper) --> void", "Player"_a);
		cl.def("OnInit", (void (TrainingEditorWrapper::*)()) & TrainingEditorWrapper::OnInit, "C++: TrainingEditorWrapper::OnInit() --> void");
		cl.def("eventDestroyed", (void (TrainingEditorWrapper::*)()) & TrainingEditorWrapper::eventDestroyed, "C++: TrainingEditorWrapper::eventDestroyed() --> void");
		cl.def("eventPostBeginPlay", (void (TrainingEditorWrapper::*)()) & TrainingEditorWrapper::eventPostBeginPlay, "C++: TrainingEditorWrapper::eventPostBeginPlay() --> void");
		cl.def("EventSaveResult", (void (TrainingEditorWrapper::*)(unsigned long)) & TrainingEditorWrapper::EventSaveResult, "C++: TrainingEditorWrapper::EventSaveResult(unsigned long) --> void", "bSuccess"_a);
		cl.def("EventUnsavedChanges", (void (TrainingEditorWrapper::*)(unsigned long)) & TrainingEditorWrapper::EventUnsavedChanges, "C++: TrainingEditorWrapper::EventUnsavedChanges(unsigned long) --> void", "bOutUnsavedChanges"_a);
		cl.def("EventPlaytestStarted", (void (TrainingEditorWrapper::*)(class TrainingEditorWrapper)) & TrainingEditorWrapper::EventPlaytestStarted, "C++: TrainingEditorWrapper::EventPlaytestStarted(class TrainingEditorWrapper) --> void", "GamEvent"_a);
		cl.def("EventRoundChanged", (void (TrainingEditorWrapper::*)(class TrainingEditorWrapper)) & TrainingEditorWrapper::EventRoundChanged, "C++: TrainingEditorWrapper::EventRoundChanged(class TrainingEditorWrapper) --> void", "GamEvent"_a);
		cl.def("EventRoundTimeChanged", (void (TrainingEditorWrapper::*)(class TrainingEditorWrapper)) & TrainingEditorWrapper::EventRoundTimeChanged, "C++: TrainingEditorWrapper::EventRoundTimeChanged(class TrainingEditorWrapper) --> void", "GameEvent"_a);
	}
	{ // RumblePickupComponentWrapper file: line:12
		pybind11::class_<RumblePickupComponentWrapper, std::shared_ptr<RumblePickupComponentWrapper>, CarComponentWrapper> cl(M, "RumblePickupComponentWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](RumblePickupComponentWrapper const& o) { return new RumblePickupComponentWrapper(o); }));
		cl.def("assign", (class RumblePickupComponentWrapper& (RumblePickupComponentWrapper::*)(class RumblePickupComponentWrapper)) & RumblePickupComponentWrapper::operator=, "C++: RumblePickupComponentWrapper::operator=(class RumblePickupComponentWrapper) --> class RumblePickupComponentWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetPickupName", (class UnrealStringWrapper(RumblePickupComponentWrapper::*)()) & RumblePickupComponentWrapper::GetPickupName, "C++: RumblePickupComponentWrapper::GetPickupName() --> class UnrealStringWrapper");
		cl.def("GetbHudIgnoreUseTime", (unsigned long (RumblePickupComponentWrapper::*)()) & RumblePickupComponentWrapper::GetbHudIgnoreUseTime, "C++: RumblePickupComponentWrapper::GetbHudIgnoreUseTime() --> unsigned long");
		cl.def("SetbHudIgnoreUseTime", (void (RumblePickupComponentWrapper::*)(unsigned long)) & RumblePickupComponentWrapper::SetbHudIgnoreUseTime, "C++: RumblePickupComponentWrapper::SetbHudIgnoreUseTime(unsigned long) --> void", "newbHudIgnoreUseTime"_a);
		cl.def("GetbHasActivated", (unsigned long (RumblePickupComponentWrapper::*)()) & RumblePickupComponentWrapper::GetbHasActivated, "C++: RumblePickupComponentWrapper::GetbHasActivated() --> unsigned long");
		cl.def("SetbHasActivated", (void (RumblePickupComponentWrapper::*)(unsigned long)) & RumblePickupComponentWrapper::SetbHasActivated, "C++: RumblePickupComponentWrapper::SetbHasActivated(unsigned long) --> void", "newbHasActivated"_a);
		cl.def("GetbIsActive", (unsigned long (RumblePickupComponentWrapper::*)()) & RumblePickupComponentWrapper::GetbIsActive, "C++: RumblePickupComponentWrapper::GetbIsActive() --> unsigned long");
		cl.def("SetbIsActive", (void (RumblePickupComponentWrapper::*)(unsigned long)) & RumblePickupComponentWrapper::SetbIsActive, "C++: RumblePickupComponentWrapper::SetbIsActive(unsigned long) --> void", "newbIsActive"_a);
		cl.def("GetActivationDuration", (float (RumblePickupComponentWrapper::*)()) & RumblePickupComponentWrapper::GetActivationDuration, "C++: RumblePickupComponentWrapper::GetActivationDuration() --> float");
		cl.def("SetActivationDuration", (void (RumblePickupComponentWrapper::*)(float)) & RumblePickupComponentWrapper::SetActivationDuration, "C++: RumblePickupComponentWrapper::SetActivationDuration(float) --> void", "newActivationDuration"_a);
		cl.def("HasActivated2", (bool (RumblePickupComponentWrapper::*)()) & RumblePickupComponentWrapper::HasActivated2, "C++: RumblePickupComponentWrapper::HasActivated2() --> bool");
		cl.def("GetClientTarget", (class RBActorWrapper(RumblePickupComponentWrapper::*)()) & RumblePickupComponentWrapper::GetClientTarget, "C++: RumblePickupComponentWrapper::GetClientTarget() --> class RBActorWrapper");
		cl.def("OnVehicleSetupComplete", (void (RumblePickupComponentWrapper::*)()) & RumblePickupComponentWrapper::OnVehicleSetupComplete, "C++: RumblePickupComponentWrapper::OnVehicleSetupComplete() --> void");
		cl.def("GetActiveTimePercent", (float (RumblePickupComponentWrapper::*)()) & RumblePickupComponentWrapper::GetActiveTimePercent, "C++: RumblePickupComponentWrapper::GetActiveTimePercent() --> float");
		cl.def("PickupEnd", (void (RumblePickupComponentWrapper::*)()) & RumblePickupComponentWrapper::PickupEnd, "C++: RumblePickupComponentWrapper::PickupEnd() --> void");
		cl.def("PickupStart", (void (RumblePickupComponentWrapper::*)()) & RumblePickupComponentWrapper::PickupStart, "C++: RumblePickupComponentWrapper::PickupStart() --> void");
		cl.def("GetBoostComponent", (class BoostWrapper(RumblePickupComponentWrapper::*)()) & RumblePickupComponentWrapper::GetBoostComponent, "C++: RumblePickupComponentWrapper::GetBoostComponent() --> class BoostWrapper");
		cl.def("DeactivatePickup", (void (RumblePickupComponentWrapper::*)()) & RumblePickupComponentWrapper::DeactivatePickup, "C++: RumblePickupComponentWrapper::DeactivatePickup() --> void");
		cl.def("TryActivate", (bool (RumblePickupComponentWrapper::*)(class RBActorWrapper)) & RumblePickupComponentWrapper::TryActivate, "C++: RumblePickupComponentWrapper::TryActivate(class RBActorWrapper) --> bool", "TargetOverride"_a);
		cl.def("OnCreated", (void (RumblePickupComponentWrapper::*)()) & RumblePickupComponentWrapper::OnCreated, "C++: RumblePickupComponentWrapper::OnCreated() --> void");
		cl.def("CanPickup", (bool (RumblePickupComponentWrapper::*)(class CarWrapper)) & RumblePickupComponentWrapper::CanPickup, "C++: RumblePickupComponentWrapper::CanPickup(class CarWrapper) --> bool", "InCar"_a);
		cl.def("ApplyPickup", (void (RumblePickupComponentWrapper::*)(class CarWrapper)) & RumblePickupComponentWrapper::ApplyPickup, "C++: RumblePickupComponentWrapper::ApplyPickup(class CarWrapper) --> void", "InCar"_a);
	}
	{ // AttachmentPickup file:bakkesmod/wrappers/GameObject/RumbleComponent/AttachmentPickup.h line:7
		pybind11::class_<AttachmentPickup, std::shared_ptr<AttachmentPickup>, RumblePickupComponentWrapper> cl(M, "AttachmentPickup");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](AttachmentPickup const& o) { return new AttachmentPickup(o); }));
		cl.def("assign", (class AttachmentPickup& (AttachmentPickup::*)(class AttachmentPickup)) & AttachmentPickup::operator=, "C++: AttachmentPickup::operator=(class AttachmentPickup) --> class AttachmentPickup &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("PickupEnd", (void (AttachmentPickup::*)()) & AttachmentPickup::PickupEnd, "C++: AttachmentPickup::PickupEnd() --> void");
		cl.def("PickupStart", (void (AttachmentPickup::*)()) & AttachmentPickup::PickupStart, "C++: AttachmentPickup::PickupStart() --> void");
	}
	{ // TargetedPickup file: line:9
		pybind11::class_<TargetedPickup, std::shared_ptr<TargetedPickup>, RumblePickupComponentWrapper> cl(M, "TargetedPickup");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](TargetedPickup const& o) { return new TargetedPickup(o); }));
		cl.def("assign", (class TargetedPickup& (TargetedPickup::*)(class TargetedPickup)) & TargetedPickup::operator=, "C++: TargetedPickup::operator=(class TargetedPickup) --> class TargetedPickup &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetbCanTargetBall", (unsigned long (TargetedPickup::*)()) & TargetedPickup::GetbCanTargetBall, "C++: TargetedPickup::GetbCanTargetBall() --> unsigned long");
		cl.def("SetbCanTargetBall", (void (TargetedPickup::*)(unsigned long)) & TargetedPickup::SetbCanTargetBall, "C++: TargetedPickup::SetbCanTargetBall(unsigned long) --> void", "newbCanTargetBall"_a);
		cl.def("GetbCanTargetCars", (unsigned long (TargetedPickup::*)()) & TargetedPickup::GetbCanTargetCars, "C++: TargetedPickup::GetbCanTargetCars() --> unsigned long");
		cl.def("SetbCanTargetCars", (void (TargetedPickup::*)(unsigned long)) & TargetedPickup::SetbCanTargetCars, "C++: TargetedPickup::SetbCanTargetCars(unsigned long) --> void", "newbCanTargetCars"_a);
		cl.def("GetbCanTargetEnemyCars", (unsigned long (TargetedPickup::*)()) & TargetedPickup::GetbCanTargetEnemyCars, "C++: TargetedPickup::GetbCanTargetEnemyCars() --> unsigned long");
		cl.def("SetbCanTargetEnemyCars", (void (TargetedPickup::*)(unsigned long)) & TargetedPickup::SetbCanTargetEnemyCars, "C++: TargetedPickup::SetbCanTargetEnemyCars(unsigned long) --> void", "newbCanTargetEnemyCars"_a);
		cl.def("GetbCanTargetTeamCars", (unsigned long (TargetedPickup::*)()) & TargetedPickup::GetbCanTargetTeamCars, "C++: TargetedPickup::GetbCanTargetTeamCars() --> unsigned long");
		cl.def("SetbCanTargetTeamCars", (void (TargetedPickup::*)(unsigned long)) & TargetedPickup::SetbCanTargetTeamCars, "C++: TargetedPickup::SetbCanTargetTeamCars(unsigned long) --> void", "newbCanTargetTeamCars"_a);
		cl.def("GetbUseDirectionalTargeting", (unsigned long (TargetedPickup::*)()) & TargetedPickup::GetbUseDirectionalTargeting, "C++: TargetedPickup::GetbUseDirectionalTargeting() --> unsigned long");
		cl.def("SetbUseDirectionalTargeting", (void (TargetedPickup::*)(unsigned long)) & TargetedPickup::SetbUseDirectionalTargeting, "C++: TargetedPickup::SetbUseDirectionalTargeting(unsigned long) --> void", "newbUseDirectionalTargeting"_a);
		cl.def("GetbRequireTrace", (unsigned long (TargetedPickup::*)()) & TargetedPickup::GetbRequireTrace, "C++: TargetedPickup::GetbRequireTrace() --> unsigned long");
		cl.def("SetbRequireTrace", (void (TargetedPickup::*)(unsigned long)) & TargetedPickup::SetbRequireTrace, "C++: TargetedPickup::SetbRequireTrace(unsigned long) --> void", "newbRequireTrace"_a);
		cl.def("GetRange", (float (TargetedPickup::*)()) & TargetedPickup::GetRange, "C++: TargetedPickup::GetRange() --> float");
		cl.def("SetRange", (void (TargetedPickup::*)(float)) & TargetedPickup::SetRange, "C++: TargetedPickup::SetRange(float) --> void", "newRange"_a);
		cl.def("GetDirectionalTargetingAccuracy", (float (TargetedPickup::*)()) & TargetedPickup::GetDirectionalTargetingAccuracy, "C++: TargetedPickup::GetDirectionalTargetingAccuracy() --> float");
		cl.def("SetDirectionalTargetingAccuracy", (void (TargetedPickup::*)(float)) & TargetedPickup::SetDirectionalTargetingAccuracy, "C++: TargetedPickup::SetDirectionalTargetingAccuracy(float) --> void", "newDirectionalTargetingAccuracy"_a);
		cl.def("GetClientTarget", (class RBActorWrapper(TargetedPickup::*)()) & TargetedPickup::GetClientTarget, "C++: TargetedPickup::GetClientTarget() --> class RBActorWrapper");
		cl.def("SetClientTarget", (void (TargetedPickup::*)(class RBActorWrapper)) & TargetedPickup::SetClientTarget, "C++: TargetedPickup::SetClientTarget(class RBActorWrapper) --> void", "newClientTarget"_a);
		cl.def("GetTargeted", (class RBActorWrapper(TargetedPickup::*)()) & TargetedPickup::GetTargeted, "C++: TargetedPickup::GetTargeted() --> class RBActorWrapper");
		cl.def("SetTargeted", (void (TargetedPickup::*)(class RBActorWrapper)) & TargetedPickup::SetTargeted, "C++: TargetedPickup::SetTargeted(class RBActorWrapper) --> void", "newTargeted"_a);
		cl.def("GetClientTarget2", (class RBActorWrapper(TargetedPickup::*)()) & TargetedPickup::GetClientTarget2, "C++: TargetedPickup::GetClientTarget2() --> class RBActorWrapper");
		cl.def("TargetChanged", (void (TargetedPickup::*)()) & TargetedPickup::TargetChanged, "C++: TargetedPickup::TargetChanged() --> void");
		cl.def("OnTargetChanged", (void (TargetedPickup::*)()) & TargetedPickup::OnTargetChanged, "C++: TargetedPickup::OnTargetChanged() --> void");
		cl.def("TryActivate", (bool (TargetedPickup::*)(class RBActorWrapper)) & TargetedPickup::TryActivate, "C++: TargetedPickup::TryActivate(class RBActorWrapper) --> bool", "TargetOverride"_a);
		cl.def("ValidateTargetTrace", (bool (TargetedPickup::*)(class RBActorWrapper)) & TargetedPickup::ValidateTargetTrace, "C++: TargetedPickup::ValidateTargetTrace(class RBActorWrapper) --> bool", "InTarget"_a);
		cl.def("ValidateTarget2", (bool (TargetedPickup::*)(class RBActorWrapper)) & TargetedPickup::ValidateTarget2, "C++: TargetedPickup::ValidateTarget2(class RBActorWrapper) --> bool", "InTarget"_a);
		cl.def("GetTarget2", (class RBActorWrapper(TargetedPickup::*)()) & TargetedPickup::GetTarget2, "C++: TargetedPickup::GetTarget2() --> class RBActorWrapper");
	}
	{ // VelcroPickup file:bakkesmod/wrappers/GameObject/RumbleComponent/VelcroPickup.h line:10
		pybind11::class_<VelcroPickup, std::shared_ptr<VelcroPickup>, RumblePickupComponentWrapper> cl(M, "VelcroPickup");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](VelcroPickup const& o) { return new VelcroPickup(o); }));
		cl.def("assign", (class VelcroPickup& (VelcroPickup::*)(class VelcroPickup)) & VelcroPickup::operator=, "C++: VelcroPickup::operator=(class VelcroPickup) --> class VelcroPickup &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetBallOffset", (struct Vector(VelcroPickup::*)()) & VelcroPickup::GetBallOffset, "C++: VelcroPickup::GetBallOffset() --> struct Vector");
		cl.def("SetBallOffset", (void (VelcroPickup::*)(struct Vector)) & VelcroPickup::SetBallOffset, "C++: VelcroPickup::SetBallOffset(struct Vector) --> void", "newBallOffset"_a);
		cl.def("GetbUseRealOffset", (unsigned long (VelcroPickup::*)()) & VelcroPickup::GetbUseRealOffset, "C++: VelcroPickup::GetbUseRealOffset() --> unsigned long");
		cl.def("SetbUseRealOffset", (void (VelcroPickup::*)(unsigned long)) & VelcroPickup::SetbUseRealOffset, "C++: VelcroPickup::SetbUseRealOffset(unsigned long) --> void", "newbUseRealOffset"_a);
		cl.def("GetbHit", (unsigned long (VelcroPickup::*)()) & VelcroPickup::GetbHit, "C++: VelcroPickup::GetbHit() --> unsigned long");
		cl.def("SetbHit", (void (VelcroPickup::*)(unsigned long)) & VelcroPickup::SetbHit, "C++: VelcroPickup::SetbHit(unsigned long) --> void", "newbHit"_a);
		cl.def("GetbBroken", (unsigned long (VelcroPickup::*)()) & VelcroPickup::GetbBroken, "C++: VelcroPickup::GetbBroken() --> unsigned long");
		cl.def("SetbBroken", (void (VelcroPickup::*)(unsigned long)) & VelcroPickup::SetbBroken, "C++: VelcroPickup::SetbBroken(unsigned long) --> void", "newbBroken"_a);
		cl.def("GetAfterHitDuration", (float (VelcroPickup::*)()) & VelcroPickup::GetAfterHitDuration, "C++: VelcroPickup::GetAfterHitDuration() --> float");
		cl.def("SetAfterHitDuration", (void (VelcroPickup::*)(float)) & VelcroPickup::SetAfterHitDuration, "C++: VelcroPickup::SetAfterHitDuration(float) --> void", "newAfterHitDuration"_a);
		cl.def("GetPostBreakDuration", (float (VelcroPickup::*)()) & VelcroPickup::GetPostBreakDuration, "C++: VelcroPickup::GetPostBreakDuration() --> float");
		cl.def("SetPostBreakDuration", (void (VelcroPickup::*)(float)) & VelcroPickup::SetPostBreakDuration, "C++: VelcroPickup::SetPostBreakDuration(float) --> void", "newPostBreakDuration"_a);
		cl.def("GetMinBreakForce", (float (VelcroPickup::*)()) & VelcroPickup::GetMinBreakForce, "C++: VelcroPickup::GetMinBreakForce() --> float");
		cl.def("SetMinBreakForce", (void (VelcroPickup::*)(float)) & VelcroPickup::SetMinBreakForce, "C++: VelcroPickup::SetMinBreakForce(float) --> void", "newMinBreakForce"_a);
		cl.def("GetMinBreakTime", (float (VelcroPickup::*)()) & VelcroPickup::GetMinBreakTime, "C++: VelcroPickup::GetMinBreakTime() --> float");
		cl.def("SetMinBreakTime", (void (VelcroPickup::*)(float)) & VelcroPickup::SetMinBreakTime, "C++: VelcroPickup::SetMinBreakTime(float) --> void", "newMinBreakTime"_a);
		cl.def("GetCheckLastTouchRate", (float (VelcroPickup::*)()) & VelcroPickup::GetCheckLastTouchRate, "C++: VelcroPickup::GetCheckLastTouchRate() --> float");
		cl.def("SetCheckLastTouchRate", (void (VelcroPickup::*)(float)) & VelcroPickup::SetCheckLastTouchRate, "C++: VelcroPickup::SetCheckLastTouchRate(float) --> void", "newCheckLastTouchRate"_a);
		cl.def("GetWeldedBall", (class BallWrapper(VelcroPickup::*)()) & VelcroPickup::GetWeldedBall, "C++: VelcroPickup::GetWeldedBall() --> class BallWrapper");
		cl.def("SetWeldedBall", (void (VelcroPickup::*)(class BallWrapper)) & VelcroPickup::SetWeldedBall, "C++: VelcroPickup::SetWeldedBall(class BallWrapper) --> void", "newWeldedBall"_a);
		cl.def("GetOldBallMass", (float (VelcroPickup::*)()) & VelcroPickup::GetOldBallMass, "C++: VelcroPickup::GetOldBallMass() --> float");
		cl.def("SetOldBallMass", (void (VelcroPickup::*)(float)) & VelcroPickup::SetOldBallMass, "C++: VelcroPickup::SetOldBallMass(float) --> void", "newOldBallMass"_a);
		cl.def("GetAttachTime", (float (VelcroPickup::*)()) & VelcroPickup::GetAttachTime, "C++: VelcroPickup::GetAttachTime() --> float");
		cl.def("SetAttachTime", (void (VelcroPickup::*)(float)) & VelcroPickup::SetAttachTime, "C++: VelcroPickup::SetAttachTime(float) --> void", "newAttachTime"_a);
		cl.def("GetLastTouchCheckTime", (float (VelcroPickup::*)()) & VelcroPickup::GetLastTouchCheckTime, "C++: VelcroPickup::GetLastTouchCheckTime() --> float");
		cl.def("SetLastTouchCheckTime", (void (VelcroPickup::*)(float)) & VelcroPickup::SetLastTouchCheckTime, "C++: VelcroPickup::SetLastTouchCheckTime(float) --> void", "newLastTouchCheckTime"_a);
		cl.def("GetBreakTime", (float (VelcroPickup::*)()) & VelcroPickup::GetBreakTime, "C++: VelcroPickup::GetBreakTime() --> float");
		cl.def("SetBreakTime", (void (VelcroPickup::*)(float)) & VelcroPickup::SetBreakTime, "C++: VelcroPickup::SetBreakTime(float) --> void", "newBreakTime"_a);
		cl.def("DoBreak", (void (VelcroPickup::*)()) & VelcroPickup::DoBreak, "C++: VelcroPickup::DoBreak() --> void");
		cl.def("HandleCarTouch", (void (VelcroPickup::*)(class BallWrapper, class CarWrapper, unsigned char)) & VelcroPickup::HandleCarTouch, "C++: VelcroPickup::HandleCarTouch(class BallWrapper, class CarWrapper, unsigned char) --> void", "InBall"_a, "InCar"_a, "HitType"_a);
		cl.def("PickupEnd", (void (VelcroPickup::*)()) & VelcroPickup::PickupEnd, "C++: VelcroPickup::PickupEnd() --> void");
		cl.def("OnBallHit", (void (VelcroPickup::*)()) & VelcroPickup::OnBallHit, "C++: VelcroPickup::OnBallHit() --> void");
		cl.def("PickupStart", (void (VelcroPickup::*)()) & VelcroPickup::PickupStart, "C++: VelcroPickup::PickupStart() --> void");
	}
	{ // SpringPickup file: line:9
		pybind11::class_<SpringPickup, std::shared_ptr<SpringPickup>, TargetedPickup> cl(M, "SpringPickup");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](SpringPickup const& o) { return new SpringPickup(o); }));
		cl.def("assign", (class SpringPickup& (SpringPickup::*)(class SpringPickup)) & SpringPickup::operator=, "C++: SpringPickup::operator=(class SpringPickup) --> class SpringPickup &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetForce", (float (SpringPickup::*)()) & SpringPickup::GetForce, "C++: SpringPickup::GetForce() --> float");
		cl.def("SetForce", (void (SpringPickup::*)(float)) & SpringPickup::SetForce, "C++: SpringPickup::SetForce(float) --> void", "newForce"_a);
		cl.def("GetVerticalForce", (float (SpringPickup::*)()) & SpringPickup::GetVerticalForce, "C++: SpringPickup::GetVerticalForce() --> float");
		cl.def("SetVerticalForce", (void (SpringPickup::*)(float)) & SpringPickup::SetVerticalForce, "C++: SpringPickup::SetVerticalForce(float) --> void", "newVerticalForce"_a);
		cl.def("GetTorque", (struct Vector(SpringPickup::*)()) & SpringPickup::GetTorque, "C++: SpringPickup::GetTorque() --> struct Vector");
		cl.def("SetTorque", (void (SpringPickup::*)(struct Vector)) & SpringPickup::SetTorque, "C++: SpringPickup::SetTorque(struct Vector) --> void", "newTorque"_a);
		cl.def("GetbApplyRelativeForce", (unsigned long (SpringPickup::*)()) & SpringPickup::GetbApplyRelativeForce, "C++: SpringPickup::GetbApplyRelativeForce() --> unsigned long");
		cl.def("SetbApplyRelativeForce", (void (SpringPickup::*)(unsigned long)) & SpringPickup::SetbApplyRelativeForce, "C++: SpringPickup::SetbApplyRelativeForce(unsigned long) --> void", "newbApplyRelativeForce"_a);
		cl.def("GetbApplyConstantForce", (unsigned long (SpringPickup::*)()) & SpringPickup::GetbApplyConstantForce, "C++: SpringPickup::GetbApplyConstantForce() --> unsigned long");
		cl.def("SetbApplyConstantForce", (void (SpringPickup::*)(unsigned long)) & SpringPickup::SetbApplyConstantForce, "C++: SpringPickup::SetbApplyConstantForce(unsigned long) --> void", "newbApplyConstantForce"_a);
		cl.def("GetbBreakConstantForceWithHit", (unsigned long (SpringPickup::*)()) & SpringPickup::GetbBreakConstantForceWithHit, "C++: SpringPickup::GetbBreakConstantForceWithHit() --> unsigned long");
		cl.def("SetbBreakConstantForceWithHit", (void (SpringPickup::*)(unsigned long)) & SpringPickup::SetbBreakConstantForceWithHit, "C++: SpringPickup::SetbBreakConstantForceWithHit(unsigned long) --> void", "newbBreakConstantForceWithHit"_a);
		cl.def("GetbApplyRelativeConstantForce", (unsigned long (SpringPickup::*)()) & SpringPickup::GetbApplyRelativeConstantForce, "C++: SpringPickup::GetbApplyRelativeConstantForce() --> unsigned long");
		cl.def("SetbApplyRelativeConstantForce", (void (SpringPickup::*)(unsigned long)) & SpringPickup::SetbApplyRelativeConstantForce, "C++: SpringPickup::SetbApplyRelativeConstantForce(unsigned long) --> void", "newbApplyRelativeConstantForce"_a);
		cl.def("GetbInstant", (unsigned long (SpringPickup::*)()) & SpringPickup::GetbInstant, "C++: SpringPickup::GetbInstant() --> unsigned long");
		cl.def("SetbInstant", (void (SpringPickup::*)(unsigned long)) & SpringPickup::SetbInstant, "C++: SpringPickup::SetbInstant(unsigned long) --> void", "newbInstant"_a);
		cl.def("GetbFollowAfterHit", (unsigned long (SpringPickup::*)()) & SpringPickup::GetbFollowAfterHit, "C++: SpringPickup::GetbFollowAfterHit() --> unsigned long");
		cl.def("SetbFollowAfterHit", (void (SpringPickup::*)(unsigned long)) & SpringPickup::SetbFollowAfterHit, "C++: SpringPickup::SetbFollowAfterHit(unsigned long) --> void", "newbFollowAfterHit"_a);
		cl.def("GetbSpringed", (unsigned long (SpringPickup::*)()) & SpringPickup::GetbSpringed, "C++: SpringPickup::GetbSpringed() --> unsigned long");
		cl.def("SetbSpringed", (void (SpringPickup::*)(unsigned long)) & SpringPickup::SetbSpringed, "C++: SpringPickup::SetbSpringed(unsigned long) --> void", "newbSpringed"_a);
		cl.def("GetRelativeForceNormalDirection", (float (SpringPickup::*)()) & SpringPickup::GetRelativeForceNormalDirection, "C++: SpringPickup::GetRelativeForceNormalDirection() --> float");
		cl.def("SetRelativeForceNormalDirection", (void (SpringPickup::*)(float)) & SpringPickup::SetRelativeForceNormalDirection, "C++: SpringPickup::SetRelativeForceNormalDirection(float) --> void", "newRelativeForceNormalDirection"_a);
		cl.def("GetMaxSpringLength", (float (SpringPickup::*)()) & SpringPickup::GetMaxSpringLength, "C++: SpringPickup::GetMaxSpringLength() --> float");
		cl.def("SetMaxSpringLength", (void (SpringPickup::*)(float)) & SpringPickup::SetMaxSpringLength, "C++: SpringPickup::SetMaxSpringLength(float) --> void", "newMaxSpringLength"_a);
		cl.def("GetConstantForce", (float (SpringPickup::*)()) & SpringPickup::GetConstantForce, "C++: SpringPickup::GetConstantForce() --> float");
		cl.def("SetConstantForce", (void (SpringPickup::*)(float)) & SpringPickup::SetConstantForce, "C++: SpringPickup::SetConstantForce(float) --> void", "newConstantForce"_a);
		cl.def("GetFromOffset", (struct Vector(SpringPickup::*)()) & SpringPickup::GetFromOffset, "C++: SpringPickup::GetFromOffset() --> struct Vector");
		cl.def("SetFromOffset", (void (SpringPickup::*)(struct Vector)) & SpringPickup::SetFromOffset, "C++: SpringPickup::SetFromOffset(struct Vector) --> void", "newFromOffset"_a);
		cl.def("GetSpringMeshScale", (struct Vector(SpringPickup::*)()) & SpringPickup::GetSpringMeshScale, "C++: SpringPickup::GetSpringMeshScale() --> struct Vector");
		cl.def("SetSpringMeshScale", (void (SpringPickup::*)(struct Vector)) & SpringPickup::SetSpringMeshScale, "C++: SpringPickup::SetSpringMeshScale(struct Vector) --> void", "newSpringMeshScale"_a);
		cl.def("GetSpringMeshInitialSize", (float (SpringPickup::*)()) & SpringPickup::GetSpringMeshInitialSize, "C++: SpringPickup::GetSpringMeshInitialSize() --> float");
		cl.def("SetSpringMeshInitialSize", (void (SpringPickup::*)(float)) & SpringPickup::SetSpringMeshInitialSize, "C++: SpringPickup::SetSpringMeshInitialSize(float) --> void", "newSpringMeshInitialSize"_a);
		cl.def("GetSpringRotationOffset", (struct Rotator(SpringPickup::*)()) & SpringPickup::GetSpringRotationOffset, "C++: SpringPickup::GetSpringRotationOffset() --> struct Rotator");
		cl.def("SetSpringRotationOffset", (void (SpringPickup::*)(struct Rotator)) & SpringPickup::SetSpringRotationOffset, "C++: SpringPickup::SetSpringRotationOffset(struct Rotator) --> void", "newSpringRotationOffset"_a);
		cl.def("GetHittingMeshScale", (struct Vector(SpringPickup::*)()) & SpringPickup::GetHittingMeshScale, "C++: SpringPickup::GetHittingMeshScale() --> struct Vector");
		cl.def("SetHittingMeshScale", (void (SpringPickup::*)(struct Vector)) & SpringPickup::SetHittingMeshScale, "C++: SpringPickup::SetHittingMeshScale(struct Vector) --> void", "newHittingMeshScale"_a);
		cl.def("GetHittingMeshOffset", (struct Vector(SpringPickup::*)()) & SpringPickup::GetHittingMeshOffset, "C++: SpringPickup::GetHittingMeshOffset() --> struct Vector");
		cl.def("SetHittingMeshOffset", (void (SpringPickup::*)(struct Vector)) & SpringPickup::SetHittingMeshOffset, "C++: SpringPickup::SetHittingMeshOffset(struct Vector) --> void", "newHittingMeshOffset"_a);
		cl.def("GetHittingRotationOffset", (struct Rotator(SpringPickup::*)()) & SpringPickup::GetHittingRotationOffset, "C++: SpringPickup::GetHittingRotationOffset() --> struct Rotator");
		cl.def("SetHittingRotationOffset", (void (SpringPickup::*)(struct Rotator)) & SpringPickup::SetHittingRotationOffset, "C++: SpringPickup::SetHittingRotationOffset(struct Rotator) --> void", "newHittingRotationOffset"_a);
		cl.def("GetHitDistanceOffset", (float (SpringPickup::*)()) & SpringPickup::GetHitDistanceOffset, "C++: SpringPickup::GetHitDistanceOffset() --> float");
		cl.def("SetHitDistanceOffset", (void (SpringPickup::*)(float)) & SpringPickup::SetHitDistanceOffset, "C++: SpringPickup::SetHitDistanceOffset(float) --> void", "newHitDistanceOffset"_a);
		cl.def("GetAfterSpringDuration", (float (SpringPickup::*)()) & SpringPickup::GetAfterSpringDuration, "C++: SpringPickup::GetAfterSpringDuration() --> float");
		cl.def("SetAfterSpringDuration", (void (SpringPickup::*)(float)) & SpringPickup::SetAfterSpringDuration, "C++: SpringPickup::SetAfterSpringDuration(float) --> void", "newAfterSpringDuration"_a);
		cl.def("GetBallHitType", (unsigned char (SpringPickup::*)()) & SpringPickup::GetBallHitType, "C++: SpringPickup::GetBallHitType() --> unsigned char");
		cl.def("SetBallHitType", (void (SpringPickup::*)(unsigned char)) & SpringPickup::SetBallHitType, "C++: SpringPickup::SetBallHitType(unsigned char) --> void", "newBallHitType"_a);
		cl.def("GetMinSpringLength", (float (SpringPickup::*)()) & SpringPickup::GetMinSpringLength, "C++: SpringPickup::GetMinSpringLength() --> float");
		cl.def("SetMinSpringLength", (void (SpringPickup::*)(float)) & SpringPickup::SetMinSpringLength, "C++: SpringPickup::SetMinSpringLength(float) --> void", "newMinSpringLength"_a);
		cl.def("GetWeldedForceScalar", (float (SpringPickup::*)()) & SpringPickup::GetWeldedForceScalar, "C++: SpringPickup::GetWeldedForceScalar() --> float");
		cl.def("SetWeldedForceScalar", (void (SpringPickup::*)(float)) & SpringPickup::SetWeldedForceScalar, "C++: SpringPickup::SetWeldedForceScalar(float) --> void", "newWeldedForceScalar"_a);
		cl.def("GetWeldedVerticalForce", (float (SpringPickup::*)()) & SpringPickup::GetWeldedVerticalForce, "C++: SpringPickup::GetWeldedVerticalForce() --> float");
		cl.def("SetWeldedVerticalForce", (void (SpringPickup::*)(float)) & SpringPickup::SetWeldedVerticalForce, "C++: SpringPickup::SetWeldedVerticalForce(float) --> void", "newWeldedVerticalForce"_a);
		cl.def("GetCurrentSpringLength", (float (SpringPickup::*)()) & SpringPickup::GetCurrentSpringLength, "C++: SpringPickup::GetCurrentSpringLength() --> float");
		cl.def("SetCurrentSpringLength", (void (SpringPickup::*)(float)) & SpringPickup::SetCurrentSpringLength, "C++: SpringPickup::SetCurrentSpringLength(float) --> void", "newCurrentSpringLength"_a);
		cl.def("GetSpringedTime", (float (SpringPickup::*)()) & SpringPickup::GetSpringedTime, "C++: SpringPickup::GetSpringedTime() --> float");
		cl.def("SetSpringedTime", (void (SpringPickup::*)(float)) & SpringPickup::SetSpringedTime, "C++: SpringPickup::SetSpringedTime(float) --> void", "newSpringedTime"_a);
		cl.def("GetAfterSpringTime", (float (SpringPickup::*)()) & SpringPickup::GetAfterSpringTime, "C++: SpringPickup::GetAfterSpringTime() --> float");
		cl.def("SetAfterSpringTime", (void (SpringPickup::*)(float)) & SpringPickup::SetAfterSpringTime, "C++: SpringPickup::SetAfterSpringTime(float) --> void", "newAfterSpringTime"_a);
		cl.def("GetSpringToTime", (float (SpringPickup::*)()) & SpringPickup::GetSpringToTime, "C++: SpringPickup::GetSpringToTime() --> float");
		cl.def("SetSpringToTime", (void (SpringPickup::*)(float)) & SpringPickup::SetSpringToTime, "C++: SpringPickup::SetSpringToTime(float) --> void", "newSpringToTime"_a);
		cl.def("GetSpringOrigin", (struct Vector(SpringPickup::*)()) & SpringPickup::GetSpringOrigin, "C++: SpringPickup::GetSpringOrigin() --> struct Vector");
		cl.def("SetSpringOrigin", (void (SpringPickup::*)(struct Vector)) & SpringPickup::SetSpringOrigin, "C++: SpringPickup::SetSpringOrigin(struct Vector) --> void", "newSpringOrigin"_a);
		cl.def("GetSpringedLocation", (struct Vector(SpringPickup::*)()) & SpringPickup::GetSpringedLocation, "C++: SpringPickup::GetSpringedLocation() --> struct Vector");
		cl.def("SetSpringedLocation", (void (SpringPickup::*)(struct Vector)) & SpringPickup::SetSpringedLocation, "C++: SpringPickup::SetSpringedLocation(struct Vector) --> void", "newSpringedLocation"_a);
		cl.def("GetSpringedNormal", (struct Vector(SpringPickup::*)()) & SpringPickup::GetSpringedNormal, "C++: SpringPickup::GetSpringedNormal() --> struct Vector");
		cl.def("SetSpringedNormal", (void (SpringPickup::*)(struct Vector)) & SpringPickup::SetSpringedNormal, "C++: SpringPickup::SetSpringedNormal(struct Vector) --> void", "newSpringedNormal"_a);
		cl.def("GetSpringedLength", (float (SpringPickup::*)()) & SpringPickup::GetSpringedLength, "C++: SpringPickup::GetSpringedLength() --> float");
		cl.def("SetSpringedLength", (void (SpringPickup::*)(float)) & SpringPickup::SetSpringedLength, "C++: SpringPickup::SetSpringedLength(float) --> void", "newSpringedLength"_a);
		cl.def("PickupEnd", (void (SpringPickup::*)()) & SpringPickup::PickupEnd, "C++: SpringPickup::PickupEnd() --> void");
		cl.def("HandleCarTouchedBall", (void (SpringPickup::*)(class BallWrapper, class CarWrapper, unsigned char)) & SpringPickup::HandleCarTouchedBall, "C++: SpringPickup::HandleCarTouchedBall(class BallWrapper, class CarWrapper, unsigned char) --> void", "Ball"_a, "OtherCar"_a, "HitType"_a);
		cl.def("ScaleSpringMeshToLocation", (void (SpringPickup::*)(struct Vector&, struct Vector&)) & SpringPickup::ScaleSpringMeshToLocation, "C++: SpringPickup::ScaleSpringMeshToLocation(struct Vector &, struct Vector &) --> void", "NewLocation"_a, "TargetLoction"_a);
		cl.def("ApplyForces", (void (SpringPickup::*)(float)) & SpringPickup::ApplyForces, "C++: SpringPickup::ApplyForces(float) --> void", "ActiveTime"_a);
		cl.def("GetRelativeConstantForce", (struct Vector(SpringPickup::*)(struct Vector&)) & SpringPickup::GetRelativeConstantForce, "C++: SpringPickup::GetRelativeConstantForce(struct Vector &) --> struct Vector", "Direction"_a);
		cl.def("GetRelativeImpulse", (struct Vector(SpringPickup::*)(struct Vector&)) & SpringPickup::GetRelativeImpulse, "C++: SpringPickup::GetRelativeImpulse(struct Vector &) --> struct Vector", "Direction"_a);
		cl.def("DoSpring", (void (SpringPickup::*)(unsigned long)) & SpringPickup::DoSpring, "C++: SpringPickup::DoSpring(unsigned long) --> void", "bFirstHit"_a);
		cl.def("PickupStart", (void (SpringPickup::*)()) & SpringPickup::PickupStart, "C++: SpringPickup::PickupStart() --> void");
	}
	{ // BallCarSpringPickup file:bakkesmod/wrappers/GameObject/RumbleComponent/BallCarSpringPickup.h line:7
		pybind11::class_<BallCarSpringPickup, std::shared_ptr<BallCarSpringPickup>, SpringPickup> cl(M, "BallCarSpringPickup");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](BallCarSpringPickup const& o) { return new BallCarSpringPickup(o); }));
		cl.def("assign", (class BallCarSpringPickup& (BallCarSpringPickup::*)(class BallCarSpringPickup)) & BallCarSpringPickup::operator=, "C++: BallCarSpringPickup::operator=(class BallCarSpringPickup) --> class BallCarSpringPickup &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("ScaleSpringMeshToLocation", (void (BallCarSpringPickup::*)(struct Vector&, struct Vector&)) & BallCarSpringPickup::ScaleSpringMeshToLocation, "C++: BallCarSpringPickup::ScaleSpringMeshToLocation(struct Vector &, struct Vector &) --> void", "NewLocation"_a, "TargetLocation"_a);
	}
	{ // BallFreezePickup file:bakkesmod/wrappers/GameObject/RumbleComponent/BallFreezePickup.h line:9
		pybind11::class_<BallFreezePickup, std::shared_ptr<BallFreezePickup>, TargetedPickup> cl(M, "BallFreezePickup");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](BallFreezePickup const& o) { return new BallFreezePickup(o); }));
		cl.def("assign", (class BallFreezePickup& (BallFreezePickup::*)(class BallFreezePickup)) & BallFreezePickup::operator=, "C++: BallFreezePickup::operator=(class BallFreezePickup) --> class BallFreezePickup &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetbMaintainMomentum", (unsigned long (BallFreezePickup::*)()) & BallFreezePickup::GetbMaintainMomentum, "C++: BallFreezePickup::GetbMaintainMomentum() --> unsigned long");
		cl.def("SetbMaintainMomentum", (void (BallFreezePickup::*)(unsigned long)) & BallFreezePickup::SetbMaintainMomentum, "C++: BallFreezePickup::SetbMaintainMomentum(unsigned long) --> void", "newbMaintainMomentum"_a);
		cl.def("GetbTouched", (unsigned long (BallFreezePickup::*)()) & BallFreezePickup::GetbTouched, "C++: BallFreezePickup::GetbTouched() --> unsigned long");
		cl.def("SetbTouched", (void (BallFreezePickup::*)(unsigned long)) & BallFreezePickup::SetbTouched, "C++: BallFreezePickup::SetbTouched(unsigned long) --> void", "newbTouched"_a);
		cl.def("GetTimeToStop", (float (BallFreezePickup::*)()) & BallFreezePickup::GetTimeToStop, "C++: BallFreezePickup::GetTimeToStop() --> float");
		cl.def("SetTimeToStop", (void (BallFreezePickup::*)(float)) & BallFreezePickup::SetTimeToStop, "C++: BallFreezePickup::SetTimeToStop(float) --> void", "newTimeToStop"_a);
		cl.def("GetStopMomentumPercentage", (float (BallFreezePickup::*)()) & BallFreezePickup::GetStopMomentumPercentage, "C++: BallFreezePickup::GetStopMomentumPercentage() --> float");
		cl.def("SetStopMomentumPercentage", (void (BallFreezePickup::*)(float)) & BallFreezePickup::SetStopMomentumPercentage, "C++: BallFreezePickup::SetStopMomentumPercentage(float) --> void", "newStopMomentumPercentage"_a);
		cl.def("GetBall", (class BallWrapper(BallFreezePickup::*)()) & BallFreezePickup::GetBall, "C++: BallFreezePickup::GetBall() --> class BallWrapper");
		cl.def("SetBall", (void (BallFreezePickup::*)(class BallWrapper)) & BallFreezePickup::SetBall, "C++: BallFreezePickup::SetBall(class BallWrapper) --> void", "newBall"_a);
		cl.def("GetOrigLinearVelocity", (struct Vector(BallFreezePickup::*)()) & BallFreezePickup::GetOrigLinearVelocity, "C++: BallFreezePickup::GetOrigLinearVelocity() --> struct Vector");
		cl.def("SetOrigLinearVelocity", (void (BallFreezePickup::*)(struct Vector)) & BallFreezePickup::SetOrigLinearVelocity, "C++: BallFreezePickup::SetOrigLinearVelocity(struct Vector) --> void", "newOrigLinearVelocity"_a);
		cl.def("GetOrigAngularVelocity", (struct Vector(BallFreezePickup::*)()) & BallFreezePickup::GetOrigAngularVelocity, "C++: BallFreezePickup::GetOrigAngularVelocity() --> struct Vector");
		cl.def("SetOrigAngularVelocity", (void (BallFreezePickup::*)(struct Vector)) & BallFreezePickup::SetOrigAngularVelocity, "C++: BallFreezePickup::SetOrigAngularVelocity(struct Vector) --> void", "newOrigAngularVelocity"_a);
		cl.def("GetOrigSpeed", (float (BallFreezePickup::*)()) & BallFreezePickup::GetOrigSpeed, "C++: BallFreezePickup::GetOrigSpeed() --> float");
		cl.def("SetOrigSpeed", (void (BallFreezePickup::*)(float)) & BallFreezePickup::SetOrigSpeed, "C++: BallFreezePickup::SetOrigSpeed(float) --> void", "newOrigSpeed"_a);
		cl.def("GetRepOrigSpeed", (float (BallFreezePickup::*)()) & BallFreezePickup::GetRepOrigSpeed, "C++: BallFreezePickup::GetRepOrigSpeed() --> float");
		cl.def("SetRepOrigSpeed", (void (BallFreezePickup::*)(float)) & BallFreezePickup::SetRepOrigSpeed, "C++: BallFreezePickup::SetRepOrigSpeed(float) --> void", "newRepOrigSpeed"_a);
		cl.def("PickupEnd", (void (BallFreezePickup::*)()) & BallFreezePickup::PickupEnd, "C++: BallFreezePickup::PickupEnd() --> void");
		cl.def("HandleBallExploded", (void (BallFreezePickup::*)(class BallWrapper)) & BallFreezePickup::HandleBallExploded, "C++: BallFreezePickup::HandleBallExploded(class BallWrapper) --> void", "InBall"_a);
		cl.def("HandleBallHit", (void (BallFreezePickup::*)(class BallWrapper, class CarWrapper, unsigned char)) & BallFreezePickup::HandleBallHit, "C++: BallFreezePickup::HandleBallHit(class BallWrapper, class CarWrapper, unsigned char) --> void", "InBall"_a, "InCar"_a, "HitType"_a);
		cl.def("ApplyForces", (void (BallFreezePickup::*)(float)) & BallFreezePickup::ApplyForces, "C++: BallFreezePickup::ApplyForces(float) --> void", "ActiveTime"_a);
		cl.def("OnTargetChanged", (void (BallFreezePickup::*)()) & BallFreezePickup::OnTargetChanged, "C++: BallFreezePickup::OnTargetChanged() --> void");
		cl.def("PickupStart", (void (BallFreezePickup::*)()) & BallFreezePickup::PickupStart, "C++: BallFreezePickup::PickupStart() --> void");
	}
	{ // BallLassoPickup file:bakkesmod/wrappers/GameObject/RumbleComponent/BallLassoPickup.h line:7
		pybind11::class_<BallLassoPickup, std::shared_ptr<BallLassoPickup>, SpringPickup> cl(M, "BallLassoPickup");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](BallLassoPickup const& o) { return new BallLassoPickup(o); }));
		cl.def("assign", (class BallLassoPickup& (BallLassoPickup::*)(class BallLassoPickup)) & BallLassoPickup::operator=, "C++: BallLassoPickup::operator=(class BallLassoPickup) --> class BallLassoPickup &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("ScaleSpringMeshToLocation", (void (BallLassoPickup::*)(struct Vector&, struct Vector&)) & BallLassoPickup::ScaleSpringMeshToLocation, "C++: BallLassoPickup::ScaleSpringMeshToLocation(struct Vector &, struct Vector &) --> void", "NewLocation"_a, "TargetLocation"_a);
		cl.def("DoSpring", (void (BallLassoPickup::*)(unsigned long)) & BallLassoPickup::DoSpring, "C++: BallLassoPickup::DoSpring(unsigned long) --> void", "bFirstHit"_a);
	}
	{ // BattarangPickup file:bakkesmod/wrappers/GameObject/RumbleComponent/BattarangPickup.h line:7
		pybind11::class_<BattarangPickup, std::shared_ptr<BattarangPickup>, BallLassoPickup> cl(M, "BattarangPickup");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](BattarangPickup const& o) { return new BattarangPickup(o); }));
		cl.def("assign", (class BattarangPickup& (BattarangPickup::*)(class BattarangPickup)) & BattarangPickup::operator=, "C++: BattarangPickup::operator=(class BattarangPickup) --> class BattarangPickup &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetSpinSpeed", (float (BattarangPickup::*)()) & BattarangPickup::GetSpinSpeed, "C++: BattarangPickup::GetSpinSpeed() --> float");
		cl.def("SetSpinSpeed", (void (BattarangPickup::*)(float)) & BattarangPickup::SetSpinSpeed, "C++: BattarangPickup::SetSpinSpeed(float) --> void", "newSpinSpeed"_a);
		cl.def("GetCurRotation", (float (BattarangPickup::*)()) & BattarangPickup::GetCurRotation, "C++: BattarangPickup::GetCurRotation() --> float");
		cl.def("SetCurRotation", (void (BattarangPickup::*)(float)) & BattarangPickup::SetCurRotation, "C++: BattarangPickup::SetCurRotation(float) --> void", "newCurRotation"_a);
	}
	{ // BoostModPickup file:bakkesmod/wrappers/GameObject/RumbleComponent/BoostModPickup.h line:7
		pybind11::class_<BoostModPickup, std::shared_ptr<BoostModPickup>, RumblePickupComponentWrapper> cl(M, "BoostModPickup");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](BoostModPickup const& o) { return new BoostModPickup(o); }));
		cl.def("assign", (class BoostModPickup& (BoostModPickup::*)(class BoostModPickup)) & BoostModPickup::operator=, "C++: BoostModPickup::operator=(class BoostModPickup) --> class BoostModPickup &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetbUnlimitedBoost", (unsigned long (BoostModPickup::*)()) & BoostModPickup::GetbUnlimitedBoost, "C++: BoostModPickup::GetbUnlimitedBoost() --> unsigned long");
		cl.def("SetbUnlimitedBoost", (void (BoostModPickup::*)(unsigned long)) & BoostModPickup::SetbUnlimitedBoost, "C++: BoostModPickup::SetbUnlimitedBoost(unsigned long) --> void", "newbUnlimitedBoost"_a);
		cl.def("GetBoostStrength", (float (BoostModPickup::*)()) & BoostModPickup::GetBoostStrength, "C++: BoostModPickup::GetBoostStrength() --> float");
		cl.def("SetBoostStrength", (void (BoostModPickup::*)(float)) & BoostModPickup::SetBoostStrength, "C++: BoostModPickup::SetBoostStrength(float) --> void", "newBoostStrength"_a);
		cl.def("GetOldBoostStrength", (float (BoostModPickup::*)()) & BoostModPickup::GetOldBoostStrength, "C++: BoostModPickup::GetOldBoostStrength() --> float");
		cl.def("SetOldBoostStrength", (void (BoostModPickup::*)(float)) & BoostModPickup::SetOldBoostStrength, "C++: BoostModPickup::SetOldBoostStrength(float) --> void", "newOldBoostStrength"_a);
		cl.def("PickupEnd", (void (BoostModPickup::*)()) & BoostModPickup::PickupEnd, "C++: BoostModPickup::PickupEnd() --> void");
		cl.def("PickupStart", (void (BoostModPickup::*)()) & BoostModPickup::PickupStart, "C++: BoostModPickup::PickupStart() --> void");
	}
	{ // BoostOverridePickup file:bakkesmod/wrappers/GameObject/RumbleComponent/BoostOverridePickup.h line:8
		pybind11::class_<BoostOverridePickup, std::shared_ptr<BoostOverridePickup>, TargetedPickup> cl(M, "BoostOverridePickup");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](BoostOverridePickup const& o) { return new BoostOverridePickup(o); }));
		cl.def("assign", (class BoostOverridePickup& (BoostOverridePickup::*)(class BoostOverridePickup)) & BoostOverridePickup::operator=, "C++: BoostOverridePickup::operator=(class BoostOverridePickup) --> class BoostOverridePickup &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetOtherCar", (class CarWrapper(BoostOverridePickup::*)()) & BoostOverridePickup::GetOtherCar, "C++: BoostOverridePickup::GetOtherCar() --> class CarWrapper");
		cl.def("SetOtherCar", (void (BoostOverridePickup::*)(class CarWrapper)) & BoostOverridePickup::SetOtherCar, "C++: BoostOverridePickup::SetOtherCar(class CarWrapper) --> void", "newOtherCar"_a);
		cl.def("PickupEnd", (void (BoostOverridePickup::*)()) & BoostOverridePickup::PickupEnd, "C++: BoostOverridePickup::PickupEnd() --> void");
		cl.def("OnTargetChanged", (void (BoostOverridePickup::*)()) & BoostOverridePickup::OnTargetChanged, "C++: BoostOverridePickup::OnTargetChanged() --> void");
		cl.def("PickupStart", (void (BoostOverridePickup::*)()) & BoostOverridePickup::PickupStart, "C++: BoostOverridePickup::PickupStart() --> void");
	}
	{ // CarSpeedPickup file:bakkesmod/wrappers/GameObject/RumbleComponent/CarSpeedPickup.h line:7
		pybind11::class_<CarSpeedPickup, std::shared_ptr<CarSpeedPickup>, RumblePickupComponentWrapper> cl(M, "CarSpeedPickup");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](CarSpeedPickup const& o) { return new CarSpeedPickup(o); }));
		cl.def("assign", (class CarSpeedPickup& (CarSpeedPickup::*)(class CarSpeedPickup)) & CarSpeedPickup::operator=, "C++: CarSpeedPickup::operator=(class CarSpeedPickup) --> class CarSpeedPickup &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetGravityScale", (float (CarSpeedPickup::*)()) & CarSpeedPickup::GetGravityScale, "C++: CarSpeedPickup::GetGravityScale() --> float");
		cl.def("SetGravityScale", (void (CarSpeedPickup::*)(float)) & CarSpeedPickup::SetGravityScale, "C++: CarSpeedPickup::SetGravityScale(float) --> void", "newGravityScale"_a);
		cl.def("GetAddedForce", (struct Vector(CarSpeedPickup::*)()) & CarSpeedPickup::GetAddedForce, "C++: CarSpeedPickup::GetAddedForce() --> struct Vector");
		cl.def("SetAddedForce", (void (CarSpeedPickup::*)(struct Vector)) & CarSpeedPickup::SetAddedForce, "C++: CarSpeedPickup::SetAddedForce(struct Vector) --> void", "newAddedForce"_a);
		cl.def("GetOrigGravityScale", (float (CarSpeedPickup::*)()) & CarSpeedPickup::GetOrigGravityScale, "C++: CarSpeedPickup::GetOrigGravityScale() --> float");
		cl.def("SetOrigGravityScale", (void (CarSpeedPickup::*)(float)) & CarSpeedPickup::SetOrigGravityScale, "C++: CarSpeedPickup::SetOrigGravityScale(float) --> void", "newOrigGravityScale"_a);
		cl.def("PickupEnd", (void (CarSpeedPickup::*)()) & CarSpeedPickup::PickupEnd, "C++: CarSpeedPickup::PickupEnd() --> void");
		cl.def("PickupStart", (void (CarSpeedPickup::*)()) & CarSpeedPickup::PickupStart, "C++: CarSpeedPickup::PickupStart() --> void");
	}
	{ // DemolishPickup file:bakkesmod/wrappers/GameObject/RumbleComponent/DemolishPickup.h line:7
		pybind11::class_<DemolishPickup, std::shared_ptr<DemolishPickup>, RumblePickupComponentWrapper> cl(M, "DemolishPickup");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](DemolishPickup const& o) { return new DemolishPickup(o); }));
		cl.def("assign", (class DemolishPickup& (DemolishPickup::*)(class DemolishPickup)) & DemolishPickup::operator=, "C++: DemolishPickup::operator=(class DemolishPickup) --> class DemolishPickup &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetDemolishTarget", (unsigned char (DemolishPickup::*)()) & DemolishPickup::GetDemolishTarget, "C++: DemolishPickup::GetDemolishTarget() --> unsigned char");
		cl.def("SetDemolishTarget", (void (DemolishPickup::*)(unsigned char)) & DemolishPickup::SetDemolishTarget, "C++: DemolishPickup::SetDemolishTarget(unsigned char) --> void", "newDemolishTarget"_a);
		cl.def("GetDemolishSpeed", (unsigned char (DemolishPickup::*)()) & DemolishPickup::GetDemolishSpeed, "C++: DemolishPickup::GetDemolishSpeed() --> unsigned char");
		cl.def("SetDemolishSpeed", (void (DemolishPickup::*)(unsigned char)) & DemolishPickup::SetDemolishSpeed, "C++: DemolishPickup::SetDemolishSpeed(unsigned char) --> void", "newDemolishSpeed"_a);
		cl.def("GetOldTarget", (unsigned char (DemolishPickup::*)()) & DemolishPickup::GetOldTarget, "C++: DemolishPickup::GetOldTarget() --> unsigned char");
		cl.def("SetOldTarget", (void (DemolishPickup::*)(unsigned char)) & DemolishPickup::SetOldTarget, "C++: DemolishPickup::SetOldTarget(unsigned char) --> void", "newOldTarget"_a);
		cl.def("GetOldSpeed", (unsigned char (DemolishPickup::*)()) & DemolishPickup::GetOldSpeed, "C++: DemolishPickup::GetOldSpeed() --> unsigned char");
		cl.def("SetOldSpeed", (void (DemolishPickup::*)(unsigned char)) & DemolishPickup::SetOldSpeed, "C++: DemolishPickup::SetOldSpeed(unsigned char) --> void", "newOldSpeed"_a);
		cl.def("PickupEnd", (void (DemolishPickup::*)()) & DemolishPickup::PickupEnd, "C++: DemolishPickup::PickupEnd() --> void");
		cl.def("PickupStart", (void (DemolishPickup::*)()) & DemolishPickup::PickupStart, "C++: DemolishPickup::PickupStart() --> void");
	}
	{ // GrapplingHookPickup file:bakkesmod/wrappers/GameObject/RumbleComponent/GrapplingHookPickup.h line:9
		pybind11::class_<GrapplingHookPickup, std::shared_ptr<GrapplingHookPickup>, TargetedPickup> cl(M, "GrapplingHookPickup");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](GrapplingHookPickup const& o) { return new GrapplingHookPickup(o); }));
		cl.def("assign", (class GrapplingHookPickup& (GrapplingHookPickup::*)(class GrapplingHookPickup)) & GrapplingHookPickup::operator=, "C++: GrapplingHookPickup::operator=(class GrapplingHookPickup) --> class GrapplingHookPickup &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetImpulse", (float (GrapplingHookPickup::*)()) & GrapplingHookPickup::GetImpulse, "C++: GrapplingHookPickup::GetImpulse() --> float");
		cl.def("SetImpulse", (void (GrapplingHookPickup::*)(float)) & GrapplingHookPickup::SetImpulse, "C++: GrapplingHookPickup::SetImpulse(float) --> void", "newImpulse"_a);
		cl.def("GetForce", (float (GrapplingHookPickup::*)()) & GrapplingHookPickup::GetForce, "C++: GrapplingHookPickup::GetForce() --> float");
		cl.def("SetForce", (void (GrapplingHookPickup::*)(float)) & GrapplingHookPickup::SetForce, "C++: GrapplingHookPickup::SetForce(float) --> void", "newForce"_a);
		cl.def("GetMaxRopeLength", (float (GrapplingHookPickup::*)()) & GrapplingHookPickup::GetMaxRopeLength, "C++: GrapplingHookPickup::GetMaxRopeLength() --> float");
		cl.def("SetMaxRopeLength", (void (GrapplingHookPickup::*)(float)) & GrapplingHookPickup::SetMaxRopeLength, "C++: GrapplingHookPickup::SetMaxRopeLength(float) --> void", "newMaxRopeLength"_a);
		cl.def("GetPredictionSpeed", (float (GrapplingHookPickup::*)()) & GrapplingHookPickup::GetPredictionSpeed, "C++: GrapplingHookPickup::GetPredictionSpeed() --> float");
		cl.def("SetPredictionSpeed", (void (GrapplingHookPickup::*)(float)) & GrapplingHookPickup::SetPredictionSpeed, "C++: GrapplingHookPickup::SetPredictionSpeed(float) --> void", "newPredictionSpeed"_a);
		cl.def("GetbDeactivateOnTouch", (unsigned long (GrapplingHookPickup::*)()) & GrapplingHookPickup::GetbDeactivateOnTouch, "C++: GrapplingHookPickup::GetbDeactivateOnTouch() --> unsigned long");
		cl.def("SetbDeactivateOnTouch", (void (GrapplingHookPickup::*)(unsigned long)) & GrapplingHookPickup::SetbDeactivateOnTouch, "C++: GrapplingHookPickup::SetbDeactivateOnTouch(unsigned long) --> void", "newbDeactivateOnTouch"_a);
		cl.def("GetbInstant", (unsigned long (GrapplingHookPickup::*)()) & GrapplingHookPickup::GetbInstant, "C++: GrapplingHookPickup::GetbInstant() --> unsigned long");
		cl.def("SetbInstant", (void (GrapplingHookPickup::*)(unsigned long)) & GrapplingHookPickup::SetbInstant, "C++: GrapplingHookPickup::SetbInstant(unsigned long) --> void", "newbInstant"_a);
		cl.def("GetbBlocked", (unsigned long (GrapplingHookPickup::*)()) & GrapplingHookPickup::GetbBlocked, "C++: GrapplingHookPickup::GetbBlocked() --> unsigned long");
		cl.def("SetbBlocked", (void (GrapplingHookPickup::*)(unsigned long)) & GrapplingHookPickup::SetbBlocked, "C++: GrapplingHookPickup::SetbBlocked(unsigned long) --> void", "newbBlocked"_a);
		cl.def("GetbAttachedToBall", (unsigned long (GrapplingHookPickup::*)()) & GrapplingHookPickup::GetbAttachedToBall, "C++: GrapplingHookPickup::GetbAttachedToBall() --> unsigned long");
		cl.def("SetbAttachedToBall", (void (GrapplingHookPickup::*)(unsigned long)) & GrapplingHookPickup::SetbAttachedToBall, "C++: GrapplingHookPickup::SetbAttachedToBall(unsigned long) --> void", "newbAttachedToBall"_a);
		cl.def("GetRopeMeshScale", (struct Vector(GrapplingHookPickup::*)()) & GrapplingHookPickup::GetRopeMeshScale, "C++: GrapplingHookPickup::GetRopeMeshScale() --> struct Vector");
		cl.def("SetRopeMeshScale", (void (GrapplingHookPickup::*)(struct Vector)) & GrapplingHookPickup::SetRopeMeshScale, "C++: GrapplingHookPickup::SetRopeMeshScale(struct Vector) --> void", "newRopeMeshScale"_a);
		cl.def("GetRopeMeshInitialSize", (float (GrapplingHookPickup::*)()) & GrapplingHookPickup::GetRopeMeshInitialSize, "C++: GrapplingHookPickup::GetRopeMeshInitialSize() --> float");
		cl.def("SetRopeMeshInitialSize", (void (GrapplingHookPickup::*)(float)) & GrapplingHookPickup::SetRopeMeshInitialSize, "C++: GrapplingHookPickup::SetRopeMeshInitialSize(float) --> void", "newRopeMeshInitialSize"_a);
		cl.def("GetRopeRotationOffset", (struct Rotator(GrapplingHookPickup::*)()) & GrapplingHookPickup::GetRopeRotationOffset, "C++: GrapplingHookPickup::GetRopeRotationOffset() --> struct Rotator");
		cl.def("SetRopeRotationOffset", (void (GrapplingHookPickup::*)(struct Rotator)) & GrapplingHookPickup::SetRopeRotationOffset, "C++: GrapplingHookPickup::SetRopeRotationOffset(struct Rotator) --> void", "newRopeRotationOffset"_a);
		cl.def("GetHookMeshScale", (struct Vector(GrapplingHookPickup::*)()) & GrapplingHookPickup::GetHookMeshScale, "C++: GrapplingHookPickup::GetHookMeshScale() --> struct Vector");
		cl.def("SetHookMeshScale", (void (GrapplingHookPickup::*)(struct Vector)) & GrapplingHookPickup::SetHookMeshScale, "C++: GrapplingHookPickup::SetHookMeshScale(struct Vector) --> void", "newHookMeshScale"_a);
		cl.def("GetHookMeshOffset", (struct Vector(GrapplingHookPickup::*)()) & GrapplingHookPickup::GetHookMeshOffset, "C++: GrapplingHookPickup::GetHookMeshOffset() --> struct Vector");
		cl.def("SetHookMeshOffset", (void (GrapplingHookPickup::*)(struct Vector)) & GrapplingHookPickup::SetHookMeshOffset, "C++: GrapplingHookPickup::SetHookMeshOffset(struct Vector) --> void", "newHookMeshOffset"_a);
		cl.def("GetHookRotationOffset", (struct Rotator(GrapplingHookPickup::*)()) & GrapplingHookPickup::GetHookRotationOffset, "C++: GrapplingHookPickup::GetHookRotationOffset() --> struct Rotator");
		cl.def("SetHookRotationOffset", (void (GrapplingHookPickup::*)(struct Rotator)) & GrapplingHookPickup::SetHookRotationOffset, "C++: GrapplingHookPickup::SetHookRotationOffset(struct Rotator) --> void", "newHookRotationOffset"_a);
		cl.def("GetHitDistanceOffset", (float (GrapplingHookPickup::*)()) & GrapplingHookPickup::GetHitDistanceOffset, "C++: GrapplingHookPickup::GetHitDistanceOffset() --> float");
		cl.def("SetHitDistanceOffset", (void (GrapplingHookPickup::*)(float)) & GrapplingHookPickup::SetHitDistanceOffset, "C++: GrapplingHookPickup::SetHitDistanceOffset(float) --> void", "newHitDistanceOffset"_a);
		cl.def("GetAfterAttachDuration", (float (GrapplingHookPickup::*)()) & GrapplingHookPickup::GetAfterAttachDuration, "C++: GrapplingHookPickup::GetAfterAttachDuration() --> float");
		cl.def("SetAfterAttachDuration", (void (GrapplingHookPickup::*)(float)) & GrapplingHookPickup::SetAfterAttachDuration, "C++: GrapplingHookPickup::SetAfterAttachDuration(float) --> void", "newAfterAttachDuration"_a);
		cl.def("GetBlockedRequiredMoveDistance", (float (GrapplingHookPickup::*)()) & GrapplingHookPickup::GetBlockedRequiredMoveDistance, "C++: GrapplingHookPickup::GetBlockedRequiredMoveDistance() --> float");
		cl.def("SetBlockedRequiredMoveDistance", (void (GrapplingHookPickup::*)(float)) & GrapplingHookPickup::SetBlockedRequiredMoveDistance, "C++: GrapplingHookPickup::SetBlockedRequiredMoveDistance(float) --> void", "newBlockedRequiredMoveDistance"_a);
		cl.def("GetBlockedRequiredMoveTime", (float (GrapplingHookPickup::*)()) & GrapplingHookPickup::GetBlockedRequiredMoveTime, "C++: GrapplingHookPickup::GetBlockedRequiredMoveTime() --> float");
		cl.def("SetBlockedRequiredMoveTime", (void (GrapplingHookPickup::*)(float)) & GrapplingHookPickup::SetBlockedRequiredMoveTime, "C++: GrapplingHookPickup::SetBlockedRequiredMoveTime(float) --> void", "newBlockedRequiredMoveTime"_a);
		cl.def("GetBlockedStartTime", (float (GrapplingHookPickup::*)()) & GrapplingHookPickup::GetBlockedStartTime, "C++: GrapplingHookPickup::GetBlockedStartTime() --> float");
		cl.def("SetBlockedStartTime", (void (GrapplingHookPickup::*)(float)) & GrapplingHookPickup::SetBlockedStartTime, "C++: GrapplingHookPickup::SetBlockedStartTime(float) --> void", "newBlockedStartTime"_a);
		cl.def("GetBlockedStartPos", (struct Vector(GrapplingHookPickup::*)()) & GrapplingHookPickup::GetBlockedStartPos, "C++: GrapplingHookPickup::GetBlockedStartPos() --> struct Vector");
		cl.def("SetBlockedStartPos", (void (GrapplingHookPickup::*)(struct Vector)) & GrapplingHookPickup::SetBlockedStartPos, "C++: GrapplingHookPickup::SetBlockedStartPos(struct Vector) --> void", "newBlockedStartPos"_a);
		cl.def("GetBall", (class BallWrapper(GrapplingHookPickup::*)()) & GrapplingHookPickup::GetBall, "C++: GrapplingHookPickup::GetBall() --> class BallWrapper");
		cl.def("SetBall", (void (GrapplingHookPickup::*)(class BallWrapper)) & GrapplingHookPickup::SetBall, "C++: GrapplingHookPickup::SetBall(class BallWrapper) --> void", "newBall"_a);
		cl.def("GetRopeOrigin", (struct Vector(GrapplingHookPickup::*)()) & GrapplingHookPickup::GetRopeOrigin, "C++: GrapplingHookPickup::GetRopeOrigin() --> struct Vector");
		cl.def("SetRopeOrigin", (void (GrapplingHookPickup::*)(struct Vector)) & GrapplingHookPickup::SetRopeOrigin, "C++: GrapplingHookPickup::SetRopeOrigin(struct Vector) --> void", "newRopeOrigin"_a);
		cl.def("GetRopeToTime", (float (GrapplingHookPickup::*)()) & GrapplingHookPickup::GetRopeToTime, "C++: GrapplingHookPickup::GetRopeToTime() --> float");
		cl.def("SetRopeToTime", (void (GrapplingHookPickup::*)(float)) & GrapplingHookPickup::SetRopeToTime, "C++: GrapplingHookPickup::SetRopeToTime(float) --> void", "newRopeToTime"_a);
		cl.def("GetCurrentRopeLength", (float (GrapplingHookPickup::*)()) & GrapplingHookPickup::GetCurrentRopeLength, "C++: GrapplingHookPickup::GetCurrentRopeLength() --> float");
		cl.def("SetCurrentRopeLength", (void (GrapplingHookPickup::*)(float)) & GrapplingHookPickup::SetCurrentRopeLength, "C++: GrapplingHookPickup::SetCurrentRopeLength(float) --> void", "newCurrentRopeLength"_a);
		cl.def("GetAttachTime", (float (GrapplingHookPickup::*)()) & GrapplingHookPickup::GetAttachTime, "C++: GrapplingHookPickup::GetAttachTime() --> float");
		cl.def("SetAttachTime", (void (GrapplingHookPickup::*)(float)) & GrapplingHookPickup::SetAttachTime, "C++: GrapplingHookPickup::SetAttachTime(float) --> void", "newAttachTime"_a);
		cl.def("HandleBallExploded", (void (GrapplingHookPickup::*)(class BallWrapper)) & GrapplingHookPickup::HandleBallExploded, "C++: GrapplingHookPickup::HandleBallExploded(class BallWrapper) --> void", "InBall"_a);
		cl.def("PickupEnd", (void (GrapplingHookPickup::*)()) & GrapplingHookPickup::PickupEnd, "C++: GrapplingHookPickup::PickupEnd() --> void");
		cl.def("ScaleMeshToLocation", (void (GrapplingHookPickup::*)(struct Vector&, struct Vector&)) & GrapplingHookPickup::ScaleMeshToLocation, "C++: GrapplingHookPickup::ScaleMeshToLocation(struct Vector &, struct Vector &) --> void", "NewLocation"_a, "TargetLocation"_a);
		cl.def("GetPredictedBallLocation", (struct Vector(GrapplingHookPickup::*)(class BallWrapper)) & GrapplingHookPickup::GetPredictedBallLocation, "C++: GrapplingHookPickup::GetPredictedBallLocation(class BallWrapper) --> struct Vector", "InBall"_a);
		cl.def("GetTargetedLocation", (struct Vector(GrapplingHookPickup::*)()) & GrapplingHookPickup::GetTargetedLocation, "C++: GrapplingHookPickup::GetTargetedLocation() --> struct Vector");
		cl.def("UpdateVisual", (void (GrapplingHookPickup::*)(float)) & GrapplingHookPickup::UpdateVisual, "C++: GrapplingHookPickup::UpdateVisual(float) --> void", "DeltaTime"_a);
		cl.def("PickupTick", (void (GrapplingHookPickup::*)(float)) & GrapplingHookPickup::PickupTick, "C++: GrapplingHookPickup::PickupTick(float) --> void", "DeltaTime"_a);
		cl.def("ApplyForces", (void (GrapplingHookPickup::*)(float)) & GrapplingHookPickup::ApplyForces, "C++: GrapplingHookPickup::ApplyForces(float) --> void", "ActiveTime"_a);
		cl.def("DoAttach", (void (GrapplingHookPickup::*)()) & GrapplingHookPickup::DoAttach, "C++: GrapplingHookPickup::DoAttach() --> void");
		cl.def("PickupStart", (void (GrapplingHookPickup::*)()) & GrapplingHookPickup::PickupStart, "C++: GrapplingHookPickup::PickupStart() --> void");
	}
	{ // GravityPickup file:bakkesmod/wrappers/GameObject/RumbleComponent/GravityPickup.h line:9
		pybind11::class_<GravityPickup, std::shared_ptr<GravityPickup>, RumblePickupComponentWrapper> cl(M, "GravityPickup");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](GravityPickup const& o) { return new GravityPickup(o); }));
		cl.def("assign", (class GravityPickup& (GravityPickup::*)(class GravityPickup)) & GravityPickup::operator=, "C++: GravityPickup::operator=(class GravityPickup) --> class GravityPickup &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetBallGravity", (float (GravityPickup::*)()) & GravityPickup::GetBallGravity, "C++: GravityPickup::GetBallGravity() --> float");
		cl.def("SetBallGravity", (void (GravityPickup::*)(float)) & GravityPickup::SetBallGravity, "C++: GravityPickup::SetBallGravity(float) --> void", "newBallGravity"_a);
		cl.def("GetRange", (float (GravityPickup::*)()) & GravityPickup::GetRange, "C++: GravityPickup::GetRange() --> float");
		cl.def("SetRange", (void (GravityPickup::*)(float)) & GravityPickup::SetRange, "C++: GravityPickup::SetRange(float) --> void", "newRange"_a);
		cl.def("GetOffset", (struct Vector(GravityPickup::*)()) & GravityPickup::GetOffset, "C++: GravityPickup::GetOffset() --> struct Vector");
		cl.def("SetOffset", (void (GravityPickup::*)(struct Vector)) & GravityPickup::SetOffset, "C++: GravityPickup::SetOffset(struct Vector) --> void", "newOffset"_a);
		cl.def("GetbDeactivateOnTouch", (unsigned long (GravityPickup::*)()) & GravityPickup::GetbDeactivateOnTouch, "C++: GravityPickup::GetbDeactivateOnTouch() --> unsigned long");
		cl.def("SetbDeactivateOnTouch", (void (GravityPickup::*)(unsigned long)) & GravityPickup::SetbDeactivateOnTouch, "C++: GravityPickup::SetbDeactivateOnTouch(unsigned long) --> void", "newbDeactivateOnTouch"_a);
		cl.def("GetRecordBallHitRate", (float (GravityPickup::*)()) & GravityPickup::GetRecordBallHitRate, "C++: GravityPickup::GetRecordBallHitRate() --> float");
		cl.def("SetRecordBallHitRate", (void (GravityPickup::*)(float)) & GravityPickup::SetRecordBallHitRate, "C++: GravityPickup::SetRecordBallHitRate(float) --> void", "newRecordBallHitRate"_a);
		cl.def("GetLastRecordedBallHitTime", (float (GravityPickup::*)()) & GravityPickup::GetLastRecordedBallHitTime, "C++: GravityPickup::GetLastRecordedBallHitTime() --> float");
		cl.def("SetLastRecordedBallHitTime", (void (GravityPickup::*)(float)) & GravityPickup::SetLastRecordedBallHitTime, "C++: GravityPickup::SetLastRecordedBallHitTime(float) --> void", "newLastRecordedBallHitTime"_a);
		cl.def("GetPrevBall", (class BallWrapper(GravityPickup::*)()) & GravityPickup::GetPrevBall, "C++: GravityPickup::GetPrevBall() --> class BallWrapper");
		cl.def("SetPrevBall", (void (GravityPickup::*)(class BallWrapper)) & GravityPickup::SetPrevBall, "C++: GravityPickup::SetPrevBall(class BallWrapper) --> void", "newPrevBall"_a);
		cl.def("UpdateVisual", (void (GravityPickup::*)()) & GravityPickup::UpdateVisual, "C++: GravityPickup::UpdateVisual() --> void");
		cl.def("ApplyForces", (void (GravityPickup::*)(float)) & GravityPickup::ApplyForces, "C++: GravityPickup::ApplyForces(float) --> void", "ActiveTime"_a);
		cl.def("PickupEnd", (void (GravityPickup::*)()) & GravityPickup::PickupEnd, "C++: GravityPickup::PickupEnd() --> void");
		cl.def("PickupStart", (void (GravityPickup::*)()) & GravityPickup::PickupStart, "C++: GravityPickup::PickupStart() --> void");
	}
	{ // HandbrakeOverridePickup file:bakkesmod/wrappers/GameObject/RumbleComponent/HandbrakeOverridePickup.h line:8
		pybind11::class_<HandbrakeOverridePickup, std::shared_ptr<HandbrakeOverridePickup>, TargetedPickup> cl(M, "HandbrakeOverridePickup");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](HandbrakeOverridePickup const& o) { return new HandbrakeOverridePickup(o); }));
		cl.def("assign", (class HandbrakeOverridePickup& (HandbrakeOverridePickup::*)(class HandbrakeOverridePickup)) & HandbrakeOverridePickup::operator=, "C++: HandbrakeOverridePickup::operator=(class HandbrakeOverridePickup) --> class HandbrakeOverridePickup &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetOtherCar", (class CarWrapper(HandbrakeOverridePickup::*)()) & HandbrakeOverridePickup::GetOtherCar, "C++: HandbrakeOverridePickup::GetOtherCar() --> class CarWrapper");
		cl.def("SetOtherCar", (void (HandbrakeOverridePickup::*)(class CarWrapper)) & HandbrakeOverridePickup::SetOtherCar, "C++: HandbrakeOverridePickup::SetOtherCar(class CarWrapper) --> void", "newOtherCar"_a);
		cl.def("PickupEnd", (void (HandbrakeOverridePickup::*)()) & HandbrakeOverridePickup::PickupEnd, "C++: HandbrakeOverridePickup::PickupEnd() --> void");
		cl.def("PickupStart", (void (HandbrakeOverridePickup::*)()) & HandbrakeOverridePickup::PickupStart, "C++: HandbrakeOverridePickup::PickupStart() --> void");
	}
	{ // HitForcePickup file:bakkesmod/wrappers/GameObject/RumbleComponent/HitForcePickup.h line:8
		pybind11::class_<HitForcePickup, std::shared_ptr<HitForcePickup>, RumblePickupComponentWrapper> cl(M, "HitForcePickup");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](HitForcePickup const& o) { return new HitForcePickup(o); }));
		cl.def("assign", (class HitForcePickup& (HitForcePickup::*)(class HitForcePickup)) & HitForcePickup::operator=, "C++: HitForcePickup::operator=(class HitForcePickup) --> class HitForcePickup &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetbBallForce", (unsigned long (HitForcePickup::*)()) & HitForcePickup::GetbBallForce, "C++: HitForcePickup::GetbBallForce() --> unsigned long");
		cl.def("SetbBallForce", (void (HitForcePickup::*)(unsigned long)) & HitForcePickup::SetbBallForce, "C++: HitForcePickup::SetbBallForce(unsigned long) --> void", "newbBallForce"_a);
		cl.def("GetbCarForce", (unsigned long (HitForcePickup::*)()) & HitForcePickup::GetbCarForce, "C++: HitForcePickup::GetbCarForce() --> unsigned long");
		cl.def("SetbCarForce", (void (HitForcePickup::*)(unsigned long)) & HitForcePickup::SetbCarForce, "C++: HitForcePickup::SetbCarForce(unsigned long) --> void", "newbCarForce"_a);
		cl.def("GetbDemolishCars", (unsigned long (HitForcePickup::*)()) & HitForcePickup::GetbDemolishCars, "C++: HitForcePickup::GetbDemolishCars() --> unsigned long");
		cl.def("SetbDemolishCars", (void (HitForcePickup::*)(unsigned long)) & HitForcePickup::SetbDemolishCars, "C++: HitForcePickup::SetbDemolishCars(unsigned long) --> void", "newbDemolishCars"_a);
		cl.def("GetBallHitForce", (float (HitForcePickup::*)()) & HitForcePickup::GetBallHitForce, "C++: HitForcePickup::GetBallHitForce() --> float");
		cl.def("SetBallHitForce", (void (HitForcePickup::*)(float)) & HitForcePickup::SetBallHitForce, "C++: HitForcePickup::SetBallHitForce(float) --> void", "newBallHitForce"_a);
		cl.def("GetCarHitForce", (float (HitForcePickup::*)()) & HitForcePickup::GetCarHitForce, "C++: HitForcePickup::GetCarHitForce() --> float");
		cl.def("SetCarHitForce", (void (HitForcePickup::*)(float)) & HitForcePickup::SetCarHitForce, "C++: HitForcePickup::SetCarHitForce(float) --> void", "newCarHitForce"_a);
		cl.def("GetMinFXTime", (float (HitForcePickup::*)()) & HitForcePickup::GetMinFXTime, "C++: HitForcePickup::GetMinFXTime() --> float");
		cl.def("SetMinFXTime", (void (HitForcePickup::*)(float)) & HitForcePickup::SetMinFXTime, "C++: HitForcePickup::SetMinFXTime(float) --> void", "newMinFXTime"_a);
		cl.def("GetOrigBallHitForce", (float (HitForcePickup::*)()) & HitForcePickup::GetOrigBallHitForce, "C++: HitForcePickup::GetOrigBallHitForce() --> float");
		cl.def("SetOrigBallHitForce", (void (HitForcePickup::*)(float)) & HitForcePickup::SetOrigBallHitForce, "C++: HitForcePickup::SetOrigBallHitForce(float) --> void", "newOrigBallHitForce"_a);
		cl.def("GetOrigCarHitForce", (float (HitForcePickup::*)()) & HitForcePickup::GetOrigCarHitForce, "C++: HitForcePickup::GetOrigCarHitForce() --> float");
		cl.def("SetOrigCarHitForce", (void (HitForcePickup::*)(float)) & HitForcePickup::SetOrigCarHitForce, "C++: HitForcePickup::SetOrigCarHitForce(float) --> void", "newOrigCarHitForce"_a);
		cl.def("GetLastFXTime", (float (HitForcePickup::*)()) & HitForcePickup::GetLastFXTime, "C++: HitForcePickup::GetLastFXTime() --> float");
		cl.def("SetLastFXTime", (void (HitForcePickup::*)(float)) & HitForcePickup::SetLastFXTime, "C++: HitForcePickup::SetLastFXTime(float) --> void", "newLastFXTime"_a);
		cl.def("PickupEnd", (void (HitForcePickup::*)()) & HitForcePickup::PickupEnd, "C++: HitForcePickup::PickupEnd() --> void");
		cl.def("PickupStart", (void (HitForcePickup::*)()) & HitForcePickup::PickupStart, "C++: HitForcePickup::PickupStart() --> void");
	}
	{ // SwapperPickup file:bakkesmod/wrappers/GameObject/RumbleComponent/SwapperPickup.h line:8
		pybind11::class_<SwapperPickup, std::shared_ptr<SwapperPickup>, TargetedPickup> cl(M, "SwapperPickup");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](SwapperPickup const& o) { return new SwapperPickup(o); }));
		cl.def("assign", (class SwapperPickup& (SwapperPickup::*)(class SwapperPickup)) & SwapperPickup::operator=, "C++: SwapperPickup::operator=(class SwapperPickup) --> class SwapperPickup &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetOtherCar", (class CarWrapper(SwapperPickup::*)()) & SwapperPickup::GetOtherCar, "C++: SwapperPickup::GetOtherCar() --> class CarWrapper");
		cl.def("SetOtherCar", (void (SwapperPickup::*)(class CarWrapper)) & SwapperPickup::SetOtherCar, "C++: SwapperPickup::SetOtherCar(class CarWrapper) --> void", "newOtherCar"_a);
		cl.def("PickupEnd", (void (SwapperPickup::*)()) & SwapperPickup::PickupEnd, "C++: SwapperPickup::PickupEnd() --> void");
		cl.def("OnTargetChanged", (void (SwapperPickup::*)()) & SwapperPickup::OnTargetChanged, "C++: SwapperPickup::OnTargetChanged() --> void");
		cl.def("PickupStart", (void (SwapperPickup::*)()) & SwapperPickup::PickupStart, "C++: SwapperPickup::PickupStart() --> void");
	}
	{ // TimeBombPickup file:bakkesmod/wrappers/GameObject/RumbleComponent/TimeBombPickup.h line:7
		pybind11::class_<TimeBombPickup, std::shared_ptr<TimeBombPickup>, RumblePickupComponentWrapper> cl(M, "TimeBombPickup");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](TimeBombPickup const& o) { return new TimeBombPickup(o); }));
		cl.def("assign", (class TimeBombPickup& (TimeBombPickup::*)(class TimeBombPickup)) & TimeBombPickup::operator=, "C++: TimeBombPickup::operator=(class TimeBombPickup) --> class TimeBombPickup &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetRadius", (float (TimeBombPickup::*)()) & TimeBombPickup::GetRadius, "C++: TimeBombPickup::GetRadius() --> float");
		cl.def("SetRadius", (void (TimeBombPickup::*)(float)) & TimeBombPickup::SetRadius, "C++: TimeBombPickup::SetRadius(float) --> void", "newRadius"_a);
		cl.def("GetAlmostReadyDuration", (float (TimeBombPickup::*)()) & TimeBombPickup::GetAlmostReadyDuration, "C++: TimeBombPickup::GetAlmostReadyDuration() --> float");
		cl.def("SetAlmostReadyDuration", (void (TimeBombPickup::*)(float)) & TimeBombPickup::SetAlmostReadyDuration, "C++: TimeBombPickup::SetAlmostReadyDuration(float) --> void", "newAlmostReadyDuration"_a);
		cl.def("GetStartMatSpeed", (float (TimeBombPickup::*)()) & TimeBombPickup::GetStartMatSpeed, "C++: TimeBombPickup::GetStartMatSpeed() --> float");
		cl.def("SetStartMatSpeed", (void (TimeBombPickup::*)(float)) & TimeBombPickup::SetStartMatSpeed, "C++: TimeBombPickup::SetStartMatSpeed(float) --> void", "newStartMatSpeed"_a);
		cl.def("GetAlmostReadyMatSpeed", (float (TimeBombPickup::*)()) & TimeBombPickup::GetAlmostReadyMatSpeed, "C++: TimeBombPickup::GetAlmostReadyMatSpeed() --> float");
		cl.def("SetAlmostReadyMatSpeed", (void (TimeBombPickup::*)(float)) & TimeBombPickup::SetAlmostReadyMatSpeed, "C++: TimeBombPickup::SetAlmostReadyMatSpeed(float) --> void", "newAlmostReadyMatSpeed"_a);
		cl.def("GetImpulseForce", (float (TimeBombPickup::*)()) & TimeBombPickup::GetImpulseForce, "C++: TimeBombPickup::GetImpulseForce() --> float");
		cl.def("SetImpulseForce", (void (TimeBombPickup::*)(float)) & TimeBombPickup::SetImpulseForce, "C++: TimeBombPickup::SetImpulseForce(float) --> void", "newImpulseForce"_a);
		cl.def("GetCarVerticalForce", (float (TimeBombPickup::*)()) & TimeBombPickup::GetCarVerticalForce, "C++: TimeBombPickup::GetCarVerticalForce() --> float");
		cl.def("SetCarVerticalForce", (void (TimeBombPickup::*)(float)) & TimeBombPickup::SetCarVerticalForce, "C++: TimeBombPickup::SetCarVerticalForce(float) --> void", "newCarVerticalForce"_a);
		cl.def("GetCarTorque", (float (TimeBombPickup::*)()) & TimeBombPickup::GetCarTorque, "C++: TimeBombPickup::GetCarTorque() --> float");
		cl.def("SetCarTorque", (void (TimeBombPickup::*)(float)) & TimeBombPickup::SetCarTorque, "C++: TimeBombPickup::SetCarTorque(float) --> void", "newCarTorque"_a);
		cl.def("GetbDemolish", (unsigned long (TimeBombPickup::*)()) & TimeBombPickup::GetbDemolish, "C++: TimeBombPickup::GetbDemolish() --> unsigned long");
		cl.def("SetbDemolish", (void (TimeBombPickup::*)(unsigned long)) & TimeBombPickup::SetbDemolish, "C++: TimeBombPickup::SetbDemolish(unsigned long) --> void", "newbDemolish"_a);
		cl.def("GetbImpulse", (unsigned long (TimeBombPickup::*)()) & TimeBombPickup::GetbImpulse, "C++: TimeBombPickup::GetbImpulse() --> unsigned long");
		cl.def("SetbImpulse", (void (TimeBombPickup::*)(unsigned long)) & TimeBombPickup::SetbImpulse, "C++: TimeBombPickup::SetbImpulse(unsigned long) --> void", "newbImpulse"_a);
		cl.def("PickupEnd", (void (TimeBombPickup::*)()) & TimeBombPickup::PickupEnd, "C++: TimeBombPickup::PickupEnd() --> void");
		cl.def("AlmostReady2", (void (TimeBombPickup::*)()) & TimeBombPickup::AlmostReady2, "C++: TimeBombPickup::AlmostReady2() --> void");
		cl.def("PickupStart", (void (TimeBombPickup::*)()) & TimeBombPickup::PickupStart, "C++: TimeBombPickup::PickupStart() --> void");
	}
	{ // TornadoPickup file:bakkesmod/wrappers/GameObject/RumbleComponent/TornadoPickup.h line:8
		pybind11::class_<TornadoPickup, std::shared_ptr<TornadoPickup>, RumblePickupComponentWrapper> cl(M, "TornadoPickup");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](TornadoPickup const& o) { return new TornadoPickup(o); }));
		cl.def("assign", (class TornadoPickup& (TornadoPickup::*)(class TornadoPickup)) & TornadoPickup::operator=, "C++: TornadoPickup::operator=(class TornadoPickup) --> class TornadoPickup &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetHeight", (float (TornadoPickup::*)()) & TornadoPickup::GetHeight, "C++: TornadoPickup::GetHeight() --> float");
		cl.def("SetHeight", (void (TornadoPickup::*)(float)) & TornadoPickup::SetHeight, "C++: TornadoPickup::SetHeight(float) --> void", "newHeight"_a);
		cl.def("GetRadius", (float (TornadoPickup::*)()) & TornadoPickup::GetRadius, "C++: TornadoPickup::GetRadius() --> float");
		cl.def("SetRadius", (void (TornadoPickup::*)(float)) & TornadoPickup::SetRadius, "C++: TornadoPickup::SetRadius(float) --> void", "newRadius"_a);
		cl.def("GetOffset", (struct Vector(TornadoPickup::*)()) & TornadoPickup::GetOffset, "C++: TornadoPickup::GetOffset() --> struct Vector");
		cl.def("SetOffset", (void (TornadoPickup::*)(struct Vector)) & TornadoPickup::SetOffset, "C++: TornadoPickup::SetOffset(struct Vector) --> void", "newOffset"_a);
		cl.def("GetRotationalForce", (float (TornadoPickup::*)()) & TornadoPickup::GetRotationalForce, "C++: TornadoPickup::GetRotationalForce() --> float");
		cl.def("SetRotationalForce", (void (TornadoPickup::*)(float)) & TornadoPickup::SetRotationalForce, "C++: TornadoPickup::SetRotationalForce(float) --> void", "newRotationalForce"_a);
		cl.def("GetTorque", (float (TornadoPickup::*)()) & TornadoPickup::GetTorque, "C++: TornadoPickup::GetTorque() --> float");
		cl.def("SetTorque", (void (TornadoPickup::*)(float)) & TornadoPickup::SetTorque, "C++: TornadoPickup::SetTorque(float) --> void", "newTorque"_a);
		cl.def("GetFXScale", (struct Vector(TornadoPickup::*)()) & TornadoPickup::GetFXScale, "C++: TornadoPickup::GetFXScale() --> struct Vector");
		cl.def("SetFXScale", (void (TornadoPickup::*)(struct Vector)) & TornadoPickup::SetFXScale, "C++: TornadoPickup::SetFXScale(struct Vector) --> void", "newFXScale"_a);
		cl.def("GetFXOffset", (struct Vector(TornadoPickup::*)()) & TornadoPickup::GetFXOffset, "C++: TornadoPickup::GetFXOffset() --> struct Vector");
		cl.def("SetFXOffset", (void (TornadoPickup::*)(struct Vector)) & TornadoPickup::SetFXOffset, "C++: TornadoPickup::SetFXOffset(struct Vector) --> void", "newFXOffset"_a);
		cl.def("GetMeshOffset", (struct Vector(TornadoPickup::*)()) & TornadoPickup::GetMeshOffset, "C++: TornadoPickup::GetMeshOffset() --> struct Vector");
		cl.def("SetMeshOffset", (void (TornadoPickup::*)(struct Vector)) & TornadoPickup::SetMeshOffset, "C++: TornadoPickup::SetMeshOffset(struct Vector) --> void", "newMeshOffset"_a);
		cl.def("GetMeshScale", (struct Vector(TornadoPickup::*)()) & TornadoPickup::GetMeshScale, "C++: TornadoPickup::GetMeshScale() --> struct Vector");
		cl.def("SetMeshScale", (void (TornadoPickup::*)(struct Vector)) & TornadoPickup::SetMeshScale, "C++: TornadoPickup::SetMeshScale(struct Vector) --> void", "newMeshScale"_a);
		cl.def("GetMaxVelocityOffset", (float (TornadoPickup::*)()) & TornadoPickup::GetMaxVelocityOffset, "C++: TornadoPickup::GetMaxVelocityOffset() --> float");
		cl.def("SetMaxVelocityOffset", (void (TornadoPickup::*)(float)) & TornadoPickup::SetMaxVelocityOffset, "C++: TornadoPickup::SetMaxVelocityOffset(float) --> void", "newMaxVelocityOffset"_a);
		cl.def("GetBallMultiplier", (float (TornadoPickup::*)()) & TornadoPickup::GetBallMultiplier, "C++: TornadoPickup::GetBallMultiplier() --> float");
		cl.def("SetBallMultiplier", (void (TornadoPickup::*)(float)) & TornadoPickup::SetBallMultiplier, "C++: TornadoPickup::SetBallMultiplier(float) --> void", "newBallMultiplier"_a);
		cl.def("GetbDebugVis", (unsigned long (TornadoPickup::*)()) & TornadoPickup::GetbDebugVis, "C++: TornadoPickup::GetbDebugVis() --> unsigned long");
		cl.def("SetbDebugVis", (void (TornadoPickup::*)(unsigned long)) & TornadoPickup::SetbDebugVis, "C++: TornadoPickup::SetbDebugVis(unsigned long) --> void", "newbDebugVis"_a);
		cl.def("GetVelocityEase", (float (TornadoPickup::*)()) & TornadoPickup::GetVelocityEase, "C++: TornadoPickup::GetVelocityEase() --> float");
		cl.def("SetVelocityEase", (void (TornadoPickup::*)(float)) & TornadoPickup::SetVelocityEase, "C++: TornadoPickup::SetVelocityEase(float) --> void", "newVelocityEase"_a);
		cl.def("GetVel", (struct Vector(TornadoPickup::*)()) & TornadoPickup::GetVel, "C++: TornadoPickup::GetVel() --> struct Vector");
		cl.def("SetVel", (void (TornadoPickup::*)(struct Vector)) & TornadoPickup::SetVel, "C++: TornadoPickup::SetVel(struct Vector) --> void", "newVel"_a);
		cl.def("GetAffecting", (class ArrayWrapper<class RBActorWrapper>(TornadoPickup::*)()) & TornadoPickup::GetAffecting, "C++: TornadoPickup::GetAffecting() --> class ArrayWrapper<class RBActorWrapper>");
		cl.def("ApplyForces", (void (TornadoPickup::*)(float)) & TornadoPickup::ApplyForces, "C++: TornadoPickup::ApplyForces(float) --> void", "ActiveTime"_a);
		cl.def("PlayCarSFX", (void (TornadoPickup::*)(class RBActorWrapper)) & TornadoPickup::PlayCarSFX, "C++: TornadoPickup::PlayCarSFX(class RBActorWrapper) --> void", "InActor"_a);
		cl.def("PlayBallSFX", (void (TornadoPickup::*)(class RBActorWrapper)) & TornadoPickup::PlayBallSFX, "C++: TornadoPickup::PlayBallSFX(class RBActorWrapper) --> void", "InActor"_a);
	}
	{ // MMRWrapper file: line:4
		pybind11::class_<MMRWrapper, std::shared_ptr<MMRWrapper>, ObjectWrapper> cl(M, "MMRWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](MMRWrapper const& o) { return new MMRWrapper(o); }));
		cl.def("assign", (class MMRWrapper& (MMRWrapper::*)(class MMRWrapper)) & MMRWrapper::operator=, "C++: MMRWrapper::operator=(class MMRWrapper) --> class MMRWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("IsSyncing", (bool (MMRWrapper::*)(struct SteamID)) & MMRWrapper::IsSyncing, "C++: MMRWrapper::IsSyncing(struct SteamID) --> bool", "playerID"_a);
		cl.def("IsSynced", (bool (MMRWrapper::*)(struct SteamID, int)) & MMRWrapper::IsSynced, "C++: MMRWrapper::IsSynced(struct SteamID, int) --> bool", "playerID"_a, "playlistID"_a);
		cl.def("IsRanked", (bool (MMRWrapper::*)(int)) & MMRWrapper::IsRanked, "C++: MMRWrapper::IsRanked(int) --> bool", "playlistID"_a);
		cl.def("GetPlayerSkillRating", (struct SkillRating(MMRWrapper::*)(struct SteamID, int)) & MMRWrapper::GetPlayerSkillRating, "C++: MMRWrapper::GetPlayerSkillRating(struct SteamID, int) --> struct SkillRating", "playerID"_a, "playlistID"_a);
		cl.def("GetPlayerMMR", (float (MMRWrapper::*)(struct SteamID, int)) & MMRWrapper::GetPlayerMMR, "C++: MMRWrapper::GetPlayerMMR(struct SteamID, int) --> float", "playerID"_a, "playlistID"_a);
		cl.def("CalculateMMR", (float (MMRWrapper::*)(struct SkillRating, bool)) & MMRWrapper::CalculateMMR, "C++: MMRWrapper::CalculateMMR(struct SkillRating, bool) --> float", "sr"_a, "disregardPlacements"_a);
		cl.def("GetCurrentPlaylist", (int (MMRWrapper::*)()) & MMRWrapper::GetCurrentPlaylist, "C++: MMRWrapper::GetCurrentPlaylist() --> int");
	}
	{ // GameWrapper file:bakkesmod/wrappers/GameWrapper.h line:20
		pybind11::class_<GameWrapper, std::shared_ptr<GameWrapper>> cl(M, "GameWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long, long, class std::type_index>(), pybind11::arg("mem"), pybind11::arg("pluginType"), pybind11::arg("idx"));

		cl.def(pybind11::init([](GameWrapper const& o) { return new GameWrapper(o); }));
		//cl.def_readwrite("pimpl", &GameWrapper::pimpl);
		cl.def("HookEventWithCaller", (void (GameWrapper::*)(std::string, class std::function<void(class ServerWrapper, void*, std::string)>)) & GameWrapper::HookEventWithCaller<ServerWrapper, nullptr>, "C++: GameWrapper::HookEventWithCaller(std::string, class std::function<void (class ServerWrapper, void *, std::string)>) --> void", "eventName"_a, "callback"_a);
		cl.def("HookEventWithCaller", (void (GameWrapper::*)(std::string, class std::function<void(class ActorWrapper, void*, std::string)>)) & GameWrapper::HookEventWithCaller<ActorWrapper, nullptr>, "C++: GameWrapper::HookEventWithCaller(std::string, class std::function<void (class ActorWrapper, void *, std::string)>) --> void", "eventName"_a, "callback"_a);
		cl.def("HookEventWithCaller", (void (GameWrapper::*)(std::string, class std::function<void(class CarWrapper, void*, std::string)>)) & GameWrapper::HookEventWithCaller<CarWrapper, nullptr>, "C++: GameWrapper::HookEventWithCaller(std::string, class std::function<void (class CarWrapper, void *, std::string)>) --> void", "eventName"_a, "callback"_a);
		cl.def("HookEventWithCaller", (void (GameWrapper::*)(std::string, class std::function<void(class CarComponentWrapper, void*, std::string)>)) & GameWrapper::HookEventWithCaller<CarComponentWrapper, nullptr>, "C++: GameWrapper::HookEventWithCaller(std::string, class std::function<void (class CarComponentWrapper, void *, std::string)>) --> void", "eventName"_a, "callback"_a);
		cl.def("HookEventWithCaller", (void (GameWrapper::*)(std::string, class std::function<void(class PlayerControllerWrapper, void*, std::string)>)) & GameWrapper::HookEventWithCaller<PlayerControllerWrapper, nullptr>, "C++: GameWrapper::HookEventWithCaller(std::string, class std::function<void (class PlayerControllerWrapper, void *, std::string)>) --> void", "eventName"_a, "callback"_a);
		cl.def("HookEventWithCaller", (void (GameWrapper::*)(std::string, class std::function<void(class BallWrapper, void*, std::string)>)) & GameWrapper::HookEventWithCaller<BallWrapper, nullptr>, "C++: GameWrapper::HookEventWithCaller(std::string, class std::function<void (class BallWrapper, void *, std::string)>) --> void", "eventName"_a, "callback"_a);
		cl.def("HookEventWithCallerPost", (void (GameWrapper::*)(std::string, class std::function<void(class ActorWrapper, void*, std::string)>)) & GameWrapper::HookEventWithCallerPost<ActorWrapper, nullptr>, "C++: GameWrapper::HookEventWithCallerPost(std::string, class std::function<void (class ActorWrapper, void *, std::string)>) --> void", "eventName"_a, "callback"_a);
		cl.def("HookEventWithCallerPost", (void (GameWrapper::*)(std::string, class std::function<void(class ServerWrapper, void*, std::string)>)) & GameWrapper::HookEventWithCallerPost<ServerWrapper, nullptr>, "C++: GameWrapper::HookEventWithCallerPost(std::string, class std::function<void (class ServerWrapper, void *, std::string)>) --> void", "eventName"_a, "callback"_a);
		cl.def("HookEventWithCallerPost", (void (GameWrapper::*)(std::string, class std::function<void(class CarWrapper, void*, std::string)>)) & GameWrapper::HookEventWithCallerPost<CarWrapper, nullptr>, "C++: GameWrapper::HookEventWithCallerPost(std::string, class std::function<void (class CarWrapper, void *, std::string)>) --> void", "eventName"_a, "callback"_a);
		cl.def("HookEventWithCallerPost", (void (GameWrapper::*)(std::string, class std::function<void(class CarComponentWrapper, void*, std::string)>)) & GameWrapper::HookEventWithCallerPost<CarComponentWrapper, nullptr>, "C++: GameWrapper::HookEventWithCallerPost(std::string, class std::function<void (class CarComponentWrapper, void *, std::string)>) --> void", "eventName"_a, "callback"_a);
		cl.def("HookEventWithCallerPost", (void (GameWrapper::*)(std::string, class std::function<void(class PlayerControllerWrapper, void*, std::string)>)) & GameWrapper::HookEventWithCallerPost<PlayerControllerWrapper, nullptr>, "C++: GameWrapper::HookEventWithCallerPost(std::string, class std::function<void (class PlayerControllerWrapper, void *, std::string)>) --> void", "eventName"_a, "callback"_a);
		cl.def("HookEventWithCallerPost", (void (GameWrapper::*)(std::string, class std::function<void(class BallWrapper, void*, std::string)>)) & GameWrapper::HookEventWithCallerPost<BallWrapper, nullptr>, "C++: GameWrapper::HookEventWithCallerPost(std::string, class std::function<void (class BallWrapper, void *, std::string)>) --> void", "eventName"_a, "callback"_a);
		cl.def("assign", (class GameWrapper& (GameWrapper::*)(class GameWrapper)) & GameWrapper::operator=, "C++: GameWrapper::operator=(class GameWrapper) --> class GameWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("IsInGame", (bool (GameWrapper::*)()) & GameWrapper::IsInGame, "C++: GameWrapper::IsInGame() --> bool");
		cl.def("IsInOnlineGame", (bool (GameWrapper::*)()) & GameWrapper::IsInOnlineGame, "C++: GameWrapper::IsInOnlineGame() --> bool");
		cl.def("IsInFreeplay", (bool (GameWrapper::*)()) & GameWrapper::IsInFreeplay, "C++: GameWrapper::IsInFreeplay() --> bool");
		cl.def("IsInReplay", (bool (GameWrapper::*)()) & GameWrapper::IsInReplay, "C++: GameWrapper::IsInReplay() --> bool");
		cl.def("IsInCustomTraining", (bool (GameWrapper::*)()) & GameWrapper::IsInCustomTraining, "C++: GameWrapper::IsInCustomTraining() --> bool");
		// 'GameWrapper::IsSpectatingInOnlineGame': Doesn't work, use PriWrapper::IsSpectator() instead. (For local player, use GetPlayerController().GetPRI())
		// cl.def("IsSpectatingInOnlineGame", (bool (GameWrapper::*)()) & GameWrapper::IsSpectatingInOnlineGame, "C++: GameWrapper::IsSpectatingInOnlineGame() --> bool");
		cl.def("GetOnlineGame", (class ServerWrapper(GameWrapper::*)()) & GameWrapper::GetOnlineGame, "C++: GameWrapper::GetOnlineGame() --> class ServerWrapper");
		cl.def("GetGameEventAsServer", (class ServerWrapper(GameWrapper::*)()) & GameWrapper::GetGameEventAsServer, "C++: GameWrapper::GetGameEventAsServer() --> class ServerWrapper");
		cl.def("GetGameEventAsReplay", (class ReplayServerWrapper(GameWrapper::*)()) & GameWrapper::GetGameEventAsReplay, "C++: GameWrapper::GetGameEventAsReplay() --> class ReplayServerWrapper");
		cl.def("GetMMRWrapper", (class MMRWrapper(GameWrapper::*)()) & GameWrapper::GetMMRWrapper, "C++: GameWrapper::GetMMRWrapper() --> class MMRWrapper");
		cl.def("GetLocalCar", (class CarWrapper(GameWrapper::*)()) & GameWrapper::GetLocalCar, "C++: GameWrapper::GetLocalCar() --> class CarWrapper");
		cl.def("GetCamera", (class CameraWrapper(GameWrapper::*)()) & GameWrapper::GetCamera, "C++: GameWrapper::GetCamera() --> class CameraWrapper");
		cl.def("GetEngine", (class EngineTAWrapper(GameWrapper::*)()) & GameWrapper::GetEngine, "C++: GameWrapper::GetEngine() --> class EngineTAWrapper");
		cl.def("OverrideParams", (void (GameWrapper::*)(void*, unsigned long)) & GameWrapper::OverrideParams, "C++: GameWrapper::OverrideParams(void *, unsigned long) --> void", "src"_a, "memsize"_a);
		cl.def("SetTimeout", (void (GameWrapper::*)(class std::function<void(class GameWrapper*)>, float)) & GameWrapper::SetTimeout, "C++: GameWrapper::SetTimeout(class std::function<void (class GameWrapper *)>, float) --> void", "theLambda"_a, "time"_a);
		cl.def("Execute", (void (GameWrapper::*)(class std::function<void(class GameWrapper*)>)) & GameWrapper::Execute, "C++: GameWrapper::Execute(class std::function<void (class GameWrapper *)>) --> void", "theLambda"_a);
		cl.def("RegisterDrawable", (void (GameWrapper::*)(class std::function<void(class CanvasWrapper)>)) & GameWrapper::RegisterDrawable, "C++: GameWrapper::RegisterDrawable(class std::function<void (class CanvasWrapper)>) --> void", "callback"_a);
		cl.def("UnregisterDrawables", (void (GameWrapper::*)()) & GameWrapper::UnregisterDrawables, "C++: GameWrapper::UnregisterDrawables() --> void");
		cl.def("GetFNameByIndex", (std::string(GameWrapper::*)(int)) & GameWrapper::GetFNameByIndex, "C++: GameWrapper::GetFNameByIndex(int) --> std::string", "index"_a);
		cl.def("GetFNameIndexByString", (int (GameWrapper::*)(std::string)) & GameWrapper::GetFNameIndexByString, "C++: GameWrapper::GetFNameIndexByString(std::string) --> int", "name"_a);
		cl.def("HookEvent", (void (GameWrapper::*)(std::string, class std::function<void(std::string)>)) & GameWrapper::HookEvent, "C++: GameWrapper::HookEvent(std::string, class std::function<void (std::string)>) --> void", "eventName"_a, "callback"_a);
		cl.def("UnhookEvent", (void (GameWrapper::*)(std::string)) & GameWrapper::UnhookEvent, "C++: GameWrapper::UnhookEvent(std::string) --> void", "eventName"_a);
		cl.def("HookEventPost", (void (GameWrapper::*)(std::string, class std::function<void(std::string)>)) & GameWrapper::HookEventPost, "C++: GameWrapper::HookEventPost(std::string, class std::function<void (std::string)>) --> void", "eventName"_a, "callback"_a);
		cl.def("LogToChatbox", (void (GameWrapper::*)(std::string, std::string)) & GameWrapper::LogToChatbox, "C++: GameWrapper::LogToChatbox(std::string, std::string) --> void", "text"_a, "sender"_a = "BAKKESMOD");
		cl.def("LoadToastTexture", (void (GameWrapper::*)(std::string, std::string)) & GameWrapper::LoadToastTexture, "C++: GameWrapper::LoadToastTexture(std::string, std::string) --> void", "name"_a, "path"_a);
		cl.def("Toast", (void (GameWrapper::*)(std::string, std::string, std::string, float, unsigned char, float, float)) & GameWrapper::Toast, "C++: GameWrapper::Toast(std::string, std::string, std::string, float, unsigned char, float, float) --> void", "title"_a, "text"_a, "texture"_a = "default", "timeout"_a = 3.5F, "toastType"_a = 0, "width"_a = 290.F, "height"_a = 60.F);
		cl.def("IsKeyPressed", (bool (GameWrapper::*)(int)) & GameWrapper::IsKeyPressed, "C++: GameWrapper::IsKeyPressed(int) --> bool", "keyName"_a);
		cl.def("ExecuteUnrealCommand", (void (GameWrapper::*)(std::string)) & GameWrapper::ExecuteUnrealCommand, "C++: GameWrapper::ExecuteUnrealCommand(std::string) --> void", "command"_a);
		cl.def("GetRandomMap", (std::string(GameWrapper::*)()) & GameWrapper::GetRandomMap, "C++: GameWrapper::GetRandomMap() --> std::string");
		cl.def("GetSteamID", (unsigned long long (GameWrapper::*)()) & GameWrapper::GetSteamID, "C++: GameWrapper::GetSteamID() --> unsigned long long");
	}
	{ // FXActorWrapper file: line:7
		pybind11::class_<FXActorWrapper, std::shared_ptr<FXActorWrapper>, ActorWrapper> cl(M, "FXActorWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](FXActorWrapper const& o) { return new FXActorWrapper(o); }));
		cl.def("assign", (class FXActorWrapper& (FXActorWrapper::*)(class FXActorWrapper)) & FXActorWrapper::operator=, "C++: FXActorWrapper::operator=(class FXActorWrapper) --> class FXActorWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetbDeactivateWhenOwnerDestroyed", (unsigned long (FXActorWrapper::*)()) & FXActorWrapper::GetbDeactivateWhenOwnerDestroyed, "C++: FXActorWrapper::GetbDeactivateWhenOwnerDestroyed() --> unsigned long");
		cl.def("SetbDeactivateWhenOwnerDestroyed", (void (FXActorWrapper::*)(unsigned long)) & FXActorWrapper::SetbDeactivateWhenOwnerDestroyed, "C++: FXActorWrapper::SetbDeactivateWhenOwnerDestroyed(unsigned long) --> void", "newbDeactivateWhenOwnerDestroyed"_a);
		cl.def("GetbAllowShadowCasting", (unsigned long (FXActorWrapper::*)()) & FXActorWrapper::GetbAllowShadowCasting, "C++: FXActorWrapper::GetbAllowShadowCasting() --> unsigned long");
		cl.def("SetbAllowShadowCasting", (void (FXActorWrapper::*)(unsigned long)) & FXActorWrapper::SetbAllowShadowCasting, "C++: FXActorWrapper::SetbAllowShadowCasting(unsigned long) --> void", "newbAllowShadowCasting"_a);
		cl.def("GetbAutoActivate", (unsigned long (FXActorWrapper::*)()) & FXActorWrapper::GetbAutoActivate, "C++: FXActorWrapper::GetbAutoActivate() --> unsigned long");
		cl.def("SetbAutoActivate", (void (FXActorWrapper::*)(unsigned long)) & FXActorWrapper::SetbAutoActivate, "C++: FXActorWrapper::SetbAutoActivate(unsigned long) --> void", "newbAutoActivate"_a);
		cl.def("GetbRenderInactive", (unsigned long (FXActorWrapper::*)()) & FXActorWrapper::GetbRenderInactive, "C++: FXActorWrapper::GetbRenderInactive() --> unsigned long");
		cl.def("SetbRenderInactive", (void (FXActorWrapper::*)(unsigned long)) & FXActorWrapper::SetbRenderInactive, "C++: FXActorWrapper::SetbRenderInactive(unsigned long) --> void", "newbRenderInactive"_a);
		cl.def("GetbActive", (unsigned long (FXActorWrapper::*)()) & FXActorWrapper::GetbActive, "C++: FXActorWrapper::GetbActive() --> unsigned long");
		cl.def("SetbActive", (void (FXActorWrapper::*)(unsigned long)) & FXActorWrapper::SetbActive, "C++: FXActorWrapper::SetbActive(unsigned long) --> void", "newbActive"_a);
		cl.def("GetbHadOwner", (unsigned long (FXActorWrapper::*)()) & FXActorWrapper::GetbHadOwner, "C++: FXActorWrapper::GetbHadOwner() --> unsigned long");
		cl.def("SetbHadOwner", (void (FXActorWrapper::*)(unsigned long)) & FXActorWrapper::SetbHadOwner, "C++: FXActorWrapper::SetbHadOwner(unsigned long) --> void", "newbHadOwner"_a);
		cl.def("GetParent", (class FXActorWrapper(FXActorWrapper::*)()) & FXActorWrapper::GetParent, "C++: FXActorWrapper::GetParent() --> class FXActorWrapper");
		cl.def("SetParent", (void (FXActorWrapper::*)(class FXActorWrapper)) & FXActorWrapper::SetParent, "C++: FXActorWrapper::SetParent(class FXActorWrapper) --> void", "newParent"_a);
		cl.def("GetAttachmentActor", (class ActorWrapper(FXActorWrapper::*)()) & FXActorWrapper::GetAttachmentActor, "C++: FXActorWrapper::GetAttachmentActor() --> class ActorWrapper");
		cl.def("SetAttachmentActor", (void (FXActorWrapper::*)(class ActorWrapper)) & FXActorWrapper::SetAttachmentActor, "C++: FXActorWrapper::SetAttachmentActor(class ActorWrapper) --> void", "newAttachmentActor"_a);
		cl.def("GetDestroyWaitTime", (float (FXActorWrapper::*)()) & FXActorWrapper::GetDestroyWaitTime, "C++: FXActorWrapper::GetDestroyWaitTime() --> float");
		cl.def("SetDestroyWaitTime", (void (FXActorWrapper::*)(float)) & FXActorWrapper::SetDestroyWaitTime, "C++: FXActorWrapper::SetDestroyWaitTime(float) --> void", "newDestroyWaitTime"_a);
		cl.def("GetDestroyTime", (float (FXActorWrapper::*)()) & FXActorWrapper::GetDestroyTime, "C++: FXActorWrapper::GetDestroyTime() --> float");
		cl.def("SetDestroyTime", (void (FXActorWrapper::*)(float)) & FXActorWrapper::SetDestroyTime, "C++: FXActorWrapper::SetDestroyTime(float) --> void", "newDestroyTime"_a);
		cl.def("GetEditID", (int (FXActorWrapper::*)()) & FXActorWrapper::GetEditID, "C++: FXActorWrapper::GetEditID() --> int");
		cl.def("SetEditID", (void (FXActorWrapper::*)(int)) & FXActorWrapper::SetEditID, "C++: FXActorWrapper::SetEditID(int) --> void", "newEditID"_a);
		cl.def("eventDumpDebugInfo", (void (FXActorWrapper::*)()) & FXActorWrapper::eventDumpDebugInfo, "C++: FXActorWrapper::eventDumpDebugInfo() --> void");
		cl.def("eventDestroyed", (void (FXActorWrapper::*)()) & FXActorWrapper::eventDestroyed, "C++: FXActorWrapper::eventDestroyed() --> void");
		cl.def("Inherit", (void (FXActorWrapper::*)(class FXActorWrapper)) & FXActorWrapper::Inherit, "C++: FXActorWrapper::Inherit(class FXActorWrapper) --> void", "Other"_a);
		cl.def("ResetParticles", (void (FXActorWrapper::*)()) & FXActorWrapper::ResetParticles, "C++: FXActorWrapper::ResetParticles() --> void");
		cl.def("StopAllEffects", (void (FXActorWrapper::*)()) & FXActorWrapper::StopAllEffects, "C++: FXActorWrapper::StopAllEffects() --> void");
		cl.def("eventDeactivateAndDestroy", (void (FXActorWrapper::*)()) & FXActorWrapper::eventDeactivateAndDestroy, "C++: FXActorWrapper::eventDeactivateAndDestroy() --> void");
		cl.def("UpdateFXStates", (void (FXActorWrapper::*)()) & FXActorWrapper::UpdateFXStates, "C++: FXActorWrapper::UpdateFXStates() --> void");
		cl.def("IsLocallyControlled", (bool (FXActorWrapper::*)()) & FXActorWrapper::IsLocallyControlled, "C++: FXActorWrapper::IsLocallyControlled() --> bool");
		cl.def("Deactivate2", (void (FXActorWrapper::*)()) & FXActorWrapper::Deactivate2, "C++: FXActorWrapper::Deactivate2() --> void");
		cl.def("Activate2", (void (FXActorWrapper::*)()) & FXActorWrapper::Activate2, "C++: FXActorWrapper::Activate2() --> void");
		cl.def("BindTo", (void (FXActorWrapper::*)(class FXActorWrapper)) & FXActorWrapper::BindTo, "C++: FXActorWrapper::BindTo(class FXActorWrapper) --> void", "ParentFXActor"_a);
		cl.def("SetAttachmentActor2", (void (FXActorWrapper::*)(class ActorWrapper)) & FXActorWrapper::SetAttachmentActor2, "C++: FXActorWrapper::SetAttachmentActor2(class ActorWrapper) --> void", "AttachToActor"_a);
		cl.def("PostBeginPlay", (void (FXActorWrapper::*)()) & FXActorWrapper::PostBeginPlay, "C++: FXActorWrapper::PostBeginPlay() --> void");
	}
	{ // PhysicalMaterialPropertyWrapper file: line:7
		pybind11::class_<PhysicalMaterialPropertyWrapper, std::shared_ptr<PhysicalMaterialPropertyWrapper>, ObjectWrapper> cl(M, "PhysicalMaterialPropertyWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](PhysicalMaterialPropertyWrapper const& o) { return new PhysicalMaterialPropertyWrapper(o); }));
		cl.def("assign", (class PhysicalMaterialPropertyWrapper& (PhysicalMaterialPropertyWrapper::*)(class PhysicalMaterialPropertyWrapper)) & PhysicalMaterialPropertyWrapper::operator=, "C++: PhysicalMaterialPropertyWrapper::operator=(class PhysicalMaterialPropertyWrapper) --> class PhysicalMaterialPropertyWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetTireFrictionScale", (float (PhysicalMaterialPropertyWrapper::*)()) & PhysicalMaterialPropertyWrapper::GetTireFrictionScale, "C++: PhysicalMaterialPropertyWrapper::GetTireFrictionScale() --> float");
		cl.def("SetTireFrictionScale", (void (PhysicalMaterialPropertyWrapper::*)(float)) & PhysicalMaterialPropertyWrapper::SetTireFrictionScale, "C++: PhysicalMaterialPropertyWrapper::SetTireFrictionScale(float) --> void", "newTireFrictionScale"_a);
		cl.def("GetbStickyWheels", (unsigned long (PhysicalMaterialPropertyWrapper::*)()) & PhysicalMaterialPropertyWrapper::GetbStickyWheels, "C++: PhysicalMaterialPropertyWrapper::GetbStickyWheels() --> unsigned long");
		cl.def("SetbStickyWheels", (void (PhysicalMaterialPropertyWrapper::*)(unsigned long)) & PhysicalMaterialPropertyWrapper::SetbStickyWheels, "C++: PhysicalMaterialPropertyWrapper::SetbStickyWheels(unsigned long) --> void", "newbStickyWheels"_a);
		cl.def("GetbConsiderForGround", (unsigned long (PhysicalMaterialPropertyWrapper::*)()) & PhysicalMaterialPropertyWrapper::GetbConsiderForGround, "C++: PhysicalMaterialPropertyWrapper::GetbConsiderForGround() --> unsigned long");
		cl.def("SetbConsiderForGround", (void (PhysicalMaterialPropertyWrapper::*)(unsigned long)) & PhysicalMaterialPropertyWrapper::SetbConsiderForGround, "C++: PhysicalMaterialPropertyWrapper::SetbConsiderForGround(unsigned long) --> void", "newbConsiderForGround"_a);
	}
	{ // PlayerControllerWrapper file: line:18
		pybind11::class_<PlayerControllerWrapper, std::shared_ptr<PlayerControllerWrapper>, ActorWrapper> cl(M, "PlayerControllerWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](PlayerControllerWrapper const& o) { return new PlayerControllerWrapper(o); }));
		cl.def("assign", (class PlayerControllerWrapper& (PlayerControllerWrapper::*)(class PlayerControllerWrapper)) & PlayerControllerWrapper::operator=, "C++: PlayerControllerWrapper::operator=(class PlayerControllerWrapper) --> class PlayerControllerWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetCar", (class CarWrapper(PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetCar, "C++: PlayerControllerWrapper::GetCar() --> class CarWrapper");
		cl.def("SetCar", (void (PlayerControllerWrapper::*)(class CarWrapper)) & PlayerControllerWrapper::SetCar, "C++: PlayerControllerWrapper::SetCar(class CarWrapper) --> void", "newCar"_a);
		cl.def("GetPRI", (class PriWrapper(PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetPRI, "C++: PlayerControllerWrapper::GetPRI() --> class PriWrapper");
		cl.def("SetPRI", (void (PlayerControllerWrapper::*)(class PriWrapper)) & PlayerControllerWrapper::SetPRI, "C++: PlayerControllerWrapper::SetPRI(class PriWrapper) --> void", "newPRI"_a);
		cl.def("GetVehicleInput", (struct ControllerInput(PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetVehicleInput, "C++: PlayerControllerWrapper::GetVehicleInput() --> struct ControllerInput");
		cl.def("SetVehicleInput", (void (PlayerControllerWrapper::*)(struct ControllerInput)) & PlayerControllerWrapper::SetVehicleInput, "C++: PlayerControllerWrapper::SetVehicleInput(struct ControllerInput) --> void", "newVehicleInput"_a);
		cl.def("GetbReceivedServerShutdownMessage", (unsigned long (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetbReceivedServerShutdownMessage, "C++: PlayerControllerWrapper::GetbReceivedServerShutdownMessage() --> unsigned long");
		cl.def("SetbReceivedServerShutdownMessage", (void (PlayerControllerWrapper::*)(unsigned long)) & PlayerControllerWrapper::SetbReceivedServerShutdownMessage, "C++: PlayerControllerWrapper::SetbReceivedServerShutdownMessage(unsigned long) --> void", "newbReceivedServerShutdownMessage"_a);
		cl.def("GetbUseDebugInputs", (unsigned long (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetbUseDebugInputs, "C++: PlayerControllerWrapper::GetbUseDebugInputs() --> unsigned long");
		cl.def("SetbUseDebugInputs", (void (PlayerControllerWrapper::*)(unsigned long)) & PlayerControllerWrapper::SetbUseDebugInputs, "C++: PlayerControllerWrapper::SetbUseDebugInputs(unsigned long) --> void", "newbUseDebugInputs"_a);
		cl.def("GetbJumpPressed", (unsigned long (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetbJumpPressed, "C++: PlayerControllerWrapper::GetbJumpPressed() --> unsigned long");
		cl.def("SetbJumpPressed", (void (PlayerControllerWrapper::*)(unsigned long)) & PlayerControllerWrapper::SetbJumpPressed, "C++: PlayerControllerWrapper::SetbJumpPressed(unsigned long) --> void", "newbJumpPressed"_a);
		cl.def("GetbBoostPressed", (unsigned long (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetbBoostPressed, "C++: PlayerControllerWrapper::GetbBoostPressed() --> unsigned long");
		cl.def("SetbBoostPressed", (void (PlayerControllerWrapper::*)(unsigned long)) & PlayerControllerWrapper::SetbBoostPressed, "C++: PlayerControllerWrapper::SetbBoostPressed(unsigned long) --> void", "newbBoostPressed"_a);
		cl.def("GetbHandbrakePressed", (unsigned long (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetbHandbrakePressed, "C++: PlayerControllerWrapper::GetbHandbrakePressed() --> unsigned long");
		cl.def("SetbHandbrakePressed", (void (PlayerControllerWrapper::*)(unsigned long)) & PlayerControllerWrapper::SetbHandbrakePressed, "C++: PlayerControllerWrapper::SetbHandbrakePressed(unsigned long) --> void", "newbHandbrakePressed"_a);
		cl.def("GetbHasPitchedBack", (unsigned long (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetbHasPitchedBack, "C++: PlayerControllerWrapper::GetbHasPitchedBack() --> unsigned long");
		cl.def("SetbHasPitchedBack", (void (PlayerControllerWrapper::*)(unsigned long)) & PlayerControllerWrapper::SetbHasPitchedBack, "C++: PlayerControllerWrapper::SetbHasPitchedBack(unsigned long) --> void", "newbHasPitchedBack"_a);
		cl.def("GetbAllowAsymmetricalMute", (unsigned long (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetbAllowAsymmetricalMute, "C++: PlayerControllerWrapper::GetbAllowAsymmetricalMute() --> unsigned long");
		cl.def("SetbAllowAsymmetricalMute", (void (PlayerControllerWrapper::*)(unsigned long)) & PlayerControllerWrapper::SetbAllowAsymmetricalMute, "C++: PlayerControllerWrapper::SetbAllowAsymmetricalMute(unsigned long) --> void", "newbAllowAsymmetricalMute"_a);
		cl.def("GetbResetCamera", (unsigned long (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetbResetCamera, "C++: PlayerControllerWrapper::GetbResetCamera() --> unsigned long");
		cl.def("SetbResetCamera", (void (PlayerControllerWrapper::*)(unsigned long)) & PlayerControllerWrapper::SetbResetCamera, "C++: PlayerControllerWrapper::SetbResetCamera(unsigned long) --> void", "newbResetCamera"_a);
		cl.def("GetLoginURL", (class UnrealStringWrapper(PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetLoginURL, "C++: PlayerControllerWrapper::GetLoginURL() --> class UnrealStringWrapper");
		cl.def("GetVoiceFilter", (unsigned char (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetVoiceFilter, "C++: PlayerControllerWrapper::GetVoiceFilter() --> unsigned char");
		cl.def("SetVoiceFilter", (void (PlayerControllerWrapper::*)(unsigned char)) & PlayerControllerWrapper::SetVoiceFilter, "C++: PlayerControllerWrapper::SetVoiceFilter(unsigned char) --> void", "newVoiceFilter"_a);
		cl.def("GetChatFilter", (unsigned char (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetChatFilter, "C++: PlayerControllerWrapper::GetChatFilter() --> unsigned char");
		cl.def("SetChatFilter", (void (PlayerControllerWrapper::*)(unsigned char)) & PlayerControllerWrapper::SetChatFilter, "C++: PlayerControllerWrapper::SetChatFilter(unsigned char) --> void", "newChatFilter"_a);
		cl.def("GetFollowTarget", (class PriWrapper(PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetFollowTarget, "C++: PlayerControllerWrapper::GetFollowTarget() --> class PriWrapper");
		cl.def("SetFollowTarget", (void (PlayerControllerWrapper::*)(class PriWrapper)) & PlayerControllerWrapper::SetFollowTarget, "C++: PlayerControllerWrapper::SetFollowTarget(class PriWrapper) --> void", "newFollowTarget"_a);
		cl.def("GetSpectatorCameraArchetype", (class BaseCameraWrapper(PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetSpectatorCameraArchetype, "C++: PlayerControllerWrapper::GetSpectatorCameraArchetype() --> class BaseCameraWrapper");
		cl.def("SetSpectatorCameraArchetype", (void (PlayerControllerWrapper::*)(class BaseCameraWrapper)) & PlayerControllerWrapper::SetSpectatorCameraArchetype, "C++: PlayerControllerWrapper::SetSpectatorCameraArchetype(class BaseCameraWrapper) --> void", "newSpectatorCameraArchetype"_a);
		cl.def("GetEditorCameraArchetype", (class BaseCameraWrapper(PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetEditorCameraArchetype, "C++: PlayerControllerWrapper::GetEditorCameraArchetype() --> class BaseCameraWrapper");
		cl.def("SetEditorCameraArchetype", (void (PlayerControllerWrapper::*)(class BaseCameraWrapper)) & PlayerControllerWrapper::SetEditorCameraArchetype, "C++: PlayerControllerWrapper::SetEditorCameraArchetype(class BaseCameraWrapper) --> void", "newEditorCameraArchetype"_a);
		cl.def("GetMoveActorGrabOffset", (struct Vector(PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetMoveActorGrabOffset, "C++: PlayerControllerWrapper::GetMoveActorGrabOffset() --> struct Vector");
		cl.def("SetMoveActorGrabOffset", (void (PlayerControllerWrapper::*)(struct Vector)) & PlayerControllerWrapper::SetMoveActorGrabOffset, "C++: PlayerControllerWrapper::SetMoveActorGrabOffset(struct Vector) --> void", "newMoveActorGrabOffset"_a);
		cl.def("GetMoveActorGrabIncrement", (float (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetMoveActorGrabIncrement, "C++: PlayerControllerWrapper::GetMoveActorGrabIncrement() --> float");
		cl.def("SetMoveActorGrabIncrement", (void (PlayerControllerWrapper::*)(float)) & PlayerControllerWrapper::SetMoveActorGrabIncrement, "C++: PlayerControllerWrapper::SetMoveActorGrabIncrement(float) --> void", "newMoveActorGrabIncrement"_a);
		cl.def("GetMinMoveActorGrabDistance", (float (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetMinMoveActorGrabDistance, "C++: PlayerControllerWrapper::GetMinMoveActorGrabDistance() --> float");
		cl.def("SetMinMoveActorGrabDistance", (void (PlayerControllerWrapper::*)(float)) & PlayerControllerWrapper::SetMinMoveActorGrabDistance, "C++: PlayerControllerWrapper::SetMinMoveActorGrabDistance(float) --> void", "newMinMoveActorGrabDistance"_a);
		cl.def("GetMouseIncrementSpeed", (float (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetMouseIncrementSpeed, "C++: PlayerControllerWrapper::GetMouseIncrementSpeed() --> float");
		cl.def("SetMouseIncrementSpeed", (void (PlayerControllerWrapper::*)(float)) & PlayerControllerWrapper::SetMouseIncrementSpeed, "C++: PlayerControllerWrapper::SetMouseIncrementSpeed(float) --> void", "newMouseIncrementSpeed"_a);
		cl.def("GetBallVelocityIncrementAmount", (float (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetBallVelocityIncrementAmount, "C++: PlayerControllerWrapper::GetBallVelocityIncrementAmount() --> float");
		cl.def("SetBallVelocityIncrementAmount", (void (PlayerControllerWrapper::*)(float)) & PlayerControllerWrapper::SetBallVelocityIncrementAmount, "C++: PlayerControllerWrapper::SetBallVelocityIncrementAmount(float) --> void", "newBallVelocityIncrementAmount"_a);
		cl.def("GetBallVelocityIncrementFireCount", (int (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetBallVelocityIncrementFireCount, "C++: PlayerControllerWrapper::GetBallVelocityIncrementFireCount() --> int");
		cl.def("SetBallVelocityIncrementFireCount", (void (PlayerControllerWrapper::*)(int)) & PlayerControllerWrapper::SetBallVelocityIncrementFireCount, "C++: PlayerControllerWrapper::SetBallVelocityIncrementFireCount(int) --> void", "newBallVelocityIncrementFireCount"_a);
		cl.def("GetBallVelocityIncrementFireCountMax", (float (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetBallVelocityIncrementFireCountMax, "C++: PlayerControllerWrapper::GetBallVelocityIncrementFireCountMax() --> float");
		cl.def("SetBallVelocityIncrementFireCountMax", (void (PlayerControllerWrapper::*)(float)) & PlayerControllerWrapper::SetBallVelocityIncrementFireCountMax, "C++: PlayerControllerWrapper::SetBallVelocityIncrementFireCountMax(float) --> void", "newBallVelocityIncrementFireCountMax"_a);
		cl.def("GetBallVelocityIncrementSpeedDefault", (float (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetBallVelocityIncrementSpeedDefault, "C++: PlayerControllerWrapper::GetBallVelocityIncrementSpeedDefault() --> float");
		cl.def("SetBallVelocityIncrementSpeedDefault", (void (PlayerControllerWrapper::*)(float)) & PlayerControllerWrapper::SetBallVelocityIncrementSpeedDefault, "C++: PlayerControllerWrapper::SetBallVelocityIncrementSpeedDefault(float) --> void", "newBallVelocityIncrementSpeedDefault"_a);
		cl.def("GetBallVelocityIncrementSpeedMax", (float (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetBallVelocityIncrementSpeedMax, "C++: PlayerControllerWrapper::GetBallVelocityIncrementSpeedMax() --> float");
		cl.def("SetBallVelocityIncrementSpeedMax", (void (PlayerControllerWrapper::*)(float)) & PlayerControllerWrapper::SetBallVelocityIncrementSpeedMax, "C++: PlayerControllerWrapper::SetBallVelocityIncrementSpeedMax(float) --> void", "newBallVelocityIncrementSpeedMax"_a);
		cl.def("GetCrosshairTraceDistance", (float (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetCrosshairTraceDistance, "C++: PlayerControllerWrapper::GetCrosshairTraceDistance() --> float");
		cl.def("SetCrosshairTraceDistance", (void (PlayerControllerWrapper::*)(float)) & PlayerControllerWrapper::SetCrosshairTraceDistance, "C++: PlayerControllerWrapper::SetCrosshairTraceDistance(float) --> void", "newCrosshairTraceDistance"_a);
		cl.def("GetTracedCrosshairActor", (class ActorWrapper(PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetTracedCrosshairActor, "C++: PlayerControllerWrapper::GetTracedCrosshairActor() --> class ActorWrapper");
		cl.def("SetTracedCrosshairActor", (void (PlayerControllerWrapper::*)(class ActorWrapper)) & PlayerControllerWrapper::SetTracedCrosshairActor, "C++: PlayerControllerWrapper::SetTracedCrosshairActor(class ActorWrapper) --> void", "newTracedCrosshairActor"_a);
		cl.def("GetRotateActorCameraLocationOffset", (struct Vector(PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetRotateActorCameraLocationOffset, "C++: PlayerControllerWrapper::GetRotateActorCameraLocationOffset() --> struct Vector");
		cl.def("SetRotateActorCameraLocationOffset", (void (PlayerControllerWrapper::*)(struct Vector)) & PlayerControllerWrapper::SetRotateActorCameraLocationOffset, "C++: PlayerControllerWrapper::SetRotateActorCameraLocationOffset(struct Vector) --> void", "newRotateActorCameraLocationOffset"_a);
		cl.def("GetRotateActorCameraRotationOffset", (struct Vector(PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetRotateActorCameraRotationOffset, "C++: PlayerControllerWrapper::GetRotateActorCameraRotationOffset() --> struct Vector");
		cl.def("SetRotateActorCameraRotationOffset", (void (PlayerControllerWrapper::*)(struct Vector)) & PlayerControllerWrapper::SetRotateActorCameraRotationOffset, "C++: PlayerControllerWrapper::SetRotateActorCameraRotationOffset(struct Vector) --> void", "newRotateActorCameraRotationOffset"_a);
		cl.def("GetRotateActorCameraSide", (int (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetRotateActorCameraSide, "C++: PlayerControllerWrapper::GetRotateActorCameraSide() --> int");
		cl.def("SetRotateActorCameraSide", (void (PlayerControllerWrapper::*)(int)) & PlayerControllerWrapper::SetRotateActorCameraSide, "C++: PlayerControllerWrapper::SetRotateActorCameraSide(int) --> void", "newRotateActorCameraSide"_a);
		cl.def("GetDesiredCameraSide", (float (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetDesiredCameraSide, "C++: PlayerControllerWrapper::GetDesiredCameraSide() --> float");
		cl.def("SetDesiredCameraSide", (void (PlayerControllerWrapper::*)(float)) & PlayerControllerWrapper::SetDesiredCameraSide, "C++: PlayerControllerWrapper::SetDesiredCameraSide(float) --> void", "newDesiredCameraSide"_a);
		cl.def("GetPawnTypeChangedTime", (float (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetPawnTypeChangedTime, "C++: PlayerControllerWrapper::GetPawnTypeChangedTime() --> float");
		cl.def("SetPawnTypeChangedTime", (void (PlayerControllerWrapper::*)(float)) & PlayerControllerWrapper::SetPawnTypeChangedTime, "C++: PlayerControllerWrapper::SetPawnTypeChangedTime(float) --> void", "newPawnTypeChangedTime"_a);
		cl.def("GetSelectedSpawnArchetype", (int (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetSelectedSpawnArchetype, "C++: PlayerControllerWrapper::GetSelectedSpawnArchetype() --> int");
		cl.def("SetSelectedSpawnArchetype", (void (PlayerControllerWrapper::*)(int)) & PlayerControllerWrapper::SetSelectedSpawnArchetype, "C++: PlayerControllerWrapper::SetSelectedSpawnArchetype(int) --> void", "newSelectedSpawnArchetype"_a);
		cl.def("GetDebugInputs", (struct ControllerInput(PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetDebugInputs, "C++: PlayerControllerWrapper::GetDebugInputs() --> struct ControllerInput");
		cl.def("SetDebugInputs", (void (PlayerControllerWrapper::*)(struct ControllerInput)) & PlayerControllerWrapper::SetDebugInputs, "C++: PlayerControllerWrapper::SetDebugInputs(struct ControllerInput) --> void", "newDebugInputs"_a);
		cl.def("GetMinClientInputRate", (int (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetMinClientInputRate, "C++: PlayerControllerWrapper::GetMinClientInputRate() --> int");
		cl.def("SetMinClientInputRate", (void (PlayerControllerWrapper::*)(int)) & PlayerControllerWrapper::SetMinClientInputRate, "C++: PlayerControllerWrapper::SetMinClientInputRate(int) --> void", "newMinClientInputRate"_a);
		cl.def("GetMedianClientInputRate", (int (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetMedianClientInputRate, "C++: PlayerControllerWrapper::GetMedianClientInputRate() --> int");
		cl.def("SetMedianClientInputRate", (void (PlayerControllerWrapper::*)(int)) & PlayerControllerWrapper::SetMedianClientInputRate, "C++: PlayerControllerWrapper::SetMedianClientInputRate(int) --> void", "newMedianClientInputRate"_a);
		cl.def("GetMaxClientInputRate", (int (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetMaxClientInputRate, "C++: PlayerControllerWrapper::GetMaxClientInputRate() --> int");
		cl.def("SetMaxClientInputRate", (void (PlayerControllerWrapper::*)(int)) & PlayerControllerWrapper::SetMaxClientInputRate, "C++: PlayerControllerWrapper::SetMaxClientInputRate(int) --> void", "newMaxClientInputRate"_a);
		cl.def("GetConfiguredClientInputRate", (int (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetConfiguredClientInputRate, "C++: PlayerControllerWrapper::GetConfiguredClientInputRate() --> int");
		cl.def("SetConfiguredClientInputRate", (void (PlayerControllerWrapper::*)(int)) & PlayerControllerWrapper::SetConfiguredClientInputRate, "C++: PlayerControllerWrapper::SetConfiguredClientInputRate(int) --> void", "newConfiguredClientInputRate"_a);
		cl.def("GetTimeSinceLastMovePacket", (float (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetTimeSinceLastMovePacket, "C++: PlayerControllerWrapper::GetTimeSinceLastMovePacket() --> float");
		cl.def("SetTimeSinceLastMovePacket", (void (PlayerControllerWrapper::*)(float)) & PlayerControllerWrapper::SetTimeSinceLastMovePacket, "C++: PlayerControllerWrapper::SetTimeSinceLastMovePacket(float) --> void", "newTimeSinceLastMovePacket"_a);
		cl.def("GetTimeLastReplicatedMovePacket", (float (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetTimeLastReplicatedMovePacket, "C++: PlayerControllerWrapper::GetTimeLastReplicatedMovePacket() --> float");
		cl.def("SetTimeLastReplicatedMovePacket", (void (PlayerControllerWrapper::*)(float)) & PlayerControllerWrapper::SetTimeLastReplicatedMovePacket, "C++: PlayerControllerWrapper::SetTimeLastReplicatedMovePacket(float) --> void", "newTimeLastReplicatedMovePacket"_a);
		cl.def("GetMouseXDeadZone", (float (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetMouseXDeadZone, "C++: PlayerControllerWrapper::GetMouseXDeadZone() --> float");
		cl.def("SetMouseXDeadZone", (void (PlayerControllerWrapper::*)(float)) & PlayerControllerWrapper::SetMouseXDeadZone, "C++: PlayerControllerWrapper::SetMouseXDeadZone(float) --> void", "newMouseXDeadZone"_a);
		cl.def("GetMouseYDeadZone", (float (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetMouseYDeadZone, "C++: PlayerControllerWrapper::GetMouseYDeadZone() --> float");
		cl.def("SetMouseYDeadZone", (void (PlayerControllerWrapper::*)(float)) & PlayerControllerWrapper::SetMouseYDeadZone, "C++: PlayerControllerWrapper::SetMouseYDeadZone(float) --> void", "newMouseYDeadZone"_a);
		cl.def("GetMouseXDeadZoneAir", (float (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetMouseXDeadZoneAir, "C++: PlayerControllerWrapper::GetMouseXDeadZoneAir() --> float");
		cl.def("SetMouseXDeadZoneAir", (void (PlayerControllerWrapper::*)(float)) & PlayerControllerWrapper::SetMouseXDeadZoneAir, "C++: PlayerControllerWrapper::SetMouseXDeadZoneAir(float) --> void", "newMouseXDeadZoneAir"_a);
		cl.def("GetMouseYDeadZoneAir", (float (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetMouseYDeadZoneAir, "C++: PlayerControllerWrapper::GetMouseYDeadZoneAir() --> float");
		cl.def("SetMouseYDeadZoneAir", (void (PlayerControllerWrapper::*)(float)) & PlayerControllerWrapper::SetMouseYDeadZoneAir, "C++: PlayerControllerWrapper::SetMouseYDeadZoneAir(float) --> void", "newMouseYDeadZoneAir"_a);
		cl.def("GetLastInputs", (struct ControllerInput(PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetLastInputs, "C++: PlayerControllerWrapper::GetLastInputs() --> struct ControllerInput");
		cl.def("SetLastInputs", (void (PlayerControllerWrapper::*)(struct ControllerInput)) & PlayerControllerWrapper::SetLastInputs, "C++: PlayerControllerWrapper::SetLastInputs(struct ControllerInput) --> void", "newLastInputs"_a);
		cl.def("GetPendingViewPRI", (class PriWrapper(PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetPendingViewPRI, "C++: PlayerControllerWrapper::GetPendingViewPRI() --> class PriWrapper");
		cl.def("SetPendingViewPRI", (void (PlayerControllerWrapper::*)(class PriWrapper)) & PlayerControllerWrapper::SetPendingViewPRI, "C++: PlayerControllerWrapper::SetPendingViewPRI(class PriWrapper) --> void", "newPendingViewPRI"_a);
		cl.def("GetLastInputPitchUp", (float (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetLastInputPitchUp, "C++: PlayerControllerWrapper::GetLastInputPitchUp() --> float");
		cl.def("SetLastInputPitchUp", (void (PlayerControllerWrapper::*)(float)) & PlayerControllerWrapper::SetLastInputPitchUp, "C++: PlayerControllerWrapper::SetLastInputPitchUp(float) --> void", "newLastInputPitchUp"_a);
		cl.def("GetLastInputPitchDown", (float (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetLastInputPitchDown, "C++: PlayerControllerWrapper::GetLastInputPitchDown() --> float");
		cl.def("SetLastInputPitchDown", (void (PlayerControllerWrapper::*)(float)) & PlayerControllerWrapper::SetLastInputPitchDown, "C++: PlayerControllerWrapper::SetLastInputPitchDown(float) --> void", "newLastInputPitchDown"_a);
		cl.def("GetLastInputYawLeft", (float (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetLastInputYawLeft, "C++: PlayerControllerWrapper::GetLastInputYawLeft() --> float");
		cl.def("SetLastInputYawLeft", (void (PlayerControllerWrapper::*)(float)) & PlayerControllerWrapper::SetLastInputYawLeft, "C++: PlayerControllerWrapper::SetLastInputYawLeft(float) --> void", "newLastInputYawLeft"_a);
		cl.def("GetLastInputYawRight", (float (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetLastInputYawRight, "C++: PlayerControllerWrapper::GetLastInputYawRight() --> float");
		cl.def("SetLastInputYawRight", (void (PlayerControllerWrapper::*)(float)) & PlayerControllerWrapper::SetLastInputYawRight, "C++: PlayerControllerWrapper::SetLastInputYawRight(float) --> void", "newLastInputYawRight"_a);
		cl.def("GetLastInputPitch", (float (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetLastInputPitch, "C++: PlayerControllerWrapper::GetLastInputPitch() --> float");
		cl.def("SetLastInputPitch", (void (PlayerControllerWrapper::*)(float)) & PlayerControllerWrapper::SetLastInputPitch, "C++: PlayerControllerWrapper::SetLastInputPitch(float) --> void", "newLastInputPitch"_a);
		cl.def("GetLastInputYaw", (float (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetLastInputYaw, "C++: PlayerControllerWrapper::GetLastInputYaw() --> float");
		cl.def("SetLastInputYaw", (void (PlayerControllerWrapper::*)(float)) & PlayerControllerWrapper::SetLastInputYaw, "C++: PlayerControllerWrapper::SetLastInputYaw(float) --> void", "newLastInputYaw"_a);
		cl.def("GetMouseInputMax", (float (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetMouseInputMax, "C++: PlayerControllerWrapper::GetMouseInputMax() --> float");
		cl.def("SetMouseInputMax", (void (PlayerControllerWrapper::*)(float)) & PlayerControllerWrapper::SetMouseInputMax, "C++: PlayerControllerWrapper::SetMouseInputMax(float) --> void", "newMouseInputMax"_a);
		cl.def("GetEngineShare", (class EngineTAWrapper(PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetEngineShare, "C++: PlayerControllerWrapper::GetEngineShare() --> class EngineTAWrapper");
		cl.def("SetEngineShare", (void (PlayerControllerWrapper::*)(class EngineTAWrapper)) & PlayerControllerWrapper::SetEngineShare, "C++: PlayerControllerWrapper::SetEngineShare(class EngineTAWrapper) --> void", "newEngineShare"_a);
		cl.def("HandleCarSet", (void (PlayerControllerWrapper::*)(class PriWrapper)) & PlayerControllerWrapper::HandleCarSet, "C++: PlayerControllerWrapper::HandleCarSet(class PriWrapper) --> void", "InPRI"_a);
		cl.def("SpawnSelectedArchetype", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::SpawnSelectedArchetype, "C++: PlayerControllerWrapper::SpawnSelectedArchetype() --> void");
		cl.def("RemoveActor", (bool (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::RemoveActor, "C++: PlayerControllerWrapper::RemoveActor() --> bool");
		cl.def("ToggleGrabActor", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::ToggleGrabActor, "C++: PlayerControllerWrapper::ToggleGrabActor() --> void");
		cl.def("ToggleRotateActor", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::ToggleRotateActor, "C++: PlayerControllerWrapper::ToggleRotateActor() --> void");
		cl.def("EditorReleaseActor", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::EditorReleaseActor, "C++: PlayerControllerWrapper::EditorReleaseActor() --> void");
		cl.def("EditorCycleActor", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::EditorCycleActor, "C++: PlayerControllerWrapper::EditorCycleActor() --> void");
		cl.def("DuplicateShot", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::DuplicateShot, "C++: PlayerControllerWrapper::DuplicateShot() --> void");
		cl.def("StopEditing", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::StopEditing, "C++: PlayerControllerWrapper::StopEditing() --> void");
		cl.def("EditorIncreasePower", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::EditorIncreasePower, "C++: PlayerControllerWrapper::EditorIncreasePower() --> void");
		cl.def("EditorDecreasePower", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::EditorDecreasePower, "C++: PlayerControllerWrapper::EditorDecreasePower() --> void");
		cl.def("EditorIncreasePowerToggleInterim", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::EditorIncreasePowerToggleInterim, "C++: PlayerControllerWrapper::EditorIncreasePowerToggleInterim() --> void");
		cl.def("EditorDecreasePowerToggleInterim", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::EditorDecreasePowerToggleInterim, "C++: PlayerControllerWrapper::EditorDecreasePowerToggleInterim() --> void");
		cl.def("EditorIncreasePowerToggle2", (void (PlayerControllerWrapper::*)(unsigned long)) & PlayerControllerWrapper::EditorIncreasePowerToggle2, "C++: PlayerControllerWrapper::EditorIncreasePowerToggle2(unsigned long) --> void", "bToggle"_a);
		cl.def("EditorDecreasePowerToggle2", (void (PlayerControllerWrapper::*)(unsigned long)) & PlayerControllerWrapper::EditorDecreasePowerToggle2, "C++: PlayerControllerWrapper::EditorDecreasePowerToggle2(unsigned long) --> void", "bToggle"_a);
		cl.def("ModifyEditorPower", (void (PlayerControllerWrapper::*)(int)) & PlayerControllerWrapper::ModifyEditorPower, "C++: PlayerControllerWrapper::ModifyEditorPower(int) --> void", "Direction"_a);
		cl.def("ToggleCameraPosition", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::ToggleCameraPosition, "C++: PlayerControllerWrapper::ToggleCameraPosition() --> void");
		cl.def("EditorUndo", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::EditorUndo, "C++: PlayerControllerWrapper::EditorUndo() --> void");
		cl.def("EditorRedo", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::EditorRedo, "C++: PlayerControllerWrapper::EditorRedo() --> void");
		cl.def("EditorIncreaseRoundTime", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::EditorIncreaseRoundTime, "C++: PlayerControllerWrapper::EditorIncreaseRoundTime() --> void");
		cl.def("EditorDecreaseRoundTime", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::EditorDecreaseRoundTime, "C++: PlayerControllerWrapper::EditorDecreaseRoundTime() --> void");
		cl.def("EditorNextRound", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::EditorNextRound, "C++: PlayerControllerWrapper::EditorNextRound() --> void");
		cl.def("EditorPrevRound", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::EditorPrevRound, "C++: PlayerControllerWrapper::EditorPrevRound() --> void");
		cl.def("UpdateCrosshair", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::UpdateCrosshair, "C++: PlayerControllerWrapper::UpdateCrosshair() --> void");
		cl.def("NetClientInputRate", (void (PlayerControllerWrapper::*)(int)) & PlayerControllerWrapper::NetClientInputRate, "C++: PlayerControllerWrapper::NetClientInputRate(int) --> void", "Rate"_a);
		cl.def("ServerCreateMatchBroadcast", (void (PlayerControllerWrapper::*)(class ServerWrapper)) & PlayerControllerWrapper::ServerCreateMatchBroadcast, "C++: PlayerControllerWrapper::ServerCreateMatchBroadcast(class ServerWrapper) --> void", "GameEvent"_a);
		cl.def("ClampMoveActorGrabOffset", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::ClampMoveActorGrabOffset, "C++: PlayerControllerWrapper::ClampMoveActorGrabOffset() --> void");
		cl.def("RevertToDefaultCameraHUDInput", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::RevertToDefaultCameraHUDInput, "C++: PlayerControllerWrapper::RevertToDefaultCameraHUDInput() --> void");
		cl.def("SwitchToEditPawn", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::SwitchToEditPawn, "C++: PlayerControllerWrapper::SwitchToEditPawn() --> void");
		cl.def("ServerResetPlayer", (void (PlayerControllerWrapper::*)(unsigned long)) & PlayerControllerWrapper::ServerResetPlayer, "C++: PlayerControllerWrapper::ServerResetPlayer(unsigned long) --> void", "bFullReset"_a);
		cl.def("ResetPlayerRun", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::ResetPlayerRun, "C++: PlayerControllerWrapper::ResetPlayerRun() --> void");
		cl.def("ResetPlayerCheckpoint", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::ResetPlayerCheckpoint, "C++: PlayerControllerWrapper::ResetPlayerCheckpoint() --> void");
		cl.def("ToggleEditorRound", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::ToggleEditorRound, "C++: PlayerControllerWrapper::ToggleEditorRound() --> void");
		cl.def("ToggleBetweenCarAndEditPawn", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::ToggleBetweenCarAndEditPawn, "C++: PlayerControllerWrapper::ToggleBetweenCarAndEditPawn() --> void");
		cl.def("Interact", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::Interact, "C++: PlayerControllerWrapper::Interact() --> void");
		cl.def("StopMovement", (void (PlayerControllerWrapper::*)(unsigned long)) & PlayerControllerWrapper::StopMovement, "C++: PlayerControllerWrapper::StopMovement(unsigned long) --> void", "bOnlyIfNoAccel"_a);
		cl.def("GetRotateActorCameraOffset", (struct Vector(PlayerControllerWrapper::*)(float, unsigned long)) & PlayerControllerWrapper::GetRotateActorCameraOffset, "C++: PlayerControllerWrapper::GetRotateActorCameraOffset(float, unsigned long) --> struct Vector", "DeltaTime"_a, "bSnap"_a);
		cl.def("RestoreEditorPawnOrientation", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::RestoreEditorPawnOrientation, "C++: PlayerControllerWrapper::RestoreEditorPawnOrientation() --> void");
		cl.def("BackupEditorPawnOrientation", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::BackupEditorPawnOrientation, "C++: PlayerControllerWrapper::BackupEditorPawnOrientation() --> void");
		cl.def("UpdateRotatedActorOrientation", (void (PlayerControllerWrapper::*)(float)) & PlayerControllerWrapper::UpdateRotatedActorOrientation, "C++: PlayerControllerWrapper::UpdateRotatedActorOrientation(float) --> void", "DeltaTime"_a);
		cl.def("OnOpenPauseMenu", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::OnOpenPauseMenu, "C++: PlayerControllerWrapper::OnOpenPauseMenu() --> void");
		cl.def("ResetMouseCenter", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::ResetMouseCenter, "C++: PlayerControllerWrapper::ResetMouseCenter() --> void");
		cl.def("CalculateMouseAxis", (float (PlayerControllerWrapper::*)(float, float, float, float)) & PlayerControllerWrapper::CalculateMouseAxis, "C++: PlayerControllerWrapper::CalculateMouseAxis(float, float, float, float) --> float", "Center"_a, "CurrentLocation"_a, "Deadzone"_a, "MaxDist"_a);
		cl.def("ShowControllerApplet", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::ShowControllerApplet, "C++: PlayerControllerWrapper::ShowControllerApplet() --> void");
		cl.def("ShowAccountPicker", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::ShowAccountPicker, "C++: PlayerControllerWrapper::ShowAccountPicker() --> void");
		cl.def("QueSaveReplay", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::QueSaveReplay, "C++: PlayerControllerWrapper::QueSaveReplay() --> void");
		cl.def("SetFollowTarget2", (void (PlayerControllerWrapper::*)(class PriWrapper)) & PlayerControllerWrapper::SetFollowTarget2, "C++: PlayerControllerWrapper::SetFollowTarget2(class PriWrapper) --> void", "InTarget"_a);
		cl.def("FollowPlayer", (void (PlayerControllerWrapper::*)(class PriWrapper)) & PlayerControllerWrapper::FollowPlayer, "C++: PlayerControllerWrapper::FollowPlayer(class PriWrapper) --> void", "InPlayer"_a);
		cl.def("ClientSplitscreenJoinResponse", (void (PlayerControllerWrapper::*)(struct SteamID&, unsigned long, std::string)) & PlayerControllerWrapper::ClientSplitscreenJoinResponse, "C++: PlayerControllerWrapper::ClientSplitscreenJoinResponse(struct SteamID &, unsigned long, std::string) --> void", "PlayerID"_a, "bAllow"_a, "Error"_a);
		cl.def("ServerRequestSplitscreenJoin", (void (PlayerControllerWrapper::*)(struct SteamID&, std::string)) & PlayerControllerWrapper::ServerRequestSplitscreenJoin, "C++: PlayerControllerWrapper::ServerRequestSplitscreenJoin(struct SteamID &, std::string) --> void", "PlayerID"_a, "PlayerName"_a);
		cl.def("eventPreClientTravel", (bool (PlayerControllerWrapper::*)(std::string, unsigned char, unsigned long)) & PlayerControllerWrapper::eventPreClientTravel, "C++: PlayerControllerWrapper::eventPreClientTravel(std::string, unsigned char, unsigned long) --> bool", "PendingURL"_a, "TravelType"_a, "bIsSeamlessTravel"_a);
		cl.def("NotifyGoalScored", (void (PlayerControllerWrapper::*)(int)) & PlayerControllerWrapper::NotifyGoalScored, "C++: PlayerControllerWrapper::NotifyGoalScored(int) --> void", "ScoredOnTeam"_a);
		cl.def("eventDestroyed", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::eventDestroyed, "C++: PlayerControllerWrapper::eventDestroyed() --> void");
		cl.def("ShouldBeMuted", (bool (PlayerControllerWrapper::*)(class PlayerControllerWrapper)) & PlayerControllerWrapper::ShouldBeMuted, "C++: PlayerControllerWrapper::ShouldBeMuted(class PlayerControllerWrapper) --> bool", "Other"_a);
		cl.def("IsCommunicationFiltered", (bool (PlayerControllerWrapper::*)(unsigned char, class PlayerControllerWrapper, unsigned long)) & PlayerControllerWrapper::IsCommunicationFiltered, "C++: PlayerControllerWrapper::IsCommunicationFiltered(unsigned char, class PlayerControllerWrapper, unsigned long) --> bool", "Filter"_a, "Other"_a, "bPreset"_a);
		cl.def("RefreshMutedPlayers", (void (PlayerControllerWrapper::*)(unsigned long)) & PlayerControllerWrapper::RefreshMutedPlayers, "C++: PlayerControllerWrapper::RefreshMutedPlayers(unsigned long) --> void", "bForceRefresh"_a);
		cl.def("eventServerUnmutePlayer", (void (PlayerControllerWrapper::*)(struct SteamID&)) & PlayerControllerWrapper::eventServerUnmutePlayer, "C++: PlayerControllerWrapper::eventServerUnmutePlayer(struct SteamID &) --> void", "PlayerNetId"_a);
		cl.def("eventServerMutePlayer", (void (PlayerControllerWrapper::*)(struct SteamID&)) & PlayerControllerWrapper::eventServerMutePlayer, "C++: PlayerControllerWrapper::eventServerMutePlayer(struct SteamID &) --> void", "PlayerNetId"_a);
		cl.def("GameplayUnmutePlayer", (void (PlayerControllerWrapper::*)(struct SteamID&)) & PlayerControllerWrapper::GameplayUnmutePlayer, "C++: PlayerControllerWrapper::GameplayUnmutePlayer(struct SteamID &) --> void", "PlayerNetId"_a);
		cl.def("GameplayMutePlayer", (void (PlayerControllerWrapper::*)(struct SteamID&)) & PlayerControllerWrapper::GameplayMutePlayer, "C++: PlayerControllerWrapper::GameplayMutePlayer(struct SteamID &) --> void", "PlayerNetId"_a);
		cl.def("ServerSetChatFilter", (void (PlayerControllerWrapper::*)(unsigned char)) & PlayerControllerWrapper::ServerSetChatFilter, "C++: PlayerControllerWrapper::ServerSetChatFilter(unsigned char) --> void", "InVoiceFilter"_a);
		cl.def("ServerSetVoiceFilter", (void (PlayerControllerWrapper::*)(unsigned char)) & PlayerControllerWrapper::ServerSetVoiceFilter, "C++: PlayerControllerWrapper::ServerSetVoiceFilter(unsigned char) --> void", "InVoiceFilter"_a);
		cl.def("IsExplictlyMuted", (bool (PlayerControllerWrapper::*)(struct SteamID&)) & PlayerControllerWrapper::IsExplictlyMuted, "C++: PlayerControllerWrapper::IsExplictlyMuted(struct SteamID &) --> bool", "PlayerNetId"_a);
		cl.def("DebugAI", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::DebugAI, "C++: PlayerControllerWrapper::DebugAI() --> void");
		cl.def("SendPendingRPCs", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::SendPendingRPCs, "C++: PlayerControllerWrapper::SendPendingRPCs() --> void");
		cl.def("CanSendMessage", (bool (PlayerControllerWrapper::*)(unsigned long)) & PlayerControllerWrapper::CanSendMessage, "C++: PlayerControllerWrapper::CanSendMessage(unsigned long) --> bool", "bQuickChatMessage"_a);
		cl.def("ClientNotifyChatBanned", (void (PlayerControllerWrapper::*)(unsigned long long)) & PlayerControllerWrapper::ClientNotifyChatBanned, "C++: PlayerControllerWrapper::ClientNotifyChatBanned(unsigned long long) --> void", "ChatBanExpiration"_a);
		cl.def("ClientNotifyChatDisabled", (void (PlayerControllerWrapper::*)(float)) & PlayerControllerWrapper::ClientNotifyChatDisabled, "C++: PlayerControllerWrapper::ClientNotifyChatDisabled(float) --> void", "Time"_a);
		cl.def("ChatMessage_TA", (void (PlayerControllerWrapper::*)(class PlayerReplicationInfoWrapper, std::string, unsigned char, unsigned long)) & PlayerControllerWrapper::ChatMessage_TA, "C++: PlayerControllerWrapper::ChatMessage_TA(class PlayerReplicationInfoWrapper, std::string, unsigned char, unsigned long) --> void", "InPRI"_a, "Message"_a, "ChatChannel"_a, "bPreset"_a);
		cl.def("ServerSayInternal_TA", (void (PlayerControllerWrapper::*)(std::string, unsigned char, unsigned long)) & PlayerControllerWrapper::ServerSayInternal_TA, "C++: PlayerControllerWrapper::ServerSayInternal_TA(std::string, unsigned char, unsigned long) --> void", "Message"_a, "ChatChannel"_a, "bPreset"_a);
		cl.def("ServerSay_TA", (void (PlayerControllerWrapper::*)(std::string, unsigned char, unsigned long)) & PlayerControllerWrapper::ServerSay_TA, "C++: PlayerControllerWrapper::ServerSay_TA(std::string, unsigned char, unsigned long) --> void", "Message"_a, "ChatChannel"_a, "bPreset"_a);
		cl.def("Say_TA2", (void (PlayerControllerWrapper::*)(std::string, unsigned char, struct SteamID&, unsigned long)) & PlayerControllerWrapper::Say_TA2, "C++: PlayerControllerWrapper::Say_TA2(std::string, unsigned char, struct SteamID &, unsigned long) --> void", "Message"_a, "ChatChannel"_a, "Recipient"_a, "bPreset"_a);
		cl.def("CanChatWith", (bool (PlayerControllerWrapper::*)(class PlayerControllerWrapper, unsigned long)) & PlayerControllerWrapper::CanChatWith, "C++: PlayerControllerWrapper::CanChatWith(class PlayerControllerWrapper, unsigned long) --> bool", "Other"_a, "bPreset"_a);
		cl.def("AllowTextMessage", (bool (PlayerControllerWrapper::*)(std::string)) & PlayerControllerWrapper::AllowTextMessage, "C++: PlayerControllerWrapper::AllowTextMessage(std::string) --> bool", "msg"_a);
		cl.def("PushToTalkEnd", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::PushToTalkEnd, "C++: PlayerControllerWrapper::PushToTalkEnd() --> void");
		cl.def("PushToTalk2", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::PushToTalk2, "C++: PlayerControllerWrapper::PushToTalk2() --> void");
		cl.def("HandleJoinGameMigrationCompleted", (void (PlayerControllerWrapper::*)(unsigned long, std::string)) & PlayerControllerWrapper::HandleJoinGameMigrationCompleted, "C++: PlayerControllerWrapper::HandleJoinGameMigrationCompleted(unsigned long, std::string) --> void", "bSuccess"_a, "FailReason"_a);
		cl.def("eventClientUnmutePlayer", (void (PlayerControllerWrapper::*)(struct SteamID&)) & PlayerControllerWrapper::eventClientUnmutePlayer, "C++: PlayerControllerWrapper::eventClientUnmutePlayer(struct SteamID &) --> void", "PlayerNetId"_a);
		cl.def("eventClientMutePlayer", (void (PlayerControllerWrapper::*)(struct SteamID&, unsigned long)) & PlayerControllerWrapper::eventClientMutePlayer, "C++: PlayerControllerWrapper::eventClientMutePlayer(struct SteamID &, unsigned long) --> void", "PlayerNetId"_a, "bAddToMuteList"_a);
		cl.def("ClientSetOnlineStatus", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::ClientSetOnlineStatus, "C++: PlayerControllerWrapper::ClientSetOnlineStatus() --> void");
		cl.def("HandleGameDataSelected", (void (PlayerControllerWrapper::*)(int, int)) & PlayerControllerWrapper::HandleGameDataSelected, "C++: PlayerControllerWrapper::HandleGameDataSelected(int, int) --> void", "PlaylistId"_a, "MutatorIndex"_a);
		cl.def("GetGameEvent", (class GameEventWrapper(PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetGameEvent, "C++: PlayerControllerWrapper::GetGameEvent() --> class GameEventWrapper");
		cl.def("ClientArbitratedMatchEnded", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::ClientArbitratedMatchEnded, "C++: PlayerControllerWrapper::ClientArbitratedMatchEnded() --> void");
		cl.def("BannedKick", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::BannedKick, "C++: PlayerControllerWrapper::BannedKick() --> void");
		cl.def("NoReservationKick", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::NoReservationKick, "C++: PlayerControllerWrapper::NoReservationKick() --> void");
		cl.def("IdleKick2", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::IdleKick2, "C++: PlayerControllerWrapper::IdleKick2() --> void");
		cl.def("ServerReportServer", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::ServerReportServer, "C++: PlayerControllerWrapper::ServerReportServer() --> void");
		cl.def("ClientUseItem", (void (PlayerControllerWrapper::*)(struct Vector&, struct Rotator&)) & PlayerControllerWrapper::ClientUseItem, "C++: PlayerControllerWrapper::ClientUseItem(struct Vector &, struct Rotator &) --> void", "UseLocation"_a, "UseRotation"_a);
		cl.def("ServerTeleportCar", (void (PlayerControllerWrapper::*)(struct Vector&, struct Rotator&)) & PlayerControllerWrapper::ServerTeleportCar, "C++: PlayerControllerWrapper::ServerTeleportCar(struct Vector &, struct Rotator &) --> void", "SpawnLocation"_a, "NewRotation"_a);
		cl.def("eventTeleportCar", (void (PlayerControllerWrapper::*)(struct Vector&, struct Rotator&)) & PlayerControllerWrapper::eventTeleportCar, "C++: PlayerControllerWrapper::eventTeleportCar(struct Vector &, struct Rotator &) --> void", "SpawnLocation"_a, "NewRotation"_a);
		cl.def("ServerUsePickup", (void (PlayerControllerWrapper::*)(class RBActorWrapper)) & PlayerControllerWrapper::ServerUsePickup, "C++: PlayerControllerWrapper::ServerUsePickup(class RBActorWrapper) --> void", "Target"_a);
		cl.def("UsePickup2", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::UsePickup2, "C++: PlayerControllerWrapper::UsePickup2() --> void");
		cl.def("ToggleHandbrake", (void (PlayerControllerWrapper::*)(unsigned long)) & PlayerControllerWrapper::ToggleHandbrake, "C++: PlayerControllerWrapper::ToggleHandbrake(unsigned long) --> void", "bHandbrake"_a);
		cl.def("ToggleBoost", (void (PlayerControllerWrapper::*)(unsigned long)) & PlayerControllerWrapper::ToggleBoost, "C++: PlayerControllerWrapper::ToggleBoost(unsigned long) --> void", "bBoost"_a);
		cl.def("ToggleJump", (void (PlayerControllerWrapper::*)(unsigned long)) & PlayerControllerWrapper::ToggleJump, "C++: PlayerControllerWrapper::ToggleJump(unsigned long) --> void", "bJump"_a);
		cl.def("TargetSelectLeft", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::TargetSelectLeft, "C++: PlayerControllerWrapper::TargetSelectLeft() --> void");
		cl.def("TargetSelectRight", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::TargetSelectRight, "C++: PlayerControllerWrapper::TargetSelectRight() --> void");
		cl.def("ReleaseRearCamera", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::ReleaseRearCamera, "C++: PlayerControllerWrapper::ReleaseRearCamera() --> void");
		cl.def("PressRearCamera", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::PressRearCamera, "C++: PlayerControllerWrapper::PressRearCamera() --> void");
		cl.def("ReleaseSecondaryCamera", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::ReleaseSecondaryCamera, "C++: PlayerControllerWrapper::ReleaseSecondaryCamera() --> void");
		cl.def("PressSecondaryCamera", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::PressSecondaryCamera, "C++: PlayerControllerWrapper::PressSecondaryCamera() --> void");
		cl.def("ReadyUp", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::ReadyUp, "C++: PlayerControllerWrapper::ReadyUp() --> void");
		cl.def("Spectate", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::Spectate, "C++: PlayerControllerWrapper::Spectate() --> void");
		cl.def("ChangeTeam", (void (PlayerControllerWrapper::*)(int)) & PlayerControllerWrapper::ChangeTeam, "C++: PlayerControllerWrapper::ChangeTeam(int) --> void", "TeamNum"_a);
		cl.def("SwitchTeam", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::SwitchTeam, "C++: PlayerControllerWrapper::SwitchTeam() --> void");
		cl.def("SetDefaultCameraMode", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::SetDefaultCameraMode, "C++: PlayerControllerWrapper::SetDefaultCameraMode() --> void");
		cl.def("ResetCameraMode", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::ResetCameraMode, "C++: PlayerControllerWrapper::ResetCameraMode() --> void");
		cl.def("ZeroMoveInput", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::ZeroMoveInput, "C++: PlayerControllerWrapper::ZeroMoveInput() --> void");
		cl.def("PlayerMove", (void (PlayerControllerWrapper::*)(float)) & PlayerControllerWrapper::PlayerMove, "C++: PlayerControllerWrapper::PlayerMove(float) --> void", "DeltaTime"_a);
		cl.def("IgnoreMoveInput", (void (PlayerControllerWrapper::*)(unsigned long)) & PlayerControllerWrapper::IgnoreMoveInput, "C++: PlayerControllerWrapper::IgnoreMoveInput(unsigned long) --> void", "bNewMoveInput"_a);
		cl.def("eventSendClientAdjustment", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::eventSendClientAdjustment, "C++: PlayerControllerWrapper::eventSendClientAdjustment() --> void");
		cl.def("GetPrimaryPlayerController", (class PlayerControllerWrapper(PlayerControllerWrapper::*)()) & PlayerControllerWrapper::GetPrimaryPlayerController, "C++: PlayerControllerWrapper::GetPrimaryPlayerController() --> class PlayerControllerWrapper");
		cl.def("HandleAddBoostComponent", (void (PlayerControllerWrapper::*)(class BoostWrapper)) & PlayerControllerWrapper::HandleAddBoostComponent, "C++: PlayerControllerWrapper::HandleAddBoostComponent(class BoostWrapper) --> void", "Boost"_a);
		cl.def("ReplicateLoadout", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::ReplicateLoadout, "C++: PlayerControllerWrapper::ReplicateLoadout() --> void");
		cl.def("ReplicateCameraRotation", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::ReplicateCameraRotation, "C++: PlayerControllerWrapper::ReplicateCameraRotation() --> void");
		cl.def("SetUsingFreecam", (void (PlayerControllerWrapper::*)(unsigned long)) & PlayerControllerWrapper::SetUsingFreecam, "C++: PlayerControllerWrapper::SetUsingFreecam(unsigned long) --> void", "bFreecam"_a);
		cl.def("SetUsingBehindView", (void (PlayerControllerWrapper::*)(unsigned long)) & PlayerControllerWrapper::SetUsingBehindView, "C++: PlayerControllerWrapper::SetUsingBehindView(unsigned long) --> void", "bBehindView"_a);
		cl.def("SetUsingSecondaryCamera", (void (PlayerControllerWrapper::*)(unsigned long)) & PlayerControllerWrapper::SetUsingSecondaryCamera, "C++: PlayerControllerWrapper::SetUsingSecondaryCamera(unsigned long) --> void", "bSecondaryCamera"_a);
		cl.def("ReplicateCameraSettings", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::ReplicateCameraSettings, "C++: PlayerControllerWrapper::ReplicateCameraSettings() --> void");
		cl.def("HandleControllerLayoutChanged", (void (PlayerControllerWrapper::*)(class PriWrapper)) & PlayerControllerWrapper::HandleControllerLayoutChanged, "C++: PlayerControllerWrapper::HandleControllerLayoutChanged(class PriWrapper) --> void", "InPRI"_a);
		cl.def("HandlePawnTypeChanged", (void (PlayerControllerWrapper::*)(class PriWrapper)) & PlayerControllerWrapper::HandlePawnTypeChanged, "C++: PlayerControllerWrapper::HandlePawnTypeChanged(class PriWrapper) --> void", "InPRI"_a);
		cl.def("HandlePendingViewCarSet", (void (PlayerControllerWrapper::*)(class PriWrapper)) & PlayerControllerWrapper::HandlePendingViewCarSet, "C++: PlayerControllerWrapper::HandlePendingViewCarSet(class PriWrapper) --> void", "InPRI"_a);
		cl.def("HandleReplaceBot", (void (PlayerControllerWrapper::*)(class PriWrapper)) & PlayerControllerWrapper::HandleReplaceBot, "C++: PlayerControllerWrapper::HandleReplaceBot(class PriWrapper) --> void", "InPRI"_a);
		cl.def("HandleTeamChanged", (void (PlayerControllerWrapper::*)(class PriXWrapper)) & PlayerControllerWrapper::HandleTeamChanged, "C++: PlayerControllerWrapper::HandleTeamChanged(class PriXWrapper) --> void", "InPRI"_a);
		cl.def("HandleMatchEnded", (void (PlayerControllerWrapper::*)(class ServerWrapper)) & PlayerControllerWrapper::HandleMatchEnded, "C++: PlayerControllerWrapper::HandleMatchEnded(class ServerWrapper) --> void", "GameEvent"_a);
		cl.def("HandleStartNewRound", (void (PlayerControllerWrapper::*)(class ServerWrapper)) & PlayerControllerWrapper::HandleStartNewRound, "C++: PlayerControllerWrapper::HandleStartNewRound(class ServerWrapper) --> void", "GameEvent"_a);
		cl.def("HandleGameEventChanged", (void (PlayerControllerWrapper::*)(class PriWrapper)) & PlayerControllerWrapper::HandleGameEventChanged, "C++: PlayerControllerWrapper::HandleGameEventChanged(class PriWrapper) --> void", "InPRI"_a);
		cl.def("HandlePRICameraChanged", (void (PlayerControllerWrapper::*)(class PriWrapper)) & PlayerControllerWrapper::HandlePRICameraChanged, "C++: PlayerControllerWrapper::HandlePRICameraChanged(class PriWrapper) --> void", "InPRI"_a);
		cl.def("SetupLightBar", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::SetupLightBar, "C++: PlayerControllerWrapper::SetupLightBar() --> void");
		cl.def("HandlePersistentCameraSet", (void (PlayerControllerWrapper::*)(class PriWrapper)) & PlayerControllerWrapper::HandlePersistentCameraSet, "C++: PlayerControllerWrapper::HandlePersistentCameraSet(class PriWrapper) --> void", "InPRI"_a);
		cl.def("OnReceivedPlayerAndPRI", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::OnReceivedPlayerAndPRI, "C++: PlayerControllerWrapper::OnReceivedPlayerAndPRI() --> void");
		cl.def("UpdateVoiceFilter", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::UpdateVoiceFilter, "C++: PlayerControllerWrapper::UpdateVoiceFilter() --> void");
		cl.def("ReplicateLevelSessionID", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::ReplicateLevelSessionID, "C++: PlayerControllerWrapper::ReplicateLevelSessionID() --> void");
		cl.def("ServerInitInputBuffer", (void (PlayerControllerWrapper::*)(unsigned char)) & PlayerControllerWrapper::ServerInitInputBuffer, "C++: PlayerControllerWrapper::ServerInitInputBuffer(unsigned char) --> void", "Type"_a);
		cl.def("eventReceivedPlayer", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::eventReceivedPlayer, "C++: PlayerControllerWrapper::eventReceivedPlayer() --> void");
		cl.def("eventPostBeginPlay", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::eventPostBeginPlay, "C++: PlayerControllerWrapper::eventPostBeginPlay() --> void");
		cl.def("EventChatMessage", (void (PlayerControllerWrapper::*)(class PlayerControllerWrapper, std::string, unsigned long)) & PlayerControllerWrapper::EventChatMessage, "C++: PlayerControllerWrapper::EventChatMessage(class PlayerControllerWrapper, std::string, unsigned long) --> void", "PC"_a, "Message"_a, "bPreset"_a);
		cl.def("EventResetPlayer", (void (PlayerControllerWrapper::*)(class PlayerControllerWrapper, unsigned long)) & PlayerControllerWrapper::EventResetPlayer, "C++: PlayerControllerWrapper::EventResetPlayer(class PlayerControllerWrapper, unsigned long) --> void", "PC"_a, "bFullReset"_a);
		cl.def("EventSelectBallCamTarget", (void (PlayerControllerWrapper::*)(class PlayerControllerWrapper, int)) & PlayerControllerWrapper::EventSelectBallCamTarget, "C++: PlayerControllerWrapper::EventSelectBallCamTarget(class PlayerControllerWrapper, int) --> void", "PC"_a, "Direction"_a);
		cl.def("EventTrainingEditorActorModified", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::EventTrainingEditorActorModified, "C++: PlayerControllerWrapper::EventTrainingEditorActorModified() --> void");
		cl.def("EventMuteChanged", (void (PlayerControllerWrapper::*)(class PlayerControllerWrapper, struct SteamID&, unsigned long)) & PlayerControllerWrapper::EventMuteChanged, "C++: PlayerControllerWrapper::EventMuteChanged(class PlayerControllerWrapper, struct SteamID &, unsigned long) --> void", "PC"_a, "PlayerID"_a, "bMuted"_a);
		cl.def("EventLaunchControllerApplet", (void (PlayerControllerWrapper::*)()) & PlayerControllerWrapper::EventLaunchControllerApplet, "C++: PlayerControllerWrapper::EventLaunchControllerApplet() --> void");
		cl.def("EventLaunchAccountPicker", (void (PlayerControllerWrapper::*)(int)) & PlayerControllerWrapper::EventLaunchAccountPicker, "C++: PlayerControllerWrapper::EventLaunchAccountPicker(int) --> void", "ControllerId"_a);
	}
	{ // ReplayServerWrapper file: line:4
		pybind11::class_<ReplayServerWrapper, std::shared_ptr<ReplayServerWrapper>, ServerWrapper> cl(M, "ReplayServerWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long, unsigned long, unsigned long>(), pybind11::arg("server"), pybind11::arg("gameinfo"), pybind11::arg("replaydirector"));

		cl.def(pybind11::init([](ReplayServerWrapper const& o) { return new ReplayServerWrapper(o); }));
		cl.def("assign", (class ReplayServerWrapper& (ReplayServerWrapper::*)(class ReplayServerWrapper))& ReplayServerWrapper::operator=, "C++: ReplayServerWrapper::operator=(class ReplayServerWrapper) --> class ReplayServerWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetViewTarget", (class ActorWrapper(ReplayServerWrapper::*)())& ReplayServerWrapper::GetViewTarget, "C++: ReplayServerWrapper::GetViewTarget() --> class ActorWrapper");
		cl.def("GetReplay", (class ReplayWrapper(ReplayServerWrapper::*)())& ReplayServerWrapper::GetReplay, "C++: ReplayServerWrapper::GetReplay() --> class ReplayWrapper");
		cl.def("GetReplayTimeElapsed", (float (ReplayServerWrapper::*)())& ReplayServerWrapper::GetReplayTimeElapsed, "C++: ReplayServerWrapper::GetReplayTimeElapsed() --> float");
		cl.def("GetReplayFPS", (int (ReplayServerWrapper::*)())& ReplayServerWrapper::GetReplayFPS, "C++: ReplayServerWrapper::GetReplayFPS() --> int");
		cl.def("GetCurrentReplayFrame", (int (ReplayServerWrapper::*)())& ReplayServerWrapper::GetCurrentReplayFrame, "C++: ReplayServerWrapper::GetCurrentReplayFrame() --> int");
		cl.def("AddKeyFrame", (void (ReplayServerWrapper::*)(int, std::string))& ReplayServerWrapper::AddKeyFrame, "C++: ReplayServerWrapper::AddKeyFrame(int, std::string) --> void", "frame"_a, "name"_a);
		cl.def("RemoveKeyFrame", (void (ReplayServerWrapper::*)(int))& ReplayServerWrapper::RemoveKeyFrame, "C++: ReplayServerWrapper::RemoveKeyFrame(int) --> void", "frame"_a);
		cl.def("SkipToFrame", (void (ReplayServerWrapper::*)(int))& ReplayServerWrapper::SkipToFrame, "C++: ReplayServerWrapper::SkipToFrame(int) --> void", "frame"_a);
		cl.def("SkipToTime", (void (ReplayServerWrapper::*)(float))& ReplayServerWrapper::SkipToTime, "C++: ReplayServerWrapper::SkipToTime(float) --> void", "time"_a);
		cl.def("StartPlaybackAtFrame", (void (ReplayServerWrapper::*)(int))& ReplayServerWrapper::StartPlaybackAtFrame, "C++: ReplayServerWrapper::StartPlaybackAtFrame(int) --> void", "frame"_a);
		cl.def("StartPlaybackAtTime", (void (ReplayServerWrapper::*)(float))& ReplayServerWrapper::StartPlaybackAtTime, "C++: ReplayServerWrapper::StartPlaybackAtTime(float) --> void", "time"_a);
	}
	{ // StructArrayWrapper file:bakkesmod/wrappers/StructArrayWrapper.h line:27
		pybind11::class_<StructArrayWrapper<RecordedSample>, std::shared_ptr<StructArrayWrapper<RecordedSample>>> cl(M, "StructArrayWrapper_RecordedSample_t");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](StructArrayWrapper<RecordedSample> const& o) { return new StructArrayWrapper<RecordedSample>(o); }));
		cl.def("assign", (class StructArrayWrapper<struct RecordedSample> &(StructArrayWrapper<RecordedSample>::*)(class StructArrayWrapper<struct RecordedSample>)) & StructArrayWrapper<RecordedSample>::operator=, "C++: StructArrayWrapper<RecordedSample>::operator=(class StructArrayWrapper<struct RecordedSample>) --> class StructArrayWrapper<struct RecordedSample> &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("Count", (int (StructArrayWrapper<RecordedSample>::*)()) & StructArrayWrapper<RecordedSample>::Count, "C++: StructArrayWrapper<RecordedSample>::Count() --> int");
		cl.def("Get", (struct RecordedSample(StructArrayWrapper<RecordedSample>::*)(int)) & StructArrayWrapper<RecordedSample>::Get, "C++: StructArrayWrapper<RecordedSample>::Get(int) --> struct RecordedSample", "index"_a);
	}
	{ // StructArrayWrapper file:bakkesmod/wrappers/StructArrayWrapper.h line:28
		pybind11::class_<StructArrayWrapper<ProfileCameraSettings>, std::shared_ptr<StructArrayWrapper<ProfileCameraSettings>>> cl(M, "StructArrayWrapper_ProfileCameraSettings_t");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](StructArrayWrapper<ProfileCameraSettings> const& o) { return new StructArrayWrapper<ProfileCameraSettings>(o); }));
		cl.def("assign", (class StructArrayWrapper<struct ProfileCameraSettings> &(StructArrayWrapper<ProfileCameraSettings>::*)(class StructArrayWrapper<struct ProfileCameraSettings>)) & StructArrayWrapper<ProfileCameraSettings>::operator=, "C++: StructArrayWrapper<ProfileCameraSettings>::operator=(class StructArrayWrapper<struct ProfileCameraSettings>) --> class StructArrayWrapper<struct ProfileCameraSettings> &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("Count", (int (StructArrayWrapper<ProfileCameraSettings>::*)()) & StructArrayWrapper<ProfileCameraSettings>::Count, "C++: StructArrayWrapper<ProfileCameraSettings>::Count() --> int");
		cl.def("Get", (struct ProfileCameraSettings(StructArrayWrapper<ProfileCameraSettings>::*)(int)) & StructArrayWrapper<ProfileCameraSettings>::Get, "C++: StructArrayWrapper<ProfileCameraSettings>::Get(int) --> struct ProfileCameraSettings", "index"_a);
	}
	{ // StructArrayWrapper file:bakkesmod/wrappers/StructArrayWrapper.h line:29
		pybind11::class_<StructArrayWrapper<SteamID>, std::shared_ptr<StructArrayWrapper<SteamID>>> cl(M, "StructArrayWrapper_SteamID_t");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](StructArrayWrapper<SteamID> const& o) { return new StructArrayWrapper<SteamID>(o); }));
		cl.def("assign", (class StructArrayWrapper<struct SteamID> &(StructArrayWrapper<SteamID>::*)(class StructArrayWrapper<struct SteamID>)) & StructArrayWrapper<SteamID>::operator=, "C++: StructArrayWrapper<SteamID>::operator=(class StructArrayWrapper<struct SteamID>) --> class StructArrayWrapper<struct SteamID> &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("Count", (int (StructArrayWrapper<SteamID>::*)()) & StructArrayWrapper<SteamID>::Count, "C++: StructArrayWrapper<SteamID>::Count() --> int");
		cl.def("Get", (struct SteamID(StructArrayWrapper<SteamID>::*)(int)) & StructArrayWrapper<SteamID>::Get, "C++: StructArrayWrapper<SteamID>::Get(int) --> struct SteamID", "index"_a);
	}
	{ // StructArrayWrapper file:bakkesmod/wrappers/StructArrayWrapper.h line:30
		pybind11::class_<StructArrayWrapper<LinearColor>, std::shared_ptr<StructArrayWrapper<LinearColor>>> cl(M, "StructArrayWrapper_LinearColor_t");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](StructArrayWrapper<LinearColor> const& o) { return new StructArrayWrapper<LinearColor>(o); }));
		cl.def("assign", (class StructArrayWrapper<struct LinearColor> &(StructArrayWrapper<LinearColor>::*)(class StructArrayWrapper<struct LinearColor>)) & StructArrayWrapper<LinearColor>::operator=, "C++: StructArrayWrapper<LinearColor>::operator=(class StructArrayWrapper<struct LinearColor>) --> class StructArrayWrapper<struct LinearColor> &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("Count", (int (StructArrayWrapper<LinearColor>::*)()) & StructArrayWrapper<LinearColor>::Count, "C++: StructArrayWrapper<LinearColor>::Count() --> int");
		cl.def("Get", (struct LinearColor(StructArrayWrapper<LinearColor>::*)(int)) & StructArrayWrapper<LinearColor>::Get, "C++: StructArrayWrapper<LinearColor>::Get(int) --> struct LinearColor", "index"_a);
	}
	{ // VehicleSimWrapper file:bakkesmod/wrappers/GameObject/CarComponent/VehicleSimWrapper.h line:10
		pybind11::class_<VehicleSimWrapper, std::shared_ptr<VehicleSimWrapper>, ObjectWrapper> cl(M, "VehicleSimWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](VehicleSimWrapper const& o) { return new VehicleSimWrapper(o); }));
		cl.def("assign", (class VehicleSimWrapper& (VehicleSimWrapper::*)(class VehicleSimWrapper)) & VehicleSimWrapper::operator=, "C++: VehicleSimWrapper::operator=(class VehicleSimWrapper) --> class VehicleSimWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetWheels", (class ArrayWrapper<class WheelWrapper>(VehicleSimWrapper::*)()) & VehicleSimWrapper::GetWheels, "C++: VehicleSimWrapper::GetWheels() --> class ArrayWrapper<class WheelWrapper>");
		cl.def("GetDriveTorque", (float (VehicleSimWrapper::*)()) & VehicleSimWrapper::GetDriveTorque, "C++: VehicleSimWrapper::GetDriveTorque() --> float");
		cl.def("SetDriveTorque", (void (VehicleSimWrapper::*)(float)) & VehicleSimWrapper::SetDriveTorque, "C++: VehicleSimWrapper::SetDriveTorque(float) --> void", "newDriveTorque"_a);
		cl.def("GetBrakeTorque", (float (VehicleSimWrapper::*)()) & VehicleSimWrapper::GetBrakeTorque, "C++: VehicleSimWrapper::GetBrakeTorque() --> float");
		cl.def("SetBrakeTorque", (void (VehicleSimWrapper::*)(float)) & VehicleSimWrapper::SetBrakeTorque, "C++: VehicleSimWrapper::SetBrakeTorque(float) --> void", "newBrakeTorque"_a);
		cl.def("GetStopThreshold", (float (VehicleSimWrapper::*)()) & VehicleSimWrapper::GetStopThreshold, "C++: VehicleSimWrapper::GetStopThreshold() --> float");
		cl.def("SetStopThreshold", (void (VehicleSimWrapper::*)(float)) & VehicleSimWrapper::SetStopThreshold, "C++: VehicleSimWrapper::SetStopThreshold(float) --> void", "newStopThreshold"_a);
		cl.def("GetIdleBrakeFactor", (float (VehicleSimWrapper::*)()) & VehicleSimWrapper::GetIdleBrakeFactor, "C++: VehicleSimWrapper::GetIdleBrakeFactor() --> float");
		cl.def("SetIdleBrakeFactor", (void (VehicleSimWrapper::*)(float)) & VehicleSimWrapper::SetIdleBrakeFactor, "C++: VehicleSimWrapper::SetIdleBrakeFactor(float) --> void", "newIdleBrakeFactor"_a);
		cl.def("GetOppositeBrakeFactor", (float (VehicleSimWrapper::*)()) & VehicleSimWrapper::GetOppositeBrakeFactor, "C++: VehicleSimWrapper::GetOppositeBrakeFactor() --> float");
		cl.def("SetOppositeBrakeFactor", (void (VehicleSimWrapper::*)(float)) & VehicleSimWrapper::SetOppositeBrakeFactor, "C++: VehicleSimWrapper::SetOppositeBrakeFactor(float) --> void", "newOppositeBrakeFactor"_a);
		cl.def("GetbUseAckermannSteering", (unsigned long (VehicleSimWrapper::*)()) & VehicleSimWrapper::GetbUseAckermannSteering, "C++: VehicleSimWrapper::GetbUseAckermannSteering() --> unsigned long");
		cl.def("SetbUseAckermannSteering", (void (VehicleSimWrapper::*)(unsigned long)) & VehicleSimWrapper::SetbUseAckermannSteering, "C++: VehicleSimWrapper::SetbUseAckermannSteering(unsigned long) --> void", "newbUseAckermannSteering"_a);
		cl.def("GetbWasAttached", (unsigned long (VehicleSimWrapper::*)()) & VehicleSimWrapper::GetbWasAttached, "C++: VehicleSimWrapper::GetbWasAttached() --> unsigned long");
		cl.def("SetbWasAttached", (void (VehicleSimWrapper::*)(unsigned long)) & VehicleSimWrapper::SetbWasAttached, "C++: VehicleSimWrapper::SetbWasAttached(unsigned long) --> void", "newbWasAttached"_a);
		cl.def("GetOutputThrottle", (float (VehicleSimWrapper::*)()) & VehicleSimWrapper::GetOutputThrottle, "C++: VehicleSimWrapper::GetOutputThrottle() --> float");
		cl.def("SetOutputThrottle", (void (VehicleSimWrapper::*)(float)) & VehicleSimWrapper::SetOutputThrottle, "C++: VehicleSimWrapper::SetOutputThrottle(float) --> void", "newOutputThrottle"_a);
		cl.def("GetOutputSteer", (float (VehicleSimWrapper::*)()) & VehicleSimWrapper::GetOutputSteer, "C++: VehicleSimWrapper::GetOutputSteer() --> float");
		cl.def("SetOutputSteer", (void (VehicleSimWrapper::*)(float)) & VehicleSimWrapper::SetOutputSteer, "C++: VehicleSimWrapper::SetOutputSteer(float) --> void", "newOutputSteer"_a);
		cl.def("GetOutputBrake", (float (VehicleSimWrapper::*)()) & VehicleSimWrapper::GetOutputBrake, "C++: VehicleSimWrapper::GetOutputBrake() --> float");
		cl.def("SetOutputBrake", (void (VehicleSimWrapper::*)(float)) & VehicleSimWrapper::SetOutputBrake, "C++: VehicleSimWrapper::SetOutputBrake(float) --> void", "newOutputBrake"_a);
		cl.def("GetOutputHandbrake", (float (VehicleSimWrapper::*)()) & VehicleSimWrapper::GetOutputHandbrake, "C++: VehicleSimWrapper::GetOutputHandbrake() --> float");
		cl.def("SetOutputHandbrake", (void (VehicleSimWrapper::*)(float)) & VehicleSimWrapper::SetOutputHandbrake, "C++: VehicleSimWrapper::SetOutputHandbrake(float) --> void", "newOutputHandbrake"_a);
		cl.def("GetVehicle", (class VehicleWrapper(VehicleSimWrapper::*)()) & VehicleSimWrapper::GetVehicle, "C++: VehicleSimWrapper::GetVehicle() --> class VehicleWrapper");
		cl.def("SetVehicle", (void (VehicleSimWrapper::*)(class VehicleWrapper)) & VehicleSimWrapper::SetVehicle, "C++: VehicleSimWrapper::SetVehicle(class VehicleWrapper) --> void", "newVehicle"_a);
		cl.def("GetCar", (class CarWrapper(VehicleSimWrapper::*)()) & VehicleSimWrapper::GetCar, "C++: VehicleSimWrapper::GetCar() --> class CarWrapper");
		cl.def("SetCar", (void (VehicleSimWrapper::*)(class CarWrapper)) & VehicleSimWrapper::SetCar, "C++: VehicleSimWrapper::SetCar(class CarWrapper) --> void", "newCar"_a);
		cl.def("GetSteeringSensitivity", (float (VehicleSimWrapper::*)()) & VehicleSimWrapper::GetSteeringSensitivity, "C++: VehicleSimWrapper::GetSteeringSensitivity() --> float");
		cl.def("SetSteeringSensitivity", (void (VehicleSimWrapper::*)(float)) & VehicleSimWrapper::SetSteeringSensitivity, "C++: VehicleSimWrapper::SetSteeringSensitivity(float) --> void", "newSteeringSensitivity"_a);
	}
	{ // StatGraphWrapper file: line:9
		pybind11::class_<StatGraphWrapper, std::shared_ptr<StatGraphWrapper>, ObjectWrapper> cl(M, "StatGraphWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](StatGraphWrapper const& o) { return new StatGraphWrapper(o); }));
		cl.def("assign", (class StatGraphWrapper& (StatGraphWrapper::*)(class StatGraphWrapper)) & StatGraphWrapper::operator=, "C++: StatGraphWrapper::operator=(class StatGraphWrapper) --> class StatGraphWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetRecordSettings", (class SampleRecordSettingsWrapper(StatGraphWrapper::*)()) & StatGraphWrapper::GetRecordSettings, "C++: StatGraphWrapper::GetRecordSettings() --> class SampleRecordSettingsWrapper");
		cl.def("SetRecordSettings", (void (StatGraphWrapper::*)(class SampleRecordSettingsWrapper)) & StatGraphWrapper::SetRecordSettings, "C++: StatGraphWrapper::SetRecordSettings(class SampleRecordSettingsWrapper) --> void", "newRecordSettings"_a);
		cl.def("GetLastTickTime", (double (StatGraphWrapper::*)()) & StatGraphWrapper::GetLastTickTime, "C++: StatGraphWrapper::GetLastTickTime() --> double");
		cl.def("SetLastTickTime", (void (StatGraphWrapper::*)(double)) & StatGraphWrapper::SetLastTickTime, "C++: StatGraphWrapper::SetLastTickTime(double) --> void", "newLastTickTime"_a);
		cl.def("GetSampleHistories", (class ArrayWrapper<class SampleHistoryWrapper>(StatGraphWrapper::*)()) & StatGraphWrapper::GetSampleHistories, "C++: StatGraphWrapper::GetSampleHistories() --> class ArrayWrapper<class SampleHistoryWrapper>");
		cl.def("StopDrawing", (void (StatGraphWrapper::*)()) & StatGraphWrapper::StopDrawing, "C++: StatGraphWrapper::StopDrawing() --> void");
		cl.def("CreateSampleHistory", (class SampleHistoryWrapper(StatGraphWrapper::*)(std::string)) & StatGraphWrapper::CreateSampleHistory, "C++: StatGraphWrapper::CreateSampleHistory(std::string) --> class SampleHistoryWrapper", "Title"_a);
		cl.def("AddSampleHistory", (class SampleHistoryWrapper(StatGraphWrapper::*)(class SampleHistoryWrapper)) & StatGraphWrapper::AddSampleHistory, "C++: StatGraphWrapper::AddSampleHistory(class SampleHistoryWrapper) --> class SampleHistoryWrapper", "History"_a);
		cl.def("eventConstruct", (void (StatGraphWrapper::*)()) & StatGraphWrapper::eventConstruct, "C++: StatGraphWrapper::eventConstruct() --> void");
	}
	{ // PerfStatGraphWrapper file:bakkesmod/wrappers/GameObject/PerformanceStats/PerfStatGraphWrapper.h line:8
		pybind11::class_<PerfStatGraphWrapper, std::shared_ptr<PerfStatGraphWrapper>, StatGraphWrapper> cl(M, "PerfStatGraphWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](PerfStatGraphWrapper const& o) { return new PerfStatGraphWrapper(o); }));
		cl.def("assign", (class PerfStatGraphWrapper& (PerfStatGraphWrapper::*)(class PerfStatGraphWrapper)) & PerfStatGraphWrapper::operator=, "C++: PerfStatGraphWrapper::operator=(class PerfStatGraphWrapper) --> class PerfStatGraphWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetFPS", (class SampleHistoryWrapper(PerfStatGraphWrapper::*)()) & PerfStatGraphWrapper::GetFPS, "C++: PerfStatGraphWrapper::GetFPS() --> class SampleHistoryWrapper");
		cl.def("SetFPS", (void (PerfStatGraphWrapper::*)(class SampleHistoryWrapper)) & PerfStatGraphWrapper::SetFPS, "C++: PerfStatGraphWrapper::SetFPS(class SampleHistoryWrapper) --> void", "newFPS"_a);
		cl.def("GetFrameTime", (class SampleHistoryWrapper(PerfStatGraphWrapper::*)()) & PerfStatGraphWrapper::GetFrameTime, "C++: PerfStatGraphWrapper::GetFrameTime() --> class SampleHistoryWrapper");
		cl.def("SetFrameTime", (void (PerfStatGraphWrapper::*)(class SampleHistoryWrapper)) & PerfStatGraphWrapper::SetFrameTime, "C++: PerfStatGraphWrapper::SetFrameTime(class SampleHistoryWrapper) --> void", "newFrameTime"_a);
		cl.def("GetGameThreadTime", (class SampleHistoryWrapper(PerfStatGraphWrapper::*)()) & PerfStatGraphWrapper::GetGameThreadTime, "C++: PerfStatGraphWrapper::GetGameThreadTime() --> class SampleHistoryWrapper");
		cl.def("SetGameThreadTime", (void (PerfStatGraphWrapper::*)(class SampleHistoryWrapper)) & PerfStatGraphWrapper::SetGameThreadTime, "C++: PerfStatGraphWrapper::SetGameThreadTime(class SampleHistoryWrapper) --> void", "newGameThreadTime"_a);
		cl.def("GetRenderThreadTime", (class SampleHistoryWrapper(PerfStatGraphWrapper::*)()) & PerfStatGraphWrapper::GetRenderThreadTime, "C++: PerfStatGraphWrapper::GetRenderThreadTime() --> class SampleHistoryWrapper");
		cl.def("SetRenderThreadTime", (void (PerfStatGraphWrapper::*)(class SampleHistoryWrapper)) & PerfStatGraphWrapper::SetRenderThreadTime, "C++: PerfStatGraphWrapper::SetRenderThreadTime(class SampleHistoryWrapper) --> void", "newRenderThreadTime"_a);
		cl.def("GetGPUFrameTime", (class SampleHistoryWrapper(PerfStatGraphWrapper::*)()) & PerfStatGraphWrapper::GetGPUFrameTime, "C++: PerfStatGraphWrapper::GetGPUFrameTime() --> class SampleHistoryWrapper");
		cl.def("SetGPUFrameTime", (void (PerfStatGraphWrapper::*)(class SampleHistoryWrapper)) & PerfStatGraphWrapper::SetGPUFrameTime, "C++: PerfStatGraphWrapper::SetGPUFrameTime(class SampleHistoryWrapper) --> void", "newGPUFrameTime"_a);
		cl.def("GetFrameTimeHistories", (class ArrayWrapper<class SampleHistoryWrapper>(PerfStatGraphWrapper::*)()) & PerfStatGraphWrapper::GetFrameTimeHistories, "C++: PerfStatGraphWrapper::GetFrameTimeHistories() --> class ArrayWrapper<class SampleHistoryWrapper>");
		cl.def("GetMaxFPS", (float (PerfStatGraphWrapper::*)()) & PerfStatGraphWrapper::GetMaxFPS, "C++: PerfStatGraphWrapper::GetMaxFPS() --> float");
		cl.def("SetMaxFPS", (void (PerfStatGraphWrapper::*)(float)) & PerfStatGraphWrapper::SetMaxFPS, "C++: PerfStatGraphWrapper::SetMaxFPS(float) --> void", "newMaxFPS"_a);
		cl.def("GetTargetFPS", (float (PerfStatGraphWrapper::*)()) & PerfStatGraphWrapper::GetTargetFPS, "C++: PerfStatGraphWrapper::GetTargetFPS() --> float");
		cl.def("SetTargetFPS", (void (PerfStatGraphWrapper::*)(float)) & PerfStatGraphWrapper::SetTargetFPS, "C++: PerfStatGraphWrapper::SetTargetFPS(float) --> void", "newTargetFPS"_a);
		cl.def("eventUpdateGraphRanges", (void (PerfStatGraphWrapper::*)()) & PerfStatGraphWrapper::eventUpdateGraphRanges, "C++: PerfStatGraphWrapper::eventUpdateGraphRanges() --> void");
		cl.def("CreateFrameTimeHistory", (class SampleHistoryWrapper(PerfStatGraphWrapper::*)(std::string)) & PerfStatGraphWrapper::CreateFrameTimeHistory, "C++: PerfStatGraphWrapper::CreateFrameTimeHistory(std::string) --> class SampleHistoryWrapper", "Title"_a);
		cl.def("CreateFpsHistory", (class SampleHistoryWrapper(PerfStatGraphWrapper::*)(std::string)) & PerfStatGraphWrapper::CreateFpsHistory, "C++: PerfStatGraphWrapper::CreateFpsHistory(std::string) --> class SampleHistoryWrapper", "Title"_a);
		cl.def("eventConstruct", (void (PerfStatGraphWrapper::*)()) & PerfStatGraphWrapper::eventConstruct, "C++: PerfStatGraphWrapper::eventConstruct() --> void");
	}
	{ // InputBufferGraphWrapper file:bakkesmod/wrappers/GameObject/PerformanceStats/InputBufferGraphWrapper.h line:8
		pybind11::class_<InputBufferGraphWrapper, std::shared_ptr<InputBufferGraphWrapper>, StatGraphWrapper> cl(M, "InputBufferGraphWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](InputBufferGraphWrapper const& o) { return new InputBufferGraphWrapper(o); }));
		cl.def("assign", (class InputBufferGraphWrapper& (InputBufferGraphWrapper::*)(class InputBufferGraphWrapper)) & InputBufferGraphWrapper::operator=, "C++: InputBufferGraphWrapper::operator=(class InputBufferGraphWrapper) --> class InputBufferGraphWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetBuffer", (class SampleHistoryWrapper(InputBufferGraphWrapper::*)()) & InputBufferGraphWrapper::GetBuffer, "C++: InputBufferGraphWrapper::GetBuffer() --> class SampleHistoryWrapper");
		cl.def("SetBuffer", (void (InputBufferGraphWrapper::*)(class SampleHistoryWrapper)) & InputBufferGraphWrapper::SetBuffer, "C++: InputBufferGraphWrapper::SetBuffer(class SampleHistoryWrapper) --> void", "newBuffer"_a);
		cl.def("GetBufferTarget", (class SampleHistoryWrapper(InputBufferGraphWrapper::*)()) & InputBufferGraphWrapper::GetBufferTarget, "C++: InputBufferGraphWrapper::GetBufferTarget() --> class SampleHistoryWrapper");
		cl.def("SetBufferTarget", (void (InputBufferGraphWrapper::*)(class SampleHistoryWrapper)) & InputBufferGraphWrapper::SetBufferTarget, "C++: InputBufferGraphWrapper::SetBufferTarget(class SampleHistoryWrapper) --> void", "newBufferTarget"_a);
		cl.def("GetOverUnderFrames", (class SampleHistoryWrapper(InputBufferGraphWrapper::*)()) & InputBufferGraphWrapper::GetOverUnderFrames, "C++: InputBufferGraphWrapper::GetOverUnderFrames() --> class SampleHistoryWrapper");
		cl.def("SetOverUnderFrames", (void (InputBufferGraphWrapper::*)(class SampleHistoryWrapper)) & InputBufferGraphWrapper::SetOverUnderFrames, "C++: InputBufferGraphWrapper::SetOverUnderFrames(class SampleHistoryWrapper) --> void", "newOverUnderFrames"_a);
		cl.def("GetPhysicsRate", (class SampleHistoryWrapper(InputBufferGraphWrapper::*)()) & InputBufferGraphWrapper::GetPhysicsRate, "C++: InputBufferGraphWrapper::GetPhysicsRate() --> class SampleHistoryWrapper");
		cl.def("SetPhysicsRate", (void (InputBufferGraphWrapper::*)(class SampleHistoryWrapper)) & InputBufferGraphWrapper::SetPhysicsRate, "C++: InputBufferGraphWrapper::SetPhysicsRate(class SampleHistoryWrapper) --> void", "newPhysicsRate"_a);
		cl.def("GetMaxPhysicsRate", (float (InputBufferGraphWrapper::*)()) & InputBufferGraphWrapper::GetMaxPhysicsRate, "C++: InputBufferGraphWrapper::GetMaxPhysicsRate() --> float");
		cl.def("SetMaxPhysicsRate", (void (InputBufferGraphWrapper::*)(float)) & InputBufferGraphWrapper::SetMaxPhysicsRate, "C++: InputBufferGraphWrapper::SetMaxPhysicsRate(float) --> void", "newMaxPhysicsRate"_a);
		cl.def("GetMinPhysicsRate", (float (InputBufferGraphWrapper::*)()) & InputBufferGraphWrapper::GetMinPhysicsRate, "C++: InputBufferGraphWrapper::GetMinPhysicsRate() --> float");
		cl.def("SetMinPhysicsRate", (void (InputBufferGraphWrapper::*)(float)) & InputBufferGraphWrapper::SetMinPhysicsRate, "C++: InputBufferGraphWrapper::SetMinPhysicsRate(float) --> void", "newMinPhysicsRate"_a);
		cl.def("CreateBufferHistory", (class SampleHistoryWrapper(InputBufferGraphWrapper::*)(std::string)) & InputBufferGraphWrapper::CreateBufferHistory, "C++: InputBufferGraphWrapper::CreateBufferHistory(std::string) --> class SampleHistoryWrapper", "Title"_a);
		cl.def("eventConstruct", (void (InputBufferGraphWrapper::*)()) & InputBufferGraphWrapper::eventConstruct, "C++: InputBufferGraphWrapper::eventConstruct() --> void");
	}
	{ // NetStatGraphWrapper file:bakkesmod/wrappers/GameObject/PerformanceStats/NetStatGraphWrapper.h line:8
		pybind11::class_<NetStatGraphWrapper, std::shared_ptr<NetStatGraphWrapper>, StatGraphWrapper> cl(M, "NetStatGraphWrapper");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](NetStatGraphWrapper const& o) { return new NetStatGraphWrapper(o); }));
		cl.def("assign", (class NetStatGraphWrapper& (NetStatGraphWrapper::*)(class NetStatGraphWrapper)) & NetStatGraphWrapper::operator=, "C++: NetStatGraphWrapper::operator=(class NetStatGraphWrapper) --> class NetStatGraphWrapper &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("GetPacketsOut", (class SampleHistoryWrapper(NetStatGraphWrapper::*)()) & NetStatGraphWrapper::GetPacketsOut, "C++: NetStatGraphWrapper::GetPacketsOut() --> class SampleHistoryWrapper");
		cl.def("SetPacketsOut", (void (NetStatGraphWrapper::*)(class SampleHistoryWrapper)) & NetStatGraphWrapper::SetPacketsOut, "C++: NetStatGraphWrapper::SetPacketsOut(class SampleHistoryWrapper) --> void", "newPacketsOut"_a);
		cl.def("GetPacketsIn", (class SampleHistoryWrapper(NetStatGraphWrapper::*)()) & NetStatGraphWrapper::GetPacketsIn, "C++: NetStatGraphWrapper::GetPacketsIn() --> class SampleHistoryWrapper");
		cl.def("SetPacketsIn", (void (NetStatGraphWrapper::*)(class SampleHistoryWrapper)) & NetStatGraphWrapper::SetPacketsIn, "C++: NetStatGraphWrapper::SetPacketsIn(class SampleHistoryWrapper) --> void", "newPacketsIn"_a);
		cl.def("GetLostPacketsOut", (class SampleHistoryWrapper(NetStatGraphWrapper::*)()) & NetStatGraphWrapper::GetLostPacketsOut, "C++: NetStatGraphWrapper::GetLostPacketsOut() --> class SampleHistoryWrapper");
		cl.def("SetLostPacketsOut", (void (NetStatGraphWrapper::*)(class SampleHistoryWrapper)) & NetStatGraphWrapper::SetLostPacketsOut, "C++: NetStatGraphWrapper::SetLostPacketsOut(class SampleHistoryWrapper) --> void", "newLostPacketsOut"_a);
		cl.def("GetLostPacketsIn", (class SampleHistoryWrapper(NetStatGraphWrapper::*)()) & NetStatGraphWrapper::GetLostPacketsIn, "C++: NetStatGraphWrapper::GetLostPacketsIn() --> class SampleHistoryWrapper");
		cl.def("SetLostPacketsIn", (void (NetStatGraphWrapper::*)(class SampleHistoryWrapper)) & NetStatGraphWrapper::SetLostPacketsIn, "C++: NetStatGraphWrapper::SetLostPacketsIn(class SampleHistoryWrapper) --> void", "newLostPacketsIn"_a);
		cl.def("GetBytesOut", (class SampleHistoryWrapper(NetStatGraphWrapper::*)()) & NetStatGraphWrapper::GetBytesOut, "C++: NetStatGraphWrapper::GetBytesOut() --> class SampleHistoryWrapper");
		cl.def("SetBytesOut", (void (NetStatGraphWrapper::*)(class SampleHistoryWrapper)) & NetStatGraphWrapper::SetBytesOut, "C++: NetStatGraphWrapper::SetBytesOut(class SampleHistoryWrapper) --> void", "newBytesOut"_a);
		cl.def("GetBytesIn", (class SampleHistoryWrapper(NetStatGraphWrapper::*)()) & NetStatGraphWrapper::GetBytesIn, "C++: NetStatGraphWrapper::GetBytesIn() --> class SampleHistoryWrapper");
		cl.def("SetBytesIn", (void (NetStatGraphWrapper::*)(class SampleHistoryWrapper)) & NetStatGraphWrapper::SetBytesIn, "C++: NetStatGraphWrapper::SetBytesIn(class SampleHistoryWrapper) --> void", "newBytesIn"_a);
		cl.def("GetLatency", (class SampleHistoryWrapper(NetStatGraphWrapper::*)()) & NetStatGraphWrapper::GetLatency, "C++: NetStatGraphWrapper::GetLatency() --> class SampleHistoryWrapper");
		cl.def("SetLatency", (void (NetStatGraphWrapper::*)(class SampleHistoryWrapper)) & NetStatGraphWrapper::SetLatency, "C++: NetStatGraphWrapper::SetLatency(class SampleHistoryWrapper) --> void", "newLatency"_a);
		cl.def("GetExpectedOutPacketRate", (float (NetStatGraphWrapper::*)()) & NetStatGraphWrapper::GetExpectedOutPacketRate, "C++: NetStatGraphWrapper::GetExpectedOutPacketRate() --> float");
		cl.def("SetExpectedOutPacketRate", (void (NetStatGraphWrapper::*)(float)) & NetStatGraphWrapper::SetExpectedOutPacketRate, "C++: NetStatGraphWrapper::SetExpectedOutPacketRate(float) --> void", "newExpectedOutPacketRate"_a);
		cl.def("GetExpectedInPacketRate", (float (NetStatGraphWrapper::*)()) & NetStatGraphWrapper::GetExpectedInPacketRate, "C++: NetStatGraphWrapper::GetExpectedInPacketRate() --> float");
		cl.def("SetExpectedInPacketRate", (void (NetStatGraphWrapper::*)(float)) & NetStatGraphWrapper::SetExpectedInPacketRate, "C++: NetStatGraphWrapper::SetExpectedInPacketRate(float) --> void", "newExpectedInPacketRate"_a);
		cl.def("GetMaxBytesRate", (float (NetStatGraphWrapper::*)()) & NetStatGraphWrapper::GetMaxBytesRate, "C++: NetStatGraphWrapper::GetMaxBytesRate() --> float");
		cl.def("SetMaxBytesRate", (void (NetStatGraphWrapper::*)(float)) & NetStatGraphWrapper::SetMaxBytesRate, "C++: NetStatGraphWrapper::SetMaxBytesRate(float) --> void", "newMaxBytesRate"_a);
		cl.def("eventUpdateGraphRanges", (void (NetStatGraphWrapper::*)()) & NetStatGraphWrapper::eventUpdateGraphRanges, "C++: NetStatGraphWrapper::eventUpdateGraphRanges() --> void");
		cl.def("CreateBytesSummary", (class SampleHistoryWrapper(NetStatGraphWrapper::*)(std::string)) & NetStatGraphWrapper::CreateBytesSummary, "C++: NetStatGraphWrapper::CreateBytesSummary(std::string) --> class SampleHistoryWrapper", "Title"_a);
		cl.def("CreateLossSummary", (class SampleHistoryWrapper(NetStatGraphWrapper::*)(std::string)) & NetStatGraphWrapper::CreateLossSummary, "C++: NetStatGraphWrapper::CreateLossSummary(std::string) --> class SampleHistoryWrapper", "Title"_a);
		cl.def("CreatePktSummary", (class SampleHistoryWrapper(NetStatGraphWrapper::*)(std::string)) & NetStatGraphWrapper::CreatePktSummary, "C++: NetStatGraphWrapper::CreatePktSummary(std::string) --> class SampleHistoryWrapper", "Title"_a);
		cl.def("eventConstruct", (void (NetStatGraphWrapper::*)()) & NetStatGraphWrapper::eventConstruct, "C++: NetStatGraphWrapper::eventConstruct() --> void");
	}
	{ // ArrayWrapper file:bakkesmod/wrappers/arraywrapper.h line:53
		pybind11::class_<ArrayWrapper<GoalWrapper>, std::shared_ptr<ArrayWrapper<GoalWrapper>>> cl(M, "ArrayWrapper_GoalWrapper_t");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](ArrayWrapper<GoalWrapper> const& o) { return new ArrayWrapper<GoalWrapper>(o); }));
		cl.def("assign", (class ArrayWrapper<class GoalWrapper> &(ArrayWrapper<GoalWrapper>::*)(class ArrayWrapper<class GoalWrapper>)) & ArrayWrapper<GoalWrapper>::operator=, "C++: ArrayWrapper<GoalWrapper>::operator=(class ArrayWrapper<class GoalWrapper>) --> class ArrayWrapper<class GoalWrapper> &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("Count", (int (ArrayWrapper<GoalWrapper>::*)()) & ArrayWrapper<GoalWrapper>::Count, "C++: ArrayWrapper<GoalWrapper>::Count() --> int");
		cl.def("Get", (class GoalWrapper(ArrayWrapper<GoalWrapper>::*)(int)) & ArrayWrapper<GoalWrapper>::Get, "C++: ArrayWrapper<GoalWrapper>::Get(int) --> class GoalWrapper", "index"_a);
	}
	{ // ArrayWrapper file:bakkesmod/wrappers/arraywrapper.h line:55
		pybind11::class_<ArrayWrapper<SampleHistoryWrapper>, std::shared_ptr<ArrayWrapper<SampleHistoryWrapper>>> cl(M, "ArrayWrapper_SampleHistoryWrapper_t");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](ArrayWrapper<SampleHistoryWrapper> const& o) { return new ArrayWrapper<SampleHistoryWrapper>(o); }));
		cl.def("assign", (class ArrayWrapper<class SampleHistoryWrapper> &(ArrayWrapper<SampleHistoryWrapper>::*)(class ArrayWrapper<class SampleHistoryWrapper>)) & ArrayWrapper<SampleHistoryWrapper>::operator=, "C++: ArrayWrapper<SampleHistoryWrapper>::operator=(class ArrayWrapper<class SampleHistoryWrapper>) --> class ArrayWrapper<class SampleHistoryWrapper> &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("Count", (int (ArrayWrapper<SampleHistoryWrapper>::*)()) & ArrayWrapper<SampleHistoryWrapper>::Count, "C++: ArrayWrapper<SampleHistoryWrapper>::Count() --> int");
		cl.def("Get", (class SampleHistoryWrapper(ArrayWrapper<SampleHistoryWrapper>::*)(int)) & ArrayWrapper<SampleHistoryWrapper>::Get, "C++: ArrayWrapper<SampleHistoryWrapper>::Get(int) --> class SampleHistoryWrapper", "index"_a);
	}
	{ // ArrayWrapper file:bakkesmod/wrappers/arraywrapper.h line:56
		pybind11::class_<ArrayWrapper<StatGraphWrapper>, std::shared_ptr<ArrayWrapper<StatGraphWrapper>>> cl(M, "ArrayWrapper_StatGraphWrapper_t");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](ArrayWrapper<StatGraphWrapper> const& o) { return new ArrayWrapper<StatGraphWrapper>(o); }));
		cl.def("assign", (class ArrayWrapper<class StatGraphWrapper> &(ArrayWrapper<StatGraphWrapper>::*)(class ArrayWrapper<class StatGraphWrapper>)) & ArrayWrapper<StatGraphWrapper>::operator=, "C++: ArrayWrapper<StatGraphWrapper>::operator=(class ArrayWrapper<class StatGraphWrapper>) --> class ArrayWrapper<class StatGraphWrapper> &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("Count", (int (ArrayWrapper<StatGraphWrapper>::*)()) & ArrayWrapper<StatGraphWrapper>::Count, "C++: ArrayWrapper<StatGraphWrapper>::Count() --> int");
		cl.def("Get", (class StatGraphWrapper(ArrayWrapper<StatGraphWrapper>::*)(int)) & ArrayWrapper<StatGraphWrapper>::Get, "C++: ArrayWrapper<StatGraphWrapper>::Get(int) --> class StatGraphWrapper", "index"_a);
	}
	{ // ArrayWrapper file:bakkesmod/wrappers/arraywrapper.h line:57
		pybind11::class_<ArrayWrapper<PlayerControllerWrapper>, std::shared_ptr<ArrayWrapper<PlayerControllerWrapper>>> cl(M, "ArrayWrapper_PlayerControllerWrapper_t");
		pybind11::handle cl_type = cl;

		cl.def(pybind11::init<unsigned long>(), pybind11::arg("mem"));

		cl.def(pybind11::init([](ArrayWrapper<PlayerControllerWrapper> const& o) { return new ArrayWrapper<PlayerControllerWrapper>(o); }));
		cl.def("assign", (class ArrayWrapper<class PlayerControllerWrapper> &(ArrayWrapper<PlayerControllerWrapper>::*)(class ArrayWrapper<class PlayerControllerWrapper>)) & ArrayWrapper<PlayerControllerWrapper>::operator=, "C++: ArrayWrapper<PlayerControllerWrapper>::operator=(class ArrayWrapper<class PlayerControllerWrapper>) --> class ArrayWrapper<class PlayerControllerWrapper> &", pybind11::return_value_policy::automatic, "rhs"_a);
		cl.def("Count", (int (ArrayWrapper<PlayerControllerWrapper>::*)()) & ArrayWrapper<PlayerControllerWrapper>::Count, "C++: ArrayWrapper<PlayerControllerWrapper>::Count() --> int");
		cl.def("Get", (class PlayerControllerWrapper(ArrayWrapper<PlayerControllerWrapper>::*)(int)) & ArrayWrapper<PlayerControllerWrapper>::Get, "C++: ArrayWrapper<PlayerControllerWrapper>::Get(int) --> class PlayerControllerWrapper", "index"_a);
	}
}