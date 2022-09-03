#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IncubatorGestationEmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IncubatorGestationEmitter.IncubatorGestationEmitter_C
// 0x0010 (0x0528 - 0x0518)
class AIncubatorGestationEmitter_C : public APrimalEmitterSpawnable
{
public:
	class USceneComponent*                             CallFunc_GetAttachParent_ReturnValue;                     // 0x0518(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAudioComponent*                             CallFunc_PlaySoundAttached_ReturnValue;                   // 0x0520(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IncubatorGestationEmitter.IncubatorGestationEmitter_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void UserConstructionScript();
	void PlayBdayMusic();
	void ExecuteUbergraph_IncubatorGestationEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
