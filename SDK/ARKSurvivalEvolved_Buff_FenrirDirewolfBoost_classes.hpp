#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_FenrirDirewolfBoost_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_FenrirDirewolfBoost.Buff_FenrirDirewolfBoost_C
// 0x000A (0x0982 - 0x0978)
class ABuff_FenrirDirewolfBoost_C : public APrimalBuff
{
public:
	class UParticleSystemComponent*                    EyeParticles;                                             // 0x0978(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode;             // 0x0980(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x0981(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_FenrirDirewolfBoost.Buff_FenrirDirewolfBoost_C");
		return ptr;
	}


	void BuffTickServer(float* DeltaTime);
	void UpdateParticleColor();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Buff_FenrirDirewolfBoost(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
