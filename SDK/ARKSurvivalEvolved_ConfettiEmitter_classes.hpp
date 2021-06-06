#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ConfettiEmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ConfettiEmitter.ConfettiEmitter_C
// 0x0010 (0x0528 - 0x0518)
class AConfettiEmitter_C : public APrimalEmitterSpawnable
{
public:
	class USceneComponent*                             CallFunc_GetAttachParent_ReturnValue;                     // 0x0518(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAudioComponent*                             CallFunc_PlaySoundAttached_ReturnValue;                   // 0x0520(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ConfettiEmitter.ConfettiEmitter_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void UserConstructionScript();
	void PlayBdayMusic();
	void ExecuteUbergraph_ConfettiEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
