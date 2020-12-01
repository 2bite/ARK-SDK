#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WyvPoisonGasCloud_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WyvPoisonGasCloud.WyvPoisonGasCloud_C
// 0x0008 (0x08B0 - 0x08A8)
class AWyvPoisonGasCloud_C : public ABuff_Base_AoE_C
{
public:
	class UAudioComponent*                             Audio1;                                                   // 0x08A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WyvPoisonGasCloud.WyvPoisonGasCloud_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WyvPoisonGasCloud(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
