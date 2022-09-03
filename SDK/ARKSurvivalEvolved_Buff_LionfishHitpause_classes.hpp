#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_LionfishHitpause_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_LionfishHitpause.Buff_LionfishHitpause_C
// 0x0008 (0x0980 - 0x0978)
class ABuff_LionfishHitpause_C : public ABuff_Base_C
{
public:
	class UClass*                                      camera_shake;                                             // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_LionfishHitpause.Buff_LionfishHitpause_C");
		return ptr;
	}


	void BPDeactivated(class AActor** ForInstigator);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_LionfishHitpause(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
