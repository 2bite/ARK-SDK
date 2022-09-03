#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ExplosionEmitter_Phoenix_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ExplosionEmitter_Phoenix.ExplosionEmitter_Phoenix_C
// 0x0004 (0x097C - 0x0978)
class AExplosionEmitter_Phoenix_C : public ABuff_Base_C
{
public:
	float                                              DeactivateAfterTime_1;                                    // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ExplosionEmitter_Phoenix.ExplosionEmitter_Phoenix_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void DeTime();
	void ExecuteUbergraph_ExplosionEmitter_Phoenix(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
