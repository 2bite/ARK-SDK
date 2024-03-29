#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Drums_ReadyForWar_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C
// 0x0008 (0x0980 - 0x0978)
class ABuff_Drums_ReadyForWar_C : public ABuff_ImmuneToFear_C
{
public:
	class UParticleSystemComponent*                    DeactiveParticleSystem;                                   // 0x0978(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Drums_ReadyForWar.Buff_Drums_ReadyForWar_C");
		return ptr;
	}


	bool BPCanBeCarried(class APrimalCharacter** ByCarrier);
	bool BPInterceptUseAction();
	void BPDeactivated(class AActor** ForInstigator);
	void UserConstructionScript();
	void AllowDismount();
	void PreventDismount();
	void ExecuteUbergraph_Buff_Drums_ReadyForWar(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
