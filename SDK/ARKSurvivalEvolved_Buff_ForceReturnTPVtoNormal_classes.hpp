#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ForceReturnTPVtoNormal_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_ForceReturnTPVtoNormal.Buff_ForceReturnTPVtoNormal_C
// 0x0010 (0x0988 - 0x0978)
class ABuff_ForceReturnTPVtoNormal_C : public ABuff_Base_C
{
public:
	class UClass*                                      hoversail_animbp_male;                                    // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      hoversail_animbp_female;                                  // 0x0980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ForceReturnTPVtoNormal.Buff_ForceReturnTPVtoNormal_C");
		return ptr;
	}


	void BuffTickClient(float* DeltaTime);
	bool BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_ForceReturnTPVtoNormal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
