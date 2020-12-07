#pragma once

// ARKSurvivalEvolved (318.14) SDK

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
// 0x0008 (0x0960 - 0x0958)
class AWyvPoisonGasCloud_C : public ABuff_Base_AoE_C
{
public:
	class UAudioComponent*                             Audio1;                                                   // 0x0958(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

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
